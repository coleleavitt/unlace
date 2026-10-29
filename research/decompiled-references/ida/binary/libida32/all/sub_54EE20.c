char __fastcall sub_54EE20(char **a1, int *a2, int *a3)
{
  char v4; // dl
  int v5; // eax

  v4 = **a1;
  if ( (v4 & 0xF) != 0xB )
    return 0;
  ++*a1;
  if ( (v4 & 0x10) == 0 )
    return sub_54ED70(a1, a3, a2);
  if ( a2 )
    *a2 = 0;
  v5 = sub_692FE0(a1);
  *a3 = v5;
  return v5 != -1;
}

