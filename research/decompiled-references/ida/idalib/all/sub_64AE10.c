unsigned __int64 __fastcall sub_64AE10(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // r13d
  int v10; // eax
  __m128i v12; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v13 = __readfsqword(0x28u);
  v5 = *(unsigned int *)(a2 + 4);
  v6 = *(_QWORD *)(a1 + 1704);
  v7 = *(_QWORD *)(a1 + 1672);
  v12 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v5));
  v8 = sub_6488B0(v7, v6, nullptr, (__int64)&v12);
  v9 = unpack_dd(&v12);
  v10 = unpack_dd(&v12);
  if ( a3 )
    sub_64AD70(v8, v10);
  else
    *(_DWORD *)(v8 + 48) = v9;
  return v13 - __readfsqword(0x28u);
}
