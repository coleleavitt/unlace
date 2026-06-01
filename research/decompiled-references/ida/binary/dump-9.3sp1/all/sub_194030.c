__int64 __fastcall sub_194030(__int64 a1, __int64 a2, unsigned int **a3, __int64 a4)
{
  void *v4; // r14
  unsigned __int64 v5; // rbx
  unsigned int *v7; // rax
  __m128i v8; // xmm0
  unsigned int *v9; // rbx
  int v10; // ebx
  __int64 i; // rax
  unsigned int v12; // ebx
  __int64 v14; // [rsp+0h] [rbp-78h] BYREF
  __int128 v15; // [rsp+8h] [rbp-70h]
  _QWORD *v16; // [rsp+18h] [rbp-60h]
  __m128i v17; // [rsp+20h] [rbp-58h]
  char v18; // [rsp+30h] [rbp-48h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v4 = nullptr;
  v5 = *(_QWORD *)(a2 + 8);
  v19 = __readfsqword(0x28u);
  v14 = 0;
  v16 = nullptr;
  v18 = 0;
  v15 = 0;
  v17 = 0;
  if ( v5 )
  {
    v4 = (void *)qalloc_or_throw(24 * v5, a2, (__int64)a3, a4);
    memcpy(v4, *(const void **)a2, 24 * v5);
  }
  v7 = a3[1];
  v16 = v4;
  v8 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  v9 = *a3;
  v17 = v8;
  if ( 4LL * (_QWORD)v7 )
  {
    while ( (unsigned __int8)sub_193D60(a1, (__int64)&v14, *v9, (__int64)a3) )
    {
      if ( ++v9 == &(*a3)[(_QWORD)a3[1]] )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    if ( (_QWORD)v15 )
    {
      v12 = sub_192910(a1, (__int64)&v14);
      goto LABEL_10;
    }
  }
  v10 = 0;
  for ( i = 0; (unsigned __int64)v10 < v17.m128i_i64[0]; i = v10 )
  {
    sub_191D40((_QWORD *)(a1 + 16), &v16[3 * i]);
    ++v10;
  }
  v12 = 0;
LABEL_10:
  if ( v16 )
  {
    v17.m128i_i64[0] = 0;
    qfree((__int64)v16);
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  return v12;
}
