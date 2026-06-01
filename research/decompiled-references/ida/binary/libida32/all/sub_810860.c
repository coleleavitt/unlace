unsigned __int64 sub_810860(__int64 *a1, char a2, __int64 a3, ...)
{
  size_t v4; // rax
  size_t v5; // r12
  size_t v6; // rbx
  char *v7; // rsi
  size_t v8; // rbx
  __int64 v9; // rbp
  char *v10; // r14
  __int64 v11; // r15
  const char *v12; // rdi
  void *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v17; // [rsp+0h] [rbp-1138h]
  __int64 v18; // [rsp+8h] [rbp-1130h]
  void *src; // [rsp+10h] [rbp-1128h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-1120h]
  gcc_va_list va; // [rsp+28h] [rbp-1110h] BYREF
  char s[4104]; // [rsp+40h] [rbp-10F8h] BYREF
  unsigned __int64 v23; // [rsp+1048h] [rbp-F0h]

  va_start(va, a3);
  v23 = __readfsqword(0x28u);
  vqmakepath(s);
  if ( (a2 & 4) != 0 && !(unsigned __int8)qisdir(s) )
    return v23 - __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  v4 = strlen(s);
  v5 = v4 + 1;
  v6 = v4;
  v7 = s;
  src = (void *)qvector_reserve(&src, 0, v4 + 1, 1);
  n[0] = v5;
  memmove(src, s, v6);
  *((_BYTE *)src + v6) = 0;
  v8 = n[0];
  v18 = a1[1];
  v9 = *a1 + 24 * v18;
  v17 = *a1;
  if ( *a1 == v9 )
    goto LABEL_19;
  v10 = (char *)src;
  v11 = *a1;
  while ( 1 )
  {
    if ( *(_QWORD *)(v11 + 8) )
    {
      v7 = *(char **)v11;
      v12 = haystack;
      if ( !v8 )
        goto LABEL_6;
    }
    else
    {
      if ( !v8 )
      {
        if ( v11 != v9 )
          goto LABEL_15;
        goto LABEL_13;
      }
      v7 = (char *)haystack;
    }
    v12 = v10;
LABEL_6:
    if ( !strcmp(v12, v7) )
      break;
    v11 += 24;
    if ( v9 == v11 )
      goto LABEL_19;
  }
  if ( v11 != v9 )
    goto LABEL_15;
LABEL_19:
  if ( v8 )
  {
    v13 = (void *)qalloc_or_throw(v8, v7);
    memcpy(v13, src, v8);
    v18 = a1[1];
    v17 = *a1;
    v14 = v18 + 1;
    if ( a1[2] < (unsigned __int64)(v18 + 1) )
    {
LABEL_21:
      v17 = qvector_reserve(a1, v17, v14, 24);
      *a1 = v17;
      v18 = a1[1];
    }
  }
  else
  {
LABEL_13:
    v13 = nullptr;
    v14 = v18 + 1;
    if ( a1[2] < (unsigned __int64)(v18 + 1) )
      goto LABEL_21;
  }
  v15 = v17 + 24 * v18;
  *(_QWORD *)v15 = v13;
  v10 = (char *)src;
  *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
  ++a1[1];
LABEL_15:
  if ( v10 )
  {
    n[0] = 0;
    qfree(v10);
  }
  return v23 - __readfsqword(0x28u);
}

