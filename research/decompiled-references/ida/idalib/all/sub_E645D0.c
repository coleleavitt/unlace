__int64 __fastcall sub_E645D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  int vars10; // [rsp+10h] [rbp+10h]
  __int16 vars20; // [rsp+20h] [rbp+20h] BYREF
  __int64 vars28; // [rsp+28h] [rbp+28h]
  __int64 vars30; // [rsp+30h] [rbp+30h]
  int vars38; // [rsp+38h] [rbp+38h]

  sub_E63A60((__int64)&vars0, a1, **(_QWORD **)(a2 + 32), 1);
  vars20 = 7;
  v2 = vars0;
  vars0 = 0;
  vars28 = v2;
  v3 = vars8;
  vars8 = 0;
  vars30 = v3;
  LODWORD(v3) = vars10;
  vars10 = 0;
  vars38 = v3;
  sub_222AB70(a1 + 1048, "typeSourceInfo", 14);
  sub_222CAC0(a1 + 1048, &vars20);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&vars20);
  return sub_E5D2E0(&vars0);
}
