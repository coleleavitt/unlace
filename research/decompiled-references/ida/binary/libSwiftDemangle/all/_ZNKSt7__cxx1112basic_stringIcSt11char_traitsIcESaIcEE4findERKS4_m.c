__int64 __fastcall std::string::find(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  return std::string::find(a1, *(char **)a2, a3, *(_QWORD *)(a2 + 8));
}

