__int64 __fastcall sub_1E32480(
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
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r13
  __int64 v21; // rax
  unsigned __int16 *v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  unsigned int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // r12
  double v31; // xmm4_8
  double v32; // xmm5_8
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-30h]

  v11 = *a1;
  sub_18C74E0(*a1, 4, 0, 4);
  v15 = sub_1E11560(a1, (unsigned __int16 *)a2[3], a3, a4, v12, v13, v14);
  v16 = sub_1C367D0((__m128 *)*a1, a3, a4, *((unsigned int *)a2 + 1), v15);
  if ( v16 == 1 )
    goto LABEL_5;
  v20 = v16;
  v21 = *a2;
  v22 = nullptr;
  if ( (*a2 & 0x200) != 0 )
    v22 = (unsigned __int16 *)a2[((v21 & 0x200) != 0) + 3];
  v23 = sub_1E11560(a1, v22, a3, a4, v17, v18, v19);
  v34 = sub_1C367D0((__m128 *)*a1, a3, a4, *((unsigned int *)a2 + 1), v23);
  if ( v34 == 1 )
  {
LABEL_5:
    v24 = 1;
    sub_190D5E0(v11, a3);
    return v24;
  }
  sub_190D5E0(v11, a3);
  v26 = 0;
  if ( (*a2 & 0x200) != 0 )
    v26 = a2[((*a2 & 0x200) != 0) + 5];
  v30 = sub_1C39C90(
          *a1,
          *((_DWORD *)a2 + 1),
          v20 & 0xFFFFFFFFFFFFFFFELL,
          v26,
          v34 & 0xFFFFFFFFFFFFFFFELL,
          *((unsigned int *)a2 + 2));
  if ( v30 != 1 )
  {
    v33 = sub_1E31000(
            a1,
            (unsigned __int16 *)a2[(unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 4],
            nullptr,
            a3,
            a4,
            a5,
            a6,
            v31,
            v32,
            a9,
            a10,
            v27,
            v28,
            v29);
    if ( v33 != 1 )
    {
      v24 = v30 & 0xFFFFFFFFFFFFFFFELL;
      sub_1C369E0(*a1, (_WORD *)(v30 & 0xFFFFFFFFFFFFFFFELL), v33 & 0xFFFFFFFFFFFFFFFELL);
      return v24;
    }
  }
  return 1;
}
