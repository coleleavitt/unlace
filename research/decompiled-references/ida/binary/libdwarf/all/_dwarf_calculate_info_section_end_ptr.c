__int64 __fastcall dwarf_calculate_info_section_end_ptr(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *a1;
  if ( *((_DWORD *)a1 + 162) )
    v2 = *(_QWORD *)(v1 + 360);
  else
    v2 = *(_QWORD *)(v1 + 592);
  return *((unsigned __int8 *)a1 + 17) + *((unsigned __int8 *)a1 + 16) + a1[1] + a1[9] + v2;
}

