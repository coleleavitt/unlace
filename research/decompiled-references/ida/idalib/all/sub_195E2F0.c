__int64 __fastcall sub_195E2F0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r13
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 *v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // r15
  _QWORD *v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  int v19; // esi
  int v20; // r9d
  __int64 v21; // rdi
  __m128 v22[4]; // [rsp+0h] [rbp-48h] BYREF

  v4 = (__int64)(a1 + 1);
  v7 = *((unsigned int *)a1 + 6);
  v8 = *(_QWORD *)(a2 + 16);
  v9 = a1[1];
  if ( (_DWORD)v7 )
  {
    v10 = (v7 - 1) & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
    v11 = (__int64 *)(v9 + 16LL * v10);
    v12 = *v11;
    if ( v8 == *v11 )
    {
LABEL_3:
      sub_AEAAD0(v22, v11, (_QWORD *)(16 * v7 + v9), v4, 1);
      v13 = v22[0].m128_u64[0];
      goto LABEL_4;
    }
    v19 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v20 = v19 + 1;
        v10 = (v7 - 1) & (v19 + v10);
        v11 = (__int64 *)(v9 + 16LL * v10);
        v21 = *v11;
        if ( v8 == *v11 )
          goto LABEL_3;
        v19 = v20;
      }
      while ( v21 != -4096 );
    }
  }
  sub_AEAAD0(v22, (_QWORD *)(v9 + 16LL * (unsigned int)v7), (_QWORD *)(v9 + 16LL * (unsigned int)v7), v4, 1);
  v13 = v22[0].m128_u64[0];
LABEL_4:
  v14 = (_QWORD *)(a1[1] + 16LL * *((unsigned int *)a1 + 6));
  sub_AEAAD0(v22, v14, v14, v4, 1);
  if ( v22[0].m128_u64[0] != v13 )
    v8 = *(_QWORD *)(v13 + 8);
  if ( v8 )
  {
    if ( (*(_QWORD *)a2 & 0x80000LL) == 0 )
    {
      v17 = 0;
      return sub_C96990(*(_QWORD **)(*a1 + 248), *(_DWORD *)(a2 + 4), v8, v17, *(_QWORD *)(*a1 + 544), v15);
    }
    v16 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 32), a3, a4);
    if ( v16 != 1 )
    {
      v17 = v16 & 0xFFFFFFFFFFFFFFFELL;
      return sub_C96990(*(_QWORD **)(*a1 + 248), *(_DWORD *)(a2 + 4), v8, v17, *(_QWORD *)(*a1 + 544), v15);
    }
  }
  return 1;
}
