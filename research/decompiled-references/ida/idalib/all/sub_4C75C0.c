unsigned __int64 __fastcall sub_4C75C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __m128i v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 1672);
  if ( a3 )
  {
    *(_QWORD *)(v3 + 2432) = 0;
  }
  else
  {
    v5 = _mm_unpacklo_epi64(
           (__m128i)*(unsigned __int64 *)(a2 + 8),
           (__m128i)(*(_QWORD *)(a2 + 8) + (unsigned __int64)*(unsigned int *)(a2 + 4)));
    *(_QWORD *)(v3 + 2432) = unpack_dq(&v5);
  }
  return v6 - __readfsqword(0x28u);
}
