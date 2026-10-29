__int64 __fastcall clang_getNullLocation(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  return a1;
}

