__int64 __fastcall std::string::pop_back(__int64 *a1)
{
  return std::string::_M_erase(a1, a1[1] - 1, 1);
}
