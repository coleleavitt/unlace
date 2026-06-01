__int64 __fastcall sub_512CF0(const char *a1, const char *a2)
{
  const char *v2; // r13
  const char *v3; // rbx
  const char **v4; // rbp
  const char *v5; // r12
  const char *v6; // r15
  int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 *v13; // r12
  unsigned __int64 v14; // r14
  char *v15; // r15
  const char *v16; // r13
  char *v17; // r12
  const char *v18; // rsi
  char *v19; // r14
  const char *v20; // rdi
  int v21; // eax
  char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  const char *v25; // rax
  const char *v26; // rsi
  const char *v27; // rdi
  __int64 v28; // rax
  size_t v29; // r12
  __int64 v30; // r14
  unsigned __int64 v31; // r8
  char *v32; // rsi
  __int64 v33; // rax
  const char *v34; // r15
  size_t v35; // rax
  __int64 v36; // r12
  size_t v37; // r14
  unsigned __int64 v38; // r8
  char *v39; // rsi
  __int64 v40; // rax
  const char *v41; // r8
  void *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  const char *v45; // [rsp+8h] [rbp-80h]
  unsigned int v46; // [rsp+10h] [rbp-78h]
  unsigned int v47; // [rsp+14h] [rbp-74h]
  const char *v48; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v50; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v52[8]; // [rsp+48h] [rbp-40h] BYREF

  v52[0] = __readfsqword(0x28u);
  if ( *((_QWORD *)a2 + 1) <= 1u )
    return 0;
  v2 = *((const char **)a1 + 11);
  v3 = a1;
  v4 = (const char **)a2;
  v45 = a1 + 80;
  if ( v2 )
  {
    v5 = *(const char **)a2;
    v6 = a1 + 80;
    do
    {
      while ( 1 )
      {
        a1 = haystack;
        if ( *((_QWORD *)v2 + 5) )
          a1 = *((const char **)v2 + 4);
        v7 = strcmp(a1, v5);
        v8 = *((_QWORD *)v2 + 2);
        a2 = *((const char **)v2 + 3);
        if ( v7 < 0 )
          break;
        v6 = v2;
        v2 = *((const char **)v2 + 2);
        if ( !v8 )
          goto LABEL_9;
      }
      v2 = *((const char **)v2 + 3);
    }
    while ( a2 );
LABEL_9:
    if ( v45 != v6 )
    {
      a2 = haystack;
      if ( *((_QWORD *)v6 + 5) )
      {
        a2 = *((const char **)v6 + 4);
        a1 = v5;
        if ( strcmp(v5, a2) < 0 )
          goto LABEL_16;
      }
      else
      {
        a1 = v5;
        if ( strcmp(v5, haystack) < 0 )
          goto LABEL_16;
      }
      if ( *((_DWORD *)v6 + 14) != -1 )
        return *((unsigned int *)v6 + 14);
    }
  }
LABEL_16:
  if ( !*((_QWORD *)v3 + 19) )
  {
    a1 = v3 + 144;
    a2 = (_BYTE *)(&dword_0 + 1);
    sub_5111C0((__int64 *)v3 + 18, 1u);
  }
  v10 = *((_QWORD *)v3 + 7);
  if ( v10 )
  {
    v11 = *(unsigned int *)(*((_QWORD *)v3 + 6) + 4 * v10 - 4);
    *((_QWORD *)v3 + 7) = v10 - 1;
    v47 = v11;
  }
  else
  {
    v11 = *((_QWORD *)v3 + 19);
    a2 = *((const char **)v3 + 18);
    v47 = v11;
    if ( *((_QWORD *)v3 + 20) < (unsigned __int64)(v11 + 1) )
    {
      a1 = v3 + 144;
      v43 = qvector_reserve(v3 + 144, a2, v11 + 1, 56);
      v11 = *((_QWORD *)v3 + 19);
      *((_QWORD *)v3 + 18) = v43;
      a2 = (const char *)v43;
    }
    v25 = &a2[56 * v11];
    *(_QWORD *)v25 = 0;
    *((_QWORD *)v25 + 3) = 0;
    *((_DWORD *)v25 + 12) = 0;
    *((_BYTE *)v25 + 52) = 0;
    *(_OWORD *)(v25 + 8) = 0;
    *((_OWORD *)v25 + 2) = 0;
    ++*((_QWORD *)v3 + 19);
  }
  v46 = v47;
  if ( !(unsigned __int8)must_journal(a1, a2, v11) )
    goto LABEL_21;
  ptr = nullptr;
  v50 = 0;
  v28 = pack_dd(src, v52, v47) - (_QWORD)src;
  v29 = v28;
  if ( v28 )
  {
    v30 = v50;
    v31 = v50 + v28;
    if ( __CFADD__((_QWORD)v50, v28) )
    {
      if ( (unsigned __int64)v50 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v50 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v50 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_55;
      }
      v31 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v32 = (char *)ptr;
    v33 = v50;
    if ( *((_QWORD *)&v50 + 1) < v31 )
    {
      v48 = (const char *)v31;
      ptr = (void *)qvector_reserve(&ptr, ptr, v31, 1);
      v32 = (char *)ptr;
      v31 = (unsigned __int64)v48;
      v33 = v50;
    }
    v48 = (const char *)v31;
    memset(&v32[v33], 0, v31 - v33);
    *(_QWORD *)&v50 = v48;
LABEL_55:
    memcpy((char *)ptr + v30, src, v29);
  }
  v34 = haystack;
  if ( v4[1] )
    v34 = *v4;
  if ( v34 )
  {
    v35 = strlen(v34);
    v36 = v50;
    v37 = v35 + 1;
    v38 = v50 + v35 + 1;
    if ( __CFADD__((_QWORD)v50, v35 + 1) )
    {
      if ( (unsigned __int64)v50 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v50 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_63;
        goto LABEL_62;
      }
      v38 = 0x7FFFFFFFFFFFFFFFLL;
    }
LABEL_66:
    v39 = (char *)ptr;
    v40 = v36;
    if ( *((_QWORD *)&v50 + 1) < v38 )
    {
      v48 = (const char *)v38;
      ptr = (void *)qvector_reserve(&ptr, ptr, v38, 1);
      v39 = (char *)ptr;
      v38 = (unsigned __int64)v48;
      v40 = v50;
    }
    v48 = (const char *)v38;
    memset(&v39[v40], 0, v38 - v40);
    *(_QWORD *)&v50 = v48;
    goto LABEL_63;
  }
  v36 = v50;
  v34 = &byte_22F0C30;
  v37 = 1;
  v38 = v50 + 1;
  if ( (_QWORD)v50 != -1 )
    goto LABEL_66;
  v36 = -1;
  v34 = &byte_22F0C30;
  v37 = 1;
LABEL_62:
  *(_QWORD *)&v50 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_63:
  memcpy((char *)ptr + v36, v34, v37);
  add_undo_record(125, ptr, v50);
  if ( ptr )
  {
    *(_QWORD *)&v50 = 0;
    qfree(ptr);
  }
LABEL_21:
  v12 = *((_QWORD *)v3 + 18);
  v13 = (__int64 *)(v12 + 56LL * (int)v47);
  if ( v13 != (__int64 *)v4 )
  {
    v14 = (unsigned __int64)v4[1];
    if ( v14 > 1 )
    {
      v41 = *v4;
      v42 = (void *)*v13;
      if ( v13[2] < v14 )
      {
        v48 = *v4;
        v44 = qvector_reserve(v12 + 56LL * (int)v47, *v13, v4[1], 1);
        v41 = v48;
        *v13 = v44;
        v42 = (void *)v44;
      }
      v13[1] = v14;
      memmove(v42, v41, v14 - 1);
      *(_BYTE *)(*v13 + v14 - 1) = 0;
    }
    else
    {
      v13[1] = 0;
    }
  }
  *((_BYTE *)v13 + 52) = 0;
  v15 = *((char **)v3 + 11);
  if ( !v15 )
  {
    v17 = (char *)v45;
    goto LABEL_46;
  }
  v16 = v4[1];
  v17 = (char *)v45;
  while ( 1 )
  {
    v23 = *((_QWORD *)v15 + 5);
    if ( !v16 )
      break;
    v18 = *v4;
    v19 = v15;
    v20 = haystack;
    if ( v23 )
      goto LABEL_27;
LABEL_28:
    v21 = strcmp(v20, v18);
    v22 = *((char **)v15 + 2);
    v15 = *((char **)v15 + 3);
    if ( v21 >= 0 )
    {
      v17 = v19;
      v15 = v22;
    }
    if ( !v15 )
      goto LABEL_41;
  }
  if ( v23 )
  {
LABEL_35:
    v19 = v15;
    v18 = haystack;
LABEL_27:
    v20 = *((const char **)v15 + 4);
    goto LABEL_28;
  }
  while ( 1 )
  {
    v24 = *((_QWORD *)v15 + 2);
    if ( !v24 )
      break;
    v17 = v15;
    v15 = *((char **)v15 + 2);
    if ( *(_QWORD *)(v24 + 40) )
      goto LABEL_35;
  }
  v17 = v15;
LABEL_41:
  if ( v45 == v17 )
    goto LABEL_46;
  if ( *((_QWORD *)v17 + 5) )
  {
    v26 = *((const char **)v17 + 4);
    v27 = haystack;
    if ( v16 )
      goto LABEL_44;
LABEL_45:
    if ( strcmp(v27, v26) < 0 )
    {
LABEL_46:
      ptr = v4;
      v17 = (char *)sub_512B90((_QWORD *)v3 + 9, v17, (__int64 *)&ptr);
    }
  }
  else
  {
    v26 = haystack;
    if ( v16 )
    {
LABEL_44:
      v27 = *v4;
      goto LABEL_45;
    }
  }
  *((_DWORD *)v17 + 14) = v47;
  *((_BYTE *)v3 + 168) = 1;
  return v46;
}
