/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pglobal_lookup
// Address: 0x000000000003A54C

//----- (000000000003A54C) ----------------------------------------------------
__int64 __fastcall ps_pglobal_lookup(int a1, char *a2, char *s, __int64 *a4)
{
  void *v7; // x26
  char *v8; // x21
  char *v9; // x23
  _UNKNOWN **v10; // x25
  const char *v11; // x0
  int v12; // w0
  const char *v13; // x1
  __int64 v14; // x22
  _QWORD *v16; // x0
  _QWORD *v17; // x21
  __int64 v18; // x22
  _QWORD *v20; // x8
  __int64 v21; // x22
  unsigned __int64 v22; // x23
  __int64 v23; // x25
  int v24; // w26
  unsigned __int64 v26; // x22
  char *v27; // x0
  __int64 v28; // x8
  char *nptr; // [xsp+0h] [xbp-90h] BYREF
  __int64 v30; // [xsp+8h] [xbp-88h]
  __int64 v31; // [xsp+10h] [xbp-80h]
  __int64 *v32[2]; // [xsp+20h] [xbp-70h] BYREF

  v32[1] = *(__int64 **)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_39140(&nptr, s);
  v7 = off_1669E0;
  if ( !off_1669E0 )
  {
    v8 = nptr;
    goto LABEL_20;
  }
  v8 = nptr;
  if ( v30 )
    v9 = nptr;
  else
    v9 = &byte_F154B;
  v10 = &off_1669E0;
  do
  {
    if ( *((_QWORD *)v7 + 5) )
      v11 = *((const char **)v7 + 4);
    else
      v11 = &byte_F154B;
    v12 = strcmp(v11, v9);
    if ( v12 >= 0 )
      v10 = (_UNKNOWN **)v7;
    v7 = *((void **)v7 + (v12 < 0));
  }
  while ( v7 );
  if ( v10 == &off_1669E0 || (v10[5] ? (v13 = (const char *)v10[4]) : (v13 = &byte_F154B), strcmp(v9, v13) < 0) )
  {
LABEL_20:
    v10 = &off_1669E0;
    if ( !v8 )
      goto LABEL_22;
    goto LABEL_21;
  }
  if ( v8 )
  {
LABEL_21:
    v30 = 0;
    qfree(v8);
    nptr = nullptr;
    v31 = 0;
  }
LABEL_22:
  if ( v10 != &off_1669E0 )
  {
    v14 = (__int64)v10[7];
LABEL_24:
    *a4 = v14;
    return 0;
  }
  v16 = (_QWORD *)sub_8CA28(qword_166CB0);
  if ( !v16 )
    return 2;
  v17 = v16;
  sub_3A868(v16, a2);
  if ( s )
  {
    v18 = *((_DWORD *)v17 + 400) - 1;
    while ( (v18 & 0x80000000) == 0 )
    {
      if ( !strcmp(*(const char **)(v17[202] + 8 * v18--), s) )
      {
        v20 = v17 + 199;
        v21 = v18 + 1;
        goto LABEL_38;
      }
    }
    v22 = v17[206];
    if ( !v22 )
      goto LABEL_39;
    v23 = v17[208];
    v21 = 0;
    v24 = 1;
    while ( strcmp(*(const char **)(v23 + 8 * v21), s) )
    {
      v21 = v24;
      if ( v22 <= v24++ )
        goto LABEL_39;
    }
    v20 = v17 + 205;
LABEL_38:
    v14 = *(_QWORD *)(*v20 + 8 * v21);
    if ( v14 != -1 )
      goto LABEL_47;
  }
LABEL_39:
  if ( v17[248] != -1 )
  {
    nptr = nullptr;
    v30 = 0;
    v31 = 0;
    if ( (qgetenv(s, (__int64)&nptr) & 1) != 0 )
    {
      v26 = strtoull(nptr, nullptr, 16);
      v27 = nptr;
      if ( !nptr )
        goto LABEL_45;
    }
    else
    {
      v26 = -1;
      v27 = nptr;
      if ( !nptr )
      {
LABEL_45:
        v28 = v17[248];
        if ( v26 != -1 )
        {
          v14 = v28 + v26;
LABEL_47:
          sub_39140(&nptr, s);
          v32[0] = (__int64 *)&nptr;
          sub_4A4A4((__int64 **)&qword_1669D8, (__int64)&nptr, (__int64)&byte_F2BC1, v32)[7] = v14;
          if ( nptr )
          {
            v30 = 0;
            qfree(nptr);
            nptr = nullptr;
            v31 = 0;
          }
          goto LABEL_24;
        }
        if ( v28 != -1 )
          sub_39FA0(
            (__int64)"*WARNING* Failed to resolve name '%s' in libpthread shared object.\n"
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
    }
    v30 = 0;
    qfree(v27);
    nptr = nullptr;
    v31 = 0;
    goto LABEL_45;
  }
  return 5;
}
// F154B: using guessed type char byte_F154B;
// F2BC1: using guessed type char byte_F2BC1;
// 1669D8: using guessed type __int64 qword_1669D8;
// 1669E0: using guessed type _UNKNOWN *off_1669E0;
// 166CB0: using guessed type __int64 qword_166CB0;
