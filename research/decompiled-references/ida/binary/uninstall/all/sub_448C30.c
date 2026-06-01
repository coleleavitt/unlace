__int64 __fastcall sub_448C30(int status, int a2)
{
  void (__fastcall *v2)(_QWORD); // rbx
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d

  sub_4AE1A0(&qword_65A828);
  v2 = (void (__fastcall *)(_QWORD))qword_65A820;
  sub_4AE230(&qword_65A828);
  if ( !v2 )
  {
    sub_448AB0();
    exit(status);
  }
  v2(status);
  return sub_47D740((unsigned int)"AppExitProc returned unexpectedly", a2, v3, v4, v5, v6);
}

