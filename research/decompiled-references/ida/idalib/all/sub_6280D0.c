unsigned __int64 __fastcall sub_6280D0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // r13
  int v6; // ebx
  int v7; // eax
  __m128i v9; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 1672);
  v10 = __readfsqword(0x28u);
  sub_3CB900(v3 + 2336);
  v5 = *(_QWORD *)(a1 + 1672);
  v9 = _mm_unpacklo_epi64(
         (__m128i)*(unsigned __int64 *)(a2 + 8),
         (__m128i)(*(_QWORD *)(a2 + 8) + (unsigned __int64)*(unsigned int *)(a2 + 4)));
  v6 = unpack_dd(&v9);
  v7 = unpack_dd(&v9);
  if ( !a3 )
    v7 = v6;
  *(_DWORD *)(v5 + 2392) = v7;
  return v10 - __readfsqword(0x28u);
}
