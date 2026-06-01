__int64 __fastcall sub_13A1F0(__int64 a1)
{
  unsigned int v1; // r15d
  unsigned int v2; // r14d
  unsigned int v3; // r13d
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void **v10; // r9
  const char *v11; // r14
  unsigned int v12; // r12d
  unsigned int v13; // r15d
  char *v14; // r13
  __int64 func; // rbx
  _DWORD *v16; // rax
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
  __int64 v28; // rax
  const void *v29; // r13
  size_t v30; // rax
  size_t v31; // r12
  unsigned int not_tail; // eax
  char *v33; // rdi
  size_t v34; // r14
  void *v35; // rdi
  size_t v36; // r12
  void *v37; // rdi
  size_t v38; // r12
  void **p_dest; // [rsp+0h] [rbp-120h]
  __int64 v40; // [rsp+28h] [rbp-F8h]
  char v41; // [rsp+3Bh] [rbp-E5h]
  unsigned int v42; // [rsp+3Ch] [rbp-E4h]
  unsigned int v43; // [rsp+48h] [rbp-D8h] BYREF
  unsigned int v44; // [rsp+4Ch] [rbp-D4h] BYREF
  char *s1; // [rsp+50h] [rbp-D0h] BYREF
  __int128 v46; // [rsp+58h] [rbp-C8h]
  void *dest; // [rsp+70h] [rbp-B0h] BYREF
  __int128 v48; // [rsp+78h] [rbp-A8h]
  __int64 *v49; // [rsp+90h] [rbp-90h]
  __int128 v50; // [rsp+98h] [rbp-88h]
  __int64 v51; // [rsp+A8h] [rbp-78h]
  int v52; // [rsp+B0h] [rbp-70h]
  void *v53; // [rsp+C0h] [rbp-60h] BYREF
  __int128 v54; // [rsp+C8h] [rbp-58h]
  __int64 v55; // [rsp+D8h] [rbp-48h]
  int v56; // [rsp+E0h] [rbp-40h]
  unsigned __int64 v57; // [rsp+E8h] [rbp-38h]

  v57 = __readfsqword(0x28u);
  v1 = *(_DWORD *)(a1 + 84);
  if ( !get_func() )
  {
    sub_92120((__int64)"AUTOHIDE NONE\nRenaming a register is possible only inside a function");
    return 1;
  }
  v41 = sub_161360(0, &v43, &v44);
  if ( v43 == v44 )
  {
    not_tail = next_not_tail();
    if ( not_tail != -1 )
      v44 = not_tail;
  }
  v49 = nullptr;
  v51 = 0;
  v52 = -1;
  v50 = 0;
  get_func_ranges();
  v2 = v44;
  v3 = v43;
  v53 = nullptr;
  v55 = 0;
  v56 = -1;
  v54 = 0;
  if ( v43 < v44 )
  {
    v53 = (void *)qvector_reserve();
    *((_QWORD *)v53 + v54) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(v2)).m128i_u64[0];
    *(_QWORD *)&v54 = v54 + 1;
  }
  rangeset_t_intersect();
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree();
  }
  if ( (_QWORD)v50 )
  {
    v28 = *v49;
    v43 = *v49;
    v44 = HIDWORD(v28);
  }
  s1 = nullptr;
  v53 = nullptr;
  dest = nullptr;
  v46 = 0;
  v48 = 0;
  v54 = 0;
  if ( !(unsigned __int8)sub_13A0A0(qword_2532B0, 0, (__int64 *)&s1) )
    goto LABEL_10;
  if ( v41 )
  {
    regvar = find_regvar();
    if ( regvar )
    {
LABEL_67:
      v29 = *(const void **)(regvar + 8);
      if ( v29 && (v30 = strlen(*(const char **)(regvar + 8)), (v31 = v30) != 0) )
      {
        v33 = s1;
        v34 = v30 + 1;
        if ( *((_QWORD *)&v46 + 1) < v30 + 1 )
        {
          s1 = (char *)qvector_reserve();
          v33 = s1;
        }
        *(_QWORD *)&v46 = v34;
        memmove(v33, v29, v31);
        s1[v31] = 0;
      }
      else
      {
        *(_QWORD *)&v46 = 0;
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
      if ( v1 >= *(_DWORD *)(regvar + 4) )
      {
        v43 = *(_DWORD *)(regvar + 4);
      }
      else
      {
        if ( v1 >= *(_DWORD *)regvar )
          goto LABEL_67;
        v44 = *(_DWORD *)regvar;
      }
    }
  }
  v21 = find_regvar();
  v40 = v21;
  if ( v21 )
  {
    v43 = *(_DWORD *)v21;
    v44 = *(_DWORD *)(v21 + 4);
    v22 = *(const void **)(v21 + 16);
    if ( v22 && (v23 = strlen(*(const char **)(v21 + 16)), (v24 = v23) != 0) )
    {
      v35 = dest;
      v36 = v23 + 1;
      if ( *((_QWORD *)&v48 + 1) < v23 + 1 )
      {
        dest = (void *)qvector_reserve();
        v35 = dest;
      }
      *(_QWORD *)&v48 = v36;
      memmove(v35, v22, v24);
      *((_BYTE *)dest + v24) = 0;
    }
    else
    {
      *(_QWORD *)&v48 = 0;
    }
    v25 = *(const void **)(v40 + 24);
    if ( v25 )
    {
      v26 = strlen(*(const char **)(v40 + 24));
      v27 = v26;
      if ( v26 )
      {
        v37 = v53;
        v38 = v26 + 1;
        if ( *((_QWORD *)&v54 + 1) < v26 + 1 )
        {
          v53 = (void *)qvector_reserve();
          v37 = v53;
        }
        *(_QWORD *)&v54 = v38;
        memmove(v37, v25, v27);
        *((_BYTE *)v53 + v27) = 0;
      }
      else
      {
        *(_QWORD *)&v54 = 0;
      }
    }
  }
  else
  {
LABEL_10:
    v40 = 0;
  }
  p_dest = &dest;
  while ( 1 )
  {
    v4 = (unsigned __int64)sub_1387F0;
    v5 = 1097;
    v6 = sub_18BA90(
           1097,
           (unsigned int)sub_1387F0,
           (unsigned int)&v43,
           (unsigned int)&v44,
           (unsigned int)&s1,
           (_DWORD)p_dest);
    v10 = &v53;
    if ( v6 <= 0 )
      break;
    if ( (unsigned __int64)v46 <= 1 )
      goto LABEL_36;
    v11 = ::s1;
    if ( (_QWORD)v48 )
      v11 = (const char *)dest;
    v12 = v43;
    v13 = v44;
    v14 = s1;
    v42 = v44;
    func = get_func();
    if ( v12 >= v13 || (int)get_func_chunknum() < 0 || (v4 = v13 - 1, (int)get_func_chunknum() < 0) )
    {
LABEL_33:
      sub_92120((__int64)"ICON ERROR\nAUTOHIDE NONE\nIllegal address range");
    }
    else
    {
      if ( !v40 )
      {
        if ( !*v11 || (unsigned int)str2reg() != -1 )
          goto LABEL_36;
        goto LABEL_28;
      }
      if ( strcmp(v14, *(const char **)(v40 + 8)) )
        goto LABEL_28;
      if ( !*v11 )
      {
        v4 = v12;
        v5 = func;
        v17 = del_regvar();
        goto LABEL_29;
      }
      if ( v12 != *(_DWORD *)v40 )
      {
        if ( *(_DWORD *)v40 < v12 )
        {
          *(_DWORD *)(v40 + 4) = v12;
          goto LABEL_27;
        }
LABEL_26:
        while ( 1 )
        {
          del_regvar();
LABEL_27:
          v16 = (_DWORD *)find_regvar();
          if ( !v16 )
            break;
          if ( v42 < v16[1] )
          {
            *v16 = v42;
            break;
          }
        }
LABEL_28:
        v4 = v12;
        v5 = func;
        v17 = add_regvar();
LABEL_29:
        v18 = v17;
        goto LABEL_30;
      }
      if ( v42 != *(_DWORD *)(v40 + 4) )
        goto LABEL_26;
      if ( !strcmp(v11, *(const char **)(v40 + 16)) )
      {
        v5 = func;
        set_regvar_cmt();
        break;
      }
      v4 = v40;
      v5 = func;
      v18 = rename_regvar();
      set_regvar_cmt();
LABEL_30:
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
        goto LABEL_33;
      }
LABEL_36:
      sub_92120((__int64)"ICON ERROR\nAUTOHIDE NONE\nThe register name cannot be accepted", v4, v7, v8, v9, v10, p_dest);
    }
  }
  if ( v41 )
    sub_15D870(v5);
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree();
  }
  if ( dest )
  {
    *(_QWORD *)&v48 = 0;
    qfree();
  }
  if ( s1 )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree();
  }
  return 1;
}

