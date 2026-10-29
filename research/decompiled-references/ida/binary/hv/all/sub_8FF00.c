unsigned __int64 sub_8FF00(__int64 *a1, char a2, __int64 a3, ...)
{
  size_t v4; // rax
  size_t v5; // r12
  size_t v6; // rbx
  size_t v7; // rbx
  __int64 v8; // rbp
  char *v9; // r14
  __int64 v10; // r15
  const char *v11; // rsi
  const char *v12; // rdi
  void *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v17; // [rsp+0h] [rbp-1138h]
  __int64 v18; // [rsp+8h] [rbp-1130h]
  void *ptr; // [rsp+10h] [rbp-1128h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-1120h]
  gcc_va_list va; // [rsp+28h] [rbp-1110h] BYREF
  char s[4104]; // [rsp+40h] [rbp-10F8h] BYREF
  unsigned __int64 v23; // [rsp+1048h] [rbp-F0h]

  va_start(va, a3);
  v23 = __readfsqword(0x28u);
  sub_94B00(s);
  if ( (a2 & 4) != 0 && !(unsigned __int8)sub_95600(s) )
    return v23 - __readfsqword(0x28u);
  ptr = nullptr;
  *(_OWORD *)n = 0;
  v4 = strlen(s);
  v5 = v4 + 1;
  v6 = v4;
  ptr = (void *)sub_96080(&ptr, 0, v4 + 1, 1);
  n[0] = v5;
  memmove(ptr, s, v6);
  *((_BYTE *)ptr + v6) = 0;
  v7 = n[0];
  v18 = a1[1];
  v8 = *a1 + 24 * v18;
  v17 = *a1;
  if ( *a1 == v8 )
    goto LABEL_19;
  v9 = (char *)ptr;
  v10 = *a1;
  while ( 1 )
  {
    if ( *(_QWORD *)(v10 + 8) )
    {
      v11 = *(const char **)v10;
      v12 = haystack;
      if ( !v7 )
        goto LABEL_6;
    }
    else
    {
      if ( !v7 )
      {
        if ( v10 != v8 )
          goto LABEL_15;
        goto LABEL_13;
      }
      v11 = haystack;
    }
    v12 = v9;
LABEL_6:
    if ( !strcmp(v12, v11) )
      break;
    v10 += 24;
    if ( v8 == v10 )
      goto LABEL_19;
  }
  if ( v10 != v8 )
    goto LABEL_15;
LABEL_19:
  if ( v7 )
  {
    v13 = (void *)sub_96030(v7);
    memcpy(v13, ptr, v7);
    v18 = a1[1];
    v17 = *a1;
    v14 = v18 + 1;
    if ( a1[2] < (unsigned __int64)(v18 + 1) )
    {
LABEL_21:
      v17 = sub_96080(a1, v17, v14, 24);
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
  v9 = (char *)ptr;
  *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  ++a1[1];
LABEL_15:
  if ( v9 )
  {
    n[0] = 0;
    j__free(v9);
  }
  return v23 - __readfsqword(0x28u);
}

