__int64 __fastcall sub_3BF820(
        __int64 *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  unsigned __int64 v16; // rbp
  double v17; // xmm0_8
  const char *v18; // rdi
  const char *v19; // rsi
  unsigned int v20; // ebp
  __int64 v22; // rbp
  const char *v23; // r13
  void *v24; // rdi
  const void *v25; // r13
  __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-78h] BYREF
  __int128 v28; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+20h] [rbp-58h] BYREF
  void *src; // [rsp+28h] [rbp-50h] BYREF
  __int128 v31; // [rsp+30h] [rbp-48h]
  int v32; // [rsp+40h] [rbp-38h]
  unsigned __int64 v33; // [rsp+48h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  v27 = 0;
  v28 = 0;
  sub_169A50(&v27, (__int64)"Set comment\n<Enter repeatable ~c~omment:t:%d::%d:>\n", 1024, 1083);
  v16 = a1[1];
  v17 = 0.0;
  v29 = 40;
  src = nullptr;
  v32 = 0;
  v31 = 0;
  if ( v16 >= 2 )
  {
    v25 = (const void *)*a1;
    src = (void *)qvector_reserve(&src, 0, v16, 1);
    *(_QWORD *)&v31 = v16;
    memmove(src, v25, v16 - 1);
    *((char *)src + v16 - 1) = 0;
  }
  v18 = &s1;
  if ( (_QWORD)v28 )
    LODWORD(v18) = v27;
  v19 = (const char *)&v29;
  v20 = 0;
  if ( (unsigned int)sub_1697D0(
                       (int)v18,
                       (__int64)&v29,
                       v10,
                       v11,
                       v12,
                       v13,
                       (__m128)0LL,
                       a3,
                       a4,
                       a5,
                       v14,
                       v15,
                       a8,
                       a9,
                       v27) == 1 )
  {
    v22 = v31;
    if ( (unsigned __int64)v31 < 2 )
    {
      a1[1] = 0;
    }
    else
    {
      v23 = (const char *)src;
      v24 = (void *)*a1;
      if ( a1[2] < (unsigned __int64)v31 )
      {
        v26 = qvector_reserve(a1, *a1, v31, 1);
        *a1 = v26;
        v24 = (void *)v26;
      }
      a1[1] = v22;
      v19 = v23;
      memmove(v24, v23, v22 - 1);
      *(_BYTE *)(*a1 + v22 - 1) = 0;
    }
    v20 = 1;
  }
  if ( src )
  {
    *(_QWORD *)&v31 = 0;
    v17 = qfree(src, v19);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27, v19, v17);
  }
  return v20;
}
