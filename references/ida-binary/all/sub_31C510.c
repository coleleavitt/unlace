__int64 __fastcall sub_31C510(
        int a1,
        __int64 a2,
        unsigned int a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // r12d
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  __int64 result; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  char v26; // [rsp+0h] [rbp-18h]

  if ( (unsigned __int8)auto_is_ok() || (int)sub_300700(-1, 989) > 0 )
  {
    v12 = sub_317FE0(1u, a2, a3);
    v15 = v12;
    if ( v12 )
    {
      v20 = sub_31C320(v12, a1, 0, a4, a5, a6, a7, v13, v14, a10, a11);
      result = 0;
      if ( v20 == -1 )
        return result;
      if ( a1 == -1 )
      {
        if ( v20 || getinf_str(0, 73) > 0 )
        {
          v25 = qbasename(v15);
          setinf_buf(73, v25, 0);
        }
        v24 = 1008;
      }
      else
      {
        v24 = a1 == 0 ? 1009 : 1007;
      }
      sub_28A960(v24, v20, v16, v17, v18, v19, a4, a5, a6, a7, v21, v22, a10, a11, v26);
    }
  }
  return 1;
}
