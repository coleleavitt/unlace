unsigned __int64 __fastcall sub_8499A0(__int64 a1, const char *a2)
{
  char *v2; // rbp
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // r12
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rbx
  const char *v10; // rsi
  const char *v11; // rdi
  unsigned __int64 v12; // rbx
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v15; // [rsp+8h] [rbp-50h]
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v2 = (char *)a2;
  ptr = nullptr;
  v15 = 0;
  if ( a2 )
  {
    v3 = strlen(a2);
    v4 = v3 + 1;
    v5 = v3;
    ptr = (void *)qvector_reserve(&ptr, 0, v3 + 1, 1);
    *(_QWORD *)&v15 = v4;
    memmove(ptr, a2, v5);
    *((_BYTE *)ptr + v5) = 0;
    v6 = *(_QWORD *)(a1 + 184);
    v2 = (char *)ptr;
    v7 = v6 + 24LL * *(_QWORD *)(a1 + 192);
    if ( v6 == v7 )
      goto LABEL_16;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 184);
    v12 = -1;
    v7 = v6 + 24LL * *(_QWORD *)(a1 + 192);
    if ( v7 == v6 )
      return v12;
  }
  v8 = v15;
  v9 = v6;
  while ( 1 )
  {
    if ( *(_QWORD *)(v9 + 8) )
    {
      v10 = *(const char **)v9;
      v11 = haystack;
      if ( !v8 )
        goto LABEL_5;
      goto LABEL_10;
    }
    if ( !v8 )
      break;
    v10 = haystack;
LABEL_10:
    v11 = v2;
LABEL_5:
    if ( !strcmp(v11, v10) )
      break;
    v9 += 24;
    if ( v7 == v9 )
      goto LABEL_16;
  }
  if ( v7 == v9 )
  {
LABEL_16:
    v12 = -1;
    goto LABEL_13;
  }
  v12 = 0xAAAAAAAAAAAAAAABLL * ((v9 - v6) >> 3);
LABEL_13:
  if ( v2 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v2);
  }
  return v12;
}
