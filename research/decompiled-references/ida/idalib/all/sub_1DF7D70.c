__int64 __fastcall sub_1DF7D70(
        __int64 *a1,
        __int64 *a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  __int64 v11; // r12
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 *v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r13
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  unsigned __int16 *v25; // rax
  unsigned __int64 v26; // rbx
  unsigned int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // r12
  double v33; // xmm4_8
  double v34; // xmm5_8
  __int64 v35; // rax
  __int64 v36; // [rsp+8h] [rbp-30h]

  v11 = *a1;
  sub_18C74E0(*a1, 4, 0, 4);
  v16 = sub_1DC71F0(a1, a2[3], v12, v13, v14, v15, a3, a4);
  v17 = sub_1C367D0((__m128 *)*a1, a3, a4, *((unsigned int *)a2 + 1), (__int64)v16);
  if ( v17 == 1 )
    goto LABEL_5;
  v22 = v17;
  v23 = *a2;
  v24 = 0;
  if ( (*a2 & 0x200) != 0 )
    v24 = a2[((v23 & 0x200) != 0) + 3];
  v25 = sub_1DC71F0(a1, v24, v18, v19, v20, v21, a3, a4);
  v36 = sub_1C367D0((__m128 *)*a1, a3, a4, *((unsigned int *)a2 + 1), (__int64)v25);
  if ( v36 == 1 )
  {
LABEL_5:
    v26 = 1;
    sub_190D5E0(v11, a3);
    return v26;
  }
  sub_190D5E0(v11, a3);
  v28 = 0;
  if ( (*a2 & 0x200) != 0 )
    v28 = a2[((*a2 & 0x200) != 0) + 5];
  v32 = sub_1C39C90(
          *a1,
          *((_DWORD *)a2 + 1),
          v22 & 0xFFFFFFFFFFFFFFFELL,
          v28,
          v36 & 0xFFFFFFFFFFFFFFFELL,
          *((unsigned int *)a2 + 2));
  if ( v32 != 1 )
  {
    v35 = sub_1DF6720(
            a1,
            (_WORD *)a2[(unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 4],
            nullptr,
            a3,
            a4,
            a5,
            a6,
            v33,
            v34,
            a9,
            a10,
            v29,
            v30,
            v31);
    if ( v35 != 1 )
    {
      v26 = v32 & 0xFFFFFFFFFFFFFFFELL;
      sub_1C369E0(*a1, (_WORD *)(v32 & 0xFFFFFFFFFFFFFFFELL), v35 & 0xFFFFFFFFFFFFFFFELL);
      return v26;
    }
  }
  return 1;
}
