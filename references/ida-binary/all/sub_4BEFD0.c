__int64 __fastcall sub_4BEFD0(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v3; // rax
  const char *v4; // rbp
  size_t v5; // rax
  size_t v6; // r13
  size_t v7; // r12
  void *v8; // rax
  unsigned __int64 v9; // r12
  __int64 v10; // rbp
  char *v11; // rax
  char *v12; // r13
  char *v14; // r14
  const char *v15; // rax
  __int64 v16; // rax

  v3 = (const char *)itext((unsigned int)a2, a2, a3);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v3 )
  {
    v4 = v3;
    v5 = strlen(v3);
    v6 = v5 + 1;
    v7 = v5;
    v8 = (void *)qvector_reserve(a1, 0, v5 + 1, 1);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v6;
    memmove(v8, v4, v7);
    *(_BYTE *)(*(_QWORD *)a1 + v7) = 0;
  }
  sub_4BEE60(nullptr, nullptr, a1);
  v9 = *(_QWORD *)(a1 + 8);
  if ( !v9 )
    return a1;
  v10 = *(_QWORD *)a1;
  v11 = strchr(*(const char **)a1, 10);
  if ( !v11 )
    return a1;
  v12 = &v11[-v10];
  if ( &v11[-v10] == (char *)-1LL )
    return a1;
  if ( !v12 )
  {
    if ( v10 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v10, &byte_9[1]);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    return a1;
  }
  v14 = v12 + 1;
  if ( v9 < (unsigned __int64)(v12 + 1) )
  {
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v14 )
    {
      v16 = qvector_reserve(a1, v10, v12 + 1, 1);
      *(_QWORD *)a1 = v16;
      v9 = *(_QWORD *)(a1 + 8);
      v10 = v16;
    }
    memset((void *)(v10 + v9), 0, (size_t)&v14[-v9]);
    v15 = *(const char **)a1;
    *(_QWORD *)(a1 + 8) = v14;
    v11 = (char *)&v15[(_QWORD)v12];
  }
  else if ( (char *)v9 != v12 + 1 )
  {
    *(_QWORD *)(a1 + 8) = v14;
  }
  *v11 = 0;
  return a1;
}
