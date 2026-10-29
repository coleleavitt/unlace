_BOOL8 __fastcall sub_3ABB70(
        __int64 a1,
        char a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __m128i v10; // xmm0
  const char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rbx
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int128 v20; // kr00_16
  unsigned __int128 v21; // kr10_16
  _BOOL4 v22; // ebx
  const char *v24; // r14
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 segm_base; // rax
  bool v29; // zf
  int v30; // eax
  unsigned __int8 v31; // di
  __int64 tinfo_size; // rax
  int reftype_by_size; // r14d
  __int64 custom_refinfo; // rax
  __int64 v35; // [rsp+0h] [rbp-100h] BYREF
  __m128i si128; // [rsp+8h] [rbp-F8h] BYREF
  unsigned __int128 v37; // [rsp+18h] [rbp-E8h]
  __int128 v38; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v39; // [rsp+38h] [rbp-C8h]
  __int128 v40; // [rsp+40h] [rbp-C0h]
  __int64 v41; // [rsp+50h] [rbp-B0h]
  __int128 v42; // [rsp+58h] [rbp-A8h]
  __int128 v43; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int128 v44; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int128 v45; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+98h] [rbp-68h]
  int v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  char v49; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v50; // [rsp+C0h] [rbp-40h]

  v10.m128i_i64[0] = 0;
  v50 = __readfsqword(0x28u);
  v12 = *(const char **)(a1 + 208);
  v39 = 0;
  v38 = 0;
  v41 = 0;
  v46 = 1;
  v47 = -1;
  v48 = 0;
  v49 = 0;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v13 = sub_3AB1C0((__int64)&v38, (__int64)v12, (__m128)0LL, a4, a5, a6, a7, a8, a9, a10);
  v17 = v13;
  if ( v13 >= 0 )
  {
    v18 = *(_QWORD *)(a1 + 208);
    v19 = BYTE8(v43) & 0xF;
    if ( a2 )
    {
      if ( v19 == 9 )
      {
        *((_QWORD *)&v43 + 1) = 0;
        goto LABEL_8;
      }
      v24 = *(const char **)&dword_8BCDE0[10];
      v25 = itext(1192, v12, v14);
      v12 = v24;
      v26 = sub_3241A0(v25, v24);
      v27 = v26;
      if ( v26 )
      {
        segm_base = get_segm_base(v26);
        v29 = *(_BYTE *)(v27 + 43) == 2;
        si128.m128i_i64[1] = segm_base;
        v30 = 2;
        if ( v29 )
          v30 = 9;
        DWORD2(v37) = v30;
        si128.m128i_i64[0] = -1;
        *(_QWORD *)&v37 = 0;
        *(_QWORD *)&dword_8BCDE0[10] = *(_QWORD *)v27;
        v20 = __PAIR128__(si128.m128i_u64[1], -1);
        v21 = __PAIR128__(*((unsigned __int64 *)&v37 + 1), 0);
        goto LABEL_7;
      }
      goto LABEL_19;
    }
    si128 = _mm_loadu_si128((const __m128i *)&xmmword_8BCD90);
    v10 = _mm_loadu_si128((const __m128i *)&qword_8BCDA0);
    v37 = (unsigned __int128)v10;
    if ( v19 == 9 )
    {
      si128 = _mm_load_si128((const __m128i *)&v44);
      v10 = _mm_load_si128((const __m128i *)&v45);
      v37 = (unsigned __int128)v10;
      goto LABEL_5;
    }
    v31 = BYTE8(v37) & 0x4F;
    if ( (BYTE8(v37) & 0x40) != 0 )
    {
      custom_refinfo = get_custom_refinfo(v31);
      if ( !custom_refinfo || (*(_BYTE *)(custom_refinfo + 24) & 1) == 0 )
        goto LABEL_5;
    }
    else if ( v31 > 2u )
    {
      if ( (unsigned __int8)(v31 - 9) > 1u )
        goto LABEL_5;
    }
    else if ( !v31 )
    {
      goto LABEL_5;
    }
    v35 = 0;
    copy_tinfo_t(&v35, &v43, v14);
    tinfo_size = get_tinfo_size(0, v35, 0);
    reftype_by_size = (unsigned __int8)get_reftype_by_size(tinfo_size);
    clear_tinfo_t(&v35);
    if ( (_BYTE)reftype_by_size != 0xFF )
      DWORD2(v37) = reftype_by_size | DWORD2(v37) & 0xFFFFFFB0;
LABEL_5:
    v12 = (const char *)((unsigned __int64)v38 >> 3);
    if ( (unsigned __int8)sub_337800(
                            (__int64)&si128,
                            (const char *)((unsigned __int64)v38 >> 3),
                            *(double *)v10.m128i_i64,
                            a4,
                            a5,
                            a6,
                            v15,
                            v16,
                            a9,
                            a10) )
    {
      v20 = (unsigned __int128)si128;
      v21 = v37;
      xmmword_8BCD90 = (__int128)si128;
      *(_OWORD *)&qword_8BCDA0 = v37;
LABEL_7:
      v44 = v20;
      v45 = v21;
      *((_QWORD *)&v43 + 1) = *((_QWORD *)&v43 + 1) & 0xFFFFFFFFFFFFFFF0LL | 9;
LABEL_8:
      v12 = byte_9 + 5;
      v22 = set_tinfo_property4(v18 + 8, 14, v17, (char *)&v43 + 8, 0, 0) == 0;
      goto LABEL_9;
    }
LABEL_19:
    v22 = 1;
    goto LABEL_9;
  }
  v22 = v13 != -1;
LABEL_9:
  clear_tinfo_t(&v43);
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    *(double *)v10.m128i_i64 = qfree(v41, v12);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39, v12, *(double *)v10.m128i_i64);
  }
  return v22;
}
