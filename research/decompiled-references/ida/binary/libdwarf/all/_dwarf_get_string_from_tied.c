__int64 __fastcall dwarf_get_string_from_tied(_QWORD *a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v5; // rbp
  _QWORD *v6; // rax
  int section; // eax
  unsigned __int64 v10; // rcx
  int v11; // eax
  Dwarf_Unsigned v12; // r13
  Dwarf_Error v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v13[1] = (Dwarf_Error)__readfsqword(0x28u);
  v13[0] = nullptr;
  if ( !a1 || (v5 = (_QWORD *)a1[4], v5 == a1) || !v5 || (v6 = (_QWORD *)v5[4], v5 != v6) || !v6 )
  {
    _dwarf_error(a1, a4, 308);
    return 1;
  }
  section = _dwarf_load_section(a1[4], v5 + 364, v13);
  if ( section == 1 )
    goto LABEL_16;
  if ( section == -1 )
    return 0xFFFFFFFFLL;
  v10 = v5[365];
  if ( a2 >= v10 )
  {
    _dwarf_error(a1, a4, 307);
    return 1;
  }
  v11 = _dwarf_check_string_valid(v5, v5[364], v5[364] + a2, v5[364] + v10, 307, v13);
  if ( v11 == 1 )
  {
LABEL_16:
    v12 = dwarf_errno(v13[0]);
    dwarf_dealloc_error(v5, v13[0]);
    _dwarf_error(a1, a4, v12);
    return 1;
  }
  if ( v11 != -1 )
  {
    *a3 = a2 + v5[364];
    return 0;
  }
  return 0xFFFFFFFFLL;
}

