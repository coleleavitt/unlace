__int64 __fastcall dwarf_destroy_group_map(__int64 a1)
{
  __int64 result; // rax

  result = _dwarf_tdestroy(*(void **)(a1 + 224));
  *(_QWORD *)(a1 + 224) = 0;
  return result;
}

