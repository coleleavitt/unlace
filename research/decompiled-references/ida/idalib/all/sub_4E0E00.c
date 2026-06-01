unsigned __int64 __fastcall sub_4E0E00(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdi
  __m128i v10; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v3 = *(unsigned int *)(a2 + 4);
  v11 = __readfsqword(0x28u);
  v10 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(a2 + 8),
          (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 8) + v3));
  v5 = unpack_dq(&v10);
  v6 = unpack_dq(&v10);
  v7 = unpack_dq(&v10);
  v8 = *(_QWORD *)(a1 + 1728);
  if ( a3 )
    sub_4E0970(v8, v5, v6, v7);
  else
    sub_4E0970(v8, v6, v5, v7);
  return v11 - __readfsqword(0x28u);
}
