__int64 __fastcall sub_83D880(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( *(char *)(a1 + 29) < 0 )
    v1 = sub_77A0C0(a1);
  if ( *(_DWORD *)(v1 + 68) <= 0xFu )
    sub_78B660(v1);
  return (unsigned int)((*(_DWORD *)(v1 + 68) >> 4) - 1);
}

