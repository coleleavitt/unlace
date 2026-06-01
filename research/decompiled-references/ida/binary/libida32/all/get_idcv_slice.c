__int64 __fastcall get_idcv_slice(__m128i *a1, __int64 a2, int a3, int a4, char a5, int a6)
{
  __int64 v7; // r13
  __int64 v8; // rbp
  char v11; // al
  unsigned int v12; // eax
  __int64 v13; // r14
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r13
  _QWORD *v17; // r14
  __int64 v18; // r15
  const char *v19; // rax
  const char *v20; // rsi
  const char *v21; // rdi
  int v22; // eax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  void *v28; // rax
  __m128i v29; // xmm0
  unsigned int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // edx
  size_t v33; // r12
  const void *v34; // rbp
  char *v35; // rdi
  int v36; // eax
  char v37; // al
  __int64 v38; // rdx
  char v39; // r8
  int v40; // r9d
  _QWORD *v41; // [rsp+0h] [rbp-D8h]
  unsigned int v42; // [rsp+0h] [rbp-D8h]
  __int64 v43; // [rsp+8h] [rbp-D0h]
  const char *v44; // [rsp+20h] [rbp-B8h]
  char *s2; // [rsp+28h] [rbp-B0h]
  void *ptr; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v47; // [rsp+38h] [rbp-A0h] BYREF
  char v48[8]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v49; // [rsp+58h] [rbp-80h]
  __int64 v50; // [rsp+68h] [rbp-70h]
  _BYTE v51[40]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v52; // [rsp+98h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( !a1 )
    return set_qerrno(1568, a2);
  v7 = a2;
  LODWORD(v8) = a3;
  if ( !a2 )
    return set_qerrno(1568, a2);
  while ( 1 )
  {
    v11 = *(_BYTE *)v7;
    if ( *(_BYTE *)v7 == 7 )
    {
      v27 = *(_QWORD *)(v7 + 16);
      if ( !v27 )
      {
LABEL_26:
        ptr = nullptr;
        v47 = 0;
LABEL_27:
        free_idcv(a1);
        v28 = ptr;
        v29 = _mm_loadu_si128(&v47);
        a1->m128i_i8[0] = 7;
        a1->m128i_i64[1] = (__int64)v28;
        a1[1] = v29;
        return 0;
      }
      v30 = v27 - 1;
      v31 = v30;
      if ( (int)v8 < 0 )
      {
        LODWORD(v8) = v30 + v8;
        if ( (int)v8 < 0 )
        {
          if ( (a5 & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_26;
            v34 = *(const void **)(v7 + 8);
            v33 = 1;
            ptr = nullptr;
            v47 = 0;
LABEL_39:
            ptr = (void *)qvector_reserve(&ptr, 0, v33 + 1, 1);
            v47.m128i_i64[0] = v33 + 1;
            memmove(ptr, v34, v33);
            *((_BYTE *)ptr + v33) = 0;
            goto LABEL_27;
          }
          if ( a4 >= 0 )
          {
            if ( a4 <= v30 )
              v30 = a4;
            v8 = 0;
            v33 = v30;
            v32 = v30;
LABEL_38:
            v34 = (const void *)(*(_QWORD *)(v7 + 8) + v8);
            ptr = nullptr;
            v47 = 0;
            if ( !v32 )
              goto LABEL_27;
            goto LABEL_39;
          }
          v31 = v30 + a4;
          if ( (int)(v30 + a4) < 0 )
            goto LABEL_26;
          if ( v31 > v30 )
            v31 = v30;
          LODWORD(v8) = 0;
LABEL_37:
          v32 = v31 - v8;
          v8 = (unsigned int)v8;
          v33 = v32;
          goto LABEL_38;
        }
      }
      if ( (unsigned int)v8 > v30 )
        LODWORD(v8) = v30;
      if ( (a5 & 1) != 0 )
      {
        if ( (int)v8 + 1 >= 0 )
        {
          if ( v30 >= (int)v8 + 1 )
          {
            v33 = 1;
            v34 = (const void *)(*(_QWORD *)(v7 + 8) + (unsigned int)v8);
            ptr = nullptr;
            v47 = 0;
            goto LABEL_39;
          }
          goto LABEL_36;
        }
        a4 = v30 + 0x80000000;
        if ( (int)(v30 + 0x80000000) < 0 )
          goto LABEL_26;
      }
      else if ( a4 < 0 )
      {
        a4 += v30;
        if ( a4 < 0 )
          goto LABEL_26;
      }
      if ( a4 <= v30 )
        v30 = a4;
      v31 = v30;
LABEL_36:
      if ( v31 < (unsigned int)v8 )
        goto LABEL_26;
      goto LABEL_37;
    }
    if ( v11 != 10 )
      break;
    v26 = v7;
    a2 = 0;
    v7 = deref_idcv(v7, 0);
    if ( !v7 )
      return get_qerrno(v26);
  }
  if ( v11 != 5 )
    return set_qerrno(1568, a2);
  if ( (a5 & 1) != 0 )
  {
    qsnprintf((int)v51, 32, (int)"%u", v8, a5, a6, (char)v41);
    return get_idcv_attr();
  }
  v48[0] = 2;
  v50 = 0;
  v49 = 0;
  v12 = idcv_object(v48, 0);
  if ( v12 )
  {
LABEL_41:
    v42 = v12;
    free_idcv(v48);
    return v42;
  }
  v13 = *(_QWORD *)(v7 + 8);
  ptr = nullptr;
  v47 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 3, 1);
  v16 = v13 + 8;
  v47.m128i_i64[0] = 3;
  *(_WORD *)ptr = -209;
  *((_BYTE *)ptr + 2) = 0;
  v17 = *(_QWORD **)(v13 + 16);
  s2 = (char *)ptr;
  if ( !v17 )
  {
    if ( ptr )
    {
      v47.m128i_i64[0] = 0;
      qfree(ptr);
    }
    goto LABEL_47;
  }
  v18 = v16;
  v43 = v47.m128i_i64[0];
  v19 = haystack;
  if ( v47.m128i_i64[0] )
    v19 = (const char *)ptr;
  v44 = v19;
  while ( 2 )
  {
    v24 = v17[5];
    if ( v43 )
    {
      if ( !v24 )
      {
        v41 = v17;
        v20 = s2;
        v21 = haystack;
        goto LABEL_14;
      }
LABEL_21:
      v21 = (const char *)v17[4];
      v20 = v44;
      v41 = v17;
LABEL_14:
      v22 = strcmp(v21, v20);
      v23 = (_QWORD *)v17[2];
      v17 = (_QWORD *)v17[3];
      if ( v22 >= 0 )
      {
        v18 = (__int64)v41;
        v17 = v23;
      }
      if ( !v17 )
        goto LABEL_49;
      continue;
    }
    break;
  }
  if ( v24 )
    goto LABEL_21;
  while ( 1 )
  {
    v23 = (_QWORD *)v17[2];
    if ( !v23 )
      break;
    v18 = (__int64)v17;
    v17 = (_QWORD *)v17[2];
    if ( v23[5] )
      goto LABEL_21;
  }
  v18 = (__int64)v17;
LABEL_49:
  if ( s2 )
  {
    v47.m128i_i64[0] = 0;
    qfree(s2);
  }
  for ( ; v18 != v16; v18 = std::_Rb_tree_increment() )
  {
    if ( *(_QWORD *)(v18 + 40) )
    {
      v35 = *(char **)(v18 + 32);
      v36 = (unsigned __int8)*v35 - 58;
      if ( *v35 == 58 )
        v36 = (unsigned __int8)v35[1];
      if ( v36 >= 0 )
        break;
      v37 = *v35;
      if ( *v35 )
      {
        v38 = *(_QWORD *)(v18 + 32);
        if ( v37 == 48 )
        {
          if ( !v35[1] )
          {
LABEL_60:
            qsscanf((int)v35, (int)"%u", (int)&ptr, (int)v23, v14, v15, (char)v41);
            if ( (unsigned int)ptr >= (unsigned int)v8 && ((unsigned int)ptr < a4 || a4 == 0x7FFFFFFF) )
            {
              qsnprintf((int)v51, 32, (int)"%u", (_DWORD)ptr - v8, v39, v40, (char)v51);
              v12 = set_idcv_attr();
              if ( v12 )
                goto LABEL_41;
            }
          }
        }
        else
        {
          while ( (unsigned __int8)(v37 - 48) <= 9u )
          {
            v37 = *(_BYTE *)++v38;
            if ( !v37 )
              goto LABEL_60;
          }
        }
      }
    }
  }
LABEL_47:
  swap_idcvs(a1, v48);
  free_idcv(v48);
  return 0;
}

