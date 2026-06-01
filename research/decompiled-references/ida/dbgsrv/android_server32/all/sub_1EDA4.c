/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1EDA4
// Address: 0x0001EDA4

//----- (0001EDA4) --------------------------------------------------------
int __fastcall sub_1EDA4(int a1, int a2, int a3, unsigned int *a4, unsigned int a5, int a6)
{
  int v6; // r1
  unsigned int v7; // r6
  int v10; // r1
  int v11; // r1
  int v12; // r2
  int v13; // r0
  int v14; // r1
  int v17; // [sp+4h] [bp-18h]

  v6 = 1;
  v7 = a5;
  if ( a5 )
  {
    v10 = a6;
    while ( 1 )
    {
      v17 = v10;
      v11 = 4096 - (a3 & 0xFFF);
      if ( v11 >= v7 )
        v11 = v7;
      v12 = 128;
      if ( a6 == 1 )
        v12 = v11;
      if ( v11 <= 128 )
        v12 = v11;
      v13 = sub_1EE24(a1, a2, a3, a4, v12, v17);
      v6 = 0;
      if ( v13 < 0 )
        break;
      if ( v13 )
      {
        v14 = 0;
        while ( *((_BYTE *)a4 + v14++) )
        {
          if ( v14 >= v13 )
            goto LABEL_14;
        }
        return 1;
      }
LABEL_14:
      v7 -= v13;
      a4 = (unsigned int *)((char *)a4 + v13);
      a3 += v13;
      v10 = a6;
      if ( !v7 )
        return 1;
    }
  }
  return v6;
}
