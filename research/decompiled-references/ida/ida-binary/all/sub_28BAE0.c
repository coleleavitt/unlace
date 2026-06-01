__int64 __fastcall sub_28BAE0(double a1, double a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  __m128 si128; // xmm1
  __int64 v9; // rsi
  __int64 v10; // rbx
  int func_bounds; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  unsigned __int64 i; // rbx
  unsigned __int64 v20; // rdi
  double v21; // xmm4_8
  double v22; // xmm5_8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __int64 v29; // rdx
  __int64 v30; // rcx
  const __m128i *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __m128 v35; // xmm0
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdi
  __int16 v40; // ax
  __int64 v41; // rdi
  double v42; // xmm4_8
  double v43; // xmm5_8
  __m128i v44; // [rsp+0h] [rbp-4E8h] BYREF
  __m128 v45; // [rsp+10h] [rbp-4D8h]
  __int64 v46; // [rsp+20h] [rbp-4C8h]
  __int64 v47; // [rsp+28h] [rbp-4C0h]
  _OWORD v48[2]; // [rsp+30h] [rbp-4B8h] BYREF
  __int64 v49; // [rsp+50h] [rbp-498h]
  __int64 v50; // [rsp+58h] [rbp-490h]
  __int128 v51; // [rsp+60h] [rbp-488h]
  __int64 v52; // [rsp+70h] [rbp-478h]
  __int64 v53; // [rsp+78h] [rbp-470h]
  __int64 v54; // [rsp+80h] [rbp-468h]
  __int64 v55; // [rsp+88h] [rbp-460h]
  __int64 v56; // [rsp+90h] [rbp-458h]
  __int64 v57; // [rsp+98h] [rbp-450h]
  __int64 v58; // [rsp+A0h] [rbp-448h]
  __int64 v59; // [rsp+A8h] [rbp-440h]
  __int64 v60; // [rsp+B0h] [rbp-438h]
  __int64 v61; // [rsp+B8h] [rbp-430h]
  _BYTE v62[1032]; // [rsp+C0h] [rbp-428h] BYREF
  unsigned __int64 v63; // [rsp+4C8h] [rbp-20h]

  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCC90);
  v63 = __readfsqword(0x28u);
  v9 = (__int64)v48;
  v48[0] = 0;
  v49 = 0;
  v50 = 0;
  v52 = 0xFFFFFFFFLL;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v48[1] = si128;
  v51 = 0;
  if ( (unsigned __int8)sub_1F09E0(0, (__int64 *)v48, (_QWORD *)v48 + 1) )
  {
    for ( i = *(_QWORD *)&v48[0]; i < *((_QWORD *)&v48[0] + 1); ++i )
    {
      v20 = i;
      v9 = 0x10000000;
      clr_abits(v20, 0x10000000);
    }
  }
  else
  {
    v10 = xmmword_8CC810;
    clr_abits(xmmword_8CC810, 0x10000000);
    v9 = 1;
    *(_QWORD *)&v48[0] = v10;
    func_bounds = find_func_bounds(v48, 1);
    if ( func_bounds != 1 )
    {
      if ( !func_bounds )
      {
        auto_mark_range(xmmword_8CC810, xmmword_8CC810 + 1, 30);
        ea2str(v62, 1024, *((_QWORD *)&v48[0] + 1));
        sub_28A960(
          1092,
          (__int64)v62,
          v12,
          v13,
          v14,
          v15,
          (__m128)0LL,
          si128,
          a3,
          a4,
          v16,
          v17,
          a7,
          a8,
          v44.m128i_i8[0]);
        return 1;
      }
      ea2str(v62, 1024, *(_QWORD *)&v48[0]);
      sub_28A960(1093, (__int64)v62, v23, v24, v25, v26, (__m128)0LL, si128, a3, a4, v27, v28, a7, a8, v44.m128i_i8[0]);
      return 0;
    }
  }
  if ( (unsigned __int8)add_func_ex(v48) )
  {
    sub_1FDB10(0.0, si128, a3, a4, v21, v22, a7, a8, (__int64)v48, (const char *)v9);
    if ( *(_QWORD *)&v48[0] == (_QWORD)xmmword_8CC810 )
    {
      v31 = (const __m128i *)sub_1EA680(qword_8CD7E8 + 384LL, v9, v29, v30, 0.0);
      v35 = 0;
      v45.m128_u64[0] = 0;
      v45.m128_u64[1] = -1;
      v46 = 0;
      v47 = 0;
      v44 = 0;
      if ( v31 == &v44
        || (v44 = _mm_loadu_si128(v31),
            v35 = (__m128)_mm_loadu_si128(v31 + 1),
            v45 = v35,
            v36 = v31[2].m128i_u32[0],
            LODWORD(v46) = v31[2].m128i_i32[0],
            (v37 = v31[2].m128i_i64[1]) == 0) )
      {
        v38 = 0;
      }
      else
      {
        v38 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)v37 + 16LL))(
                v37,
                v9,
                v36,
                v32,
                v33,
                v34,
                v44.m128i_i64[0],
                v44.m128i_i64[1],
                v45.m128_u64[0],
                v45.m128_u64[1],
                v46);
        v47 = v38;
      }
      v39 = qword_8CD7E8;
      *(_DWORD *)(v38 + 8) = -1;
      *(double *)v35.m128_u64 = (*(double (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v39 + 568LL))(v39, &v44);
      v41 = qword_8CD7E8;
      *(_DWORD *)(v47 + 8) = v40;
      sub_1FF700(v41 + 384, &v44, v35, si128, a3, a4, v42, v43, a7, a8);
      if ( v47 )
        qfree(v47, v44.m128i_i8);
    }
    return 1;
  }
  return 0;
}
