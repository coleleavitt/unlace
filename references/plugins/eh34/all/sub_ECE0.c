__int64 __fastcall sub_ECE0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __m128i v6; // xmm0
  __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  __m128i v9; // [rsp+8h] [rbp-50h] BYREF
  char v10; // [rsp+18h] [rbp-40h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  sub_EB90(&v8);
  if ( v10 || (sub_EC50((__int64)&v8, a2, a3, a4), v10) )
  {
    *(_QWORD *)a1 = v8;
    v6 = _mm_loadu_si128(&v9);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v6;
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}
