bool __fastcall sub_3998A0(_BYTE *a1, char *a2, int *a3, int a4)
{
  char *v5; // rax
  char v6; // dl

  if ( *a1 == 48 && a1[1] == 120 )
  {
    v5 = sub_3997F0(a1 + 2, a3, 16);
  }
  else
  {
    v5 = sub_3997F0(a1, a3, a4);
    if ( a4 != 16 )
    {
      if ( *v5 != 105 )
        return v5 == a2;
      goto LABEL_10;
    }
  }
  v6 = *v5;
  if ( *v5 == 104 )
    v6 = *++v5;
  if ( v6 == 105 )
  {
LABEL_10:
    if ( v5[1] == 54 && v5[2] == 52 )
      v5 += 3;
  }
  return v5 == a2;
}

