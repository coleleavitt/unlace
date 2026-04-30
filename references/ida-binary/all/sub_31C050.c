__int64 __fastcall sub_31C050(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // eax
  double v11; // xmm4_8
  double v12; // xmm5_8
  unsigned __int8 v13; // al
  unsigned int v14; // ebx
  double v16; // xmm4_8
  double v17; // xmm5_8
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20[5]; // [rsp+0h] [rbp-28h] BYREF

  v20[1] = __readfsqword(0x28u);
  v10 = is_database_flag(8);
  if ( (_BYTE)v10 )
  {
    v14 = v10;
    sub_17D780(v20, a2);
    if ( (unsigned __int8)sub_24B020(0, a3, a4, a5, a6, v16, v17, a9, a10) )
      v14 = sub_31BCA0(nullptr, a3, a4, a5, a6, v18, v19, a9, a10);
    sub_17D800(v20);
  }
  else if ( (_BYTE)a2 || (unsigned __int8)sub_24B020(0, a3, a4, a5, a6, v11, v12, a9, a10) )
  {
    v13 = is_database_flag(4);
    v14 = save_database(a1, 4 * (unsigned int)v13, 0, 0);
    if ( (_BYTE)v14 )
    {
      v14 = 1;
      QT::QAction::setEnabled((QT::QAction *)qword_8C9930, 1);
      show_auto(-1, 0);
    }
  }
  else
  {
    return 1;
  }
  return v14;
}
