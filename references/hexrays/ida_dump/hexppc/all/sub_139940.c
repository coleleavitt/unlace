__int64 __fastcall sub_139940(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax

  LODWORD(v1) = a1[58] - 1;
  if ( (v1 & 0x80000000) != 0LL )
    return 0xFFFFFFFFLL;
  v1 = (unsigned int)v1;
  while ( 1 )
  {
    if ( v1 >= a1[58] || (v2 = *(int *)(a1[57] + 4 * v1), v2 >= a1[55]) )
    {
      if ( !under_debugger )
        sub_37EEE0(50442);
      BUG();
    }
    if ( (unsigned int)(*(_DWORD *)(a1[54] + 104 * v2) - 3) <= 1 )
      break;
    if ( (--v1 & 0x80000000) != 0LL )
      return 0xFFFFFFFFLL;
  }
  return *(unsigned int *)(a1[57] + 4 * v1);
}
