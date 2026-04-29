char __fastcall sub_3EABC0(__int64 a1, int a2)
{
  char result; // al

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 96) + 148LL) != 2 )
    return sub_64330((_QWORD *)(a1 + 144), a2);
  if ( a2 < *(_DWORD *)(a1 + 356) || (result = 1, a2 > *(_DWORD *)(a1 + 416)) )
  {
    result = 0;
    if ( a2 >= *(_DWORD *)(a1 + 488) )
      return a2 <= *(_DWORD *)(a1 + 548);
  }
  return result;
}
