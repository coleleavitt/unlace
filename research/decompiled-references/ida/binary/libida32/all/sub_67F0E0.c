unsigned __int64 __fastcall sub_67F0E0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 *v4; // r13
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v3 = *(unsigned int *)(a2 + 4);
  v4 = *(__int64 **)(a1 + 1648);
  v12 = __readfsqword(0x28u);
  v11 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(a2 + 8),
          (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 8) + v3));
  v6 = unpack_dd(&v11);
  v7 = unpack_dd(&v11);
  v8 = unpack_dd(&v11);
  if ( a3 )
  {
    v9 = v7;
    v7 = v6;
    v6 = v9;
  }
  sub_67F020(v4, v7, v6, v8, 0);
  return v12 - __readfsqword(0x28u);
}

