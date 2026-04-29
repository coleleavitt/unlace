__int64 __fastcall sub_A390(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        unsigned int a6)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-58h] BYREF
  __m128i v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( !a4 )
    return -1;
  if ( !a3 )
    return -1;
  v6 = a4 * (unsigned __int64)a3;
  if ( v6 >= a2 )
    return -1;
  v9 = a2 - v6;
  v10 = getseg(a2 - v6);
  if ( !v10 )
    return -1;
  v11 = *(_QWORD *)(v10 + 8);
  if ( v9 >= v11 )
    return -1;
  v13 = a1;
  v15 = v9;
  v14 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v11);
  return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & sub_A050(&v13, a5, a6);
}
