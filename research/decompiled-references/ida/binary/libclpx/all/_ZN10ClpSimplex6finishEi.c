__int64 __fastcall ClpSimplex::finish(ClpSimplex *this, char a2)
{
  int v3; // esi
  int v4; // eax
  __int64 v5; // xmm0_8
  ClpFactorization *v6; // rdi
  __int64 v7; // rax

  if ( !*((_QWORD *)this + 126) )
    goto LABEL_5;
  v3 = a2 & 1;
  v4 = 0x3FFFFFF;
  if ( v3 )
  {
    v3 = 0;
    goto LABEL_6;
  }
  if ( *((_DWORD *)this + 80) != 10 )
  {
LABEL_5:
    v4 = *((_DWORD *)this + 79);
    v3 = 1;
    LOWORD(v4) = 0;
  }
LABEL_6:
  v5 = *((_QWORD *)this + 9);
  *((_DWORD *)this + 79) = v4;
  ClpSimplex::deleteRim(this, v3);
  if ( *(int *)(*((_QWORD *)this + 24) + 52LL) > 14 )
    *((_QWORD *)this + 9) = v5;
  if ( *((_DWORD *)this + 80) == -1 )
    *((_DWORD *)this + 80) = 4;
  v6 = *((ClpFactorization **)this + 158);
  v7 = *((_QWORD *)v6 + 1);
  if ( v7 )
  {
    *(_QWORD *)(v7 + 24) = 0x3FF0000000000000LL;
    v6 = *((ClpFactorization **)this + 158);
  }
  return ClpFactorization::cleanUp(v6);
}

