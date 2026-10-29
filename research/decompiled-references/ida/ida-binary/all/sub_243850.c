__int64 __fastcall sub_243850(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // rdx
  _DWORD *v16; // rdi
  __int64 v17; // rax

  v14 = *(unsigned int *)(a1 + 16);
  if ( !(_DWORD)v14 )
    return 0;
  v16 = (_DWORD *)qword_8CC430;
  v17 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
  if ( qword_8CC430 == v17 )
    return 0;
  while ( (_DWORD)v14 != *v16 )
  {
    v16 += 64;
    if ( (_DWORD *)v17 == v16 )
      return 0;
  }
  if ( v16 && dword_8CC5F0 < 0 )
    return sub_241C80(
             (__int64)v16,
             (8 * *(unsigned __int8 *)(a1 + 12)) | (*(_DWORD *)(a1 + 24) << 12) | 2u,
             v14,
             (char *)a1,
             a13,
             a14,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9);
  else
    return 0;
}
