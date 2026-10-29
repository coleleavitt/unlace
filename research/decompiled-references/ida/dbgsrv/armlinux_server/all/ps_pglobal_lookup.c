/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pglobal_lookup
// Address: 0x0000000000413B50

//----- (0000000000413B50) ----------------------------------------------------
__int64 __fastcall ps_pglobal_lookup(_DWORD *a1, char *a2, char *s, __int64 *a4)
{
  size_t v8; // x0
  size_t v9; // x26
  size_t v10; // x22
  int *v11; // x0
  int *v12; // x26
  __int64 v13; // x2
  char *v14; // x27
  char *v15; // x0
  __int64 v16; // x24
  _QWORD *v18; // x26
  char v19; // w0
  char *v20; // x3
  unsigned __int64 v21; // x25
  __int64 v22; // x24
  int *v23; // x0
  void *v24; // x20
  __int64 v25; // x2
  char *v26; // x0
  const char *v27; // x1
  _QWORD *v28; // x25
  size_t v29; // x1
  __int64 v30; // x0
  _QWORD *v31; // x0
  __int64 v32; // x1
  _QWORD *v33; // x25
  _QWORD *v34; // x2
  int v35; // w0
  void *v36; // x0
  void *v37; // x0
  size_t v38; // x25
  const char *v39; // x0
  const char *v40; // x1
  unsigned int v41; // w0
  _QWORD *v42; // [xsp+58h] [xbp-28h]
  char *nptr; // [xsp+60h] [xbp-20h] BYREF
  size_t v44; // [xsp+68h] [xbp-18h]
  int v45[2]; // [xsp+70h] [xbp-10h]

  nptr = nullptr;
  v44 = 0;
  *(_QWORD *)v45 = 0;
  if ( s )
  {
    v8 = strlen(s);
    v9 = v8 + 1;
    v10 = v8;
    nptr = (char *)sub_491288((__int64)&nptr, nullptr, v8 + 1, 1u);
    v44 = v9;
    memmove(nptr, s, v10);
    nptr[v10] = 0;
  }
  v11 = (int *)sub_408E88((_QWORD *)qword_522050, &dword_522048, (__int64)&nptr);
  v12 = v11;
  if ( v11 == &dword_522048 )
  {
    v14 = nptr;
  }
  else
  {
    v13 = *((_QWORD *)v11 + 5);
    v14 = nptr;
    if ( v44 )
      v15 = nptr;
    else
      v15 = (char *)&qword_4B2D48;
    if ( v13 )
    {
      if ( (strcmp(v15, *((const char **)v12 + 4)) & 0x80000000) == 0 )
        goto LABEL_9;
    }
    else if ( (strcmp(v15, (const char *)&qword_4B2D48) & 0x80000000) == 0 )
    {
LABEL_9:
      if ( v14 )
      {
        v44 = 0;
        j__free(v14);
      }
      v16 = *((_QWORD *)v12 + 7);
LABEL_12:
      *a4 = v16;
      return 0;
    }
  }
  if ( v14 )
  {
    v44 = 0;
    j__free(v14);
  }
  LODWORD(v44) = *a1;
  nptr = (char *)&off_519A58;
  *(_QWORD *)v45 = 0;
  sub_461B90((__int64 (__fastcall ***)(_QWORD, __int64))&nptr);
  v18 = *(_QWORD **)v45;
  if ( !*(_QWORD *)v45 )
    return 2;
  if ( *(_QWORD *)(*(_QWORD *)v45 + 1856LL) )
    sub_40E368(*(_QWORD **)v45, a2);
  v16 = sub_40B588(v18, s);
  if ( v16 != -1 )
    goto LABEL_30;
  if ( v18[271] == -1 )
    return 5;
  nptr = nullptr;
  v44 = 0;
  *(_QWORD *)v45 = 0;
  v19 = sub_4950A8(s, (__int64)&nptr);
  v20 = nptr;
  if ( v19 )
  {
    v21 = strtoull(nptr, nullptr, 16);
    if ( nptr )
    {
      v44 = 0;
      j__free(nptr);
    }
    v22 = v18[271];
    if ( v21 != -1 )
    {
      v16 = v21 + v22;
LABEL_30:
      nptr = nullptr;
      v44 = 0;
      *(_QWORD *)v45 = 0;
      if ( s )
      {
        v38 = strlen(s);
        nptr = (char *)sub_491288((__int64)&nptr, nullptr, v38 + 1, 1u);
        v44 = v38 + 1;
        memmove(nptr, s, v38);
        nptr[v38] = 0;
      }
      v23 = (int *)sub_408E88((_QWORD *)qword_522050, &dword_522048, (__int64)&nptr);
      v24 = v23;
      if ( v23 == &dword_522048 )
        goto LABEL_40;
      v25 = *((_QWORD *)v23 + 5);
      v26 = nptr;
      v27 = (const char *)&qword_4B2D48;
      if ( !v44 )
        v26 = (char *)&qword_4B2D48;
      if ( v25 )
        v27 = *((const char **)v24 + 4);
      if ( strcmp(v26, v27) < 0 )
      {
LABEL_40:
        v28 = v24;
        v24 = sub_49E050(0x40u);
        v29 = v44;
        v30 = *(_QWORD *)v45;
        *((_QWORD *)v24 + 4) = nptr;
        *((_QWORD *)v24 + 5) = v29;
        *((_QWORD *)v24 + 6) = v30;
        *((_QWORD *)v24 + 7) = 0;
        nptr = nullptr;
        v44 = 0;
        *(_QWORD *)v45 = 0;
        v31 = sub_413960(&qword_522040, v28, (const char **)v24 + 4);
        v33 = v31;
        v34 = (_QWORD *)v32;
        if ( v32 )
        {
          v35 = v31 != nullptr;
          if ( (int *)v32 == &dword_522048 )
            v35 = 1;
          if ( !v35 )
          {
            if ( *((_QWORD *)v24 + 5) )
              v39 = *((const char **)v24 + 4);
            else
              v39 = (const char *)&qword_4B2D48;
            if ( *(_QWORD *)(v32 + 40) )
              v40 = *(const char **)(v32 + 32);
            else
              v40 = (const char *)&qword_4B2D48;
            v42 = v34;
            v41 = strcmp(v39, v40);
            v34 = v42;
            v35 = v41 >> 31;
          }
          sub_49F830(v35, (__int64)v24, v34, &dword_522048);
          ++qword_522068;
        }
        else
        {
          v36 = *((void **)v24 + 4);
          if ( v36 )
          {
            *((_QWORD *)v24 + 5) = 0;
            j__free(v36);
          }
          v37 = v24;
          v24 = v33;
          j__free_0(v37);
        }
      }
      *((_QWORD *)v24 + 7) = v16;
      if ( nptr )
      {
        v44 = 0;
        j__free(nptr);
      }
      goto LABEL_12;
    }
  }
  else
  {
    if ( nptr )
    {
      v44 = 0;
      j__free(nptr);
    }
    v22 = v18[271];
  }
  if ( v22 == -1 )
    return 5;
  sub_40A690(
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
    s,
    v20);
  return 5;
}
// 413E08: variable 'v32' is possibly undefined
// 413EF4: variable 'v20' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 519A58: using guessed type __int64 (__fastcall *off_519A58)();
// 522040: using guessed type __int64 qword_522040;
// 522048: using guessed type int dword_522048;
// 522050: using guessed type __int64 qword_522050;
// 522068: using guessed type __int64 qword_522068;
