__int64 __fastcall sub_1963380(__int64 *a1, __int64 *a2, __m128 a3, __m128 a4)
{
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int16 *v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-30h]

  v5 = *a1;
  sub_18C79E0(*a1, 4, 4);
  v6 = sub_1944E10(a1, (unsigned __int16 *)a2[3], a3, a4);
  v7 = sub_1C367D0(*a1, *((unsigned int *)a2 + 1), v6);
  if ( v7 == 1 )
    goto LABEL_5;
  v8 = v7;
  v9 = *a2;
  v10 = nullptr;
  if ( (*a2 & 0x200) != 0 )
    v10 = (unsigned __int16 *)a2[((v9 & 0x200) != 0) + 3];
  v11 = sub_1944E10(a1, v10, a3, a4);
  v20 = sub_1C367D0(*a1, *((unsigned int *)a2 + 1), v11);
  if ( v20 == 1 )
  {
LABEL_5:
    v12 = 1;
    sub_190D5E0(v5, a3);
    return v12;
  }
  sub_190D5E0(v5, a3);
  v14 = 0;
  if ( (*a2 & 0x200) != 0 )
    v14 = LODWORD(a2[((*a2 & 0x200) != 0) + 5]);
  v18 = sub_1C39C90(
          *a1,
          *((unsigned int *)a2 + 1),
          v8 & 0xFFFFFFFFFFFFFFFELL,
          v14,
          v20 & 0xFFFFFFFFFFFFFFFELL,
          *((unsigned int *)a2 + 2));
  if ( v18 != 1 )
  {
    v19 = sub_1961D20(
            a1,
            (unsigned __int16 *)a2[(unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 4],
            0,
            a3,
            a4,
            v15,
            v16,
            v17);
    if ( v19 != 1 )
    {
      v12 = v18 & 0xFFFFFFFFFFFFFFFELL;
      sub_1C369E0(*a1, v18 & 0xFFFFFFFFFFFFFFFELL, v19 & 0xFFFFFFFFFFFFFFFELL);
      return v12;
    }
  }
  return 1;
}
