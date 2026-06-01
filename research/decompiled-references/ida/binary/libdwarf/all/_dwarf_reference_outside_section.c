__int64 __fastcall dwarf_reference_outside_section(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 *v4; // rcx
  unsigned int v5; // edi

  v3 = **(_QWORD **)(a1 + 16);
  v4 = (unsigned __int64 *)(v3 + 592);
  if ( *(_DWORD *)(a1 + 32) )
    v4 = (unsigned __int64 *)(v3 + 360);
  v5 = 1;
  if ( a2 >= *v4 )
    return v4[1] + *v4 < a3;
  return v5;
}

