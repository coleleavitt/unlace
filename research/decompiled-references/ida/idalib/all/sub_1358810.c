void __fastcall sub_1358810(std::_V2 *a1)
{
  _QWORD v1[4]; // [rsp+C0h] [rbp-98h] BYREF
  __int16 v2; // [rsp+E0h] [rbp-78h]

  if ( *((_BYTE *)a1 + 115) )
  {
    v2 = 260;
    v1[0] = (char *)a1 + 56;
    sub_228BF70(v1, 1);
  }
  else
  {
    std::_V2::system_category(a1);
    sub_227D450((std::_V2 *)v1);
    sub_1357890((__int64)a1, (__int64)v1);
    sub_227B600(v1);
  }
}
