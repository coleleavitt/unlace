unsigned __int64 __fastcall sub_676B70(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  _QWORD *v4; // r14
  unsigned int v6; // ebx
  int v7; // ebp
  int v8; // ecx
  unsigned int v9; // eax
  __m128i v11; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v3 = *(unsigned int *)(a2 + 4);
  v4 = *(_QWORD **)(a1 + 1624);
  v12 = __readfsqword(0x28u);
  v11 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(a2 + 8),
          (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 8) + v3));
  v6 = unpack_dd(&v11);
  v7 = unpack_dd(&v11);
  v8 = unpack_dd(&v11);
  if ( a3 != 1 )
  {
    v9 = v7;
    v7 = v6;
    v6 = v9;
  }
  sub_676540(v4, v6, v7, v8);
  return v12 - __readfsqword(0x28u);
}

