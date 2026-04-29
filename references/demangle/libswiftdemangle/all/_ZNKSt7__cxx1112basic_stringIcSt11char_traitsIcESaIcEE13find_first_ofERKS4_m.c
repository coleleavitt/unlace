__int64 __fastcall std::string::find_first_of(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  return std::string::find_first_of(a1, *(const void **)a2, a3, *(_QWORD *)(a2 + 8));
}
