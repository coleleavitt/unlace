unsigned __int64 __fastcall sub_5D0200(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r15
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v11; // [rsp+8h] [rbp-60h]
  __int64 v12; // [rsp+18h] [rbp-50h]
  int v13; // [rsp+20h] [rbp-48h]
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v6 = *a4;
  v7 = a4[1];
  v14 = __readfsqword(0x28u);
  ptr = nullptr;
  v12 = 0;
  v13 = -1;
  v11 = 0;
  if ( v6 < v7 )
  {
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 16);
    *((__m128i *)ptr + v11) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v7);
    *(_QWORD *)&v11 = v11 + 1;
  }
  sub_5D0100(a1, (__int64)&ptr, a2, a3, a5, a6);
  if ( ptr )
  {
    *(_QWORD *)&v11 = 0;
    qfree(ptr);
  }
  return v14 - __readfsqword(0x28u);
}
