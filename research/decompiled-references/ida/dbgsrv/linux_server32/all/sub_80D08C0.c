/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D08C0
// Address: 0x080D08C0

//----- (080D08C0) --------------------------------------------------------
char *__cdecl sub_80D08C0(char *s, char *a2, int a3)
{
  char *v4; // edi
  char *v5; // eax
  char v6; // dl
  int v8; // [esp-18h] [ebp-28h]
  int v9; // [esp-14h] [ebp-24h]
  int v10; // [esp-10h] [ebp-20h]

  if ( a3 < 0 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(1225, v8, v9, v10);
LABEL_13:
    BUG();
  }
  v4 = &s[a3];
  v5 = &s[strlen(s)];
  if ( v5 >= &s[a3] )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(520, v8, v9, v10);
    goto LABEL_13;
  }
  if ( v5 == v4 - 1 )
  {
LABEL_8:
    *(v4 - 1) = 0;
    return s;
  }
  else
  {
    while ( 1 )
    {
      v6 = *a2++;
      *v5 = v6;
      if ( !v6 )
        return s;
      if ( ++v5 == v4 - 1 )
        goto LABEL_8;
    }
  }
}
// 80D0945: variable 'v8' is possibly undefined
// 80D0945: variable 'v9' is possibly undefined
// 80D0945: variable 'v10' is possibly undefined
// 811F8A1: using guessed type char byte_811F8A1;
