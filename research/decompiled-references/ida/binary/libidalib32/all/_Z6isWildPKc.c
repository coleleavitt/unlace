_BOOL8 __fastcall isWild(const char *a1)
{
  return strpbrk(a1, "?*") != nullptr;
}

