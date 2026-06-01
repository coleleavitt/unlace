__int64 __fastcall sub_E5CB20(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int16 vars0; // [rsp+0h] [rbp+0h] BYREF
  bool vars8; // [rsp+8h] [rbp+8h]

  v2 = *a2;
  vars0 = 1;
  vars8 = (v2 & 0x80000) != 0;
  sub_222AB70(a1 + 1048, "value", 5);
  sub_222CAC0(a1 + 1048, &vars0);
  sub_2229BF0(a1 + 1048);
  return sub_222B2A0(&vars0);
}
