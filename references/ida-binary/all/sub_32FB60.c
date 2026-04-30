__int64 __fastcall sub_32FB60(
        _QWORD *a1,
        char a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  char v11; // r12
  unsigned __int64 tinfo_size; // rbp
  __int64 v13; // rdi
  __int64 possible_item_varsize; // r12
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  __int64 tinfo_tid; // rax
  __int64 v23; // rdi
  double v24; // xmm4_8
  double v25; // xmm5_8
  __int64 v27; // rax
  char v28; // [rsp+0h] [rbp-48h]
  unsigned __int64 v29; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v30[7]; // [rsp+10h] [rbp-38h] BYREF

  v30[1] = __readfsqword(0x28u);
  v11 = sub_1F09E0(0, (__int64 *)&v29, v30);
  tinfo_size = get_tinfo_size(0, *a1, 0);
  if ( tinfo_size - 1 > 0xFFFFFFFFFFFFFFFDLL )
  {
    sub_17CE30(1103);
    return 1;
  }
  if ( v11 )
  {
    v13 = v29;
    possible_item_varsize = v30[0] - v29;
    if ( v30[0] - v29 < tinfo_size )
      return 0;
  }
  else
  {
    v13 = xmmword_8CC810;
    v29 = xmmword_8CC810;
    if ( !a2 )
    {
      possible_item_varsize = get_possible_item_varsize(xmmword_8CC810, a1);
      if ( possible_item_varsize != -1 )
        goto LABEL_5;
LABEL_23:
      possible_item_varsize = tinfo_size;
      goto LABEL_5;
    }
    possible_item_varsize = -1;
  }
  if ( (unsigned int)sub_32F3B0(
                       v13,
                       tinfo_size,
                       (__int64)"AUTOHIDE DATABASE\nDirectly convert to structure?",
                       1610613760,
                       nullptr,
                       nullptr) != 1 )
    return 0;
  v27 = get_possible_item_varsize(v29, a1);
  if ( v27 == -1 )
    goto LABEL_23;
  if ( possible_item_varsize == -1 )
    possible_item_varsize = v27;
LABEL_5:
  if ( (unsigned __int8)is_loaded(v29)
    || v29 < v29 + possible_item_varsize && find_byte(v29 + 1, possible_item_varsize - 1, 0, 4) != -1 )
  {
    v15 = 2;
    if ( (get_tinfo_property(*a1, 2) & 0x3F) == 0x1D || (v15 = 296, get_tinfo_property(*a1, 296)) )
      sub_169630(
        (int)"ICON WARNING\n"
             "AUTOHIDE REGISTRY\n"
             "Initialized union instances cannot be displayed in assembly.\n"
             "IDA will use the first union field to display the union value.",
        v15,
        v16,
        v17,
        v18,
        v19,
        a3,
        a4,
        a5,
        a6,
        v20,
        v21,
        a9,
        a10,
        v28);
  }
  tinfo_tid = get_tinfo_tid(a1, 0);
  v23 = v29;
  if ( (unsigned __int8)create_data(v29, 1610612736, possible_item_varsize, tinfo_tid) )
  {
    sub_1FDB10(*(double *)a3.m128_u64, a4, a5, a6, v24, v25, a9, a10, v23, (const char *)0x60000000);
    return 1;
  }
  return 0;
}
