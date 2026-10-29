__int64 __fastcall sub_254670(
        _QWORD *a1,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        char *a12)
{
  int v12; // ebp
  __int64 v13; // rbx
  char v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rax
  _DWORD *v19; // rdi
  __m128 v20; // xmm0
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __int64 v29; // rbp
  __int64 bpt_kernel_interface; // rax
  const char *v31; // rsi
  __int64 v32; // rdx
  char *v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  int v38; // r12d
  __int64 v40; // r15
  double v41; // xmm4_8
  double v42; // xmm5_8
  int v43; // eax
  __int64 v44; // rdx
  _QWORD *v45; // rax
  __m128i v46; // [rsp+0h] [rbp-88h] BYREF
  const char **v47; // [rsp+20h] [rbp-68h] BYREF
  __int128 v48; // [rsp+28h] [rbp-60h]
  __int64 v49; // [rsp+38h] [rbp-50h]
  int v50; // [rsp+40h] [rbp-48h]
  unsigned __int64 v51; // [rsp+48h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  if ( dword_8CC5F0 >= 0 )
    return 0;
  v12 = (int)a1;
  if ( !(_DWORD)a1 )
    return 0;
  v13 = qword_8CC430;
  v14 = a2;
  v15 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
  if ( qword_8CC430 == v15 )
    return 0;
  while ( (_DWORD)a1 != *(_DWORD *)v13 )
  {
    v13 += 256;
    if ( v15 == v13 )
      return 0;
  }
  if ( !v13 )
    return 0;
  v16 = *(_QWORD *)(v13 + 40);
  v47 = nullptr;
  v49 = 0;
  v50 = -1;
  v48 = 0;
  if ( !v16 )
    goto LABEL_25;
  a12 = (char *)dword_8BA594;
  v17 = *(_QWORD *)(v16 + 32LL * dword_8BA594 + 8);
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 )
    {
      a1 = qword_8CC600;
      if ( qword_8CC600 )
      {
        *(_QWORD *)qword_8CC600 = v17;
        a2 = 11;
        a1[1] = v16;
        *((_DWORD *)a1 + 4) = (_DWORD)a12;
        if ( (unsigned int)sub_23D480((__int64)a1, 11, v16, a12, 0.0) != 1 )
        {
LABEL_25:
          v17 = -1;
          goto LABEL_11;
        }
        v17 = *(_QWORD *)qword_8CC600;
      }
    }
  }
LABEL_11:
  v46 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)calc_bounds_of, (__m128i)(unsigned __int64)&v47);
  v18 = sub_384360(a1, a2, v16, a12);
  v19 = (_DWORD *)v18;
  if ( v18 )
    v19 = *(_DWORD **)(v18 + 40);
  sub_24EC60(v19, v17, 3u, (__int64)&v46, 2);
  v20.m128_u64[0] = 0;
  memset(&v46, 0, 24);
  if ( (unsigned __int8)sub_22F240(
                          &v47,
                          v14,
                          (__int64)&v46,
                          0.0,
                          (__m128)(unsigned __int64)&v47,
                          a5,
                          a6,
                          v21,
                          v22,
                          a9,
                          a10) )
  {
    if ( v46.m128i_i64[1] == 1 )
    {
      v40 = *(_QWORD *)v46.m128i_i64[0];
      if ( !(_QWORD)v48 || !rangeset_t_find_range(&v47, *(_QWORD *)v46.m128i_i64[0]) )
      {
        if ( v40 == sub_240FC0(*(_QWORD *)(v13 + 40), 1, 0.0, v23, v24, v25, v26) )
        {
          v31 = (_BYTE *)(&dword_0 + 1);
          v38 = sub_243750(
                  (int *)v13,
                  (char *)&dword_0 + 1,
                  0,
                  (__m128)0LL,
                  (__m128)(unsigned __int64)&v47,
                  a5,
                  a6,
                  v41,
                  v42,
                  a9,
                  a10);
          goto LABEL_17;
        }
        v31 = (const char *)v40;
        v43 = sub_243150(v12, v40, 0, 0, (__m128)0LL, (__m128)(unsigned __int64)&v47, a5, a6, v41, v42, a9, a10);
LABEL_29:
        v38 = v43;
        goto LABEL_17;
      }
    }
    v20 = 0;
    v29 = operator new(0xA8u);
    *(_QWORD *)(v29 + 8) = 0;
    *(_QWORD *)(v29 + 16) = 0;
    *(_QWORD *)(v29 + 24) = 96;
    *(_QWORD *)(v29 + 32) = 0;
    *(_QWORD *)(v29 + 56) = -1;
    *(_QWORD *)(v29 + 64) = 0;
    *(_OWORD *)(v29 + 40) = 0;
    *(_QWORD *)(v29 + 80) = -1;
    *(_QWORD *)(v29 + 72) = 0xFFFFFFFFLL;
    *(_QWORD *)(v29 + 88) = 4;
    *(_QWORD *)(v29 + 104) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v29 + 96) = 9;
    *(_QWORD *)(v29 + 112) = 0;
    *(_QWORD *)v29 = &srcdbg_step;
    *(_QWORD *)(v29 + 128) = 0;
    *(_QWORD *)(v29 + 152) = 0;
    *(_DWORD *)(v29 + 160) = -1;
    *(_OWORD *)(v29 + 136) = 0;
    rangeset_t_swap(&v47, v29 + 128);
    *(_DWORD *)(v29 + 120) = sub_2396E0(v46.m128i_i64);
    bpt_kernel_interface = get_bpt_kernel_interface(&v46, v29 + 128);
    *(double *)v20.m128_u64 = (*(double (__fastcall **)(__int64, __int64, void *, _QWORD, _QWORD))(*(_QWORD *)bpt_kernel_interface
                                                                                                 + 136LL))(
                                bpt_kernel_interface,
                                v29 + 24,
                                &unk_5C2F25,
                                *(unsigned int *)(v29 + 120),
                                0);
    v31 = (const char *)v29;
    if ( (unsigned int)sub_236A00(v13, v29, 0, *(double *)v20.m128_u64) == 1 )
    {
      if ( (*(_BYTE *)(dbg + 32) & 0x10) != 0 )
      {
        v44 = qword_8CC050 + 24LL * *(int *)(v29 + 120);
        v45 = *(_QWORD **)v44;
        v32 = *(_QWORD *)v44 + 8LL * *(_QWORD *)(v44 + 8);
        if ( v45 != (_QWORD *)v32 )
        {
          while ( v17 != *v45 )
          {
            if ( (_QWORD *)v32 == ++v45 )
              goto LABEL_39;
          }
          if ( (_QWORD *)v32 != v45 )
          {
            v38 = sub_241C80(
                    v13,
                    4097,
                    v32,
                    v33,
                    v34,
                    v35,
                    v20,
                    (__m128)(unsigned __int64)&v47,
                    a5,
                    a6,
                    v36,
                    v37,
                    a9,
                    a10);
            if ( v38 <= 0 )
            {
              v31 = (const char *)v13;
              byte_8CC5EC = 0;
              sub_2369A0(v29, v13);
              goto LABEL_17;
            }
          }
        }
      }
LABEL_39:
      v31 = nullptr;
      v43 = sub_243000(
              0,
              nullptr,
              v20,
              (__m128)(unsigned __int64)&v47,
              a5,
              a6,
              *(double *)v36.m128_u64,
              *(double *)v37.m128_u64,
              a9,
              a10,
              v32,
              v33);
      goto LABEL_29;
    }
  }
  else
  {
    v31 = (const char *)v17;
    sub_169700(
      (int)"%a: failed to calculate step addresses!\n",
      v17,
      v23,
      v24,
      v25,
      v26,
      (__m128)0LL,
      (__m128)(unsigned __int64)&v47,
      a5,
      a6,
      v27,
      v28,
      a9,
      a10,
      v46.m128i_i8[0]);
  }
  v38 = 0;
LABEL_17:
  if ( v46.m128i_i64[0] )
  {
    v46.m128i_i64[1] = 0;
    *(double *)v20.m128_u64 = qfree(v46.m128i_i64[0], v31);
  }
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47, v31, *(double *)v20.m128_u64);
  }
  return (unsigned int)v38;
}
