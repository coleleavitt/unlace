__int64 __fastcall sub_198140(
        const __m128i *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 **a12,
        __int64 a13,
        __int64 a14)
{
  __int64 *v14; // rax
  __int64 *v15; // rbp
  __int64 v16; // r13
  const __m128i *v17; // rsi
  unsigned int v18; // eax
  unsigned int v19; // ebx
  __m128 v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  size_t v30; // r14
  char v32; // [rsp+0h] [rbp-88h]
  void *src; // [rsp+10h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-70h]
  void *v35; // [rsp+30h] [rbp-58h] BYREF
  __int128 v36; // [rsp+38h] [rbp-50h]
  unsigned __int64 v37; // [rsp+48h] [rbp-40h]

  v14 = a12[1];
  v37 = __readfsqword(0x28u);
  v15 = *a12;
  v16 = (__int64)&(*a12)[(_QWORD)v14];
  if ( (__int64 *)v16 == *a12 )
    return 2;
  while ( 1 )
  {
    v18 = sub_198090(a1, *v15, a11, (__int64)a12, a13, a14);
    v19 = v18;
    if ( v18 != -1 )
      break;
LABEL_7:
    if ( (__int64 *)v16 == ++v15 )
      return 2;
  }
  v20 = 0;
  v21 = a1[161].m128i_i64[0];
  src = nullptr;
  *(_OWORD *)n = 0;
  *(double *)v20.m128_u64 = bookmarks_t_get_desc(&src, &a1[158], v18, v21);
  if ( (unsigned __int8)sub_196F50(
                          (int)&src,
                          2,
                          (int)"@0:226[]\nEnter mark description",
                          v22,
                          v23,
                          v24,
                          v20,
                          a3,
                          a4,
                          a5,
                          v25,
                          v26,
                          a8,
                          a9,
                          v32) )
  {
    v30 = n[0];
    v35 = nullptr;
    v36 = 0;
    if ( n[0] )
    {
      v35 = (void *)qalloc_or_throw(n[0]);
      *((_QWORD *)&v36 + 1) = v30;
      memcpy(v35, src, v30);
      *(_QWORD *)&v36 = v30;
    }
    v17 = a1 + 158;
    bookmarks_t_set_desc(&v35, &a1[158], v19);
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree(v35, v17, a11, a12, a13);
    }
    if ( src )
    {
      n[0] = 0;
      qfree(src, v17, a11, a12, a13);
    }
    goto LABEL_7;
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src, 2, v27, v28, v29);
  }
  return 2;
}
