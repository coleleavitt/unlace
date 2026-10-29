__int64 __fastcall std::string::_M_ibegin(std::string *this)
{
  __int64 v2; // [rsp+10h] [rbp-10h] BYREF
  __int64 v3; // [rsp+18h] [rbp-8h] BYREF

  v3 = std::string::_M_data(this);
  sub_5968DA(&v2, &v3);
  return v2;
}
