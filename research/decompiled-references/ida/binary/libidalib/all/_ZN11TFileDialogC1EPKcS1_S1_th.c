void __fastcall TFileDialog::TFileDialog(TFileDialog *this, const char *a2, const char *a3, const char *a4)
{
  __int128 v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  TWindowInit::TWindowInit((char *)this + 4312, 0);
  v4 = 0;
  TDialog::TDialog(this, &off_23E860, &v4, "");
  *(_QWORD *)this = off_23E888;
}

