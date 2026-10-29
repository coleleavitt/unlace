__int64 __fastcall sub_A62EB0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rbx
  unsigned int v5; // eax
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // r12
  __int64 result; // rax
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // r12
  _QWORD v13[4]; // [rsp+0h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 17448);
  v2 = *(_QWORD *)(v1 + 208) + 280LL;
  v3 = *(_DWORD *)(v1 + 248);
  if ( (unsigned int)(v3 - 37) > 1 )
  {
    if ( (unsigned int)(v3 - 21) <= 3 || (unsigned int)(v3 - 55) <= 1 )
      return 128;
    else
      return 0;
  }
  else
  {
    v4 = *(_QWORD *)(v1 + 208) + 280LL;
    v5 = sub_2244B30("avx512f", 7);
    v6 = sub_2244E60(v2, "avx512f", 7, v5);
    if ( v6 == -1 )
      v7 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
    else
      v7 = *(_QWORD *)v2 + 8LL * v6;
    sub_EC0F90(v13, v7, 1);
    v8 = v13[0];
    sub_EC0F90(v13, *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8), 1);
    if ( v13[0] == v8 || (result = 512, !*(_BYTE *)(*(_QWORD *)v8 + 8LL)) )
    {
      v10 = sub_2244B30("avx", 3);
      v11 = sub_2244E60(v4, "avx", 3, v10);
      if ( v11 == -1 )
        sub_EC0F90(v13, *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8), 1);
      else
        sub_EC0F90(v13, *(_QWORD *)v4 + 8LL * v11, 1);
      v12 = v13[0];
      sub_EC0F90(v13, *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8), 1);
      if ( v13[0] == v12 )
        return 128;
      result = 256;
      if ( !*(_BYTE *)(*(_QWORD *)v12 + 8LL) )
        return 128;
    }
  }
  return result;
}
