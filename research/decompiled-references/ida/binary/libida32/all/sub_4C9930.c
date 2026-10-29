unsigned __int64 __fastcall sub_4C9930(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // eax
  __int64 v8; // rdi
  __m128i v10; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v3 = *(unsigned int *)(a2 + 4);
  v11 = __readfsqword(0x28u);
  v10 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(a2 + 8),
          (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 8) + v3));
  v5 = unpack_dd(&v10);
  v6 = unpack_dd(&v10);
  v7 = unpack_dd(&v10);
  v8 = *(_QWORD *)(a1 + 1536);
  if ( a3 )
    sub_4C94A0(v8, v5, v6, v7);
  else
    sub_4C94A0(v8, v6, v5, v7);
  return v11 - __readfsqword(0x28u);
}

