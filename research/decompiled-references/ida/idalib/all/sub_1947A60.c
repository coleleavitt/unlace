unsigned __int64 __fastcall sub_1947A60(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r14
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 *v12; // rsi
  __int64 v13; // r8
  unsigned __int64 v14; // r13
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbx
  _DWORD *v21; // rdx
  int v22; // esi
  int v23; // r8d
  __int64 v24; // r10
  __m128 v27[4]; // [rsp+10h] [rbp-48h] BYREF

  v6 = a1 + 8;
  v8 = *(unsigned int *)(a1 + 24);
  v9 = *(_QWORD *)(a3 + 32);
  v10 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v8 )
  {
    v11 = (v8 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
    v12 = (__int64 *)(v10 + 16LL * v11);
    v13 = *v12;
    if ( v9 == *v12 )
    {
LABEL_3:
      sub_AEAAD0(v27, v12, (_QWORD *)(16 * v8 + v10), v6, 1);
      v14 = v27[0].m128_u64[0];
      goto LABEL_4;
    }
    v22 = 1;
    if ( v13 != -4096 )
    {
      do
      {
        v23 = v22 + 1;
        v11 = (v8 - 1) & (v22 + v11);
        v12 = (__int64 *)(v10 + 16LL * v11);
        v24 = *v12;
        if ( v9 == *v12 )
          goto LABEL_3;
        v22 = v23;
      }
      while ( v24 != -4096 );
    }
  }
  sub_AEAAD0(v27, (_QWORD *)(v10 + 16LL * (unsigned int)v8), (_QWORD *)(v10 + 16LL * (unsigned int)v8), v6, 1);
  v14 = v27[0].m128_u64[0];
LABEL_4:
  v15 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
  sub_AEAAD0(v27, v15, v15, v6, 1);
  if ( v27[0].m128_u64[0] != v14 )
    v9 = *(_QWORD *)(v14 + 8);
  if ( !v9 )
    return 0;
  v16 = sub_F5DBF0(a3);
  v17 = (__int64)sub_1946CC0((__int64 *)a1, v16, a5, a6);
  if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v19 = sub_A77600(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v9, v17);
  v20 = v19;
  if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  sub_1EA6140(a2, v19, 4, 4);
  *v21 = *a4;
  return v20;
}
