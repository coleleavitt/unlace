__int64 __fastcall sub_3D8FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i v5; // xmm0
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  __m128i v8; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( a3 == -1 || (v8 = 0, v7 = 0, netnode_qsupstr() < 0) || v8.m128i_i64[0] <= 1uLL || *(_QWORD *)(a4 + 8) <= 1u )
  {
    sub_3D8380((__int64)&v7);
    *(_QWORD *)a1 = v7;
    v5 = _mm_loadu_si128(&v8);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v5;
  }
  else
  {
    netnode_supset();
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}
