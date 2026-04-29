__int64 __fastcall sub_265AA0(__int64 a1, __int64 *a2, __int64 a3, _BYTE *a4)
{
  const char *v7; // rsi
  unsigned int v8; // r8d
  __int64 v9; // rax
  unsigned int v10; // r15d
  const char *v12; // rsi
  unsigned int v13; // eax
  char *v14; // rax
  unsigned __int64 v15; // rax
  int tinfo_size; // eax
  char *v17; // rbx
  __int64 v18; // r15
  char v19; // al
  __int64 v20; // rbx
  __int64 v21; // r13
  unsigned __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rbx
  size_t v25; // r12
  const void *v26; // r15
  __int64 v27; // rbx
  size_t v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rax
  char *v31; // rax
  char v32; // dl
  char *v33; // rax
  char *v34; // rax
  size_t v35; // rax
  __int64 v36; // rbx
  size_t v37; // r12
  size_t v38; // r13
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  char *s; // [rsp+10h] [rbp-118h]
  __int64 v43; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v44; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v45; // [rsp+50h] [rbp-D8h]
  char v46; // [rsp+5Eh] [rbp-CAh]
  char v47; // [rsp+5Fh] [rbp-C9h]
  char v48[127]; // [rsp+60h] [rbp-C8h] BYREF
  char v49; // [rsp+DFh] [rbp-49h] BYREF
  char v50; // [rsp+E0h] [rbp-48h] BYREF
  unsigned __int64 v51; // [rsp+E8h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(get_module_data() + 607) & 0x10) != 0 )
  {
    if ( (unsigned __int8)sub_29CC80(a3) && *(_QWORD *)a1 <= 1u )
    {
      if ( a2 )
      {
        v25 = 8;
        v26 = &unk_41917B;
        if ( !*(_QWORD *)a1 )
        {
          v25 = 9;
          v26 = &unk_419184;
        }
        v27 = a2[1];
        v28 = v25;
        if ( v27 )
          v28 = --v27 + v25;
        v29 = *a2;
        if ( a2[2] < v28 + 1 )
        {
          v30 = qvector_reserve((__int64)a2, v29, v28 + 1, 1);
          *a2 = v30;
          v29 = v30;
        }
        a2[1] = v28 + 1;
        *(_BYTE *)(v29 + v28) = 0;
        memmove((void *)(v27 + *a2), v26, v25);
      }
      return 1;
    }
    if ( (get_tinfo_property() & 0xF) == 0xA && !*(_QWORD *)a1 )
    {
      if ( a2 )
      {
        v20 = a2[1];
        if ( v20 )
        {
          v21 = v20 + 10;
          v22 = v20 + 11;
          --v20;
        }
        else
        {
          v22 = 12;
          v21 = 11;
        }
        v23 = *a2;
        if ( a2[2] < v22 )
        {
          v40 = qvector_reserve((__int64)a2, v23, v22, 1);
          *a2 = v40;
          v23 = v40;
        }
        a2[1] = v22;
        *(_BYTE *)(v23 + v21) = 0;
        v24 = *a2 + v20;
        *(_QWORD *)v24 = 0x74706C6C756E2001LL;
        *(_DWORD *)(v24 + 7) = 537031284;
      }
      return 1;
    }
  }
  if ( (unsigned __int8)is_enum() )
  {
    v7 = s1;
    if ( *(_QWORD *)(a1 + 24) )
      v7 = *(const char **)(a1 + 16);
    sub_32ACB0(&v43, v7);
    v8 = *(char *)(a1 + 15);
    v9 = -1;
    if ( (unsigned __int64)(int)(8 * v8) <= 0x3F )
      v9 = (1LL << (8 * (unsigned __int8)v8)) - 1;
    v10 = sub_2612E0(a2, (__int64)&v43, *(unsigned __int8 *)(a1 + 14), *(_QWORD *)a1 & v9, v8, 1);
    clear_tinfo_t();
    return v10;
  }
  v10 = is_stroff();
  if ( (_BYTE)v10 )
  {
    v12 = s1;
    if ( *(_QWORD *)(a1 + 24) )
      v12 = *(const char **)(a1 + 16);
    v13 = sub_265810(a2, (__int64)v12, *(_QWORD *)a1);
    v10 = v13;
    if ( a4 )
      *a4 = v13;
    return v10;
  }
  if ( !(unsigned __int8)is_char() )
    return v10;
  if ( !a2 )
    return 1;
  v14 = (char *)tag_on();
  if ( v14 >= &v50 )
  {
    if ( !under_debugger )
      sub_383060(518);
LABEL_91:
    BUG();
  }
  *v14 = 39;
  s = v14 + 1;
  if ( v14 + 1 >= &v50 )
  {
    v49 = 0;
    s = &v49;
  }
  v15 = *(_QWORD *)a1;
  v43 = 0;
  v45 = v15;
  v44 = 0;
  v43 = qvector_reserve((__int64)&v43, 0, 8, 1);
  memset((void *)(v43 + v44), 0, 8 - v44);
  *(_QWORD *)&v44 = 8;
  get_default_encoding_idx();
  get_encoding_name();
  tinfo_size = get_tinfo_size();
  if ( (unsigned __int64)tinfo_size <= 8 )
  {
    if ( tinfo_size )
    {
      v17 = s;
      v18 = tinfo_size - 1;
      while ( 1 )
      {
        v19 = *((_BYTE *)&v45 + v18);
        if ( v19 )
        {
          if ( v19 == 34 )
          {
            if ( v17 >= &v50 )
            {
              if ( !under_debugger )
                sub_383060(518);
              goto LABEL_91;
            }
            v33 = v17 + 1;
            *v17 = 34;
            if ( v17 + 1 < &v50 )
            {
LABEL_58:
              v17 = v33;
              goto LABEL_28;
            }
LABEL_57:
            v49 = 0;
            v17 = &v49;
            goto LABEL_28;
          }
          if ( v19 != 39 )
          {
            v46 = *((_BYTE *)&v45 + v18);
            v47 = 0;
            if ( v19 >= 0 || convert_encoding() == 1 )
              str2user();
            else
              qsnprintf();
            v17 += strlen(v17);
            goto LABEL_28;
          }
          if ( v17 >= &v50 )
          {
            if ( !under_debugger )
              sub_383060(518);
            goto LABEL_91;
          }
          *v17 = 92;
          if ( v17 + 1 >= &v50 )
            goto LABEL_57;
          v33 = v17 + 2;
          v17[1] = 39;
          if ( v17 + 2 < &v50 )
            goto LABEL_58;
        }
        else
        {
          if ( v17 == s && (_DWORD)v18 )
            goto LABEL_28;
          if ( v17 >= &v50 )
          {
            if ( !under_debugger )
              sub_383060(520);
            goto LABEL_91;
          }
          v31 = (char *)&unk_41918E;
          if ( v17 != &v49 )
          {
            do
            {
              v32 = *v31++;
              *v17 = v32;
              if ( !v32 )
                goto LABEL_28;
            }
            while ( ++v17 != &v49 );
          }
        }
        v49 = 0;
        v17 = &v49;
LABEL_28:
        if ( (_DWORD)--v18 == -1 )
          goto LABEL_66;
      }
    }
    v17 = s;
LABEL_66:
    if ( v17 >= &v50 )
    {
      if ( !under_debugger )
        sub_383060(518);
      goto LABEL_91;
    }
    *v17 = 39;
    if ( v17 + 1 >= &v50 )
      v49 = 0;
    v34 = (char *)tag_off();
    if ( v34 >= &v50 )
    {
      if ( !under_debugger )
        sub_383060(519);
      goto LABEL_91;
    }
    *v34 = 0;
    v35 = strlen(v48);
    v36 = a2[1];
    v37 = v35;
    v38 = v35;
    if ( v36 )
    {
      --v36;
      v38 = v35 + v36;
    }
    v39 = *a2;
    if ( a2[2] < v38 + 1 )
    {
      v41 = qvector_reserve((__int64)a2, v39, v38 + 1, 1);
      *a2 = v41;
      v39 = v41;
    }
    a2[1] = v38 + 1;
    *(_BYTE *)(v39 + v38) = 0;
    memmove((void *)(*a2 + v36), v48, v37);
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
    }
    return 1;
  }
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
  return v10;
}
