unsigned __int64 __fastcall sub_1897840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r15
  int v11; // eax
  int v12; // edi
  unsigned int v13; // eax
  _QWORD *v14; // rsi
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rdx
  _QWORD *v17; // rdx
  unsigned __int64 result; // rax
  int v19; // edx
  __m128 v20[4]; // [rsp+0h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)a1 + 552LL);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 256LL))(v8);
  v9 = *(unsigned int *)(a1 + 80);
  v10 = *(_QWORD *)(a1 + 64);
  if ( !(_DWORD)v9 )
    goto LABEL_17;
  v11 = sub_FDE780(a2);
  v12 = v9 - 1;
  v9 = *(unsigned int *)(a1 + 80);
  v13 = v12 & v11;
  v14 = (_QWORD *)(v10 + 40LL * v13);
  if ( a2 != *v14 )
  {
    if ( *v14 != -1 )
    {
      v19 = 1;
      do
      {
        v13 = v12 & (v19 + v13);
        v14 = (_QWORD *)(v10 + 40LL * v13);
        if ( a2 == *v14 )
          goto LABEL_5;
        ++v19;
      }
      while ( *v14 != -1 );
    }
    v10 = *(_QWORD *)(a1 + 64);
LABEL_17:
    sub_171EC50(v20, (_QWORD *)(v10 + 40 * v9), (_QWORD *)(v10 + 40 * v9), a1 + 64, 1);
    v15 = v20[0].m128_u64[0];
    goto LABEL_6;
  }
LABEL_5:
  sub_171EC50(v20, v14, (_QWORD *)(*(_QWORD *)(a1 + 64) + 40 * v9), a1 + 64, 1);
  v15 = v20[0].m128_u64[0];
LABEL_6:
  v16 = (_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(unsigned int *)(a1 + 80));
  sub_171EC50(v20, v16, v16, a1 + 64, 1);
  if ( v15 == v20[0].m128_u64[0] )
    return 0;
  v17 = (_QWORD *)(v15 + 24);
  if ( a5 )
    v17 = (_QWORD *)(v15 + 8);
  if ( !v17 )
    return 0;
  while ( 1 )
  {
    result = *v17 & 0xFFFFFFFFFFFFFFF8LL;
    if ( result )
    {
      if ( (*(_BYTE *)(result + 8) & 6) == 0 )
        break;
    }
    v17 = (_QWORD *)(v17[1] & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v17 )
      return 0;
  }
  return result;
}
