__int64 __fastcall sub_59620E(__int64 a1, std::string *a2, const char *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = std::string::append(a2, a3);
  v4 = sub_59632D(v3);
  std::string::string(a1, v4);
  return a1;
}
