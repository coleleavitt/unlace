__int64 __fastcall sub_3E8040(__int64 *a1, __int64 a2, __m128 si128)
{
  char *v4; // rsi
  __int64 v5; // r8
  unsigned __int16 v6; // cx
  char *v7; // rax
  int v8; // edi
  char *v9; // rdx
  int custom_refinfo; // eax
  char v11; // bl
  __int64 v12; // rax
  char v13; // bl
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v17; // rax

  if ( !(unsigned __int8)sub_3E7FE0() )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCED4u, a2, *(double *)si128.m128_u64);
LABEL_15:
    BUG();
  }
  sub_3E44F0((__m128i *)&byte_4C1B40 - 28, (__int64 *)&byte_4C1B40, 8);
  sub_3E4360((char **)&byte_4C1B40 - 24);
  v4 = &byte_4C1B40 - 192;
  do
  {
    v5 = *(_QWORD *)v4;
    v6 = *((_WORD *)v4 + 4);
    v7 = v4 - 16;
    v8 = *((_DWORD *)v4 + 3);
    if ( v6 >= *((_WORD *)v4 - 4) )
    {
      v9 = v4;
    }
    else
    {
      do
      {
        si128 = (__m128)_mm_load_si128((const __m128i *)v7);
        v9 = v7;
        v7 -= 16;
        *((__m128 *)v7 + 2) = si128;
      }
      while ( v6 < *((_WORD *)v7 + 4) );
    }
    v4 += 16;
    *(_QWORD *)v9 = v5;
    *((_WORD *)v9 + 4) = v6;
    *((_DWORD *)v9 + 3) = v8;
  }
  while ( v4 != &byte_4C1B40 );
  netnode_check(a1[12] + 104, "$ ignore micro", 0, 1);
  custom_refinfo = find_custom_refinfo("HIGHA16");
  if ( custom_refinfo == -1 )
  {
    if ( !under_debugger )
      sub_37CFE0(0xCED5u, (__int64)"$ ignore micro", *(double *)si128.m128_u64);
    goto LABEL_15;
  }
  v11 = custom_refinfo;
  v12 = a1[39];
  v13 = v11 | 0x40;
  v14 = a1[38];
  if ( a1[40] < (unsigned __int64)(v12 + 1) )
  {
    v17 = qvector_reserve(a1 + 38, v14, v12 + 1, 1);
    a1[38] = v17;
    v14 = v17;
    v12 = a1[39];
  }
  *(_BYTE *)(v14 + v12) = v13;
  v15 = a1[12];
  ++a1[39];
  sub_1CDD50(v15);
  sub_14CB10((__int64)a1, (__int64)(a1 + 75));
  sub_1CDD40(a1[12], 1);
  return 1;
}
