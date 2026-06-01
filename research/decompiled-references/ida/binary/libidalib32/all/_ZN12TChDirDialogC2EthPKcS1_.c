void __fastcall TChDirDialog::TChDirDialog(
        TChDirDialog *this,
        _QWORD *a2,
        unsigned __int8 a3,
        const char *a4,
        const char *a5)
{
  __int128 v5; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v5 = 0;
  TDialog::TDialog(this, a2 + 1, &v5, 0);
  *(_QWORD *)this = *a2;
}

