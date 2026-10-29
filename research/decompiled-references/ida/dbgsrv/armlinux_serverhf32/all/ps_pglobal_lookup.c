/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pglobal_lookup
// Address: 0x0001D2FC

//----- (0001D2FC) --------------------------------------------------------
int __fastcall ps_pglobal_lookup(size_t *a1, char *a2, char *s, int *a4)
{
  size_t v7; // r8
  int *v8; // r8
  char *v9; // r4
  char *v10; // r0
  const char *v11; // r1
  int v12; // r4
  size_t v14; // r2
  _DWORD *v15; // r8
  int *v16; // r6
  char *v17; // r0
  const char *v18; // r1
  void *v19; // r0
  int v20; // r2
  char *v21; // r8
  size_t v22; // r10
  _DWORD *v23; // r2
  int v24; // r11
  int v25; // r0
  int v26; // r10
  int v27; // r4
  int *v28; // r0
  size_t v29; // r8
  const char *v30; // r1
  unsigned int v31; // r0
  char *s2a; // [sp+4h] [bp-Ch]
  int v34; // [sp+8h] [bp-8h] BYREF
  int *v35; // [sp+Ch] [bp-4h]
  char *s1; // [sp+10h] [bp+0h] BYREF
  size_t v37; // [sp+14h] [bp+4h]
  int v38; // [sp+18h] [bp+8h]

  s1 = nullptr;
  v37 = 0;
  v38 = 0;
  if ( s )
  {
    v7 = strlen(s);
    s1 = (char *)sub_77EB0((int)&s1, nullptr, v7 + 1, 1u);
    v37 = v7 + 1;
    memmove(s1, s, v7);
    s1[v7] = 0;
  }
  v8 = sub_1618C((_DWORD *)dword_D3940, &dword_D393C, (int)&s1);
  if ( v8 == &dword_D393C )
  {
    v9 = s1;
  }
  else
  {
    v9 = s1;
    v10 = s1;
    if ( !v37 )
      v10 = (char *)&dword_8DA5C;
    if ( v8[5] )
      v11 = (const char *)v8[4];
    else
      v11 = (const char *)&dword_8DA5C;
    if ( strcmp(v10, v11) >= 0 )
    {
      if ( v9 )
      {
        v37 = 0;
        sub_77E08(v9);
      }
      v12 = v8[7];
      goto LABEL_13;
    }
  }
  if ( v9 )
  {
    v37 = 0;
    sub_77E08(v9);
  }
  v14 = *a1;
  v38 = 0;
  s1 = (char *)&off_CF52C;
  v37 = v14;
  sub_570F0((int (__fastcall ***)(_DWORD, int))&s1);
  v15 = (_DWORD *)v38;
  if ( v38 )
  {
    if ( *(_DWORD *)(v38 + 972) )
      sub_198D4((_DWORD *)v38, a2);
    v12 = sub_178C0(v15, s);
    if ( v12 != -1 )
      goto LABEL_23;
    if ( v15[285] == -1 )
      return 5;
    s1 = nullptr;
    v37 = 0;
    v38 = 0;
    if ( sub_7A72C(s, (int)&s1) )
    {
      v26 = strtoull(s1, nullptr, 16);
      if ( s1 )
      {
        v37 = 0;
        sub_77E08(s1);
      }
      v27 = v15[285];
      if ( v26 != -1 )
      {
        v12 = v27 + v26;
LABEL_23:
        s1 = nullptr;
        v37 = 0;
        v38 = 0;
        if ( s )
        {
          v29 = strlen(s);
          s1 = (char *)sub_77EB0((int)&s1, nullptr, v29 + 1, 1u);
          v37 = v29 + 1;
          memmove(s1, s, v29);
          s1[v29] = 0;
        }
        v16 = sub_1618C((_DWORD *)dword_D3940, &dword_D393C, (int)&s1);
        if ( v16 == &dword_D393C
          || (!v37 ? (v17 = (char *)&dword_8DA5C) : (v17 = s1),
              !v16[5] ? (v18 = (const char *)&dword_8DA5C) : (v18 = (const char *)v16[4]),
              strcmp(v17, v18) < 0) )
        {
          v19 = sub_805CC(0x20u);
          v20 = (int)v16;
          v16 = (int *)v19;
          v21 = s1;
          v22 = v37;
          *((_DWORD *)v19 + 6) = v38;
          *((_DWORD *)v19 + 4) = v21;
          *((_DWORD *)v19 + 5) = v22;
          *((_DWORD *)v19 + 7) = 0;
          s1 = nullptr;
          v37 = 0;
          v38 = 0;
          sub_1D1B4(&v34, &dword_D3938, v20, (const char **)v19 + 4);
          v24 = v34;
          v23 = v35;
          if ( v35 )
          {
            v25 = v35 == &dword_D393C;
            if ( v34 )
              v25 = 1;
            if ( !v25 )
            {
              if ( !v22 )
                v21 = (char *)&dword_8DA5C;
              if ( v35[5] )
                v30 = (const char *)v35[4];
              else
                v30 = (const char *)&dword_8DA5C;
              s2a = (char *)v35;
              v31 = strcmp(v21, v30);
              v23 = s2a;
              v25 = v31 >> 31;
            }
            sub_8132C((_DWORD *)v25, v16, v23, &dword_D393C);
            ++dword_D394C;
          }
          else
          {
            if ( v21 )
            {
              v16[5] = (int)v35;
              sub_77E08(v21);
            }
            v28 = v16;
            v16 = (int *)v24;
            sub_80648(v28);
          }
        }
        v16[7] = v12;
        if ( s1 )
        {
          v37 = 0;
          sub_77E08(s1);
        }
LABEL_13:
        *a4 = v12;
        return 0;
      }
    }
    else
    {
      if ( s1 )
      {
        v37 = 0;
        sub_77E08(s1);
      }
      v27 = v15[285];
    }
    if ( v27 != -1 )
      sub_1700C(
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
  return 2;
}
// 8DA5C: using guessed type int dword_8DA5C;
// CF52C: using guessed type _UNKNOWN *off_CF52C;
// D3938: using guessed type int dword_D3938;
// D393C: using guessed type int dword_D393C;
// D3940: using guessed type int dword_D3940;
// D394C: using guessed type int dword_D394C;
