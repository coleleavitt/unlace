unsigned __int64 __fastcall sub_258F10(
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
  unsigned __int64 debugger_plugins; // rbp
  int v11; // eax
  __int64 v12; // rdx
  char *v13; // rcx
  int v14; // r8d
  int v15; // r9d
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned __int64 v18; // rdi
  __int64 v19; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( (unsigned __int8)netnode_inited() && (int)QT::QComboBox::currentIndex(*(QT::QComboBox **)(a1 + 368)) >= 0 )
  {
    debugger_plugins = get_debugger_plugins(&v19);
    v11 = QT::QComboBox::currentIndex(*(QT::QComboBox **)(a1 + 368));
    v18 = v11 - 1LL;
    if ( v11 )
    {
      if ( v18 < debugger_plugins )
        sub_258CA0((_QWORD *)(v19 + 16 * v18), 1, v12, v13, v14, v15, a2, a3, a4, a5, v16, v17, a8, a9);
    }
    else
    {
      sub_258CA0(nullptr, 1, v12, v13, v14, v15, a2, a3, a4, a5, v16, v17, a8, a9);
    }
  }
  return v20 - __readfsqword(0x28u);
}
