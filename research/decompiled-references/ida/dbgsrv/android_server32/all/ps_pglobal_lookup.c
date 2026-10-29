/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pglobal_lookup
// Address: 0x0001C0A8

//----- (0001C0A8) --------------------------------------------------------
int __fastcall ps_pglobal_lookup(int a1, const char *a2, char *s, int *a4)
{
  int v4; // r5
  char *v5; // r6
  int *v6; // r7
  const char *v7; // r0
  int v8; // r0
  int *v9; // r1
  const char *v10; // r1
  char *v11; // r0
  bool v12; // nf
  int v13; // r5
  int v14; // r4
  int v16; // r0
  _DWORD *v17; // r7
  int v18; // r4
  int v19; // r6
  int v20; // r0
  int v21; // r0
  unsigned int v22; // r5
  const char **v23; // r6
  int *v24; // r5
  int v25; // r7
  int v26; // r0
  char *v28; // [sp+10h] [bp-34h]
  char *nptr; // [sp+24h] [bp-20h] BYREF
  int v32; // [sp+28h] [bp-1Ch]
  int v33; // [sp+2Ch] [bp-18h]
  char **p_nptr; // [sp+34h] [bp-10h] BYREF
  int v35; // [sp+38h] [bp-Ch] BYREF

  sub_1B09C((int)&nptr, s);
  v4 = dword_DE2E0;
  if ( !dword_DE2E0 )
  {
    v11 = nptr;
LABEL_20:
    v6 = &dword_DE2E0;
    goto LABEL_21;
  }
  v5 = &byte_B3CBE;
  if ( v32 )
    v5 = nptr;
  v28 = nptr;
  v6 = &dword_DE2E0;
  do
  {
    v7 = &byte_B3CBE;
    if ( *(_DWORD *)(v4 + 20) )
      v7 = *(const char **)(v4 + 16);
    v8 = strcmp(v7, v5);
    if ( v8 >= 0 )
      v6 = (int *)v4;
    v9 = (int *)(v4 + 4);
    if ( v8 >= 0 )
      v9 = (int *)v4;
    v4 = *v9;
  }
  while ( *v9 );
  if ( v6 == &dword_DE2E0 )
  {
    v11 = v28;
    goto LABEL_20;
  }
  if ( v6[5] )
    v10 = (const char *)v6[4];
  else
    v10 = &byte_B3CBE;
  v12 = strcmp(v5, v10) < 0;
  v11 = v28;
  if ( v12 )
    goto LABEL_20;
LABEL_21:
  if ( v11 )
  {
    v32 = 0;
    qfree(v11);
    v33 = 0;
    nptr = nullptr;
  }
  if ( v6 != &dword_DE2E0 )
  {
    v13 = v6[7];
LABEL_25:
    *a4 = v13;
    return 0;
  }
  v16 = sub_5AB44(dword_DE4A8);
  v14 = 2;
  if ( !v16 )
    return v14;
  v17 = (_DWORD *)v16;
  sub_1C304(v16, a2);
  if ( s )
  {
    v18 = v17[211];
    v19 = 4 * v18 - 4;
    while ( --v18 >= 0 )
    {
      v20 = strcmp(*(const char **)(v17[213] + v19), s);
      v19 -= 4;
      if ( !v20 )
      {
        v21 = 210;
        goto LABEL_39;
      }
    }
    v22 = v17[217];
    if ( !v22 )
      goto LABEL_40;
    v23 = (const char **)v17[219];
    v18 = 0;
    while ( strcmp(*v23, s) )
    {
      ++v23;
      if ( ++v18 >= v22 )
        goto LABEL_40;
    }
    v21 = 216;
LABEL_39:
    v13 = *(_DWORD *)(v17[v21] + 4 * v18);
    if ( v13 != -1 )
    {
LABEL_47:
      sub_1B09C((int)&nptr, s);
      p_nptr = &nptr;
      sub_26F94((int)&v35, (int **)&dword_DE2DC, (int)&nptr, (int)&word_B3D0E, (int **)&p_nptr);
      *(_DWORD *)(v35 + 28) = v13;
      if ( nptr )
      {
        v32 = 0;
        qfree(nptr);
        v33 = 0;
        nptr = nullptr;
      }
      goto LABEL_25;
    }
  }
LABEL_40:
  v24 = v17 + 262;
  v14 = 5;
  if ( v17[262] == -1 )
    return v14;
  v32 = 0;
  nptr = nullptr;
  v33 = 0;
  v25 = -1;
  if ( qgetenv(s, (int)&nptr) )
    v25 = strtoull(nptr, nullptr, 16);
  if ( nptr )
  {
    v32 = 0;
    qfree(nptr);
    v33 = 0;
    nptr = nullptr;
  }
  v26 = *v24;
  if ( v25 != -1 )
  {
    v13 = v26 + v25;
    goto LABEL_47;
  }
  if ( v26 != -1 )
  {
    sub_1BBA0(
      (int)"*WARNING* Failed to resolve name '%s' in libpthread shared object.\n"
           "          Support for multithread applications will be turned off.\n"
           "          We recommend you to analyze libpthread and provide the\n"
           "          missing symbol info as an environment variable:\n"
           "\n"
           "          export %s=####\n"
           "\n"
           "          where #### is the hexadecimal address of the symbol.\n"
           "          The full list of symbols is in syms_as_envvars.py\n",
      s,
      s);
    return 5;
  }
  return v14;
}
// B3CBE: using guessed type char byte_B3CBE;
// B3D0E: using guessed type __int16 word_B3D0E;
// DE2DC: using guessed type int dword_DE2DC;
// DE2E0: using guessed type int dword_DE2E0;
// DE4A8: using guessed type int dword_DE4A8;
