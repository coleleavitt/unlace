__int64 __fastcall dwarf_formudata(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v5[8]; // [rsp+8h] [rbp-40h] BYREF

  v5[2] = __readfsqword(0x28u);
  v4 = 0;
  v5[0] = 0;
  v5[1] = 0;
  result = sub_1F170(&v4, v5, a1, a3);
  if ( !(_DWORD)result )
  {
    _dwarf_calculate_info_section_end_ptr(v5[0]);
    return _dwarf_formudata_internal();
  }
  return result;
}

