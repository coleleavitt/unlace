__int64 __fastcall my_strtoui(int *a1, char *a2)
{
  char *v3; // [rsp+0h] [rbp-20h]
  int v4; // [rsp+18h] [rbp-8h]
  int v5; // [rsp+1Ch] [rbp-4h]
  int v6; // [rsp+1Ch] [rbp-4h]

  v3 = a2;
  if ( !*a2 )
    return 0;
  v5 = 0;
  while ( *v3 )
  {
    v4 = v5;
    v6 = 10 * v5;
    if ( *v3 <= 47 || *v3 > 57 )
      return 0;
    v5 = *v3 - 48 + v6;
    if ( v5 < v4 )
      return 0;
    ++v3;
  }
  *a1 = v5;
  return 1;
}

