_BOOL8 __fastcall std::string::_M_disjunct(std::string *this, const char *a2)
{
  __int64 v2; // rbx
  _BOOL8 result; // rax
  const char *v4; // [rsp+0h] [rbp-40h] BYREF
  std::string *v5; // [rsp+8h] [rbp-38h]
  char v6; // [rsp+17h] [rbp-29h] BYREF
  __int64 v7; // [rsp+18h] [rbp-28h] BYREF
  char v8; // [rsp+27h] [rbp-19h] BYREF
  __int64 v9[3]; // [rsp+28h] [rbp-18h] BYREF

  v5 = this;
  v4 = a2;
  v7 = std::string::_M_data(this);
  result = true;
  if ( !(unsigned __int8)sub_590FE6(&v6, &v4, &v7) )
  {
    v2 = std::string::_M_data(v5);
    v9[0] = v2 + std::string::size(v5);
    if ( !(unsigned __int8)sub_590FE6(&v8, v9, &v4) )
      return false;
  }
  return result;
}
