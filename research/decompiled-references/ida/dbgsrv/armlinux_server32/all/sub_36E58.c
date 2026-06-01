/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36E58
// Address: 0x00036E58

//----- (00036E58) --------------------------------------------------------
int __fastcall sub_36E58(_DWORD *a1, int a2)
{
  pthread_mutex_t *v4; // r8
  int *v5; // r0
  unsigned __int8 *v6; // r1
  FILE *v7; // r4
  _DWORD *v8; // r1
  int v9; // r3
  int v11; // [sp+0h] [bp-8h] BYREF

  v4 = (pthread_mutex_t *)dword_D4AB0;
  sub_7A268((pthread_mutex_t *)dword_D4AB0);
  if ( a1[3] )
    v5 = (int *)a1[2];
  else
    v5 = &dword_8DB98;
  if ( a1[9] )
    v6 = (unsigned __int8 *)a1[8];
  else
    v6 = (unsigned __int8 *)&dword_8DB98;
  v7 = sub_75D50((int)v5, v6);
  if ( !v7 )
    goto LABEL_10;
  v9 = dword_D49F0;
  v8 = (_DWORD *)dword_D49EC;
  if ( !dword_D49F0 )
  {
    v11 = 0;
    if ( dword_D49EC <= (unsigned int)&v11 && (unsigned int)&v11 < dword_D49EC + 4 * dword_D49F4 )
    {
      if ( dword_D49F4 )
        goto LABEL_17;
    }
    else if ( dword_D49F4 )
    {
LABEL_17:
      v8[v9] = 0;
      v8 = (_DWORD *)dword_D49EC;
      v9 = ++dword_D49F0;
      goto LABEL_7;
    }
    v8 = sub_78018((int)&dword_D49EC, (void *)dword_D49EC, 1u, 4u);
    v9 = dword_D49F0;
    dword_D49EC = (int)v8;
    goto LABEL_17;
  }
LABEL_7:
  *(_DWORD *)(a2 + 8) = v9;
  if ( v9 + 1 > (unsigned int)dword_D49F4 )
  {
    v8 = sub_78018((int)&dword_D49EC, v8, v9 + 1, 4u);
    v9 = dword_D49F0;
    dword_D49EC = (int)v8;
  }
  v8[v9] = v7;
  ++dword_D49F0;
LABEL_10:
  sub_7A290(v4);
  return 0;
}
// 8DB98: using guessed type int dword_8DB98;
// D49EC: using guessed type int dword_D49EC;
// D49F0: using guessed type int dword_D49F0;
// D49F4: using guessed type int dword_D49F4;
// D4AB0: using guessed type int dword_D4AB0;
