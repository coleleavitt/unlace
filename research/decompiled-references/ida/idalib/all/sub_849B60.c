unsigned __int64 __fastcall sub_849B60(__int64 a1, __int64 a2, const char *a3)
{
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // rbx
  size_t v7; // rax
  __int64 v8; // rbx
  size_t v9; // r14
  size_t v10; // r15
  _BYTE *v11; // rsi
  size_t v12; // rdx
  __int64 *v13; // rax
  char *v14; // r12
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // r13
  __int64 v18; // rbx
  const char *v19; // rsi
  const char *v20; // rdi
  unsigned __int64 v21; // rbx
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v24; // [rsp+10h] [rbp-50h]
  unsigned __int64 v25; // [rsp+20h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v24 = 0;
  ptr = nullptr;
  v4 = strlen((const char *)(a2 + 1));
  v5 = v4 + 1;
  v6 = v4;
  ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
  *(_QWORD *)&v24 = v5;
  memmove(ptr, (const void *)(a2 + 1), v6);
  *((_BYTE *)ptr + v6) = 0;
  if ( a3 )
  {
    v7 = strlen(a3);
    v8 = v24;
    v9 = v7;
    v10 = v7;
    if ( (_QWORD)v24 )
    {
      v8 = v24 - 1;
      v10 = v7 + v24 - 1;
    }
    v11 = ptr;
    v12 = v10 + 1;
    if ( *((_QWORD *)&v24 + 1) < v10 + 1 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
      v12 = v10 + 1;
      v11 = ptr;
    }
    *(_QWORD *)&v24 = v12;
    v11[v10] = 0;
    memmove((char *)ptr + v8, a3, v9);
  }
  v13 = *(__int64 **)(a1 + 40);
  v14 = (char *)ptr;
  v15 = *v13;
  v16 = *v13 + 24 * v13[1];
  if ( *v13 == v16 )
  {
LABEL_16:
    v21 = -1;
    goto LABEL_17;
  }
  v17 = v24;
  v18 = *v13;
  while ( 1 )
  {
    if ( *(_QWORD *)(v18 + 8) )
    {
      v19 = *(const char **)v18;
      v20 = haystack;
      if ( !v17 )
        goto LABEL_10;
      goto LABEL_15;
    }
    if ( !v17 )
      break;
    v19 = haystack;
LABEL_15:
    v20 = v14;
LABEL_10:
    if ( !strcmp(v20, v19) )
      break;
    v18 += 24;
    if ( v16 == v18 )
      goto LABEL_16;
  }
  v21 = 0xAAAAAAAAAAAAAAABLL * ((v18 - v15) >> 3);
LABEL_17:
  if ( v14 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v14);
  }
  return v21;
}
