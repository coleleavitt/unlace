__int64 sub_448AB0()
{
  __int64 v0; // rbx
  __int64 v1; // rbx
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d

  sub_4AE1A0(&qword_65A828);
  dword_65A800 = 1;
  while ( 1 )
  {
    v0 = qword_65A818;
    if ( !qword_65A818 )
      break;
    qword_65A818 = *(_QWORD *)(qword_65A818 + 16);
    sub_4AE230(&qword_65A828);
    (*(void (__fastcall **)(_QWORD))v0)(*(_QWORD *)(v0 + 8));
    Tcl_Free(v0);
    sub_4AE1A0(&qword_65A828);
  }
  qword_65A818 = 0;
  sub_4AE230(&qword_65A828);
  sub_4AE140();
  if ( dword_65A810 )
  {
    dword_65A810 = 0;
    sub_496130(&qword_65A830, 16);
    sub_448A40();
    while ( 1 )
    {
      sub_4AE1A0(&qword_65A828);
      v1 = qword_65A808;
      if ( !qword_65A808 )
        break;
      qword_65A808 = *(_QWORD *)(qword_65A808 + 16);
      sub_4AE230(&qword_65A828);
      (*(void (__fastcall **)(_QWORD))v1)(*(_QWORD *)(v1 + 8));
      Tcl_Free(v1);
    }
    qword_65A808 = 0;
    sub_4AE230(&qword_65A828);
    sub_449240();
    sub_447970();
    sub_46B150();
    sub_47AB50();
    sub_4440D0((__int64)&qword_65A828, 16);
    sub_47D500(0);
    sub_496330();
    sub_493E50();
    if ( qword_65A818 )
      sub_47D740((unsigned int)"exit handlers were created during Tcl_Finalize", 16, v2, v3, v4, v5);
    sub_4874A0();
    sub_496350();
    sub_497140();
    sub_4723E0();
    sub_46B1F0();
    nullsub_3();
    dword_65A800 = 0;
  }
  return sub_4AE150();
}

