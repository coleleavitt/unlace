unsigned __int64 __fastcall sub_428610(__int64 a1, const char *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // r12
  _QWORD *v5; // r13
  const char *v7; // rax
  __int64 v8; // r8
  __int128 v9; // xmm1
  char *v10; // r15
  const char *v11; // r14
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rbx
  size_t v15; // rbp
  void *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // [rsp+18h] [rbp-70h]
  const char *v19; // [rsp+20h] [rbp-68h]
  const char *v20; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+38h] [rbp-50h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 200) )
  {
    v2 = sub_426230(a1, a2);
    v3 = sub_417350((__int64)v2);
    v20 = nullptr;
    v4 = *(_QWORD *)(v3 + 8);
    v5 = (_QWORD *)v3;
    v21 = 0;
    if ( v4 )
    {
      v7 = (const char *)qalloc_or_throw(80 * v4);
      *((_QWORD *)&v21 + 1) = v4;
      v8 = 0;
      v9 = 0;
      v19 = v7;
      v10 = (char *)v7;
      v11 = v7;
      v20 = v7;
      do
      {
        v14 = *v5 + 80 * v8;
        *(_QWORD *)v10 = 0;
        *(_OWORD *)(v10 + 8) = v9;
        v15 = *(_QWORD *)(v14 + 8);
        if ( v15 )
        {
          v18 = v8;
          v16 = (void *)qalloc_or_throw(*(_QWORD *)(v14 + 8));
          *((_QWORD *)v10 + 2) = v15;
          *(_QWORD *)v10 = v16;
          memcpy(v16, *(const void **)v14, v15);
          *((_QWORD *)v10 + 1) = v15;
          v8 = v18;
          v9 = 0;
        }
        ++v8;
        v10 += 80;
        *(__m128i *)(v10 - 56) = _mm_loadu_si128((const __m128i *)(v14 + 24));
        v12 = _mm_loadu_si128((const __m128i *)(v14 + 56));
        *((_QWORD *)v10 - 5) = *(_QWORD *)(v14 + 40);
        v13 = *(_QWORD *)(v14 + 48);
        *(__m128i *)(v10 - 24) = v12;
        *((_QWORD *)v10 - 4) = v13;
        *(v10 - 8) = *(_BYTE *)(v14 + 72);
      }
      while ( v4 != v8 );
      *(_QWORD *)&v21 = v4;
      sub_426370(a1, &v20, (char)a2);
      if ( v19 )
      {
        do
        {
          v17 = *(_QWORD *)v11;
          if ( *(_QWORD *)v11 )
          {
            *((_QWORD *)v11 + 1) = 0;
            *(double *)v12.m128i_i64 = qfree(v17, (const char *)&v20, *(double *)v12.m128i_i64, *(double *)&v9);
          }
          v11 += 80;
        }
        while ( &v19[80 * v4] != v11 );
        qfree(v19, (const char *)&v20, *(double *)v12.m128i_i64, *(double *)&v9);
      }
    }
  }
  return v22 - __readfsqword(0x28u);
}
