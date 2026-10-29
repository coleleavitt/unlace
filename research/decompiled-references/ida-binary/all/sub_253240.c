__int64 __fastcall sub_253240(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  int v8; // ebx
  __int64 v9; // rdx
  char *v10; // rcx
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  char v20; // [rsp+0h] [rbp-8h]

  v8 = dword_8CC428;
  qword_8BA5A8 = -1;
  sub_22FC60(0xFu, (unsigned int)dword_8CC428);
  if ( !(unsigned __int8)sub_24F380(v8, 0, *(double *)a1.m128_u64, a2, a3, a4, v11, v12, a7, a8, v9, v10) )
    sub_169630(
      (int)"AUTOHIDE NONE\nCommand \"SelectThread(%ld)\" failed - registers are not available",
      v8,
      v13,
      v14,
      v15,
      v16,
      a1,
      a2,
      a3,
      a4,
      v17,
      v18,
      a7,
      a8,
      v20);
  dword_8CC55C |= 1u;
  return 1;
}
