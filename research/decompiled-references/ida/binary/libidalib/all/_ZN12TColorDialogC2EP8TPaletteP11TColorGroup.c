void __fastcall TColorDialog::TColorDialog(TColorDialog *this, TPalette *a2, TColorGroup *a3)
{
  __int128 v3; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v3 = 0;
  TDialog::TDialog(this, (char *)a2 + 8, &v3, "");
  *(_QWORD *)this = *(_QWORD *)a2;
}

