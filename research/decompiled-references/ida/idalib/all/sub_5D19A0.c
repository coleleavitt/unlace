void *__fastcall sub_5D19A0(__int64 a1, __int64 a2)
{
  void *result; // rax
  __int64 v3; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  result = nullptr;
  ptr = nullptr;
  v5 = 0;
  if ( a2 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, a2, 16);
    memset((char *)ptr + 16 * v5, 0, 16 * (a2 - v5));
    *(_QWORD *)&v5 = a2;
    v3 = 0;
    do
    {
      *(__m128i *)((char *)ptr + v3) = _mm_loadu_si128((const __m128i *)(a1 + v3));
      v3 += 16;
    }
    while ( 16 * a2 != v3 );
    result = ptr;
    if ( (unsigned __int64)v5 < *((_QWORD *)&v5 + 1) && ptr && (_QWORD)v5 )
    {
      result = (void *)qrealloc(ptr);
      if ( !result )
        return ptr;
    }
  }
  return result;
}
