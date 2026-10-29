__int64 __fastcall sub_448800(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rdx

  sub_4AE1A0(&qword_65A828);
  v3 = (_QWORD *)qword_65A808;
  v4 = nullptr;
  while ( v3 )
  {
    if ( *v3 == a1 && v3[1] == a2 )
    {
      if ( v4 )
        v4[2] = v3[2];
      else
        qword_65A808 = v3[2];
      Tcl_Free((__int64)v3);
      return sub_4AE230(&qword_65A828);
    }
    v4 = v3;
    v3 = (_QWORD *)v3[2];
  }
  return sub_4AE230(&qword_65A828);
}

