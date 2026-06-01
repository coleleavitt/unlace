__int64 __fastcall std::string::find(__int64 *a1, char *a2, unsigned __int64 a3)
{
  size_t v4; // rax

  v4 = strlen(a2);
  return std::string::find(a1, a2, a3, v4);
}
