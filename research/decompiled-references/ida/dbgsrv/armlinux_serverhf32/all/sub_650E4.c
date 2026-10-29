/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_650E4
// Address: 0x000650E4

//----- (000650E4) --------------------------------------------------------
int __fastcall sub_650E4(_DWORD *a1, int a2, int a3)
{
  int v4; // r6
  _DWORD *v5; // r2
  int v6; // r3
  int v8; // r6
  _DWORD *v9; // r2
  int v10; // r3
  _DWORD *v11; // r3
  int (*v12)(); // r2
  _DWORD *v13; // r3
  int (*v14)(); // r2
  int (*v15)(void); // r2
  int v16; // r0
  int v17; // r0
  int v18; // [sp+4h] [bp-4h]
  int v19; // [sp+4h] [bp-4h]

  if ( a3 != 8 )
  {
    v8 = a1[115];
    if ( v8 < 0 )
    {
      v14 = *(int (**)())(*a1 + 312);
      if ( v14 == sub_14F28 || (v19 = a2, v17 = v14(), v8 = v17, v17 < 0) )
      {
        a1[115] = 0;
        return 0;
      }
      a2 = v19;
      if ( v17 >= 16 )
        v8 = 16;
      a1[115] = v8;
    }
    if ( !v8 )
      return 0;
    if ( a2 != a1[165] )
    {
      v9 = a1;
      v10 = 0;
      while ( 1 )
      {
        ++v10;
        v9 += 3;
        if ( v10 == v8 )
          return 0;
        if ( v9[165] == a2 )
          goto LABEL_18;
      }
    }
    v10 = 0;
LABEL_18:
    v11 = &a1[3 * v10];
    *((_QWORD *)v11 + 82) = -4294967284LL;
    v11[166] = 0;
    goto LABEL_19;
  }
  v4 = a1[114];
  if ( v4 >= 0 )
  {
LABEL_3:
    if ( !v4 )
      return 0;
    if ( a2 != a1[117] )
    {
      v5 = a1;
      v6 = 0;
      while ( 1 )
      {
        ++v6;
        v5 += 3;
        if ( v4 == v6 )
          return 0;
        if ( v5[117] == a2 )
          goto LABEL_21;
      }
    }
    v6 = 0;
LABEL_21:
    v13 = &a1[3 * v6];
    *((_QWORD *)v13 + 58) = -4294967284LL;
    v13[118] = 0;
LABEL_19:
    v12 = *(int (**)())(*a1 + 324);
    if ( v12 != sub_14F38 )
      return ((int (__fastcall *)(_DWORD *))v12)(a1);
    return 0;
  }
  v15 = *(int (**)(void))(*a1 + 308);
  if ( v15 != sub_14F20 )
  {
    v18 = a2;
    v16 = v15();
    v4 = v16;
    if ( v16 >= 0 )
    {
      a2 = v18;
      if ( v16 >= 16 )
        v4 = 16;
      a1[114] = v4;
      goto LABEL_3;
    }
  }
  a1[114] = 0;
  return 0;
}
