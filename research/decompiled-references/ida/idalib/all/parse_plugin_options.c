__int64 __fastcall parse_plugin_options(__int64 *a1, const char *a2)
{
  __int64 result; // rax
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  __int64 i; // rax
  __int64 v8; // rbx
  char *v9; // rax
  const void *v10; // r13
  size_t v11; // rax
  size_t v12; // r8
  size_t v13; // rax
  size_t v14; // r13
  const char *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  void *v19; // rdi
  size_t v20; // rdx
  void *v21; // rdi
  size_t v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // [rsp+0h] [rbp-78h]
  size_t v26; // [rsp+0h] [rbp-78h]
  size_t v27; // [rsp+0h] [rbp-78h]
  size_t v28; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v30; // [rsp+28h] [rbp-50h]
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  result = 0;
  if ( !a2 )
    return 0;
  if ( *a2 )
  {
    ptr = nullptr;
    v30 = 0;
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
    *(_QWORD *)&v30 = v5;
    memmove(ptr, a2, v6);
    *((_BYTE *)ptr + v6) = 0;
    for ( i = qstrtok((char *)ptr, ":"); ; i = qstrtok(nullptr, ":") )
    {
      v15 = (const char *)i;
      if ( !i )
        break;
      v16 = a1[1];
      v17 = *a1;
      if ( a1[2] < (unsigned __int64)(v16 + 1) )
      {
        v18 = qvector_reserve(a1, v17, v16 + 1, 48);
        *a1 = v18;
        v16 = a1[1];
        v17 = v18;
      }
      v8 = v17 + 48 * v16;
      *(_QWORD *)v8 = 0;
      *(_QWORD *)(v8 + 24) = 0;
      *(_OWORD *)(v8 + 8) = 0;
      *(_OWORD *)(v8 + 32) = 0;
      ++a1[1];
      v9 = strchr(v15, 61);
      if ( v9 )
      {
        *v9 = 0;
        v10 = v9 + 1;
        v11 = strlen(v9 + 1);
        v12 = v11;
        if ( v11 )
        {
          v21 = *(void **)(v8 + 24);
          v22 = v11 + 1;
          if ( *(_QWORD *)(v8 + 40) < v11 + 1 )
          {
            v28 = v11;
            v27 = v11 + 1;
            v24 = qvector_reserve(v8 + 24, v21, v22, 1);
            v12 = v28;
            v22 = v27;
            *(_QWORD *)(v8 + 24) = v24;
            v21 = (void *)v24;
          }
          *(_QWORD *)(v8 + 32) = v22;
          v25 = v12;
          memmove(v21, v10, v12);
          *(_BYTE *)(*(_QWORD *)(v8 + 24) + v25) = 0;
        }
        else
        {
          *(_QWORD *)(v8 + 32) = 0;
        }
      }
      v13 = strlen(v15);
      v14 = v13;
      if ( v13 )
      {
        v19 = *(void **)v8;
        v20 = v13 + 1;
        if ( *(_QWORD *)(v8 + 16) < v13 + 1 )
        {
          v26 = v13 + 1;
          v23 = qvector_reserve(v8, *(_QWORD *)v8, v20, 1);
          *(_QWORD *)v8 = v23;
          v20 = v26;
          v19 = (void *)v23;
        }
        *(_QWORD *)(v8 + 8) = v20;
        memmove(v19, v15, v14);
        *(_BYTE *)(*(_QWORD *)v8 + v14) = 0;
      }
      else
      {
        *(_QWORD *)(v8 + 8) = 0;
      }
    }
    if ( ptr )
    {
      *(_QWORD *)&v30 = 0;
      qfree(ptr);
    }
    return 1;
  }
  return result;
}
