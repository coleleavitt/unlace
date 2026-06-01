__int64 __fastcall dwarf_formdata16(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  __int64 v5; // r13
  __int64 started; // rax
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v10[7]; // [rsp+10h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  v10[0] = 0;
  if ( !a1 || !a2 )
  {
    _dwarf_error(0, a3, 111);
    return 1;
  }
  if ( (unsigned int)sub_1F170(&v9, &v8, a1, a3) )
    return 1;
  v4 = *(unsigned __int16 *)(a1 + 2);
  v5 = v9;
  if ( (_WORD)v4 != 30 )
  {
    sub_1F300(v9, a3, v4);
    return 1;
  }
  started = _dwarf_calculate_info_section_start_ptr(v8, v10);
  return _dwarf_extract_data16(v5, *(_QWORD *)(a1 + 16), started, started + v10[0], a2, a3);
}

