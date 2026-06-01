__int64 __fastcall ClpCholeskyCfactor(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  int i; // r13d
  int v11; // ebp
  signed int v12; // ebx
  __int64 v13; // rbx

  for ( i = a3; i > 16; a4 -= v11 )
  {
    v11 = ((i + 1) >> 1) + 15;
    v12 = v11 & 0xFFFFFFF0;
    v11 >>= 4;
    i -= v12;
    ClpCholeskyCfactor(a1, a2, v12, a4, a5, a6, a7);
    ClpCholeskyCtriRec();
    v13 = 8LL * v12;
    a6 += v13;
    a2 += 8LL * ((v11 * (a4 - v11) + ((v11 * (v11 + 1)) >> 1)) << 8);
    ClpCholeskyCrecTri();
    a5 += v13;
  }
  return ClpCholeskyCfactorLeaf(a1, a2, (unsigned int)i, a5, a6, a7);
}

