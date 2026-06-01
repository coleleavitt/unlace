unsigned __int64 __fastcall sub_58DB50(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // r13
  int v7; // ebx
  int v8; // eax
  __m128i v10; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v11 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1400);
  v10 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v7 = unpack_dd(&v10);
  v8 = unpack_dd(&v10);
  if ( !a3 )
    v8 = v7;
  *(_DWORD *)(v6 + 44) = v8;
  return v11 - __readfsqword(0x28u);
}

