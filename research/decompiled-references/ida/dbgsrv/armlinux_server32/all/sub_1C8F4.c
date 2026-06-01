/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C8F4
// Address: 0x0001C8F4

//----- (0001C8F4) --------------------------------------------------------
int __fastcall sub_1C8F4(int a1, int a2, int a3, unsigned int *a4, unsigned int a5, unsigned __int8 a6)
{
  unsigned int v6; // r4
  int v9; // r3
  int v10; // r10
  int v11; // r0
  int v12; // r7
  int v13; // r2
  int v14; // r5
  int v15; // r1
  int v16; // r0
  unsigned int *i; // r3

  v6 = a5;
  if ( !a5 )
    return 1;
  v9 = *(unsigned __int8 *)(a1 + 1077);
  v10 = a3;
  v11 = *(_DWORD *)(a1 + 1068);
  v12 = a3 & 0xFFF;
  while ( 1 )
  {
    do
    {
      v13 = 4096 - v12;
      v14 = v9;
      if ( 4096 - v12 >= v6 )
        v13 = v6;
      if ( v13 > 128 )
        v15 = (a6 ^ 1) & 1;
      else
        v15 = 0;
      if ( v15 )
        v13 = 128;
    }
    while ( v9 || v11 == -1 );
    v16 = sub_1C68C(a1, a2, v10, a4, v13, a6);
    if ( v16 < 0 )
      break;
    if ( v16 )
    {
      if ( !*(_BYTE *)a4 )
        return 1;
      for ( i = a4; (unsigned int *)((char *)a4 + v16 - 1) != i; i = (unsigned int *)((char *)i + 1) )
      {
        if ( !*((unsigned __int8 *)i + 1) )
          return 1;
      }
      v6 -= v16;
      v10 += v16;
      a4 = (unsigned int *)((char *)a4 + v16);
      if ( !v6 )
        return 1;
      v12 = v10 & 0xFFF;
    }
    v9 = *(unsigned __int8 *)(a1 + 1077);
    v11 = *(_DWORD *)(a1 + 1068);
  }
  return v14;
}
