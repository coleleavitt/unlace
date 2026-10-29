__int64 __fastcall sub_6BF390(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  int v3; // edx
  unsigned int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx

  v1 = *(_QWORD *)(a1 + 17288);
  v2 = *(_QWORD *)(v1 + 200) + 280LL;
  v3 = *(_DWORD *)(v1 + 248);
  if ( (unsigned int)(v3 - 37) > 1 )
    return (unsigned __int8)((unsigned int)(v3 - 21) <= 3 || (unsigned int)(v3 - 55) <= 1) << 7;
  v4 = sub_25E2710("avx512f", 7);
  v5 = sub_25E29F0(v2, "avx512f", 7, v4);
  v6 = *(_QWORD *)v2;
  if ( v5 == -1 )
    v7 = (__int64 *)(v6 + 8LL * *(unsigned int *)(v2 + 8));
  else
    v7 = (__int64 *)(v6 + 8LL * v5);
  if ( v7 == (__int64 *)(v6 + 8LL * *(unsigned int *)(v2 + 8)) || (v8 = *v7, result = 512, !*(_BYTE *)(v8 + 8)) )
  {
    v10 = sub_25E2710("avx", 3);
    v11 = sub_25E29F0(v2, "avx", 3, v10);
    v12 = *(_QWORD *)v2;
    if ( v11 == -1 )
      v13 = v12 + 8LL * *(unsigned int *)(v2 + 8);
    else
      v13 = v12 + 8LL * v11;
    result = 128;
    if ( v13 != v12 + 8LL * *(unsigned int *)(v2 + 8) )
    {
      result = 256;
      if ( !*(_BYTE *)(*(_QWORD *)v13 + 8LL) )
        return 128;
    }
  }
  return result;
}

