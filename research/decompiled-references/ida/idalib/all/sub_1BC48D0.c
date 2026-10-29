__int64 __fastcall sub_1BC48D0(__int64 *a1, __int64 *a2, __m128 a3, __m128 a4)
{
  __int64 v5; // r12
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-30h]

  v5 = *a1;
  sub_18C74E0(*a1, 4, 0, 4);
  v9 = sub_1B73BE0(a1, a2[3], v6, a3, a4, v7, v8);
  v10 = sub_1C367D0(*a1, *((unsigned int *)a2 + 1), v9);
  if ( v10 == 1 )
    goto LABEL_5;
  v14 = v10;
  v15 = *a2;
  v16 = 0;
  if ( (*a2 & 0x200) != 0 )
    v16 = a2[((v15 & 0x200) != 0) + 3];
  v17 = sub_1B73BE0(a1, v16, v11, a3, a4, v12, v13);
  v26 = sub_1C367D0(*a1, *((unsigned int *)a2 + 1), v17);
  if ( v26 == 1 )
  {
LABEL_5:
    v18 = 1;
    sub_190D5E0(v5, a3);
    return v18;
  }
  sub_190D5E0(v5, a3);
  v20 = 0;
  if ( (*a2 & 0x200) != 0 )
    v20 = LODWORD(a2[((*a2 & 0x200) != 0) + 5]);
  v24 = sub_1C39C90(
          *a1,
          *((unsigned int *)a2 + 1),
          v14 & 0xFFFFFFFFFFFFFFFELL,
          v20,
          v26 & 0xFFFFFFFFFFFFFFFELL,
          *((unsigned int *)a2 + 2));
  if ( v24 != 1 )
  {
    v25 = sub_1B71AD0(
            a1,
            (const __m128i *)a2[(unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 4],
            0,
            a3,
            a4,
            v21,
            v22,
            v23);
    if ( v25 != 1 )
    {
      v18 = v24 & 0xFFFFFFFFFFFFFFFELL;
      sub_1C369E0(*a1, v24 & 0xFFFFFFFFFFFFFFFELL, v25 & 0xFFFFFFFFFFFFFFFELL);
      return v18;
    }
  }
  return 1;
}
