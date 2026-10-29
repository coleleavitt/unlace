__int64 __fastcall sub_1746A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r12
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 88);
  v4 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 88) = a2;
  *(_QWORD *)(a1 + 96) = a3;
  result = (***(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 128))(*(_QWORD *)(a2 + 128), a3);
  *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
  return result;
}

