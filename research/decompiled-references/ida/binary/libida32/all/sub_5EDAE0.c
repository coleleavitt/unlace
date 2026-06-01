__int64 __fastcall sub_5EDAE0(const char *src, __int64 a2, char a3)
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
  unsigned __int64 v18; // rdx
  size_t v19; // rbx
  void *v20; // rdi
  size_t v21; // r10
  __int64 (__fastcall *v22)(__int64 *, __int64); // [rsp+0h] [rbp-B8h]
  void *v23; // [rsp+20h] [rbp-98h] BYREF
  __int128 v24; // [rsp+28h] [rbp-90h]
  void *v25; // [rsp+40h] [rbp-78h] BYREF
  __int128 v26; // [rsp+48h] [rbp-70h]
  _BYTE ptr[24]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  v23 = nullptr;
  v24 = 0;
  get_abi_name(&v23);
  v25 = nullptr;
  v26 = 0;
  if ( src )
  {
    v4 = strlen(src);
    v5 = v4 + 1;
    v6 = v4;
    v25 = (void *)qvector_reserve(&v25, 0, v4 + 1, 1);
    *(_QWORD *)&v26 = v5;
    memmove(v25, src, v6);
    *((_BYTE *)v25 + v6) = 0;
    v7 = v26;
  }
  else
  {
    v7 = 0;
  }
  v8 = sub_5EA940;
  if ( a3 )
    v8 = sub_5EB100;
  v9 = 0;
  v10 = 0;
  v22 = v8;
  if ( !v7 )
    goto LABEL_11;
LABEL_6:
  v11 = v7 - 1;
  if ( v7 - 1 < v9 )
  {
    if ( v9 == -1 )
      goto LABEL_16;
    v12 = v25;
    v16 = -1;
  }
  else
  {
    v12 = v25;
    v13 = (char *)v25 + v9;
    v14 = strchr((const char *)v25 + v9, 45);
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
        v19 = v15 - v9;
        goto LABEL_31;
      }
    }
    else
    {
      v16 = -1;
    }
  }
  v18 = v9;
  *(_QWORD *)ptr = 0;
  if ( v9 > v11 )
    v18 = v11;
  *(_OWORD *)&ptr[8] = 0;
  v19 = v11 - v18;
  if ( v19 )
  {
    v13 = &v12[v18];
LABEL_31:
    v20 = nullptr;
    v21 = v19 + 1;
    if ( v19 != -1 )
    {
      *(_QWORD *)ptr = qvector_reserve(ptr, 0, v19 + 1, 1);
      v21 = v19 + 1;
      v20 = *(void **)ptr;
    }
    *(_QWORD *)&ptr[8] = v21;
    memmove(v20, v13, v19);
    *(_BYTE *)(*(_QWORD *)ptr + v19) = 0;
    goto LABEL_13;
  }
  while ( 1 )
  {
LABEL_13:
    v10 |= v22((__int64 *)&v23, (__int64)ptr);
    if ( *(_QWORD *)ptr )
    {
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(void **)ptr);
    }
    v9 = v16 + 1;
    if ( v16 == -1 )
      break;
LABEL_10:
    v7 = v26;
    if ( (_QWORD)v26 )
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
    *(_OWORD *)ptr = 0;
    v10 = set_compiler();
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23);
  }
  return v10;
}

