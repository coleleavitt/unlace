/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D66C
// Address: 0x0003D66C

//----- (0003D66C) --------------------------------------------------------
int __fastcall sub_3D66C(int a1)
{
  int v1; // r4
  pthread_mutex_t *v3; // r8
  int v4; // r6
  int v5; // r9
  void *v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // t1
  int v10; // r3
  _DWORD *v11; // r2
  unsigned int v12; // r2

  if ( !a1 )
    return -1;
  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 )
    return -1;
  v3 = (pthread_mutex_t *)dword_D4A20;
  sub_7A268((pthread_mutex_t *)dword_D4A20);
  v4 = dword_D4A18;
  v5 = dword_D4A18;
  if ( dword_D4A18 <= 0 )
  {
    v11 = (_DWORD *)dword_D4A14;
    if ( !dword_D4A18 )
    {
      v6 = (void *)dword_D4A14;
LABEL_12:
      v12 = dword_D4A18 + 1;
      if ( dword_D4A18 + 1 > (unsigned int)dword_D4A1C )
      {
        v6 = sub_78018((int)&dword_D4A14, v6, v12, 4u);
        v4 = dword_D4A18;
        dword_D4A14 = (int)v6;
        v12 = dword_D4A18 + 1;
      }
      v1 = v5;
      dword_D4A18 = v12;
      *((_DWORD *)v6 + v4) = a1;
      goto LABEL_20;
    }
LABEL_19:
    *v11 = a1;
LABEL_20:
    nullsub_11(0, a1, v1);
    goto LABEL_16;
  }
  v6 = (void *)dword_D4A14;
  if ( a1 != *(_DWORD *)dword_D4A14 )
  {
    v7 = dword_D4A14;
    v8 = 0;
    while ( dword_D4A18 != ++v8 )
    {
      v9 = *(_DWORD *)(v7 + 4);
      v7 += 4;
      if ( v9 == a1 )
        goto LABEL_15;
    }
    if ( *(_DWORD *)dword_D4A14 )
    {
      v10 = dword_D4A14 + 4;
      while ( dword_D4A18 != ++v1 )
      {
        v11 = (_DWORD *)v10;
        v10 += 4;
        if ( !*v11 )
          goto LABEL_19;
      }
      goto LABEL_12;
    }
    v11 = (_DWORD *)dword_D4A14;
    goto LABEL_19;
  }
LABEL_15:
  v1 = -1;
LABEL_16:
  sub_7A290(v3);
  return v1;
}
// 6AEA8: using guessed type int __fastcall nullsub_11(_DWORD, _DWORD, _DWORD);
// D4A14: using guessed type int dword_D4A14;
// D4A18: using guessed type int dword_D4A18;
// D4A1C: using guessed type int dword_D4A1C;
// D4A20: using guessed type int dword_D4A20;
