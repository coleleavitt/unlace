unsigned __int64 __fastcall sub_8CFB0(
        __int64 *a1,
        _QWORD *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 v18[5]; // [rsp+0h] [rbp-28h] BYREF

  v10 = *a1;
  v18[1] = __readfsqword(0x28u);
  v18[0] = 0;
  v11 = *(_QWORD *)(v10 + 24);
  if ( !(unsigned int)sub_8C710(a2, v18, a3, a4, a5, a6, a7, a8, a9, a10) && v11 > v18[0] )
    v11 = v18[0];
  if ( v11 < 0x4000 )
    v11 = 0x4000;
  if ( *(int *)(*a1 + 4) > 1 )
  {
    sub_93D20(qword_165B00, 48);
    sub_8C450(
      a3,
      a4,
      a5,
      a6,
      v15,
      v16,
      a9,
      a10,
      (__int64)"xdelta3: input %s window size %s\n",
      a2[2],
      (__int64)qword_165B00,
      v12,
      v13,
      v14);
  }
  return v11;
}

