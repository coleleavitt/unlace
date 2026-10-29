__int64 __fastcall clang_getBuildSessionTimestamp(std::chrono::_V2::system_clock *a1)
{
  return std::chrono::_V2::system_clock::now(a1) / 1000000000;
}

