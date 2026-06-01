__int64 __fastcall sub_73ADC0(_DWORD *a1, __int64 a2, int *a3)
{
  int v3; // eax

  if ( a2 == 4 )
  {
    v3 = 0;
    if ( *a1 != 1885693291 )
      return 0;
  }
  else
  {
    if ( a2 != 12 || *(_QWORD *)a1 != 0x78652D6B6E756874LL || a1[2] != 1852990836 )
      return 0;
    v3 = 1;
  }
  *a3 = v3;
  return 1;
}

