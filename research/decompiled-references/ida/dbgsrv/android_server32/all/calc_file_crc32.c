/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: calc_file_crc32
// Address: 0x0007210C

//----- (0007210C) --------------------------------------------------------
int __fastcall calc_file_crc32(int *a1)
{
  int v2; // r7
  __int64 v3; // r0
  int v4; // r4
  unsigned int v5; // r6
  int v6; // r5
  int v8; // [sp+18h] [bp-1014h]
  int v9; // [sp+20h] [bp-100Ch]
  unsigned __int8 v10[4100]; // [sp+28h] [bp-1004h] BYREF

  v2 = 0;
  qlseek((int)a1, 0, 0);
  v8 = (int)a1;
  LODWORD(v3) = qlsize(a1);
  v4 = v3;
  if ( v3 >= 1 )
  {
    v5 = HIDWORD(v3);
    v9 = 0;
    do
    {
      v6 = v4;
      if ( __SPAIR64__(v5, v4) >= 4096 )
        v6 = 4096;
      v2 = -1;
      if ( qlread(v8, v10, v6) != v6 )
        break;
      v2 = sub_85468(v9, v10, v6);
      v5 = (__PAIR64__(v5, v4) - (unsigned int)v6) >> 32;
      v4 -= v6;
      v9 = v2;
    }
    while ( ((((unsigned __int64)-__SPAIR64__(v5, v4) >> 32) & 0x80000000) != 0LL) != __OFSUB__(0, v5, v4 == 0) );
  }
  return v2;
}
// 72146: variable 'v3' is possibly undefined
