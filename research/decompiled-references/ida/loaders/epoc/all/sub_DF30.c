unsigned __int64 __fastcall sub_DF30(
        __int64 a1,
        __int16 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const char *v11; // rdi
  int v12; // eax
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  __int64 v18; // [rsp+18h] [rbp-30h]
  unsigned __int64 v19; // [rsp+28h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  word_132D0 = a2;
  setinf(12, 0);
  setinf_flag(3, 4, 0);
  setinf_flag(3, 2, 1);
  v11 = "UTF-16LE";
  if ( (unsigned __int8)getinf_flag(3, 32) )
    v11 = "UTF-16BE";
  v12 = add_encoding(v11);
  setinf(52, (v12 << 24) | 1);
  v16 = 0;
  v18 = 0;
  v17 = 0;
  sub_7840(&v16, a1);
  sub_AE00(&v16, 0, 0.0, a4, a5, a6, v13, v14, a9, a10);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  return v19 - __readfsqword(0x28u);
}

