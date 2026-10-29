__int64 __fastcall dwarf_library_allow_dup_attr(int a1)
{
  __int64 result; // rax

  result = (unsigned int)dword_B8CC4;
  dword_B8CC4 = a1;
  return result;
}

