__int64 __fastcall std::string::pop_back(__int64 a1)
{
  return std::string::_M_erase(a1, *(_QWORD *)(a1 + 8) - 1LL, 1);
}

