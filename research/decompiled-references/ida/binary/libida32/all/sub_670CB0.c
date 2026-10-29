unsigned __int64 __fastcall sub_670CB0(char *a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  unsigned int v8; // eax
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
  if ( a3 )
  {
    v8 = v6;
    v6 = v5;
    v5 = v8;
  }
  sub_670A00(a1, (char *)v6, v5, v7);
  return v11 - __readfsqword(0x28u);
}

