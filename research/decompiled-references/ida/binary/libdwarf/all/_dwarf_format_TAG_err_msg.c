__int64 __fastcall dwarf_format_TAG_err_msg(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _QWORD v7[11]; // [rsp+0h] [rbp-58h] BYREF

  v7[5] = __readfsqword(0x28u);
  dwarfstring_constructor(v7);
  dwarfstring_append();
  dwarfstring_append();
  dwarfstring_append_printf_u(v7, "0x%llx is outside the valid TAG range.", a2);
  dwarfstring_append();
  v5 = dwarfstring_string(v7, " Corrupt DWARF.");
  _dwarf_error_string(a1, a4, 449, v5);
  dwarfstring_destructor(v7);
  return 1;
}

