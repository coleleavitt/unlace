__int64 __fastcall sub_177D470(__int64 *a1, __int64 *a2, double a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int16 *v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-30h]

  v4 = *a1;
  sub_18C74E0(*a1, 4, 0, 4);
  v5 = sub_175B800(a1, (unsigned __int16 *)a2[3]);
  v6 = sub_1C367D0(*a1, *((unsigned int *)a2 + 1), v5);
  if ( v6 == 1 )
    goto LABEL_5;
  v7 = v6;
  v8 = *a2;
  v9 = nullptr;
  if ( (*a2 & 0x200) != 0 )
    v9 = (unsigned __int16 *)a2[((v8 & 0x200) != 0) + 3];
  v10 = sub_175B800(a1, v9);
  v19 = sub_1C367D0(*a1, *((unsigned int *)a2 + 1), v10);
  if ( v19 == 1 )
  {
LABEL_5:
    v11 = 1;
    sub_190D5E0(v4);
    return v11;
  }
  sub_190D5E0(v4);
  v13 = 0;
  if ( (*a2 & 0x200) != 0 )
    v13 = LODWORD(a2[((*a2 & 0x200) != 0) + 5]);
  v17 = sub_1C39C90(
          *a1,
          *((unsigned int *)a2 + 1),
          v7 & 0xFFFFFFFFFFFFFFFELL,
          v13,
          v19 & 0xFFFFFFFFFFFFFFFELL,
          *((unsigned int *)a2 + 2));
  if ( v17 != 1 )
  {
    v18 = sub_177B9C0(a1, (unsigned __int16 *)a2[(unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 4], 0, a3, v14, v15, v16);
    if ( v18 != 1 )
    {
      v11 = v17 & 0xFFFFFFFFFFFFFFFELL;
      sub_1C369E0(*a1, v17 & 0xFFFFFFFFFFFFFFFELL, v18 & 0xFFFFFFFFFFFFFFFELL);
      return v11;
    }
  }
  return 1;
}
