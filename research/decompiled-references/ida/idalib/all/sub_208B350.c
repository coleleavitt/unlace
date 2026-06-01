__int64 __fastcall sub_208B350(__int64 *a1)
{
  __int64 v1; // rax
  unsigned __int8 v2; // dl

  v1 = *a1;
  v2 = *(_BYTE *)(*a1 - 16);
  if ( (v2 & 2) != 0 )
  {
    if ( *(_DWORD *)(v1 - 24) != 2 )
      return 0;
    return *(_QWORD *)(*(_QWORD *)(v1 - 32) + 8LL);
  }
  else
  {
    if ( ((*(_WORD *)(v1 - 16) >> 6) & 0xF) != 2 )
      return 0;
    return *(_QWORD *)(v1 - 8LL * ((v2 >> 2) & 0xF) - 16 + 8);
  }
}
