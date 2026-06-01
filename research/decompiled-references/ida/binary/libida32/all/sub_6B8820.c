unsigned __int64 __fastcall sub_6B8820(__int64 a1, const char *a2, const void *a3)
{
  char *v4; // rbx
  size_t v5; // rax
  size_t v6; // r12
  size_t v7; // rbp
  void *v8; // rax
  __int64 *v9; // r15
  __int64 *v10; // rbp
  __int64 v11; // r12
  const char *v12; // rsi
  const char *v13; // rdi
  size_t v14; // rax
  size_t v15; // rbx
  void *v17; // rdi
  size_t v18; // rbp
  __int64 v19; // rax
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v22; // [rsp+10h] [rbp-50h]
  unsigned __int64 v23; // [rsp+20h] [rbp-40h]

  v4 = (char *)a2;
  v23 = __readfsqword(0x28u);
  v22 = 0;
  ptr = nullptr;
  if ( !a2 )
  {
    v9 = *(__int64 **)(a1 + 240);
    v11 = 0;
    v10 = &v9[3 * *(_QWORD *)(a1 + 248)];
    if ( v10 == v9 )
      return v23 - __readfsqword(0x28u);
    while ( 1 )
    {
LABEL_8:
      if ( v9[1] )
      {
        v12 = (const char *)*v9;
        v13 = haystack;
        if ( !v11 )
          goto LABEL_6;
      }
      else
      {
        if ( !v11 )
          goto LABEL_12;
        v12 = haystack;
      }
      v13 = v4;
LABEL_6:
      if ( strcmp(v13, v12) )
      {
        v9 += 3;
        if ( v10 != v9 )
          continue;
      }
      goto LABEL_12;
    }
  }
  v5 = strlen(a2);
  v6 = v5 + 1;
  v7 = v5;
  v8 = (void *)qvector_reserve(&ptr, 0, v5 + 1, 1);
  *(_QWORD *)&v22 = v6;
  ptr = v8;
  memmove(v8, a2, v7);
  *((_BYTE *)ptr + v7) = 0;
  v9 = *(__int64 **)(a1 + 240);
  v4 = (char *)ptr;
  v10 = &v9[3 * *(_QWORD *)(a1 + 248)];
  if ( v9 != v10 )
  {
    v11 = v22;
    goto LABEL_8;
  }
LABEL_12:
  if ( v4 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v4);
  }
  if ( v9 != (__int64 *)(*(_QWORD *)(a1 + 240) + 24LL * *(_QWORD *)(a1 + 248)) )
  {
    if ( a3 && (v14 = strlen((const char *)a3), (v15 = v14) != 0) )
    {
      v17 = (void *)*v9;
      v18 = v14 + 1;
      if ( v9[2] < v14 + 1 )
      {
        v19 = qvector_reserve(v9, *v9, v14 + 1, 1);
        *v9 = v19;
        v17 = (void *)v19;
      }
      v9[1] = v18;
      memmove(v17, a3, v15);
      *(_BYTE *)(*v9 + v15) = 0;
    }
    else
    {
      v9[1] = 0;
    }
  }
  return v23 - __readfsqword(0x28u);
}

