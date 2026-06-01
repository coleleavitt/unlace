unsigned __int64 __fastcall sub_42BB30(int a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 *v7; // rbx
  char *v8; // rbp
  void *ptr; // [rsp+8h] [rbp-58h] BYREF
  __int128 v11; // [rsp+10h] [rbp-50h]
  __int64 v12; // [rsp+20h] [rbp-40h]
  int v13; // [rsp+28h] [rbp-38h]
  unsigned __int64 v14; // [rsp+30h] [rbp-30h]

  v4 = *a3;
  v5 = a3[1];
  v14 = __readfsqword(0x28u);
  v13 = -1;
  ptr = nullptr;
  v12 = 0;
  v11 = 0;
  if ( v4 < v5 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 16);
    *((__m128i *)ptr + v11) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v5);
    *(_QWORD *)&v11 = v11 + 1;
  }
  rangeset_t_sub2((int)&ptr);
  v7 = (unsigned __int64 *)ptr;
  v8 = (char *)ptr + 16 * v11;
  if ( v8 != ptr )
  {
    do
    {
      sub_3D81C0(*(_QWORD *)(a2 + 1672), *v7, *v7 + a4, v7[1] - *v7);
      v7 += 2;
    }
    while ( v8 != (char *)v7 );
    v7 = (unsigned __int64 *)ptr;
  }
  if ( v7 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v7);
  }
  return v14 - __readfsqword(0x28u);
}
