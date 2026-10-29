void __fastcall TFileDialog::TFileDialog(TFileDialog *this, const char *a2, const char *a3, const char *a4)
{
  __int128 v4; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v4 = 0;
  TDialog::TDialog(this, a2 + 8, &v4, "");
  *(_QWORD *)this = *(_QWORD *)a2;
}

