__int64 __fastcall dwarf_calculate_info_section_start_ptr(_DWORD *a1, _QWORD *a2)
{
  __int64 *v2; // rax
  __int64 v3; // rdx

  v2 = (__int64 *)(*(_QWORD *)a1 + 592LL);
  if ( a1[162] )
    v2 = (__int64 *)(*(_QWORD *)a1 + 360LL);
  v3 = *v2;
  *a2 = v2[1];
  return v3;
}

