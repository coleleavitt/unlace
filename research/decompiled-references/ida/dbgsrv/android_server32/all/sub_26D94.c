/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_26D94
// Address: 0x00026D94

//----- (00026D94) --------------------------------------------------------
int __fastcall sub_26D94(int *a1, int a2, int *a3)
{
  int v4; // r3
  int v5; // r3
  int *v7; // r0
  int v8; // r1
  size_t v9; // r4
  int v10; // r1
  int v11; // r3
  int v12; // r2
  const void *v13; // r2
  int v14; // r2

  v4 = *a1;
  if ( *a1 == 3 )
  {
    ((void (__fastcall *)(int, int *, int))a1[3])(a2, a3, a1[4]);
    return 1;
  }
  v7 = (int *)(a2 + a1[2]);
  if ( (unsigned int)(v4 - 1) >= 2 )
  {
    if ( v4 )
      return 1;
    v10 = a3[2];
    v11 = a1[4];
    if ( v11 != 4 )
    {
      if ( v11 == 2 )
      {
        v12 = 0xFFFF;
      }
      else
      {
        if ( v11 != 1 )
        {
          v14 = a3[3];
LABEL_23:
          v5 = 1;
          switch ( a1[3] )
          {
            case 1:
              *(_BYTE *)v7 = v10;
              return 1;
            case 2:
              *(_WORD *)v7 = v10;
              return 1;
            case 3:
            case 5:
            case 6:
            case 7:
              return v5;
            case 4:
              *v7 = v10;
              return 1;
            case 8:
              *v7 = v10;
              v7[1] = v14;
              return 1;
            default:
              return 1;
          }
          return v5;
        }
        v12 = 255;
      }
      v10 &= v12;
    }
    v14 = 0;
    goto LABEL_23;
  }
  v8 = *a3;
  v5 = 0;
  if ( *a3 < -1 )
    v9 = 8 * (v8 == -2);
  else
    v9 = a3[3];
  if ( v9 == a1[3] )
  {
    if ( v8 < -1 )
      v13 = a3 + 2;
    else
      v13 = (const void *)a3[2];
    qmemcpy(v7, v13, v9);
    return 1;
  }
  return v5;
}
