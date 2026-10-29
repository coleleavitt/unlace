__int64 __fastcall ClpPrimalColumnSteepest::unrollWeights(ClpPrimalColumnSteepest *this)
{
  __int64 v1; // r9
  int v2; // edx
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rdx

  if ( (unsigned int)(*((_DWORD *)this + 19) - 4) > 1 || (result = *((unsigned int *)this + 22), (_DWORD)result) )
  {
    v1 = *((_QWORD *)this + 6);
    v2 = *(_DWORD *)(v1 + 16);
    v3 = *(_QWORD *)(v1 + 8);
    result = *(_QWORD *)v1;
    if ( v2 > 0 )
    {
      v5 = *((_QWORD *)this + 4);
      v6 = result + 4LL * (unsigned int)(v2 - 1) + 4;
      do
      {
        v7 = *(int *)result;
        result += 4;
        v8 = (_QWORD *)(v3 + 8 * v7);
        *(_QWORD *)(v5 + 8 * v7) = *v8;
        *v8 = 0;
      }
      while ( v6 != result );
    }
    *(_DWORD *)(v1 + 16) = 0;
    *(_BYTE *)(v1 + 28) = 0;
  }
  return result;
}

