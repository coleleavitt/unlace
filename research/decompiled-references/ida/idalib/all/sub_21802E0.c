__int64 __fastcall sub_21802E0(__int64 a1, __int64 a2)
{
  unsigned __int8 (*v2)(void); // rax
  int v3; // eax

  v2 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 248LL);
  if ( (char *)v2 == (char *)sub_217EFE0 )
  {
    v3 = *(_DWORD *)(a2 + 8);
    if ( (v3 & 2) != 0 && ((v3 & 4) != 0 || (v3 & 1) == 0) )
      return 0;
  }
  else if ( v2() )
  {
    return 0;
  }
  if ( *(_DWORD *)(a2 + 4) != 8 )
    return (*(_DWORD *)(a2 + 8) >> 1) & 1;
  return 0;
}
