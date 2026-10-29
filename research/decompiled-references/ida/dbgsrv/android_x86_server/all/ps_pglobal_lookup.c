/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pglobal_lookup
// Address: 0x0001D0E0

//----- (0001D0E0) --------------------------------------------------------
int __cdecl ps_pglobal_lookup(int a1, char *a2, char *s2, int *a4)
{
  int v4; // edi
  char *v5; // eax
  int *v6; // esi
  const char *v7; // eax
  int v8; // eax
  const char *v9; // eax
  void *v10; // eax
  bool v11; // sf
  int v12; // edi
  int result; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // esi
  int v16; // eax
  int v17; // edi
  bool v18; // zf
  _DWORD *v19; // eax
  char v20; // al
  int v21; // ecx
  int v22; // edi
  int v23; // edi
  const char *v24; // [esp+24h] [ebp-48h]
  unsigned int v25; // [esp+24h] [ebp-48h]
  int v26; // [esp+28h] [ebp-44h]
  int v27; // [esp+2Ch] [ebp-40h]
  int v28; // [esp+30h] [ebp-3Ch] BYREF
  int v29; // [esp+34h] [ebp-38h]
  int v30; // [esp+38h] [ebp-34h]
  int *v31; // [esp+48h] [ebp-24h] BYREF
  _DWORD v32[7]; // [esp+50h] [ebp-1Ch] BYREF

  v32[2] = __readgsdword(0x14u);
  sub_1B530((int)&v28, s2);
  v4 = dword_13BCD0;
  if ( !dword_13BCD0 )
  {
    v10 = (void *)v28;
LABEL_17:
    v6 = &dword_13BCD0;
    goto LABEL_18;
  }
  v5 = (char *)v28;
  v27 = v28;
  if ( !v29 )
    v5 = byte_EF875;
  v24 = v5;
  v6 = &dword_13BCD0;
  do
  {
    v7 = byte_EF875;
    if ( *(_DWORD *)(v4 + 20) )
      v7 = *(const char **)(v4 + 16);
    v8 = strcmp(v7, v24);
    if ( v8 >= 0 )
      v6 = (int *)v4;
    v4 = *(_DWORD *)(v4 + 4 * ((unsigned int)v8 >> 31));
  }
  while ( v4 );
  if ( v6 == &dword_13BCD0 )
  {
    v10 = (void *)v27;
    goto LABEL_17;
  }
  if ( v6[5] )
    v9 = (const char *)v6[4];
  else
    v9 = byte_EF875;
  v11 = strcmp(v24, v9) < 0;
  v10 = (void *)v27;
  if ( v11 )
    goto LABEL_17;
LABEL_18:
  if ( v10 )
  {
    v29 = 0;
    qfree(v10);
    v28 = 0;
    v30 = 0;
  }
  if ( v6 != &dword_13BCD0 )
  {
    v12 = v6[7];
LABEL_22:
    *a4 = v12;
    return 0;
  }
  v14 = (_DWORD *)sub_7C040(dword_13BE90);
  if ( !v14 )
    return 2;
  v15 = v14;
  sub_1D4A0(v14, a2);
  if ( s2 )
  {
    v16 = v15[125];
    v17 = v16;
    while ( --v17 >= 0 )
    {
      v18 = strcmp(*(const char **)(v15[127] + 4 * v16 - 4), s2) == 0;
      v16 = v17;
      if ( v18 )
      {
        v19 = v15 + 124;
        goto LABEL_37;
      }
    }
    v25 = v15[131];
    if ( !v25 )
      goto LABEL_38;
    v26 = v15[133];
    v17 = 0;
    while ( strcmp(*(const char **)(v26 + 4 * v17), s2) )
    {
      if ( ++v17 >= v25 )
        goto LABEL_38;
    }
    v19 = v15 + 130;
LABEL_37:
    v12 = *(_DWORD *)(*v19 + 4 * v17);
    if ( v12 != -1 )
    {
LABEL_45:
      sub_1B530((int)&v28, s2);
      v31 = &v28;
      sub_2EAC0((int)v32, (int **)&dword_13BCCC, (int)&v28, (int)&word_EFDAE, &v31);
      *(_DWORD *)(v32[0] + 28) = v12;
      if ( v28 )
      {
        v29 = 0;
        qfree((void *)v28);
        v28 = 0;
        v30 = 0;
      }
      goto LABEL_22;
    }
  }
LABEL_38:
  result = 5;
  if ( v15[176] != -1 )
  {
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v20 = qgetenv(s2, (int)&v28);
    v21 = -1;
    if ( v20 )
      v21 = strtoull((const char *)v28, nullptr, 16);
    if ( v28 )
    {
      v22 = v21;
      v29 = 0;
      qfree((void *)v28);
      v28 = 0;
      v30 = 0;
      v21 = v22;
    }
    v23 = v15[176];
    if ( v21 != -1 )
    {
      v12 = v21 + v23;
      goto LABEL_45;
    }
    if ( v23 != -1 )
      sub_1C900();
    return 5;
  }
  return result;
}
// EFDAE: using guessed type __int16 word_EFDAE;
// 13BCCC: using guessed type int dword_13BCCC;
// 13BCD0: using guessed type int dword_13BCD0;
// 13BE90: using guessed type int dword_13BE90;
