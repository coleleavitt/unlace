__int64 __fastcall ClpSimplexDual::nextSuperBasic(ClpSimplexDual *this)
{
  __int64 result; // rax
  int v2; // r8d
  int v3; // edx
  _BYTE *v4; // rcx
  __int64 v5; // rsi

  result = *((unsigned int *)this + 337);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  v2 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  v3 = result + 1;
  if ( (int)result + 1 >= v2 )
  {
    if ( v3 == v2 )
    {
LABEL_7:
      *((_DWORD *)this + 337) = -1;
      return result;
    }
  }
  else
  {
    v4 = (_BYTE *)(v3 + *((_QWORD *)this + 33));
    v5 = 8LL * v3;
    while ( (*v4 & 7) != 0 || fabs(*(double *)(*((_QWORD *)this + 147) + v5)) <= *((double *)this + 109) * 100.0 )
    {
      ++v3;
      ++v4;
      v5 += 8;
      if ( v3 == v2 )
        goto LABEL_7;
    }
  }
  *((_DWORD *)this + 337) = v3;
  return result;
}

