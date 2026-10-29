__int64 __fastcall sub_1DAE3E0(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128i a9,
        __m128i a10,
        double a11,
        double a12,
        __m128 a13,
        __m128i a14)
{
  __int64 v16; // rax
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rbp
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 *v23; // rsi
  __int64 v24; // rdi
  unsigned __int64 v25; // rax
  _QWORD *v26; // rdx
  int v27; // esi
  int v28; // edi
  __int64 v29; // r9
  unsigned __int64 v30; // [rsp+8h] [rbp-50h]
  __m128 v31[4]; // [rsp+10h] [rbp-48h] BYREF

  v16 = sub_1DAD2E0((__int64 *)a1, *(unsigned __int16 **)(a2 + 16), a3, a7, a8, a9, a10, a11, a12, a13, a14, a4, a5, a6);
  if ( v16 == 1 )
    return 1;
  v18 = *(unsigned int *)(a1 + 24);
  v19 = v16;
  v20 = *(_QWORD *)(a2 + 8);
  v21 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v18 )
  {
    v22 = (v18 - 1) & (((unsigned int)v20 >> 9) ^ ((unsigned int)v20 >> 4));
    v23 = (__int64 *)(v21 + 16LL * v22);
    v24 = *v23;
    if ( v20 == *v23 )
    {
LABEL_5:
      sub_AEAAD0(v31, v23, (_QWORD *)(16 * v18 + v21), a1 + 8, 1);
      v25 = v31[0].m128_u64[0];
      goto LABEL_6;
    }
    v27 = 1;
    if ( v24 != -4096 )
    {
      do
      {
        v28 = v27 + 1;
        v22 = (v18 - 1) & (v27 + v22);
        v23 = (__int64 *)(v21 + 16LL * v22);
        v29 = *v23;
        if ( v20 == *v23 )
          goto LABEL_5;
        v27 = v28;
      }
      while ( v29 != -4096 );
    }
  }
  sub_AEAAD0(v31, (_QWORD *)(v21 + 16LL * (unsigned int)v18), (_QWORD *)(v21 + 16LL * (unsigned int)v18), a1 + 8, 1);
  v25 = v31[0].m128_u64[0];
LABEL_6:
  v30 = v25;
  v26 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
  sub_AEAAD0(v31, v26, v26, a1 + 8, 1);
  if ( v31[0].m128_u64[0] != v30 )
    v20 = *(_QWORD *)(v30 + 8);
  if ( !v20 )
    return 1;
  if ( *(_QWORD *)(a2 + 8) == v20 )
    *(_QWORD *)(v20 + 48) = 0;
  return sub_1C3E300(*(__int64 **)a1, *(_DWORD *)(a2 + 4), v20, *(double *)a7.m128_u64, 0, v19 & 0xFFFFFFFFFFFFFFFELL);
}
