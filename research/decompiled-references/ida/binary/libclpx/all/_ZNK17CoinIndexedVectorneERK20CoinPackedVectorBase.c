__int64 __fastcall CoinIndexedVector::operator!=(__int64 a1, __int64 a2)
{
  int v2; // r12d
  int *v3; // rbp
  __int64 v4; // rax
  int v5; // edx
  double *v6; // rsi
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  double v13; // xmm0_8

  v2 = (**(__int64 (__fastcall ***)(__int64))a2)(a2);
  v3 = (int *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = (double *)v4;
  result = 1;
  if ( v5 == v2 )
  {
    if ( v5 <= 0 )
      return 0;
    v8 = *(_QWORD *)(a1 + 8);
    if ( *v6 == *(double *)(v8 + 8LL * *v3) )
    {
      v9 = (unsigned int)(v5 - 1);
      v10 = 1;
      v11 = v9 + 1;
      while ( v11 != v10 )
      {
        v12 = v3[v10];
        v13 = v6[v10++];
        if ( v13 != *(double *)(v8 + 8 * v12) )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  return result;
}

