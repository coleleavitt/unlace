__int64 __fastcall sub_8889D0(_QWORD *a1, const char *a2)
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
  const char *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  char *v17; // rax
  char *v18; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+10h] [rbp-68h]
  __int64 v20; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v23 = __readfsqword(0x28u);
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
    v20 = a1[2];
    v12 = v10 + 24 * v20;
    v19 = v10;
    if ( v10 == v12 )
      goto LABEL_23;
  }
  else
  {
    v15 = a1[1];
    v11 = 0;
    v20 = a1[2];
    v12 = v15 + 24 * v20;
    v19 = v15;
    if ( v12 == v15 )
      goto LABEL_14;
  }
  v13 = v19;
  v18 = (char *)src;
  while ( 1 )
  {
    if ( *(_QWORD *)(v13 + 8) )
    {
      a2 = *(const char **)v13;
      v14 = haystack;
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
      a2 = haystack;
    }
    v14 = v18;
LABEL_7:
    if ( !strcmp(v14, a2) )
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
    v3 = (char *)qalloc_or_throw(v11, a2);
    memcpy(v3, src, v11);
    v20 = a1[2];
    v19 = a1[1];
  }
  else
  {
LABEL_21:
    v3 = nullptr;
  }
LABEL_14:
  if ( a1[3] < (unsigned __int64)(v20 + 1) )
  {
    v19 = qvector_reserve(a1 + 1, v19, v20 + 1, 24);
    a1[1] = v19;
    v20 = a1[2];
  }
  v16 = v19 + 24 * v20;
  *(_QWORD *)v16 = v3;
  *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  v17 = (char *)src;
  ++a1[2];
  v18 = v17;
LABEL_17:
  if ( v18 )
  {
    n[0] = 0;
    qfree(v18);
  }
  return v4;
}

