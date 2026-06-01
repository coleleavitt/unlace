void __fastcall TColorDialog::TColorDialog(TColorDialog *this, TPalette *a2, TColorGroup *a3)
{
  __int128 v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  TWindowInit::TWindowInit((char *)this + 240, 0);
  v3 = 0;
  TDialog::TDialog(this, &off_23E3F0, &v3, "");
  *(_QWORD *)this = &off_23E418;
}

