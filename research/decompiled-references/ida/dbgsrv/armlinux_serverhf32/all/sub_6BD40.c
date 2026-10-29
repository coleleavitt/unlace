/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BD40
// Address: 0x0006BD40

//----- (0006BD40) --------------------------------------------------------
char *__fastcall sub_6BD40(char *result, int a2, _BYTE *a3)
{
  int v3; // r7
  char *v4; // r5
  char *v5; // r6
  char v6; // r4
  int v7; // t1

  v3 = a2;
  *a3 = 32;
  v4 = a3 + 2;
  if ( a2 <= 0 )
    v3 = (int)(a3 + 2);
  a3[1] = 34;
  if ( a2 > 0 )
  {
    v5 = result - 1;
    v3 += (int)v4;
    do
    {
      v7 = (unsigned __int8)*++v5;
      v6 = v7;
      result = strchr((const char *)dword_B3688, v7);
      if ( result )
        v6 = 46;
      *v4++ = v6;
    }
    while ( v4 != (char *)v3 );
  }
  *(_BYTE *)v3 = 34;
  *(_BYTE *)(v3 + 1) = 0;
  return result;
}
// B3688: using guessed type int dword_B3688[2];
