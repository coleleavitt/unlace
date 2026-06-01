/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6AD6A
// Address: 0x0006AD6A

//----- (0006AD6A) --------------------------------------------------------
int __fastcall sub_6AD6A(int *a1, int *a2, int a3)
{
  int v6; // r0
  int *v7; // r7
  _DWORD *v8; // r3
  int v9; // r6
  int v10; // r7
  int v11; // r1
  int v12; // r4
  int *v14; // [sp+0h] [bp-4h]

  v6 = a1[99];
  v7 = a1 + 99;
  if ( v6 < 0 )
  {
    v6 = (*(int (__fastcall **)(int *))(*a1 + 312))(a1);
    *v7 = v6;
    if ( v6 < 0 )
    {
      *v7 = 0;
      return 6;
    }
    if ( v6 >= 16 )
      v6 = 16;
    *v7 = v6;
  }
  if ( v6 < 1 )
    return 6;
  v14 = a2;
  v8 = a1 + 149;
  v9 = 0;
  v10 = -1;
  while ( 1 )
  {
    v11 = 4;
    if ( *v8 == a3 )
      break;
    v12 = v9;
    if ( *v8 != -1 )
      v12 = v10;
    if ( v10 >= 0 )
      v12 = v10;
    v8 += 3;
    ++v9;
    v10 = v12;
    if ( v9 >= v6 )
    {
      v11 = 6;
      if ( v12 >= 0 )
      {
        v11 = 0;
        if ( v14 )
        {
          *v14 = v12;
          return 0;
        }
      }
      return v11;
    }
  }
  return v11;
}
