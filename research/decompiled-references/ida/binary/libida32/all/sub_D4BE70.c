_BOOL8 __fastcall sub_D4BE70(int a1, int a2, int *a3)
{
  unsigned int v3; // ecx
  int v4; // esi
  bool v5; // al
  unsigned int v6; // eax
  int v8; // eax
  bool v9; // si
  int v10; // r8d

  if ( a1 >= 0 )
  {
    v3 = a2;
    if ( a2 >= 0 )
    {
      v4 = a2 * a1;
      v5 = v3 == 0 || a1 == 0;
      goto LABEL_4;
    }
    v3 = -a2;
    v8 = -a2 * a1;
    v9 = a1 == 0;
LABEL_8:
    *a3 = -v8;
    v6 = 0x80000000;
    if ( !v9 )
      return v6 / v3 < a1;
    return 0;
  }
  v3 = a2;
  v10 = -a1;
  if ( a2 >= 0 )
  {
    a1 = -a1;
    v8 = v10 * a2;
    v9 = a2 == 0;
    goto LABEL_8;
  }
  v4 = a1 * a2;
  v3 = -v3;
  a1 = -a1;
  v5 = v10 == 0;
LABEL_4:
  *a3 = v4;
  if ( !v5 )
  {
    v6 = 0x7FFFFFFF;
    return v6 / v3 < a1;
  }
  return 0;
}

