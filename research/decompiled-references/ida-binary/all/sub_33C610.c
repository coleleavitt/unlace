QT::QWidget *__fastcall diff_source_panel_desktop_widget_factory_t__::vfunc_3(__int64 a1)
{
  int v1; // eax
  QT::QWidget *v2; // rbx
  __int128 v4; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 36);
  v4 = 0;
  DWORD2(v4) = v1;
  v2 = (QT::QWidget *)operator new(0x60u);
  sub_273D60(v2, (__int64)&v4);
  return v2;
}
