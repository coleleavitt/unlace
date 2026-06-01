__int64 __fastcall sub_3331C0(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128 v14; // xmm4
  __m128 v15; // xmm5
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  char v23; // [rsp+0h] [rbp-8h]

  if ( (unsigned int)sub_331180(0, 0, 0) == -1 )
    return 1;
  v8 = xmmword_8CC810;
  v9 = xmmword_8CC810;
  if ( (get_aflags(xmmword_8CC810) & 0x80u) != 0LL )
  {
    clr_abits(v9, 128);
    sub_169700(
      (int)"%a: don't force zero offsets in structures\n",
      v8,
      v10,
      v11,
      v12,
      v13,
      a1,
      a2,
      a3,
      a4,
      v14,
      v15,
      a7,
      a8,
      v23);
    return 1;
  }
  set_abits(v9, 128);
  sub_169700(
    (int)"%a: force zero offsets in structures\n",
    v8,
    v17,
    v18,
    v19,
    v20,
    a1,
    a2,
    a3,
    a4,
    v21,
    v22,
    a7,
    a8,
    v23);
  return 1;
}
