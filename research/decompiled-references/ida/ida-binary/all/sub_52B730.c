__int64 __fastcall sub_52B730(_QWORD *a1, __int64 a2, char a3, __int64 *a4)
{
  const char *v4; // r12
  const char *v5; // r14
  char *v9; // rax
  size_t v10; // rax
  const char *v11; // rax
  const char *v12; // r14
  size_t v13; // rax
  size_t v14; // r15
  char *v15; // rsi
  unsigned int v16; // ebx
  void *v18; // rdi
  size_t v19; // rdx
  size_t v20; // r14
  void *v21; // rbp
  __int64 v22; // rax
  __int16 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rax
  size_t v26; // [rsp+8h] [rbp-70h]
  void *dest; // [rsp+10h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-60h]
  __int16 v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v4 = "@ifdef";
  v30 = __readfsqword(0x28u);
  if ( !a3 )
    v4 = "@ifndef";
  if ( !*(_QWORD *)(a2 + 8) )
    return 0;
  v5 = *(const char **)a2;
  v9 = strstr(*(const char **)a2, v4);
  if ( !v9 || v5 != v9 )
    return 0;
  dest = nullptr;
  v29 = 0;
  *(_OWORD *)n = 0;
  v10 = strlen(v4);
  v11 = (const char *)skip_spaces(&v5[v10]);
  v12 = v11;
  if ( v11 && (v13 = strlen(v11), (v14 = v13) != 0) )
  {
    v18 = dest;
    v19 = v13 + 1;
    if ( n[1] < v13 + 1 )
    {
      v26 = v13 + 1;
      dest = (void *)qvector_reserve(&dest, dest, v19, 1);
      v19 = v26;
      v18 = dest;
    }
    n[0] = v19;
    memmove(v18, v12, v14);
    *((_BYTE *)dest + v14) = 0;
    v20 = n[0];
    if ( n[0] > 1 )
    {
      LOBYTE(v29) = a3;
      v21 = (void *)qalloc_or_throw(n[0]);
      memcpy(v21, dest, v20);
      v22 = a1[7];
      v23 = v29;
      v24 = a1[6];
      if ( a1[8] < (unsigned __int64)(v22 + 1) )
      {
        v25 = qvector_reserve(a1 + 6, v24, v22 + 1, 32);
        a1[6] = v25;
        v24 = v25;
        v22 = a1[7];
      }
      v15 = (char *)(32 * v22 + v24);
      *(_QWORD *)v15 = v21;
      *((_WORD *)v15 + 12) = v23;
      *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v20);
      ++a1[7];
      v16 = 1;
      goto LABEL_10;
    }
  }
  else
  {
    n[0] = 0;
  }
  v15 = "%s requires an argument";
  sub_169A50(a4, (__int64)"%s requires an argument", v4);
  v16 = -1;
LABEL_10:
  if ( dest )
  {
    n[0] = 0;
    qfree(dest, v15);
  }
  return v16;
}
