__int64 __fastcall sub_6DD660(__int64 a1, __int64 *a2, __int64 a3, const char *a4, _BYTE *a5, unsigned __int8 a6)
{
  __int64 v7; // r12
  const char *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r14
  const char *v11; // rdi
  const char *v12; // rdx
  __int64 v13; // rdi
  __int64 *v14; // rsi
  const char *v15; // rdx
  const char *v16; // r12
  __int64 v17; // r13
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned int v21; // ebp
  size_t v23; // r12
  const char *v24; // rcx
  __int64 idati; // rax
  __int64 *v26; // rdi
  const char *v27; // rdx
  const char *v28; // rax
  _QWORD *v29; // rdi
  __int64 v34; // [rsp+38h] [rbp-80h] BYREF
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __int128 v36; // [rsp+48h] [rbp-70h]
  __int64 v37; // [rsp+60h] [rbp-58h] BYREF
  const char *v38; // [rsp+68h] [rbp-50h]
  __int16 v39; // [rsp+70h] [rbp-48h]
  unsigned __int64 v40; // [rsp+78h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( !a4 )
  {
    ptr = nullptr;
    v36 = 0;
    goto LABEL_9;
  }
  v7 = *(_QWORD *)(a1 + 568);
  v8 = a4;
  if ( !v7 )
  {
LABEL_27:
    ptr = nullptr;
    v36 = 0;
LABEL_28:
    v23 = strlen(v8);
    ptr = (void *)qvector_reserve(&ptr, 0, v23 + 1, 1);
    *(_QWORD *)&v36 = v23 + 1;
    memmove(ptr, v8, v23);
    *((_BYTE *)ptr + v23) = 0;
    goto LABEL_9;
  }
  v9 = *(_QWORD *)(a1 + 560);
  v10 = 0;
  while ( 1 )
  {
    v11 = haystack;
    if ( *(_QWORD *)(v9 + 32) )
      v11 = *(const char **)(v9 + 24);
    if ( !strcmp(v11, v8) )
      break;
    ++v10;
    v9 += 56;
    if ( v7 == v10 )
      goto LABEL_27;
  }
  v8 = *(const char **)v9;
  ptr = nullptr;
  v36 = 0;
  if ( v8 )
    goto LABEL_28;
LABEL_9:
  sub_6DA080(a1, (__int64)&ptr);
  v34 = 0;
  v12 = haystack;
  if ( (_QWORD)v36 )
    v12 = (const char *)ptr;
  v13 = a1;
  v14 = &v34;
  if ( (unsigned __int8)sub_6DC6D0(a1, &v34, v12) )
  {
    if ( get_tinfo_property(v34, 5)
      || (v13 = v34, v14 = (_QWORD *)(&dword_0 + 2), a6 == (get_tinfo_property(v34, 2) & 0x3F)) )
    {
      if ( (**(_QWORD **)(a1 + 8) & 0x100LL) == 0 )
      {
        v27 = haystack;
        if ( (_QWORD)v36 )
          v27 = (const char *)ptr;
        sub_6D5A80((__int64 *)(a1 + 384), (__int64)&v34, v27, a5, 0);
      }
      goto LABEL_21;
    }
  }
  v15 = (const char *)v36;
  if ( (**(_QWORD **)(a1 + 8) & 0x100LL) == 0 )
  {
    if ( (_QWORD)v36 )
    {
      v15 = (const char *)ptr;
      v24 = (const char *)ptr;
      if ( ptr )
      {
LABEL_31:
        idati = *(_QWORD *)(a1 + 16);
        v38 = v24;
        v39 = 0;
        if ( !idati )
          idati = get_idati(v13, v14);
        v37 = idati;
        create_tinfo(&v34, a6, 189, &v37);
        v26 = (__int64 *)(a1 + 384);
        v15 = haystack;
        if ( (_QWORD)v36 )
          v15 = (const char *)ptr;
        goto LABEL_35;
      }
    }
    else
    {
      v24 = haystack;
      if ( haystack )
        goto LABEL_31;
    }
    v26 = (__int64 *)(a1 + 384);
LABEL_35:
    sub_6D5A80(v26, (__int64)&v34, v15, a5, 2);
    goto LABEL_21;
  }
  v16 = haystack;
  if ( (_QWORD)v36 )
    v16 = (const char *)ptr;
  v17 = *(_QWORD *)(a1 + 16);
  v38 = &byte_22F0C30;
  v39 = 0;
  v18 = v17;
  if ( !v17 )
    v18 = get_idati(v13, v14);
  v37 = v18;
  create_tinfo(&v34, a6, 189, &v37);
  v19 = save_tinfo(&v34, v17, 0, v16, 5);
  if ( v19 )
  {
    v28 = (const char *)tinfo_errstr(v19);
    v29 = (_QWORD *)a1;
    v21 = 0;
    sub_6DBD10(v29, a3, (__int64)"Failed to prepare forward declaration for %s: %s\n", a5, v28);
    goto LABEL_24;
  }
  if ( a5 && *a5 )
    set_tinfo_property4(&v34, 5, a5, 0, 0, 0);
LABEL_21:
  if ( a2 )
  {
    v20 = *a2;
    *a2 = v34;
    v34 = v20;
  }
  v21 = 1;
LABEL_24:
  clear_tinfo_t(&v34);
  if ( ptr )
  {
    *(_QWORD *)&v36 = 0;
    qfree(ptr);
  }
  return v21;
}
