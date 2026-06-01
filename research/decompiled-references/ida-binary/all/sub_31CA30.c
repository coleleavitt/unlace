__int64 __fastcall sub_31CA30(__m128 a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  char v17; // [rsp+0h] [rbp-18h]

  if ( (unsigned int)gen_file(1, 0, 0, 0, 0) )
  {
    v8 = sub_317FE0(1u, 0, 0x3D1u);
    if ( !v8
      || !batch
      && qfilesize(v8)
      && (unsigned int)sub_31A120(
                         (__int64)"~A~ppend",
                         (__int64)"~O~verwrite",
                         (__int64)"~C~ancel",
                         0xFFFFFFFF,
                         0x3F3u,
                         v8) )
    {
      return 0;
    }
    v9 = fopenWB(v8);
    if ( !(unsigned int)gen_file(1, v9, 0, -1, 0) )
    {
      qfclose(v9);
      qunlink(v8);
      sub_17CE30(1016);
      return 0;
    }
    qfclose(v9);
    sub_28A960(978, v8, v11, v12, v13, v14, a1, a2, a3, a4, v15, v16, a7, a8, v17);
  }
  else
  {
    sub_17CE30(1016);
  }
  return 1;
}
