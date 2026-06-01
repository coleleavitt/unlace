void *__fastcall sub_827FE0(_DWORD *a1, int a2, _BYTE **a3)
{
  __int128 v4; // rax
  _BYTE **v5; // rbp
  _BYTE **v6; // r12
  _BYTE *v7; // rdi
  void *v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // r15
  void *v12; // r14
  __int64 v13; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // rsi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  void *result; // rax
  const char *errdesc; // rsi
  void *v20; // [rsp+8h] [rbp-78h] BYREF
  __int128 v21; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v23; // [rsp+30h] [rbp-50h]
  unsigned __int64 v24; // [rsp+40h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  *(_QWORD *)&v4 = 0;
  v21 = 0;
  v20 = nullptr;
  if ( a2 <= 0 )
  {
    if ( a1 )
    {
      *a1 = 0;
      *((_QWORD *)&v4 + 1) = 0;
      v16 = 1;
      v15 = nullptr;
      ptr = nullptr;
      goto LABEL_28;
    }
    ptr = nullptr;
    v15 = nullptr;
    v16 = 1;
    goto LABEL_36;
  }
  v5 = a3;
  v6 = &a3[a2];
  while ( 1 )
  {
    v7 = *v5;
    if ( !*v5 )
      break;
    if ( *v7 == 64 )
    {
      v11 = qfopen(v7 + 1, "r");
      if ( !v11 )
      {
        errdesc = (const char *)get_errdesc(v7 + 1);
        sub_378C70((__int64)"indirect file %s", errdesc);
      }
      ptr = nullptr;
      v23 = 0;
      while ( qgetline(&ptr) >= 0 )
      {
        while ( qcleanline(&ptr, 59, 3) > 0 )
        {
          v12 = ptr;
          if ( (unsigned __int64)v23 < *((_QWORD *)&v23 + 1) )
          {
            if ( ptr )
            {
              if ( (_QWORD)v23 )
              {
                v12 = (void *)qrealloc(ptr);
                if ( !v12 )
                  v12 = ptr;
              }
            }
          }
          v13 = v21;
          ptr = nullptr;
          v14 = v20;
          v23 = 0;
          if ( *((_QWORD *)&v21 + 1) < (unsigned __int64)(v21 + 1) )
          {
            v20 = (void *)qvector_reserve(&v20, v20, v21 + 1, 8);
            v14 = v20;
            v13 = v21;
          }
          v14[v13] = v12;
          *(_QWORD *)&v21 = v21 + 1;
          if ( qgetline(&ptr) < 0 )
            goto LABEL_17;
        }
      }
LABEL_17:
      qfclose(v11);
      if ( !ptr )
        goto LABEL_4;
      *(_QWORD *)&v23 = 0;
      ++v5;
      qfree(ptr);
      if ( v6 == v5 )
      {
LABEL_19:
        v4 = v21;
        v15 = v20;
        v16 = v21 + 1;
        goto LABEL_25;
      }
    }
    else
    {
      ptr = (void *)qstrdup(v7);
      v8 = ptr;
      v9 = v21;
      v10 = v20;
      if ( *((_QWORD *)&v21 + 1) < (unsigned __int64)(v21 + 1) )
      {
        v20 = (void *)qvector_reserve(&v20, v20, v21 + 1, 8);
        v10 = v20;
        v9 = v21;
      }
      v10[v9] = v8;
      *(_QWORD *)&v21 = v21 + 1;
LABEL_4:
      if ( v6 == ++v5 )
        goto LABEL_19;
    }
  }
  v4 = v21;
  v15 = v20;
  v16 = v21 + 1;
LABEL_25:
  if ( a1 )
    *a1 = v4;
  ptr = nullptr;
LABEL_28:
  if ( *((_QWORD *)&v4 + 1) < v16 )
  {
LABEL_36:
    v20 = (void *)qvector_reserve(&v20, v15, v16, 8);
    v15 = v20;
    *(_QWORD *)&v4 = v21;
  }
  v15[(_QWORD)v4] = 0;
  v17 = v21 + 1;
  result = v20;
  *(_QWORD *)&v21 = v17;
  if ( v17 < *((_QWORD *)&v21 + 1) && v17 && v20 )
  {
    result = (void *)qrealloc(v20);
    if ( !result )
      return v20;
  }
  return result;
}
