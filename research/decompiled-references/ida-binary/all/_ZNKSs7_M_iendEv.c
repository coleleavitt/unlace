__int64 __fastcall std::string::_M_iend(std::string *this)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+10h] [rbp-20h] BYREF
  __int64 v4[3]; // [rsp+18h] [rbp-18h] BYREF

  v1 = std::string::_M_data(this);
  v4[0] = v1 + std::string::size(this);
  sub_5968DA(&v3, v4);
  return v3;
}
