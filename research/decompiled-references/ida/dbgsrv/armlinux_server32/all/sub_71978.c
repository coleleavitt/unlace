/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71978
// Address: 0x00071978

//----- (00071978) --------------------------------------------------------
int __fastcall sub_71978(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v4; // r6
  int v5; // r9
  int v6; // r6
  int v7; // r9
  unsigned __int16 *v8; // r10
  unsigned __int16 *v9; // r11
  unsigned __int16 *v10; // r2
  unsigned __int16 *v11; // r1
  unsigned int v12; // r12
  unsigned int v13; // t1
  unsigned int v14; // t1
  bool v15; // cc
  unsigned __int16 *v16; // r0
  _WORD *v17; // r1
  int v18; // r12
  int v19; // lr
  int v20; // t1
  int v21; // t1
  unsigned int v22; // r2
  __int16 v23; // r12
  char *v24; // r0
  __int16 v25; // r1
  __int16 v26; // t1
  __int16 v27; // r2
  bool v28; // nf
  _DWORD v30[4]; // [sp+18h] [bp-1Ch] BYREF
  unsigned __int16 v31; // [sp+28h] [bp-Ch]
  char v32; // [sp+2Ah] [bp-Ah] BYREF

  v4 = a1[1];
  v5 = a2[1];
  v6 = v4 - sub_714A0(a1);
  v7 = v5 - sub_714A0(a2);
  memset(v30, 0, sizeof(v30));
  v31 = 0;
  if ( v6 <= v7 )
  {
    v8 = a1 + 1;
    v9 = a1 + 10;
    do
    {
      v10 = v8;
      v11 = a2 + 1;
      while ( 1 )
      {
        v13 = v10[1];
        ++v10;
        v12 = v13;
        v14 = v11[1];
        ++v11;
        v15 = v12 > v14;
        if ( v12 != v14 )
          break;
        if ( v10 == v9 )
          goto LABEL_6;
      }
      if ( v15 )
      {
        v23 = 0;
        goto LABEL_9;
      }
LABEL_6:
      v16 = v9;
      v17 = a2 + 11;
      v18 = 0;
      do
      {
        v20 = *v16--;
        v19 = v20;
        v21 = (unsigned __int16)*--v17;
        v22 = v21 - v19 - v18;
        *v17 = v22;
        v18 = HIWORD(v22) & 1;
      }
      while ( v8 != v16 );
      v23 = 1;
LABEL_9:
      v24 = &v32;
      v25 = 0;
      do
      {
        v26 = *((_WORD *)v24 - 1);
        v24 -= 2;
        v27 = 2 * v26;
        if ( v26 < 0 )
          v25 |= 1u;
        v28 = (v25 & 2) != 0;
        v25 *= 2;
        if ( v28 )
          v27 |= 1u;
        *(_WORD *)v24 = v27;
      }
      while ( v30 != (_DWORD *)v24 );
      --v7;
      v31 |= v23;
      sub_711A8((int)a2);
    }
    while ( v6 <= v7 );
  }
  sub_716CC((int)a2, 0, 0, v7, 0);
  return v31;
}
