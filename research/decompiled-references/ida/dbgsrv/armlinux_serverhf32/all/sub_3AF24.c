/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AF24
// Address: 0x0003AF24

//----- (0003AF24) --------------------------------------------------------
int __fastcall sub_3AF24(_DWORD *a1, int a2)
{
  char *v4; // r1
  unsigned int v5; // r2
  char v7; // r1
  int v8; // [sp+0h] [bp-8h] BYREF

  if ( a1[7] )
    v4 = (char *)a1[6];
  else
    v4 = (char *)&dword_8DA5C;
  v5 = (unsigned __int16)sub_3ADD8(a1, v4, &v8);
  switch ( v8 )
  {
    case 2:
      if ( a2 <= 0 )
        v7 = -58;
      else
        v7 = -62;
      goto LABEL_12;
    case 3:
      if ( a2 <= 0 )
        v7 = -35;
      else
        v7 = -37;
      goto LABEL_12;
    case 1:
      if ( a2 <= 0 )
        v7 = -60;
      else
        v7 = -64;
LABEL_12:
      sub_3A3FC((int)a1, v7, v5);
      return 0;
  }
  return sub_70A2C(58);
}
// 8DA5C: using guessed type int dword_8DA5C;
