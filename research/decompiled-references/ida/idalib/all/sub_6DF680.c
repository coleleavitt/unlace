__int64 *__fastcall sub_6DF680(__int64 *a1, __int64 a2, __int64 *a3, const char *a4)
{
  size_t v9; // r14
  __int64 *v10; // rsi
  _QWORD *v11; // rdi
  const char *v12; // rdx
  __int64 idati; // rax
  __int64 v14; // rbp
  char v15; // al
  const char *v16; // rcx
  char v17; // al
  __int64 *v18; // [rsp-10h] [rbp-98h]
  _QWORD *v19; // [rsp-8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int128 v21; // [rsp+18h] [rbp-70h]
  _QWORD v22[2]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v23; // [rsp+40h] [rbp-48h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  *a1 = 0;
  if ( !a4 || !*a4 )
    return a1;
  v21 = 0;
  ptr = nullptr;
  v9 = strlen(a4);
  ptr = (void *)qvector_reserve(&ptr, 0, v9 + 1, 1);
  *(_QWORD *)&v21 = v9 + 1;
  memmove(ptr, a4, v9);
  *((_BYTE *)ptr + v9) = 0;
  sub_6DA080(a2, (__int64)&ptr);
  if ( (_QWORD)v21 )
  {
    v10 = a1;
    v11 = (_QWORD *)a2;
    if ( (unsigned __int8)sub_6DC6D0(a2, a1, (const char *)ptr) )
      goto LABEL_6;
  }
  else
  {
    v10 = a1;
    v11 = (_QWORD *)a2;
    if ( (unsigned __int8)sub_6DC6D0(a2, a1, haystack) )
      goto LABEL_6;
  }
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
  {
    v11 = *(_QWORD **)(a2 + 48);
    v10 = a3;
    v14 = sub_AAE980(v11, a3);
    if ( v14 > 0 )
    {
      v15 = sub_F65240(*(_QWORD *)((unsigned __int64)a3 & 0xFFFFFFFFFFFFFFF0LL));
      sub_6D8FE0(v22, v14, v15);
      v10 = v22;
      copy_tinfo_t(a1);
      v11 = v22;
      clear_tinfo_t(v22);
      if ( !*(_BYTE *)a1 )
        goto LABEL_11;
      v16 = haystack;
      if ( (_QWORD)v21 )
        v16 = (const char *)ptr;
      v17 = sub_6DF2F0(a2, a1, 1, v16, nullptr, 0, 0);
      v10 = v18;
      v11 = v19;
      if ( !v17 )
      {
        v11 = a1;
        clear_tinfo_t(a1);
      }
    }
  }
  if ( !*(_BYTE *)a1 )
  {
LABEL_11:
    v12 = haystack;
    if ( (_QWORD)v21 )
      v12 = (const char *)ptr;
    if ( v12 )
    {
      idati = *(_QWORD *)(a2 + 16);
      v22[1] = v12;
      v23 = 0;
      if ( !idati )
        idati = get_idati(v11, v10);
      v22[0] = idati;
      create_tinfo(a1, 61, 61, v22);
    }
  }
LABEL_6:
  if ( ptr )
  {
    *(_QWORD *)&v21 = 0;
    qfree(ptr);
  }
  return a1;
}
