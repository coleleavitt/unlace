_BOOL8 __fastcall clang_Module_isSystem(__int64 a1)
{
  return a1 && (*(_BYTE *)(a1 + 904) & 0x40) != 0;
}

