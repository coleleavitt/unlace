/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B9C8
// Address: 0x0001B9C8

//----- (0001B9C8) --------------------------------------------------------
int __fastcall sub_1B9C8(unsigned int *a1, int *a2, int a3)
{
  int v3; // r4
  int v4; // r5
  int v5; // r7
  const char *v6; // r0
  unsigned int v8; // r3
  int v9; // r0
  int v10; // r4
  int v11; // r2
  _DWORD *v12; // r5
  unsigned int v13; // r0
  unsigned int v14; // r0
  unsigned int v15; // r1
  unsigned int v16; // r1
  int v17; // r2
  int v18; // r6
  unsigned int v19; // [sp+14h] [bp-2038h]
  unsigned int v20; // [sp+18h] [bp-2034h]
  unsigned int v21; // [sp+28h] [bp-2024h]
  unsigned int v24; // [sp+3Ch] [bp-2010h]
  __int16 v25; // [sp+44h] [bp-2008h]
  _BYTE v26[8196]; // [sp+48h] [bp-2004h] BYREF

  v3 = 40 * a2[1];
  if ( !v3 )
  {
LABEL_10:
    sub_1BBA0((int)"Failed to find data segment of /system/bin/linker\n");
    return 0;
  }
  v4 = *a2;
  v5 = 0;
  v24 = -1;
  while ( 1 )
  {
    v6 = &byte_B3CBE;
    if ( *(_DWORD *)(v4 + 12) )
      v6 = *(const char **)(v4 + 8);
    if ( !strcmp(v6, "/system/bin/linker") )
    {
      if ( v24 == -1 )
        v24 = *(_DWORD *)v4;
      if ( (*(_BYTE *)(v4 + 37) & 6) == 6 )
        break;
    }
    v3 -= 40;
    v4 += 40;
    if ( !v3 )
      goto LABEL_10;
  }
  v21 = *(_DWORD *)v4;
  v8 = *(_DWORD *)(v4 + 4) - *(_DWORD *)v4;
  if ( v8 >> 13 )
    v8 = 0x2000;
  v9 = (*(int (__fastcall **)(unsigned int *, unsigned int, _BYTE *, unsigned int, _DWORD))(*a1 + 144))(
         a1,
         v21,
         v26,
         v8,
         0);
  v10 = v9 / 4 - 5;
  v11 = a3;
  if ( v9 < 24 )
  {
LABEL_34:
    sub_1BBA0((int)"Failed to find r_debug in /system/bin/linker\n");
    return 0;
  }
  v12 = v26;
  while ( 1 )
  {
    if ( *v12 != 1 || !v11 && v12[1] )
      goto LABEL_33;
    v13 = v12[2];
    if ( v13 >= v21 || (v12[2] & 1) == 0 || !v11 && v12[3] )
      goto LABEL_33;
    if ( v12[4] )
      goto LABEL_33;
    v14 = v13 & 0xFFFFFFFE;
    v15 = v14 + v24;
    if ( v14 >= v24 )
      v15 = v14;
    v20 = v15;
    if ( (*(int (__fastcall **)(unsigned int *))(*a1 + 144))(a1) == 2 && v25 == 18288 )
    {
      v16 = v20 + 1;
      v17 = (v20 + 1) & 1;
      v18 = 4;
      if ( v17 )
        v18 = 2;
      v19 = v16 - v17;
      if ( sub_1EE24((int)a1, -1, v16 - v17, a1 + 207, v18, 0) == v18 )
      {
        if ( (*(int (__fastcall **)(unsigned int *, _DWORD, int, unsigned int, int))(*a1 + 156))(a1, 0, 4, v19, v18) )
          break;
      }
    }
    v11 = a3;
LABEL_33:
    ++v12;
    if ( ++v5 >= v10 )
      goto LABEL_34;
  }
  *((_BYTE *)a1 + 832) = v18;
  a1[206] = v19;
  sub_1BC48((int)a1, "found r_debug (r_brk=%a)\n", v20);
  return 1;
}
// 1BAF4: variable 'v25' is possibly undefined
// B3CBE: using guessed type char byte_B3CBE;
