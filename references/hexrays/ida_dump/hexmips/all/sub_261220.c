__int64 __fastcall sub_261220(__int64 a1, __int64 *a2, _QWORD *a3, _BYTE *a4)
{
  const char *v7; // rsi
  unsigned int v8; // r8d
  __int64 v9; // rax
  unsigned int v10; // r15d
  __int64 v12; // rcx
  const char *v13; // rsi
  unsigned int v14; // eax
  _BYTE *v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int default_encoding_idx; // eax
  int tinfo_size; // eax
  unsigned __int64 v20; // rbx
  __int64 v21; // r15
  char v22; // al
  __int64 v23; // rbx
  __int64 v24; // r13
  unsigned __int64 v25; // r12
  __int64 v26; // rsi
  __int64 v27; // rbx
  size_t v28; // r12
  const void *v29; // r15
  __int64 v30; // rbx
  size_t v31; // r13
  __int64 v32; // rsi
  __int64 v33; // rax
  char *v34; // rax
  char v35; // dl
  unsigned __int64 v36; // rax
  char *v37; // rdi
  _BYTE *v38; // rax
  size_t v39; // rax
  __int64 v40; // rbx
  size_t v41; // r12
  size_t v42; // r13
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rax
  char *s; // [rsp+10h] [rbp-118h]
  __int64 encoding_name; // [rsp+20h] [rbp-108h]
  __int64 v48; // [rsp+30h] [rbp-F8h] BYREF
  __int128 v49; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v50; // [rsp+50h] [rbp-D8h]
  _BYTE v51[2]; // [rsp+5Eh] [rbp-CAh] BYREF
  char v52[127]; // [rsp+60h] [rbp-C8h] BYREF
  char v53; // [rsp+DFh] [rbp-49h] BYREF
  _BYTE v54[8]; // [rsp+E0h] [rbp-48h] BYREF
  unsigned __int64 v55; // [rsp+E8h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(get_module_data((unsigned int)dword_4CF8F8) + 607) & 0x10) != 0 )
  {
    if ( (unsigned __int8)sub_298400(a3) && *(_QWORD *)a1 <= 1u )
    {
      if ( a2 )
      {
        v28 = 8;
        v29 = &unk_3FD190;
        if ( !*(_QWORD *)a1 )
        {
          v28 = 9;
          v29 = &unk_3FD199;
        }
        v30 = a2[1];
        v31 = v28;
        if ( v30 )
          v31 = --v30 + v28;
        v32 = *a2;
        if ( a2[2] < v31 + 1 )
        {
          v33 = qvector_reserve(a2, v32, v31 + 1, 1);
          *a2 = v33;
          v32 = v33;
        }
        a2[1] = v31 + 1;
        *(_BYTE *)(v32 + v31) = 0;
        memmove((void *)(v30 + *a2), v29, v28);
      }
      return 1;
    }
    if ( (get_tinfo_property(*a3, 2) & 0xF) == 0xA && !*(_QWORD *)a1 )
    {
      if ( a2 )
      {
        v23 = a2[1];
        if ( v23 )
        {
          v24 = v23 + 10;
          v25 = v23 + 11;
          --v23;
        }
        else
        {
          v25 = 12;
          v24 = 11;
        }
        v26 = *a2;
        if ( a2[2] < v25 )
        {
          v44 = qvector_reserve(a2, v26, v25, 1);
          *a2 = v44;
          v26 = v44;
        }
        a2[1] = v25;
        *(_BYTE *)(v26 + v24) = 0;
        v27 = *a2 + v23;
        *(_QWORD *)v27 = 0x74706C6C756E2001LL;
        *(_DWORD *)(v27 + 7) = 537031284;
      }
      return 1;
    }
  }
  if ( (unsigned __int8)is_enum(*(_QWORD *)(a1 + 40), (unsigned int)*(char *)(a1 + 12)) )
  {
    v7 = s1;
    if ( *(_QWORD *)(a1 + 24) )
      v7 = *(const char **)(a1 + 16);
    sub_325D80(&v48, v7);
    v8 = *(char *)(a1 + 15);
    v9 = -1;
    if ( (unsigned __int64)(int)(8 * v8) <= 0x3F )
      v9 = (1LL << (8 * (unsigned __int8)v8)) - 1;
    v10 = sub_25CA60(a2, (__int64)&v48, *(_BYTE *)(a1 + 14), *(_QWORD *)a1 & v9, v8, 1);
    clear_tinfo_t(&v48);
    return v10;
  }
  v10 = is_stroff(*(_QWORD *)(a1 + 40), (unsigned int)*(char *)(a1 + 12));
  if ( (_BYTE)v10 )
  {
    v13 = s1;
    if ( *(_QWORD *)(a1 + 24) )
      v13 = *(const char **)(a1 + 16);
    v14 = sub_260F90(a2, (__int64)v13, *(_QWORD *)a1, v12);
    v10 = v14;
    if ( a4 )
      *a4 = v14;
    return v10;
  }
  if ( !(unsigned __int8)is_char(*(_QWORD *)(a1 + 40), (unsigned int)*(char *)(a1 + 12)) )
    return v10;
  if ( !a2 )
    return 1;
  v15 = (_BYTE *)tag_on(v52, v54, 25);
  if ( v15 >= v54 )
  {
    if ( !under_debugger )
      sub_37E160(518);
LABEL_91:
    BUG();
  }
  *v15 = 39;
  s = v15 + 1;
  if ( v15 + 1 >= v54 )
  {
    v53 = 0;
    s = &v53;
  }
  v16 = *(_QWORD *)a1;
  v48 = 0;
  v50 = v16;
  v49 = 0;
  v48 = qvector_reserve(&v48, 0, 8, 1);
  memset((void *)(v48 + v49), 0, 8 - v49);
  *(_QWORD *)&v49 = 8;
  default_encoding_idx = get_default_encoding_idx(1, 0, v17);
  encoding_name = get_encoding_name(default_encoding_idx);
  tinfo_size = get_tinfo_size(0, *a3, 0);
  if ( (unsigned __int64)tinfo_size <= 8 )
  {
    if ( tinfo_size )
    {
      v20 = (unsigned __int64)s;
      v21 = tinfo_size - 1;
      while ( 1 )
      {
        v22 = v51[v21 - 2];
        if ( v22 )
        {
          if ( v22 == 34 )
          {
            if ( v20 >= (unsigned __int64)v54 )
            {
              if ( !under_debugger )
                sub_37E160(518);
              goto LABEL_91;
            }
            v36 = v20 + 1;
            *(_BYTE *)v20 = 34;
            if ( v20 + 1 < (unsigned __int64)v54 )
            {
LABEL_58:
              v20 = v36;
              goto LABEL_28;
            }
LABEL_57:
            v53 = 0;
            v20 = (unsigned __int64)&v53;
            goto LABEL_28;
          }
          if ( v22 != 39 )
          {
            v51[0] = v51[v21 - 2];
            v51[1] = 0;
            if ( v22 >= 0 || convert_encoding(&v48, encoding_name, "UTF-8", v51, 2, 0) == 1 )
              str2user(v20, v51, &v54[-v20]);
            else
              qsnprintf(v20, &v54[-v20], "\\x%02X", v51[0]);
            v20 += strlen((const char *)v20);
            goto LABEL_28;
          }
          if ( v20 >= (unsigned __int64)v54 )
          {
            if ( !under_debugger )
              sub_37E160(518);
            goto LABEL_91;
          }
          *(_BYTE *)v20 = 92;
          if ( v20 + 1 >= (unsigned __int64)v54 )
            goto LABEL_57;
          v36 = v20 + 2;
          *(_BYTE *)(v20 + 1) = 39;
          if ( v20 + 2 < (unsigned __int64)v54 )
            goto LABEL_58;
        }
        else
        {
          if ( (char *)v20 == s && (_DWORD)v21 )
            goto LABEL_28;
          if ( v20 >= (unsigned __int64)v54 )
          {
            if ( !under_debugger )
              sub_37E160(520);
            goto LABEL_91;
          }
          v34 = (char *)&unk_3FD1A3;
          if ( (char *)v20 != &v53 )
          {
            do
            {
              v35 = *v34++;
              *(_BYTE *)v20 = v35;
              if ( !v35 )
                goto LABEL_28;
            }
            while ( (char *)++v20 != &v53 );
          }
        }
        v53 = 0;
        v20 = (unsigned __int64)&v53;
LABEL_28:
        if ( (_DWORD)--v21 == -1 )
          goto LABEL_66;
      }
    }
    v20 = (unsigned __int64)s;
LABEL_66:
    if ( v20 >= (unsigned __int64)v54 )
    {
      if ( !under_debugger )
        sub_37E160(518);
      goto LABEL_91;
    }
    v37 = (char *)(v20 + 1);
    *(_BYTE *)v20 = 39;
    if ( v20 + 1 >= (unsigned __int64)v54 )
    {
      v53 = 0;
      v37 = &v53;
    }
    v38 = (_BYTE *)tag_off(v37, v54, 25);
    if ( v38 >= v54 )
    {
      if ( !under_debugger )
        sub_37E160(519);
      goto LABEL_91;
    }
    *v38 = 0;
    v39 = strlen(v52);
    v40 = a2[1];
    v41 = v39;
    v42 = v39;
    if ( v40 )
    {
      --v40;
      v42 = v39 + v40;
    }
    v43 = *a2;
    if ( a2[2] < v42 + 1 )
    {
      v45 = qvector_reserve(a2, v43, v42 + 1, 1);
      *a2 = v45;
      v43 = v45;
    }
    a2[1] = v42 + 1;
    *(_BYTE *)(v43 + v42) = 0;
    memmove((void *)(*a2 + v40), v52, v41);
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
    return 1;
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
  }
  return v10;
}
