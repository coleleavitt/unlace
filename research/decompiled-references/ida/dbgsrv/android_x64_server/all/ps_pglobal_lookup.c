/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_pglobal_lookup
// Address: 0x0000000000039860

//----- (0000000000039860) ----------------------------------------------------
__int64 __fastcall ps_pglobal_lookup(__int64 a1, const char *a2, char *a3, _QWORD *a4)
{
  __int64 v5; // r14
  void *v6; // rbx
  const char *v7; // rbp
  __int128 *v8; // r15
  const char *v9; // rdi
  int v10; // eax
  const char *v11; // rsi
  __int64 v12; // rbp
  unsigned int v13; // r15d
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rbp
  _QWORD *v19; // rax
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r14
  __int64 v22; // r15
  int v23; // ebx
  unsigned __int64 v24; // rbx
  __int64 v25; // rbp
  void *ptr[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v29; // [rsp+20h] [rbp-58h]
  _QWORD *v30[8]; // [rsp+38h] [rbp-40h] BYREF

  v30[1] = (_QWORD *)__readfsqword(0x28u);
  sub_37F60((__int64)ptr, a3);
  v5 = xmmword_155710;
  if ( !(_QWORD)xmmword_155710 )
  {
    v6 = ptr[0];
LABEL_16:
    v8 = &xmmword_155710;
    goto LABEL_17;
  }
  v6 = ptr[0];
  v7 = (const char *)ptr[0];
  if ( !ptr[1] )
    v7 = s1;
  v8 = &xmmword_155710;
  do
  {
    v9 = s1;
    if ( *(_QWORD *)(v5 + 40) )
      v9 = *(const char **)(v5 + 32);
    v10 = strcmp(v9, v7);
    if ( v10 >= 0 )
      v8 = (__int128 *)v5;
    v5 = *(_QWORD *)(v5 + 8LL * (v10 < 0));
  }
  while ( v5 );
  if ( v8 == &xmmword_155710 )
    goto LABEL_16;
  v11 = *((_QWORD *)v8 + 5) ? *((const char **)v8 + 4) : s1;
  if ( strcmp(v7, v11) < 0 )
    goto LABEL_16;
LABEL_17:
  if ( v6 )
  {
    ptr[1] = nullptr;
    qfree(v6);
    ptr[0] = nullptr;
    v29 = 0;
  }
  if ( v8 != &xmmword_155710 )
  {
    v12 = *((_QWORD *)v8 + 7);
LABEL_21:
    *a4 = v12;
    return 0;
  }
  v15 = sub_926A0(qword_1559F8);
  if ( !v15 )
    return 2;
  v16 = v15;
  sub_39C10(v15, a2);
  if ( a3 )
  {
    v17 = *(_DWORD *)(v16 + 896) - 1;
    while ( (int)v17 >= 0 )
    {
      if ( !strcmp(*(const char **)(*(_QWORD *)(v16 + 912) + 8 * v17--), a3) )
      {
        v19 = (_QWORD *)(v16 + 888);
        v20 = v17 + 1;
        goto LABEL_36;
      }
    }
    v21 = *(_QWORD *)(v16 + 944);
    if ( !v21 )
      goto LABEL_37;
    v22 = *(_QWORD *)(v16 + 960);
    v23 = 1;
    v20 = 0;
    while ( strcmp(*(const char **)(v22 + 8 * v20), a3) )
    {
      v20 = v23++;
      if ( v21 <= v20 )
        goto LABEL_37;
    }
    v19 = (_QWORD *)(v16 + 936);
LABEL_36:
    v12 = *(_QWORD *)(*v19 + 8 * v20);
    if ( v12 != -1 )
    {
LABEL_44:
      sub_37F60((__int64)ptr, a3);
      v30[0] = ptr;
      sub_4BAF0((__int64 **)&qword_155708, (__int64)ptr, (__int64)&word_FE3EE, v30)[7] = v12;
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        v29 = 0;
      }
      goto LABEL_21;
    }
  }
LABEL_37:
  v13 = 5;
  if ( *(_QWORD *)(v16 + 1280) == -1 )
    return v13;
  *(_OWORD *)ptr = 0;
  v29 = 0;
  v24 = -1;
  if ( (unsigned __int8)qgetenv(a3, (__int64)ptr) )
    v24 = strtoull((const char *)ptr[0], nullptr, 16);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v29 = 0;
  }
  v25 = *(_QWORD *)(v16 + 1280);
  if ( v24 != -1 )
  {
    v12 = v24 + v25;
    goto LABEL_44;
  }
  if ( v25 != -1 )
    sub_390A0(
      (int)"*WARNING* Failed to resolve name '%s' in libpthread shared object.\n"
           "          Support for multithread applications will be turned off.\n"
           "          We recommend you to analyze libpthread and provide the\n"
           "          missing symbol info as an environment variable:\n"
           "\n"
           "          export %s=####\n"
           "\n"
           "          where #### is the hexadecimal address of the symbol.\n"
           "          The full list of symbols is in syms_as_envvars.py\n",
      a3,
      a3);
  return v13;
}
// FE3EE: using guessed type __int16 word_FE3EE;
// 155708: using guessed type __int64 qword_155708;
// 155710: using guessed type __int128 xmmword_155710;
// 1559F8: using guessed type __int64 qword_1559F8;
