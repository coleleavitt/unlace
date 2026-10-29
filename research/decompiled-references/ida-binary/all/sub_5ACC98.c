__int64 __fastcall sub_5ACC98(std::string *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rax
  _BYTE v6[32]; // [rsp+10h] [rbp-20h] BYREF

  v2 = std::string::c_str(a1);
  sub_5AE2B0(v6, v2, 0);
  if ( sub_59BD66((__int64)v6) )
  {
    v4 = sub_59BD66((__int64)v6);
    v3 = sub_5ACC54(v4, a2);
  }
  else
  {
    v3 = 0;
  }
  sub_5AE2EA(v6);
  return v3;
}
