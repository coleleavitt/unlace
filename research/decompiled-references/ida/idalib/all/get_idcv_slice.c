__int64 __fastcall get_idcv_slice(__m128i *a1, __int64 a2, __int64 a3, signed __int64 a4, char a5, int a6)
{
  __int64 v7; // r13
  char v11; // al
  unsigned int v12; // eax
  const char *v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rdx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // r13
  _QWORD *v19; // r14
  __int64 v20; // r15
  const char *v21; // rax
  const char *v22; // rdi
  int v23; // eax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  void *v29; // rax
  __m128i v30; // xmm0
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  const void *v33; // rbp
  __int64 v34; // r13
  void *v35; // rdi
  char *v36; // rdi
  int v37; // eax
  char v38; // al
  char v39; // r8
  int v40; // r9d
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r12
  _QWORD *v44; // [rsp+0h] [rbp-D8h]
  unsigned int v45; // [rsp+0h] [rbp-D8h]
  __int64 v46; // [rsp+8h] [rbp-D0h]
  const char *v47; // [rsp+20h] [rbp-B8h]
  char *s2; // [rsp+28h] [rbp-B0h]
  void *ptr; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v50; // [rsp+38h] [rbp-A0h] BYREF
  char v51[8]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v52; // [rsp+58h] [rbp-80h]
  __int64 v53; // [rsp+68h] [rbp-70h]
  _BYTE v54[40]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v55; // [rsp+98h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  if ( !a1 )
    return set_qerrno(1568);
  v7 = a2;
  if ( !a2 )
    return set_qerrno(1568);
  while ( 1 )
  {
    v11 = *(_BYTE *)v7;
    if ( *(_BYTE *)v7 == 7 )
    {
      v28 = *(_QWORD *)(v7 + 16);
      if ( !v28 )
      {
LABEL_26:
        ptr = nullptr;
        v50 = 0;
LABEL_27:
        free_idcv(a1);
        v29 = ptr;
        v30 = _mm_loadu_si128(&v50);
        a1->m128i_i8[0] = 7;
        a1->m128i_i64[1] = (__int64)v29;
        a1[1] = v30;
        return 0;
      }
      v31 = v28 - 1;
      if ( a3 >= 0 || (a3 += v31, a3 >= 0) )
      {
        if ( v31 <= a3 )
          a3 = v31;
        if ( (a5 & 1) != 0 )
        {
          if ( a3 + 1 < 0 )
            goto LABEL_26;
          if ( v31 >= a3 + 1 )
          {
            v33 = (const void *)(*(_QWORD *)(v7 + 8) + a3);
            a4 = 1;
            ptr = nullptr;
            v50 = 0;
            goto LABEL_38;
          }
        }
        else
        {
          if ( a4 < 0 )
          {
            a4 += v31;
            if ( a4 < 0 )
              goto LABEL_26;
          }
          if ( v31 > a4 )
            v31 = a4;
        }
        if ( v31 < a3 )
          goto LABEL_26;
      }
      else
      {
        if ( (a5 & 1) != 0 )
        {
          if ( !v31 )
            goto LABEL_26;
          v33 = *(const void **)(v7 + 8);
          v34 = 2;
          ptr = nullptr;
          v50 = 0;
          a4 = 1;
          goto LABEL_73;
        }
        if ( a4 >= 0 )
        {
          v33 = *(const void **)(v7 + 8);
          ptr = nullptr;
          if ( v31 <= a4 )
            a4 = v31;
          v50 = 0;
          v34 = a4 + 1;
          if ( !a4 )
            goto LABEL_27;
          goto LABEL_73;
        }
        v43 = v31 + a4;
        if ( v43 < 0 )
          goto LABEL_26;
        if ( v31 > v43 )
          v31 = v43;
        a3 = 0;
      }
      v32 = *(_QWORD *)(v7 + 8);
      ptr = nullptr;
      v50 = 0;
      a4 = v31 - a3;
      if ( v31 == a3 )
        goto LABEL_27;
      v33 = (const void *)(v32 + a3);
LABEL_38:
      v34 = a4 + 1;
      if ( a4 == -1 )
      {
        v35 = nullptr;
        a4 = -1;
LABEL_40:
        v50.m128i_i64[0] = v34;
        memmove(v35, v33, a4);
        *((_BYTE *)ptr + a4) = 0;
        goto LABEL_27;
      }
LABEL_73:
      ptr = (void *)qvector_reserve(&ptr, 0, v34, 1);
      v35 = ptr;
      goto LABEL_40;
    }
    if ( v11 != 10 )
      break;
    v27 = v7;
    v7 = deref_idcv(v7, 0);
    if ( !v7 )
      return get_qerrno(v27);
  }
  if ( v11 != 5 )
    return set_qerrno(1568);
  if ( (a5 & 1) != 0 )
  {
    qsnprintf((unsigned int)v54, 32, (unsigned int)"%llu", a3, a5, a6);
    return get_idcv_attr(a1, v7, v54, 0);
  }
  v51[0] = 2;
  v53 = 0;
  v52 = 0;
  v12 = idcv_object(v51, 0);
  if ( v12 )
  {
LABEL_42:
    v45 = v12;
    free_idcv(v51);
    return v45;
  }
  v13 = nullptr;
  v14 = *(_QWORD *)(v7 + 8);
  ptr = nullptr;
  v50 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 3, 1);
  v18 = v14 + 8;
  v50.m128i_i64[0] = 3;
  *(_WORD *)ptr = -209;
  *((_BYTE *)ptr + 2) = 0;
  v19 = *(_QWORD **)(v14 + 16);
  s2 = (char *)ptr;
  if ( !v19 )
  {
    if ( ptr )
    {
      v50.m128i_i64[0] = 0;
      qfree(ptr);
    }
    goto LABEL_48;
  }
  v20 = v18;
  v46 = v50.m128i_i64[0];
  v21 = haystack;
  if ( v50.m128i_i64[0] )
    v21 = (const char *)ptr;
  v47 = v21;
  while ( 2 )
  {
    v25 = v19[5];
    if ( v46 )
    {
      if ( !v25 )
      {
        v44 = v19;
        v13 = s2;
        v22 = haystack;
        goto LABEL_14;
      }
LABEL_21:
      v22 = (const char *)v19[4];
      v13 = v47;
      v44 = v19;
LABEL_14:
      v23 = strcmp(v22, v13);
      v24 = (_QWORD *)v19[2];
      v19 = (_QWORD *)v19[3];
      if ( v23 >= 0 )
      {
        v20 = (__int64)v44;
        v19 = v24;
      }
      if ( !v19 )
        goto LABEL_50;
      continue;
    }
    break;
  }
  if ( v25 )
    goto LABEL_21;
  while ( 1 )
  {
    v24 = (_QWORD *)v19[2];
    if ( !v24 )
      break;
    v20 = (__int64)v19;
    v19 = (_QWORD *)v19[2];
    if ( v24[5] )
      goto LABEL_21;
  }
  v20 = (__int64)v19;
LABEL_50:
  if ( s2 )
  {
    v50.m128i_i64[0] = 0;
    qfree(s2);
  }
  for ( ; v20 != v18; v20 = std::_Rb_tree_increment(v20, v13, v15, v24) )
  {
    if ( *(_QWORD *)(v20 + 40) )
    {
      v36 = *(char **)(v20 + 32);
      v37 = (unsigned __int8)*v36 - 58;
      if ( *v36 == 58 )
        v37 = (unsigned __int8)v36[1];
      if ( v37 >= 0 )
        break;
      v38 = *v36;
      if ( *v36 )
      {
        v15 = *(_QWORD *)(v20 + 32);
        if ( v38 == 48 )
        {
          if ( !v36[1] )
          {
LABEL_61:
            v13 = "%llu";
            qsscanf((_DWORD)v36, (unsigned int)"%llu", (unsigned int)&ptr, (_DWORD)v24, v16, v17);
            v24 = ptr;
            if ( (unsigned __int64)ptr >= a3 && ((unsigned __int64)ptr < a4 || a4 == 0x7FFFFFFF) )
            {
              qsnprintf((unsigned int)v54, 32, (unsigned int)"%llu", (_DWORD)ptr - a3, v39, v40);
              v13 = v54;
              v12 = set_idcv_attr(v51, v54, v20 + 56, 0, v41, v42);
              if ( v12 )
                goto LABEL_42;
            }
          }
        }
        else
        {
          while ( (unsigned __int8)(v38 - 48) <= 9u )
          {
            v38 = *(_BYTE *)++v15;
            if ( !v38 )
              goto LABEL_61;
          }
        }
      }
    }
  }
LABEL_48:
  swap_idcvs(a1, v51);
  free_idcv(v51);
  return 0;
}
