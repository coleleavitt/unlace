void __fastcall TChDirDialog::TChDirDialog(
        TChDirDialog *this,
        unsigned __int16 a2,
        unsigned __int8 a3,
        const char *a4,
        const char *a5)
{
  __int128 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  TWindowInit::TWindowInit((char *)this + 208, 0);
  v5 = 0;
  TDialog::TDialog(this, &off_23E040, &v5, 0);
  *(_QWORD *)this = &off_23E068;
}

