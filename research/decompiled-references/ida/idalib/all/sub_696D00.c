unsigned __int64 __fastcall sub_696D00(int a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  const __m128i *v7; // r13
  unsigned __int64 *v8; // rbx
  char *v9; // rbp
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v12; // [rsp+10h] [rbp-50h]
  __int64 v13; // [rsp+20h] [rbp-40h]
  int v14; // [rsp+28h] [rbp-38h]
  unsigned __int64 v15; // [rsp+30h] [rbp-30h]

  v4 = *a3;
  v5 = a3[1];
  v15 = __readfsqword(0x28u);
  v7 = *(const __m128i **)(a2 + 1816);
  v14 = -1;
  ptr = nullptr;
  v13 = 0;
  v12 = 0;
  if ( v4 < v5 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 16);
    *((__m128i *)ptr + v12) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v5);
    *(_QWORD *)&v12 = v12 + 1;
  }
  rangeset_t_sub2((int)&ptr);
  v8 = (unsigned __int64 *)ptr;
  v9 = (char *)ptr + 16 * v12;
  if ( v9 != ptr )
  {
    do
    {
      sub_6962C0(v7, *v8, *v8 + a4, v8[1] - *v8);
      v8 += 2;
    }
    while ( v9 != (char *)v8 );
  }
  sub_6B8D40(*(_QWORD *)(a2 + 1672));
  if ( ptr )
  {
    *(_QWORD *)&v12 = 0;
    qfree(ptr);
  }
  return v15 - __readfsqword(0x28u);
}
