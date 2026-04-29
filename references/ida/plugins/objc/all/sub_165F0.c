__int64 __fastcall sub_165F0(_QWORD *a1, __int64 a2, _OWORD *a3, char a4)
{
  _OWORD v5[2]; // [rsp+0h] [rbp-488h] BYREF
  __int64 (__fastcall **v6)(); // [rsp+20h] [rbp-468h] BYREF
  __int64 v7; // [rsp+28h] [rbp-460h]
  __int64 v8; // [rsp+30h] [rbp-458h]
  __int64 v9; // [rsp+38h] [rbp-450h]
  __int64 v10; // [rsp+40h] [rbp-448h]
  _OWORD *v11; // [rsp+48h] [rbp-440h]
  unsigned __int64 v12; // [rsp+458h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !a4 )
  {
    v10 = a2;
    v7 = 10;
    v8 = 0;
    v9 = -1;
    v6 = off_3C610;
    v11 = a3;
    sub_16400(a1, (__int64)&v6);
    return 1;
  }
  memset(v5, 0, sizeof(v5));
  if ( !(unsigned int)qregcomp() )
  {
    v7 = 10;
    v8 = 0;
    v9 = -1;
    v10 = a2;
    v6 = off_3C5F0;
    v11 = v5;
    sub_16400(a1, (__int64)&v6);
    qregfree();
    return 1;
  }
  qregerror();
  sub_EC40();
  return 0;
}
