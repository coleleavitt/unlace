__int64 __fastcall sub_8AC340(_QWORD *a1, const char *a2)
{
  char *v3; // r14
  unsigned int v4; // ebx
  size_t v6; // rax
  size_t v7; // r13
  size_t v8; // r12
  void *v9; // rax
  __int64 v10; // rcx
  size_t v11; // r12
  __int64 v12; // r13
  __int64 v13; // r15
  const char *v14; // rsi
  const char *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  char *v18; // rax
  char *v19; // [rsp+8h] [rbp-70h]
  __int64 v20; // [rsp+10h] [rbp-68h]
  __int64 v21; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v3 = (char *)a2;
  v4 = qisdir(a2);
  if ( !(_BYTE)v4 )
    return v4;
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( a2 )
  {
    v6 = strlen(a2);
    v7 = v6 + 1;
    v8 = v6;
    v9 = (void *)qvector_reserve(&src, 0, v6 + 1, 1);
    n[0] = v7;
    src = v9;
    memmove(v9, a2, v8);
    *((_BYTE *)src + v8) = 0;
    v10 = a1[1];
    v11 = n[0];
    v21 = a1[2];
    v12 = v10 + 24 * v21;
    v20 = v10;
    if ( v10 == v12 )
      goto LABEL_23;
  }
  else
  {
    v16 = a1[1];
    v11 = 0;
    v21 = a1[2];
    v12 = v16 + 24 * v21;
    v20 = v16;
    if ( v12 == v16 )
      goto LABEL_14;
  }
  v13 = v20;
  v19 = (char *)src;
  while ( 1 )
  {
    if ( *(_QWORD *)(v13 + 8) )
    {
      v14 = *(const char **)v13;
      v15 = haystack;
      if ( !v11 )
        goto LABEL_7;
    }
    else
    {
      if ( !v11 )
      {
        if ( v13 == v12 )
          goto LABEL_21;
        goto LABEL_20;
      }
      v14 = haystack;
    }
    v15 = v19;
LABEL_7:
    if ( !strcmp(v15, v14) )
      break;
    v13 += 24;
    if ( v13 == v12 )
      goto LABEL_23;
  }
  if ( v13 != v12 )
  {
LABEL_20:
    v4 = 0;
    goto LABEL_17;
  }
LABEL_23:
  if ( v11 )
  {
    v3 = (char *)qalloc_or_throw(v11);
    memcpy(v3, src, v11);
    v21 = a1[2];
    v20 = a1[1];
  }
  else
  {
LABEL_21:
    v3 = nullptr;
  }
LABEL_14:
  if ( a1[3] < (unsigned __int64)(v21 + 1) )
  {
    v20 = qvector_reserve(a1 + 1, v20, v21 + 1, 24);
    a1[1] = v20;
    v21 = a1[2];
  }
  v17 = v20 + 24 * v21;
  *(_QWORD *)v17 = v3;
  *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  v18 = (char *)src;
  ++a1[2];
  v19 = v18;
LABEL_17:
  if ( v19 )
  {
    n[0] = 0;
    qfree(v19);
  }
  return v4;
}
