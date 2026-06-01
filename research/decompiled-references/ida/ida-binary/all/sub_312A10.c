__int64 __fastcall sub_312A10(double a1)
{
  __int64 v1; // rdx
  __int64 v3; // [rsp+0h] [rbp-428h] BYREF
  __int64 v4; // [rsp+8h] [rbp-420h] BYREF
  char v5[1032]; // [rsp+10h] [rbp-418h] BYREF
  unsigned __int64 v6; // [rsp+418h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_1F09E0(0, &v3, &v4) )
    sub_192350(0, &v3, v1, v3);
  qsnprintf(v5, 1024, "0x%a", a1);
  sub_312940((__int64)qword_8CD748, v5, -1);
  return 1;
}
