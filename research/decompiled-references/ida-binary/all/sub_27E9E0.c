unsigned __int64 __fastcall sub_27E9E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( a1 != -1 && a2 )
  {
    v3 = sub_414310(a1);
    v4[0] = a1;
    v4[1] = a2 + a1;
    sub_475680(v3, v4);
  }
  return v5 - __readfsqword(0x28u);
}
