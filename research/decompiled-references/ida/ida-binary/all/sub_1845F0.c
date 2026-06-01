__int64 __fastcall ida_action_t__::vfunc_2(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  char *v16; // rsi
  char v17; // [rsp+0h] [rbp-8h]

  if ( qword_8CCE70 && *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
    QT::QWidget::close(qword_8CCE70);
  if ( !*(_QWORD *)(a1 + 192) )
    return 0;
  if ( (*(_BYTE *)(get_ph() + 9) & 2) == 0 )
  {
    if ( (get_merge_state() & 3) == 0 && !(unsigned __int8)is_database_flag(1) || (*(_BYTE *)(a1 + 114) & 2) == 0 )
      return ui_action_t__::vfunc_2(a1);
    v16 = "merge";
    if ( (unsigned __int8)is_database_flag(1) )
      v16 = "view";
    sub_169630(
      (int)"Please do not change anything in %s mode",
      (__int64)v16,
      v10,
      v11,
      v12,
      v13,
      a2,
      a3,
      a4,
      a5,
      v14,
      v15,
      a8,
      a9,
      v17);
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 114) & 2) == 0 )
    return ui_action_t__::vfunc_2(a1);
  sub_17CE30(1204);
  return 0;
}
