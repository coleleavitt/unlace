unsigned __int64 __fastcall sub_13D60(__int64 a1, char a2)
{
  char *v2; // r15
  char *v3; // r13
  __int64 v4; // rbp
  size_t v5; // r14
  char *v6; // rax
  char *v7; // rbx
  __int64 v8; // rsi
  size_t v9; // r10
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rsi
  size_t v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rbp
  const char *v16; // r12
  const char *v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v24; // rax
  int v25; // eax
  bool v26; // dl
  _BOOL8 v27; // rdx
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rdi
  size_t v32; // [rsp+8h] [rbp-A0h]
  size_t v33; // [rsp+10h] [rbp-98h]
  __int128 v35; // [rsp+20h] [rbp-88h] BYREF
  char *s; // [rsp+30h] [rbp-78h] BYREF
  __int128 v37; // [rsp+38h] [rbp-70h]
  __int64 v38; // [rsp+50h] [rbp-58h] BYREF
  __int128 v39; // [rsp+58h] [rbp-50h]
  unsigned __int64 v40; // [rsp+68h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v37 = 0;
  s = nullptr;
  get_abi_name(&s);
  v2 = s;
  v38 = 0;
  v39 = 0;
  if ( !(_QWORD)v37 )
    goto LABEL_18;
  v3 = &s[v37 - 1];
  if ( s >= v3 )
    goto LABEL_18;
  v4 = 0;
  do
  {
    v6 = strchr(v2, 45);
    v5 = v3 - v2;
    v7 = v6;
    if ( v6 )
    {
      v5 = v6 - v2;
      if ( v6 == v2 )
        goto LABEL_5;
    }
    v8 = v38;
    if ( *((_QWORD *)&v39 + 1) < (unsigned __int64)(v4 + 1) )
    {
      v38 = qvector_reserve(&v38, v38, v4 + 1, 24);
      v4 = v39;
      v8 = v38;
    }
    v9 = v5;
    v10 = v8 + 24 * v4;
    *(_OWORD *)(v10 + 8) = 0;
    *(_QWORD *)v10 = 0;
    *(_QWORD *)&v39 = v39 + 1;
    v11 = *(_QWORD *)(v10 + 8);
    if ( v11 )
      v9 = --v11 + v5;
    v12 = *(_QWORD *)v10;
    v13 = v9 + 1;
    if ( v9 != -1 )
    {
      v33 = v9;
      v32 = v9 + 1;
      v24 = qvector_reserve(v10, v12, v13, 1);
      *(_QWORD *)v10 = v24;
      v9 = v33;
      v12 = v24;
      v13 = v32;
    }
    *(_QWORD *)(v10 + 8) = v13;
    *(_BYTE *)(v12 + v9) = 0;
    memmove((void *)(v11 + *(_QWORD *)v10), v2, v5);
    if ( !v7 )
      break;
    v4 = v39;
LABEL_5:
    v2 = v7 + 1;
  }
  while ( v7 + 1 < v3 );
  v14 = v39;
  if ( !(_QWORD)v39 )
  {
LABEL_18:
    sub_13360((__int64)"No ABI name\n");
LABEL_19:
    v17 = "oldgcc";
    if ( *(int *)(a1 + 188) > 3 )
      v17 = "rh850";
    v35 = 0;
    set_compiler(&v35, 4, v17);
    v18 = v38;
    if ( v38 )
    {
      v19 = v39;
      if ( (_QWORD)v39 )
      {
        v20 = 0;
        do
        {
          v21 = (__int64 *)(v18 + 24 * v20);
          v22 = *v21;
          if ( *v21 )
          {
            v21[1] = 0;
            qfree(v22);
            v18 = v38;
          }
          ++v20;
        }
        while ( v19 != v20 );
      }
      *(_QWORD *)&v39 = 0;
      qfree(v18);
    }
    if ( s )
    {
      *(_QWORD *)&v37 = 0;
      qfree(s);
    }
    return v40 - __readfsqword(0x28u);
  }
  v15 = v38;
  if ( !*(_QWORD *)(v38 + 8) )
  {
    v16 = (const char *)&unk_255D0;
    goto LABEL_17;
  }
  v16 = *(const char **)v38;
  if ( !strcmp(*(const char **)v38, "rh850") || !strcmp(v16, "ghs") )
  {
    v25 = 0;
  }
  else
  {
    if ( strcmp(v16, "oldgcc") && strcmp(v16, "gcc") )
    {
LABEL_17:
      sub_13360((__int64)"ABI name '%s' is unknown, ignored\n", v16);
      goto LABEL_19;
    }
    v25 = 1;
  }
  *(_DWORD *)(a1 + 264) = v25;
  if ( *(_QWORD *)(v15 + 8) && !strcmp(*(const char **)v15, "ghs") )
  {
    v26 = 1;
  }
  else
  {
    v26 = 0;
    if ( v14 != 1 && *(_QWORD *)(v15 + 32) )
      v26 = strcmp(*(const char **)(v15 + 24), "8byte_align") == 0;
  }
  *(_BYTE *)(a1 + 268) = v26;
  if ( a2 )
  {
    setinf_flag(67, 1, !v26);
    v27 = 1;
    if ( !*(_BYTE *)(a1 + 268) )
      v27 = *(_DWORD *)(a1 + 264) == 1;
    setinf_flag(67, 4, v27);
    v15 = v38;
    if ( v38 )
    {
      v28 = v39;
      if ( (_QWORD)v39 )
      {
LABEL_41:
        v29 = 0;
        do
        {
          v30 = (__int64 *)(v15 + 24 * v29);
          v31 = *v30;
          if ( *v30 )
          {
            v30[1] = 0;
            qfree(v31);
            v15 = v38;
          }
          ++v29;
        }
        while ( v29 != v28 );
      }
      *(_QWORD *)&v39 = 0;
      qfree(v15);
    }
  }
  else
  {
    v28 = v14;
    if ( v15 )
      goto LABEL_41;
  }
  if ( s )
  {
    *(_QWORD *)&v37 = 0;
    qfree(s);
  }
  return v40 - __readfsqword(0x28u);
}
