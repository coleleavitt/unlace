__int64 sub_42E340()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 v2; // r12
  __int64 *v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v7; // r12
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  __int64 v11; // [rsp+18h] [rbp-30h]
  int v12; // [rsp+20h] [rbp-28h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  ptr = nullptr;
  v11 = 0;
  v12 = -1;
  v10 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 16);
  *((__m128i *)ptr + v10) = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  *(_QWORD *)&v10 = v10 + 1;
  rangeset_t_sub2((int)&ptr);
  if ( (_QWORD)v10 )
  {
    v0 = v10 - 1;
    v1 = 0;
    v2 = 0;
    do
    {
      v3 = (__int64 *)((char *)ptr + 16 * (int)v0);
      v4 = v3[1];
      v5 = *v3;
      if ( v4 - v5 >= (unsigned __int64)(v2 - v1) )
      {
        v2 = v4;
        v1 = v5;
      }
    }
    while ( v0-- != 0 );
  }
  else
  {
    v1 = 0;
  }
  v7 = v1;
  if ( ptr )
  {
    *(_QWORD *)&v10 = 0;
    qfree(ptr);
  }
  return v7;
}
