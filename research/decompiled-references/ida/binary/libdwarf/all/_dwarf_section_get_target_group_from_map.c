__int64 __fastcall dwarf_section_get_target_group_from_map(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v4; // rax
  _DWORD v6[2]; // [rsp+0h] [rbp-28h] BYREF
  char *v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 224) )
    return 0xFFFFFFFFLL;
  v6[0] = a2;
  v7 = "";
  v6[1] = 0;
  v4 = _dwarf_tfind(v6, a1 + 224, sub_2F500);
  if ( !v4 )
    return 0xFFFFFFFFLL;
  *a3 = *(_DWORD *)(*(_QWORD *)v4 + 4LL);
  return 0;
}

