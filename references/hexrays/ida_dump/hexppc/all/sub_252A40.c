__int64 __fastcall sub_252A40(__int64 a1, __int64 a2)
{
  int v2; // eax

  if ( !*(_BYTE *)(a2 + 145) )
    return *(unsigned __int8 *)(a2 + 145);
  while ( 1 )
  {
    v2 = *(_DWORD *)(a1 + 8);
    if ( v2 != 48 )
      break;
    a1 = *(_QWORD *)(a1 + 24);
  }
  for ( ; (unsigned int)(v2 - 58) <= 1; v2 = *(_DWORD *)(a1 + 8) )
    a1 = *(_QWORD *)(a1 + 24);
  if ( v2 == 65 )
    return sub_1BF650((_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 432LL) + 104LL * *(int *)(a1 + 32)), a2, 0);
  else
    return *(unsigned __int8 *)(a2 + 145);
}
