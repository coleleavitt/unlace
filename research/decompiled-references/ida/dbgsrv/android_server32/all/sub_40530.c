/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40530
// Address: 0x00040530

//----- (00040530) --------------------------------------------------------
int __fastcall sub_40530(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  int v3; // r1
  int v4; // r3
  unsigned int v5; // r6
  int v6; // r1
  unsigned int v7; // r5
  int v8; // r0
  unsigned int v9; // r7
  int v10; // r0
  int v13; // [sp+8h] [bp-1Ch]
  int v14; // [sp+Ch] [bp-18h]
  int v16; // [sp+14h] [bp-10h]
  unsigned int v17; // [sp+18h] [bp-Ch]
  unsigned int v18; // [sp+1Ch] [bp-8h] BYREF

  v3 = *a1 + a1[1];
  v4 = *(__int16 *)(v3 - 2);
  v5 = v3 - 2;
  v6 = 0;
  if ( v4 >= 1 )
  {
    v18 = *a1 + a1[3];
    v14 = unpack_dd(&v18, v5);
    if ( v14 < 1 || v18 >= v5 )
    {
      return 0;
    }
    else
    {
      v7 = 0;
      v8 = 1;
      v17 = 0;
      while ( 1 )
      {
        v16 = v8;
        v9 = unpack_dd(&v18, v5) + v17;
        v7 += unpack_dd(&v18, v5);
        v13 = unpack_dd(&v18, v5);
        v10 = unpack_dd(&v18, v5);
        v17 = v9;
        if ( v9 <= a2 && v7 > a2 )
          break;
        v8 = v16 + 1;
        if ( v16 >= v14 || v18 >= v5 )
          return 0;
      }
      *a3 = v9;
      a3[1] = v7;
      a3[2] = v13;
      a3[3] = v10;
      return 1;
    }
  }
  return v6;
}
