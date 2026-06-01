__int64 __fastcall sub_6ED7B0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 v12; // rsi
  unsigned int v14; // eax
  double v15; // xmm4_8
  double v16; // xmm5_8
  int v17; // r15d
  unsigned int v18; // r14d
  int v19; // ebx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r15
  double v27; // xmm4_8
  double v28; // xmm5_8
  __m128i v29; // xmm0
  __int64 v30; // rbx
  __int64 v31; // r15
  __m128i v32; // rax
  __m128i v33; // [rsp+0h] [rbp-98h] BYREF
  __int64 v34; // [rsp+10h] [rbp-88h]
  __m128i v35; // [rsp+20h] [rbp-78h] BYREF
  __int64 v36; // [rsp+30h] [rbp-68h]
  __int64 v37; // [rsp+38h] [rbp-60h]
  __int64 v38; // [rsp+40h] [rbp-58h]
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v12 = *(_QWORD *)(a2 + 48);
  v39 = __readfsqword(0x28u);
  v14 = sub_6ED600(a1, v12, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  if ( (_BYTE)v14 )
  {
    v17 = *(_DWORD *)(a2 + 20);
    v18 = v14;
    v19 = 0;
    if ( v17 )
    {
      while ( (unsigned __int8)sub_6ED600(
                                 a1,
                                 *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v19)),
                                 a3,
                                 a4,
                                 a5,
                                 a6,
                                 a7,
                                 v15,
                                 v16,
                                 a10,
                                 a11) )
      {
        if ( v17 == ++v19 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      v21 = 0;
      v22 = *(unsigned int *)(a2 + 16);
      v23 = 8 * v22;
      if ( (_DWORD)v22 )
      {
        while ( (unsigned __int8)sub_6ED600(
                                   a1,
                                   *(_QWORD *)(*(_QWORD *)(a2 + 56) + v21),
                                   a3,
                                   a4,
                                   a5,
                                   a6,
                                   a7,
                                   v15,
                                   v16,
                                   a10,
                                   a11) )
        {
          v21 += 8;
          if ( v23 == v21 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        v24 = 0;
        v25 = *(unsigned int *)(a2 + 24);
        v26 = 8 * v25;
        if ( (_DWORD)v25 )
        {
          while ( (unsigned __int8)sub_6ED600(
                                     a1,
                                     *(_QWORD *)(*(_QWORD *)(a2 + 64) + v24),
                                     a3,
                                     a4,
                                     a5,
                                     a6,
                                     a7,
                                     v15,
                                     v16,
                                     a10,
                                     a11) )
          {
            v24 += 8;
            if ( v26 == v24 )
              goto LABEL_18;
          }
        }
        else
        {
LABEL_18:
          sub_EC6110(&v35, a2);
          v29 = _mm_load_si128(&v35);
          v30 = v37;
          v31 = v38;
          v34 = v36;
          v32 = v29;
          v33 = v29;
LABEL_19:
          if ( v30 == v32.m128i_i64[0] )
          {
LABEL_25:
            if ( v31 == v32.m128i_i64[1] )
              return v18;
          }
          if ( (v32.m128i_i8[8] & 3) != 0 )
            v32.m128i_i64[0] = sub_ECEDF0(&v33);
          while ( (unsigned __int8)sub_6ED600(
                                     a1,
                                     *(_QWORD *)v32.m128i_i64[0],
                                     a3,
                                     *(double *)v29.m128i_i64,
                                     a5,
                                     a6,
                                     a7,
                                     v27,
                                     v28,
                                     a10,
                                     a11) )
          {
            v32.m128i_i64[1] = v33.m128i_i64[1];
            if ( (v33.m128i_i8[8] & 3) != 0 )
            {
              if ( v33.m128i_i64[1] <= 3uLL )
                sub_ECEA10(&v33, 1);
              else
                sub_ECEC20(&v33);
              v32 = v33;
              goto LABEL_19;
            }
            v32.m128i_i64[0] = v33.m128i_i64[0] + 8;
            v33.m128i_i64[0] = v32.m128i_i64[0];
            if ( v32.m128i_i64[0] == v30 )
              goto LABEL_25;
          }
        }
      }
    }
  }
  return 0;
}

