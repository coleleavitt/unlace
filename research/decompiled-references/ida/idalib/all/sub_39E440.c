bool __fastcall sub_39E440(char *a1, __int64 a2, __int64 *a3, int a4)
{
  char *v5; // rax
  char *v6; // r11
  char v7; // dl

  if ( *a1 == 48 && a1[1] == 120 )
  {
    v5 = sub_39E390(a1 + 2, a3, 16);
  }
  else
  {
    v5 = sub_39E390(a1, a3, a4);
    if ( a4 != 16 )
    {
      if ( *v5 != 105 )
        return v5 == v6;
      goto LABEL_10;
    }
  }
  v7 = *v5;
  if ( *v5 == 104 )
    v7 = *++v5;
  if ( v7 == 105 )
  {
LABEL_10:
    if ( v5[1] == 54 && v5[2] == 52 )
      v5 += 3;
  }
  return v5 == v6;
}
