unsigned __int64 __fastcall sub_3F8830(__int64 a1, int a2, int a3, int a4, char a5)
{
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  int vars8; // [rsp+8h] [rbp+8h]
  _QWORD vars10[3]; // [rsp+10h] [rbp+10h] BYREF
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  vars28 = __readfsqword(0x28u);
  vars0 = 0x800000001LL;
  vars8 = a2;
  vars10[0] = 0xFFFFFFFF00000000LL;
  vars10[1] = 0;
  sub_124CE0((__int64)vars10, a3, a4, 4);
  if ( (a5 & 0x10) != 0 )
    sub_3F86E0(a1, 0xCu, (unsigned __int8 *)&vars0, (unsigned __int8 *)vars10, (__int64)vars10);
  else
    sub_3F86E0(a1, 4u, (unsigned __int8 *)&vars0, nullptr, (__int64)vars10);
  sub_11C7E0((__int64)vars10);
  sub_11C7E0((__int64)&vars0);
  return vars28 - __readfsqword(0x28u);
}
