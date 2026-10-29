__int64 __fastcall sub_310FB0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  QT::QAction *v10; // rdi
  unsigned int v11; // ebx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  bool v18; // zf
  int v19; // eax
  char isEnabled; // al
  double v21; // xmm4_8
  double v22; // xmm5_8
  int v23; // eax
  char v24; // di
  char v25; // [rsp+2h] [rbp-26h] BYREF
  char v26; // [rsp+3h] [rbp-25h] BYREF
  int v27; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v28; // [rsp+8h] [rbp-20h]

  v28 = __readfsqword(0x28u);
  v10 = qword_8C9928;
  if ( !(unsigned __int8)QT::QAction::isEnabled(qword_8C9928)
    || !(unsigned __int8)netnode_inited(*(double *)a1.m128_u64) )
  {
    return 1;
  }
  if ( (get_merge_state(v10) & 3) != 0 )
    j__switch_dbctx(0);
  v11 = is_database_flag(1);
  if ( !(_BYTE)v11 )
  {
    v13 = getinf(3);
    v25 = 0;
    v17 = (v13 >> 9) & 1;
    v18 = (v13 & 0x400) == 0;
    v19 = 2;
    if ( v18 )
      v19 = v17;
    v27 = v19;
    v26 = is_miniidb(3, a10, v17, v14, v15, v16);
    isEnabled = QT::QAction::isEnabled((QT::QAction *)qword_8C9930);
    if ( !unk_8BA8F8 )
    {
      v24 = 0;
      return (unsigned int)sub_303230(v24, v27, v25, v26, nullptr, *(double *)a1.m128_u64, a2, a3, a4, v21, v22, a7, a8);
    }
    v23 = sub_302E40(isEnabled, &v27, &v25, (bool *)&v26, a1, a2, a3, a4, v21, v22, a7, a8);
    if ( v23 != -1 )
    {
      v24 = v23 == 0;
      return (unsigned int)sub_303230(v24, v27, v25, v26, nullptr, *(double *)a1.m128_u64, a2, a3, a4, v21, v22, a7, a8);
    }
  }
  else
  {
    return 1;
  }
  return v11;
}
