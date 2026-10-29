unsigned __int64 __fastcall sub_2F6F70(__int64 a1, _BYTE *a2, char a3)
{
  const char *v3; // rbx
  int v4; // r13d
  int v5; // eax
  _DWORD v7[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v3 = "LoadDialog_preferences_for_known_loaders";
  v8 = __readfsqword(0x28u);
  if ( a3 )
    v3 = "LoadDialog_preferences_for_binaries";
  *a2 = 0;
  v4 = reg_int_op("width", 0, 0xFFFFFFFFLL, v3);
  v5 = reg_int_op("height", 0, 0xFFFFFFFFLL, v3);
  if ( (v4 | v5) >= 0 )
  {
    v7[0] = v4;
    v7[1] = v5;
    QT::QWidget::resize(a1, v7);
    *a2 = 1;
  }
  return v8 - __readfsqword(0x28u);
}
