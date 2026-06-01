__int64 __fastcall sub_609A10(const char *src, char a2, char a3)
{
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // r12
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64 *, __int64); // rdx
  unsigned __int64 v9; // r14
  unsigned int v10; // ebp
  unsigned __int64 v11; // rbx
  _BYTE *v12; // r12
  char *v13; // r15
  char *v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // r13
  const char *v17; // rdx
  unsigned __int64 v19; // rdx
  size_t v20; // rbx
  void *v21; // rdi
  size_t v22; // r10
  __int64 (__fastcall *v23)(__int64 *, __int64); // [rsp+0h] [rbp-B8h]
  void *v24; // [rsp+20h] [rbp-98h] BYREF
  __int128 v25; // [rsp+28h] [rbp-90h]
  void *v26; // [rsp+40h] [rbp-78h] BYREF
  __int128 v27; // [rsp+48h] [rbp-70h]
  _BYTE ptr[24]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v24 = nullptr;
  v25 = 0;
  get_abi_name(&v24);
  v26 = nullptr;
  v27 = 0;
  if ( src )
  {
    v4 = strlen(src);
    v5 = v4 + 1;
    v6 = v4;
    v26 = (void *)qvector_reserve(&v26, 0, v4 + 1, 1);
    *(_QWORD *)&v27 = v5;
    memmove(v26, src, v6);
    *((_BYTE *)v26 + v6) = 0;
    v7 = v27;
  }
  else
  {
    v7 = 0;
  }
  v8 = sub_606810;
  if ( a3 )
    v8 = sub_606FD0;
  v9 = 0;
  v10 = 0;
  v23 = v8;
  if ( !v7 )
    goto LABEL_11;
LABEL_6:
  v11 = v7 - 1;
  if ( v7 - 1 < v9 )
  {
    if ( v9 == -1 )
      goto LABEL_16;
    v12 = v26;
    v16 = -1;
  }
  else
  {
    v12 = v26;
    v13 = (char *)v26 + v9;
    v14 = strchr((const char *)v26 + v9, 45);
    if ( v14 )
    {
      v15 = v14 - v12;
      v16 = v14 - v12;
      if ( v9 >= v14 - v12 )
      {
        v9 = v15 + 1;
        goto LABEL_10;
      }
      if ( v11 >= v15 )
      {
        memset(ptr, 0, sizeof(ptr));
        v20 = v15 - v9;
        goto LABEL_33;
      }
    }
    else
    {
      v16 = -1;
    }
  }
  v19 = v9;
  *(_QWORD *)ptr = 0;
  if ( v9 > v11 )
    v19 = v11;
  *(_OWORD *)&ptr[8] = 0;
  v20 = v11 - v19;
  if ( v20 )
  {
    v13 = &v12[v19];
LABEL_33:
    v21 = nullptr;
    v22 = v20 + 1;
    if ( v20 != -1 )
    {
      *(_QWORD *)ptr = qvector_reserve(ptr, 0, v20 + 1, 1);
      v22 = v20 + 1;
      v21 = *(void **)ptr;
    }
    *(_QWORD *)&ptr[8] = v22;
    memmove(v21, v13, v20);
    *(_BYTE *)(*(_QWORD *)ptr + v20) = 0;
    goto LABEL_13;
  }
  while ( 1 )
  {
LABEL_13:
    v10 |= v23((__int64 *)&v24, (__int64)ptr);
    if ( *(_QWORD *)ptr )
    {
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(void **)ptr);
    }
    v9 = v16 + 1;
    if ( v16 == -1 )
      break;
LABEL_10:
    v7 = v27;
    if ( (_QWORD)v27 )
      goto LABEL_6;
LABEL_11:
    if ( v9 == -1 )
      break;
    v16 = -1;
    memset(ptr, 0, sizeof(ptr));
  }
LABEL_16:
  if ( (_BYTE)v10 )
  {
    v17 = haystack;
    if ( (_QWORD)v25 )
      v17 = (const char *)v24;
    *(_OWORD *)ptr = 0;
    v10 = set_compiler((const __m128i *)ptr, (const char *)(a2 == 0 ? 4 : 12), v17);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  return v10;
}
