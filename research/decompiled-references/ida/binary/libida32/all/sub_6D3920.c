_QWORD *__fastcall sub_6D3920(_QWORD *a1, const char *a2)
{
  void *v2; // rbp
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // r13
  void *v6; // rax
  unsigned __int64 v7; // rax
  char *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v13; // r12
  const char *v14; // rsi
  const char *v15; // rdi
  _QWORD *v16; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v18; // [rsp+8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v2 = (void *)a2;
  ptr = nullptr;
  v18 = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    v6 = (void *)qvector_reserve(&ptr, 0, v3 + 1, 1);
    *(_QWORD *)&v18 = v4;
    ptr = v6;
    memmove(v6, a2, v5);
    *((_BYTE *)ptr + v5) = 0;
    v2 = ptr;
    if ( a1[19] )
    {
      if ( (char *)ptr + (_QWORD)v18 == ptr )
      {
        v7 = 0xCBF29CE484222325LL;
      }
      else
      {
        v7 = 0xCBF29CE484222325LL;
        v8 = (char *)ptr;
        do
        {
          v9 = *v8++;
          v7 = 0x100000001B3LL * (v9 ^ v7);
        }
        while ( v8 != (char *)ptr + (_QWORD)v18 );
      }
      v10 = sub_6CFB80(a1[16], a1[17], v7 % a1[17], (__int64)&ptr);
      if ( v10 )
      {
        v11 = (_QWORD *)*v10;
        if ( v2 )
        {
          *(_QWORD *)&v18 = 0;
          qfree(v2);
        }
LABEL_9:
        if ( v11 )
          return v11 + 4;
        return nullptr;
      }
      goto LABEL_22;
    }
    v11 = (_QWORD *)a1[18];
    if ( !v11 )
    {
LABEL_22:
      if ( v2 )
      {
        *(_QWORD *)&v18 = 0;
        qfree(v2);
      }
      return nullptr;
    }
    goto LABEL_13;
  }
  if ( a1[19] )
  {
    v16 = sub_6CFB80(a1[16], a1[17], 0xCBF29CE484222325LL % a1[17], (__int64)&ptr);
    if ( v16 )
    {
      v11 = (_QWORD *)*v16;
      goto LABEL_9;
    }
    return nullptr;
  }
  v11 = (_QWORD *)a1[18];
  if ( !v11 )
    return nullptr;
LABEL_13:
  v13 = v18;
  while ( 1 )
  {
    if ( v11[2] )
    {
      v14 = (const char *)v11[1];
      v15 = haystack;
      if ( !v13 )
        goto LABEL_15;
      goto LABEL_20;
    }
    if ( !v13 )
      break;
    v14 = haystack;
LABEL_20:
    v15 = (const char *)v2;
LABEL_15:
    if ( !strcmp(v15, v14) )
      break;
    v11 = (_QWORD *)*v11;
    if ( !v11 )
      goto LABEL_22;
  }
  if ( v2 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v2);
  }
  return v11 + 4;
}

