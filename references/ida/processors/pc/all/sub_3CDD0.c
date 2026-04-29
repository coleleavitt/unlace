__int64 __fastcall sub_3CDD0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  __m128i v9; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v5 = a3 + a2;
  if ( __CFADD__(a3, a2) || v5 >= a5 || v5 < a4 )
  {
    sub_3C7B0((__int64)&v8);
    *(_QWORD *)a1 = v8;
    v6 = _mm_loadu_si128(&v9);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v6;
  }
  else
  {
    *(_QWORD *)a1 = v5;
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}
