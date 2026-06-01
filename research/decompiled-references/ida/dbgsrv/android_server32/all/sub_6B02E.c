/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B02E
// Address: 0x0006B02E

//----- (0006B02E) --------------------------------------------------------
int __fastcall sub_6B02E(int *a1, int a2, int a3)
{
  int v5; // r0
  int *v6; // r6
  _DWORD *v7; // r2
  int v8; // r3
  int v9; // r0
  int v10; // r3

  if ( a3 != 8 )
  {
    v9 = a1[99];
    v6 = a1 + 99;
    if ( v9 < 0 )
    {
      v9 = (*(int (__fastcall **)(int *))(*a1 + 312))(a1);
      *v6 = v9;
      if ( v9 < 0 )
        goto LABEL_23;
      if ( v9 >= 16 )
        v9 = 16;
      *v6 = v9;
    }
    if ( v9 >= 1 )
    {
      v7 = a1 + 148;
      v10 = 0;
      while ( v7[1] != a2 )
      {
        v7 += 3;
        if ( ++v10 >= v9 )
          return 0;
      }
      goto LABEL_22;
    }
    return 0;
  }
  v5 = a1[98];
  v6 = a1 + 98;
  if ( v5 >= 0 )
    goto LABEL_7;
  v5 = (*(int (__fastcall **)(int *))(*a1 + 308))(a1);
  *v6 = v5;
  if ( v5 >= 0 )
  {
    if ( v5 >= 16 )
      v5 = 16;
    *v6 = v5;
LABEL_7:
    if ( v5 >= 1 )
    {
      v7 = a1 + 100;
      v8 = 0;
      while ( v7[1] != a2 )
      {
        v7 += 3;
        if ( ++v8 >= v5 )
          return 0;
      }
LABEL_22:
      *v7 = 12;
      v7[1] = -1;
      v7[2] = 0;
      return (*(int (__fastcall **)(int *))(*a1 + 324))(a1);
    }
    return 0;
  }
LABEL_23:
  *v6 = 0;
  return 0;
}
