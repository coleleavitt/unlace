char __fastcall sub_5685C0(char **a1, int *a2, int *a3)
{
  char v4; // dl
  int v5; // eax

  v4 = **a1;
  if ( (v4 & 0xF) != 0xB )
    return 0;
  ++*a1;
  if ( (v4 & 0x10) == 0 )
    return sub_568510(a1, a3, a2);
  if ( a2 )
    *a2 = 0;
  v5 = sub_6B3760(a1);
  *a3 = v5;
  return v5 != -1;
}
