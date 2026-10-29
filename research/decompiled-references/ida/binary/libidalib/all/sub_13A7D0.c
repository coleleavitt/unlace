__int64 __fastcall sub_13A7D0(__int64 a1)
{
  unsigned __int64 v1; // r15
  unsigned __int64 v2; // r14
  __int64 (__fastcall *v3)(int, void (__fastcall ***)(__int64, __int64, __int64 *)); // r13
  __int64 (__fastcall *v4)(int, void (__fastcall ***)(__int64, __int64, __int64 *)); // rsi
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void **v10; // r9
  const char *v11; // r14
  __int64 (__fastcall *v12)(int, void (__fastcall ***)(__int64, __int64, __int64 *)); // r12
  unsigned __int64 v13; // r15
  char *v14; // r13
  __int64 func; // rbx
  _QWORD *v16; // rax
  int v17; // eax
  int v18; // r15d
  __int64 regvar; // rax
  __int64 v21; // rax
  const void *v22; // r14
  size_t v23; // rax
  size_t v24; // rbx
  const void *v25; // rbx
  size_t v26; // rax
  size_t v27; // r14
  unsigned __int64 v28; // rax
  const void *v29; // r13
  size_t v30; // rax
  size_t v31; // r12
  __int64 not_tail; // rax
  char *v33; // rdi
  size_t v34; // r14
  void *v35; // rdi
  size_t v36; // r12
  void *v37; // rdi
  size_t v38; // r12
  char v39; // [rsp+Fh] [rbp-121h]
  __int64 v40; // [rsp+38h] [rbp-F8h]
  unsigned __int64 v41; // [rsp+48h] [rbp-E8h]
  __int64 (__fastcall *v42)(int, void (__fastcall ***)(__int64, __int64, __int64 *)); // [rsp+50h] [rbp-E0h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-D8h] BYREF
  char *s1; // [rsp+60h] [rbp-D0h] BYREF
  __int128 v45; // [rsp+68h] [rbp-C8h]
  void *dest; // [rsp+80h] [rbp-B0h] BYREF
  __int128 v47; // [rsp+88h] [rbp-A8h]
  __int64 (__fastcall **v48)(int, void (__fastcall ***)(__int64, __int64, __int64 *)); // [rsp+A0h] [rbp-90h]
  __int128 v49; // [rsp+A8h] [rbp-88h]
  __int64 v50; // [rsp+B8h] [rbp-78h]
  int v51; // [rsp+C0h] [rbp-70h]
  void *v52; // [rsp+D0h] [rbp-60h] BYREF
  __int128 v53; // [rsp+D8h] [rbp-58h]
  __int64 v54; // [rsp+E8h] [rbp-48h]
  int v55; // [rsp+F0h] [rbp-40h]
  unsigned __int64 v56; // [rsp+F8h] [rbp-38h]

  v56 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 88);
  if ( !get_func() )
  {
    sub_92200((__int64)"AUTOHIDE NONE\nRenaming a register is possible only inside a function");
    return 1;
  }
  v39 = sub_161C80(0, &v42, &v43);
  if ( v42 == (__int64 (__fastcall *)(int, void (__fastcall ***)(__int64, __int64, __int64 *)))v43 )
  {
    not_tail = next_not_tail();
    if ( not_tail != -1 )
      v43 = not_tail;
  }
  v48 = nullptr;
  v50 = 0;
  v51 = -1;
  v49 = 0;
  get_func_ranges();
  v2 = v43;
  v3 = v42;
  v52 = nullptr;
  v54 = 0;
  v55 = -1;
  v53 = 0;
  if ( (unsigned __int64)v42 < v43 )
  {
    v52 = (void *)qvector_reserve();
    *((__m128i *)v52 + v53) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)v2);
    *(_QWORD *)&v53 = v53 + 1;
  }
  rangeset_t_intersect();
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree();
  }
  if ( (_QWORD)v49 )
  {
    v28 = (unsigned __int64)v48[1];
    v42 = *v48;
    v43 = v28;
  }
  s1 = nullptr;
  v52 = nullptr;
  dest = nullptr;
  v45 = 0;
  v47 = 0;
  v53 = 0;
  if ( !(unsigned __int8)sub_13A680(qword_254470, 0, (__int64 *)&s1) )
    goto LABEL_10;
  if ( v39 )
  {
    regvar = find_regvar();
    if ( regvar )
    {
LABEL_66:
      v29 = *(const void **)(regvar + 16);
      if ( v29 && (v30 = strlen(*(const char **)(regvar + 16)), (v31 = v30) != 0) )
      {
        v33 = s1;
        v34 = v30 + 1;
        if ( *((_QWORD *)&v45 + 1) < v30 + 1 )
        {
          s1 = (char *)qvector_reserve();
          v33 = s1;
        }
        *(_QWORD *)&v45 = v34;
        memmove(v33, v29, v31);
        s1[v31] = 0;
      }
      else
      {
        *(_QWORD *)&v45 = 0;
      }
    }
  }
  else
  {
    str2reg();
    while ( 1 )
    {
      regvar = find_regvar();
      if ( !regvar )
        break;
      if ( v1 >= *(_QWORD *)(regvar + 8) )
      {
        v42 = *(__int64 (__fastcall **)(int, void (__fastcall ***)(__int64, __int64, __int64 *)))(regvar + 8);
      }
      else
      {
        if ( v1 >= *(_QWORD *)regvar )
          goto LABEL_66;
        v43 = *(_QWORD *)regvar;
      }
    }
  }
  v21 = find_regvar();
  v40 = v21;
  if ( !v21 )
  {
LABEL_10:
    v40 = 0;
    goto LABEL_11;
  }
  v42 = *(__int64 (__fastcall **)(int, void (__fastcall ***)(__int64, __int64, __int64 *)))v21;
  v43 = *(_QWORD *)(v21 + 8);
  v22 = *(const void **)(v21 + 24);
  if ( v22 && (v23 = strlen(*(const char **)(v21 + 24)), (v24 = v23) != 0) )
  {
    v35 = dest;
    v36 = v23 + 1;
    if ( *((_QWORD *)&v47 + 1) < v23 + 1 )
    {
      dest = (void *)qvector_reserve();
      v35 = dest;
    }
    *(_QWORD *)&v47 = v36;
    memmove(v35, v22, v24);
    *((_BYTE *)dest + v24) = 0;
  }
  else
  {
    *(_QWORD *)&v47 = 0;
  }
  v25 = *(const void **)(v40 + 32);
  if ( v25 )
  {
    v26 = strlen(*(const char **)(v40 + 32));
    v27 = v26;
    if ( v26 )
    {
      v37 = v52;
      v38 = v26 + 1;
      if ( *((_QWORD *)&v53 + 1) < v26 + 1 )
      {
        v52 = (void *)qvector_reserve();
        v37 = v52;
      }
      *(_QWORD *)&v53 = v38;
      memmove(v37, v25, v27);
      *((_BYTE *)v52 + v27) = 0;
    }
    else
    {
      *(_QWORD *)&v53 = 0;
    }
  }
LABEL_11:
  while ( 1 )
  {
    v4 = sub_138D70;
    v5 = 1097;
    v6 = sub_18C660(
           1097,
           (unsigned int)sub_138D70,
           (unsigned int)&v42,
           (unsigned int)&v43,
           (unsigned int)&s1,
           (unsigned int)&dest);
    v10 = &v52;
    if ( v6 <= 0 )
      break;
    if ( (unsigned __int64)v45 <= 1 )
      goto LABEL_35;
    v11 = ::s1;
    if ( (_QWORD)v47 )
      v11 = (const char *)dest;
    v12 = v42;
    v13 = v43;
    v14 = s1;
    v41 = v43;
    func = get_func();
    if ( (unsigned __int64)v12 >= v13
      || (int)get_func_chunknum() < 0
      || (v4 = (__int64 (__fastcall *)(int, void (__fastcall ***)(__int64, __int64, __int64 *)))(v13 - 1),
          (int)get_func_chunknum() < 0) )
    {
LABEL_32:
      sub_92200((__int64)"ICON ERROR\nAUTOHIDE NONE\nIllegal address range");
    }
    else
    {
      if ( !v40 )
      {
        if ( !*v11 || (unsigned int)str2reg() != -1 )
          goto LABEL_35;
        goto LABEL_27;
      }
      if ( strcmp(v14, *(const char **)(v40 + 16)) )
        goto LABEL_27;
      if ( !*v11 )
      {
        v4 = v12;
        v5 = func;
        v17 = del_regvar();
        goto LABEL_28;
      }
      if ( v12 != *(__int64 (__fastcall **)(int, void (__fastcall ***)(__int64, __int64, __int64 *)))v40 )
      {
        if ( *(_QWORD *)v40 < (unsigned __int64)v12 )
        {
          *(_QWORD *)(v40 + 8) = v12;
          goto LABEL_26;
        }
LABEL_25:
        while ( 1 )
        {
          del_regvar();
LABEL_26:
          v16 = (_QWORD *)find_regvar();
          if ( !v16 )
            break;
          if ( v41 < v16[1] )
          {
            *v16 = v41;
            break;
          }
        }
LABEL_27:
        v4 = v12;
        v5 = func;
        v17 = add_regvar();
LABEL_28:
        v18 = v17;
        goto LABEL_29;
      }
      if ( v41 != *(_QWORD *)(v40 + 8) )
        goto LABEL_25;
      if ( !strcmp(v11, *(const char **)(v40 + 24)) )
      {
        v4 = (__int64 (__fastcall *)(int, void (__fastcall ***)(__int64, __int64, __int64 *)))v40;
        v5 = func;
        set_regvar_cmt();
        break;
      }
      v4 = (__int64 (__fastcall *)(int, void (__fastcall ***)(__int64, __int64, __int64 *)))v40;
      v5 = func;
      v18 = rename_regvar();
      set_regvar_cmt();
LABEL_29:
      if ( !v18 )
        break;
      if ( v18 != -3 )
      {
        if ( v18 != -2 )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
        goto LABEL_32;
      }
LABEL_35:
      sub_92200((__int64)"ICON ERROR\nAUTOHIDE NONE\nThe register name cannot be accepted", v4, v7, v8, v9, v10);
    }
  }
  if ( v39 )
    sub_15E150(v5, v4);
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree();
  }
  if ( dest )
  {
    *(_QWORD *)&v47 = 0;
    qfree();
  }
  if ( s1 )
  {
    *(_QWORD *)&v45 = 0;
    qfree();
  }
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
  }
  return 1;
}

