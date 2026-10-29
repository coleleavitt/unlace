__m128i *__fastcall sub_1E45C90(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r13
  __m128i *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdi
  unsigned __int64 v20; // r8
  double v21; // xmm4_8
  double v22; // xmm5_8
  _QWORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r14
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rax
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 *v42; // rax
  __int64 *v43; // r15
  int v44; // eax
  _QWORD *v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v48; // rax
  void **v49; // r14
  int v50; // eax
  __int64 v51; // rsi
  __int64 *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  unsigned __int64 v56; // r14
  __int64 *v57; // r14
  __int64 v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  double v63; // xmm4_8
  double v64; // xmm5_8
  unsigned __int64 v65; // rax
  __int64 v66; // rdi
  __int64 v67; // r14
  void *v68; // [rsp+0h] [rbp-48h] BYREF
  __int64 *v69; // [rsp+8h] [rbp-40h]

  v12 = *(_QWORD *)(a2 + 96);
  if ( (((unsigned __int8)v12 | (unsigned __int8)(v12 >> 1)) & 1) != 0 )
    goto LABEL_10;
  v13 = v12 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v13 )
    goto LABEL_10;
  v14 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
  {
    if ( (*(_BYTE *)(*v14 + 8LL) & 0x7Fu) - 59 > 2 )
      goto LABEL_8;
    v14 = (_QWORD *)v14[1];
  }
  else if ( ((_BYTE)v14[1] & 0x7Fu) - 59 > 2 )
  {
    goto LABEL_8;
  }
  v15 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
    v15 = *(_QWORD *)(v15 + 8);
  if ( (_QWORD *)v15 != v14 )
  {
LABEL_10:
    v16 = 0;
    goto LABEL_11;
  }
LABEL_8:
  v16 = sub_1E38470(*(_QWORD *)a1, *(_DWORD *)(a2 + 24), v13, *(_QWORD *)(a1 + 32), 0, a3, a4, a5);
  if ( !v16 )
    return nullptr;
LABEL_11:
  v18 = *(_QWORD *)(a1 + 24);
  v19 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
  v20 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 40) & 7) != 0 )
    v20 = 0;
  v17 = (__m128i *)sub_B80200(
                     v19,
                     v18,
                     *(_DWORD *)(a2 + 56),
                     *(_DWORD *)(a2 + 24),
                     v20,
                     v16,
                     (unsigned __int8)BYTE4(*(_QWORD *)(a2 + 72)) >> 7,
                     ((unsigned __int16)WORD2(*(_QWORD *)(a2 + 72)) >> 8) & 1,
                     (*(_QWORD *)(a2 + 72) & 0x20000000000LL) != 0);
  if ( (*(_BYTE *)(a2 + 77) & 2) != 0 )
  {
    v48 = *(_QWORD *)(a2 + 128);
    if ( v48 )
    {
      v49 = (void **)(v48 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v48 & 4) != 0 )
      {
        if ( v49 )
        {
          v68 = *v49;
          v69 = (__int64 *)(v49 + 1);
          v50 = sub_F6CCB0((__int64 *)&v68, a3);
          v51 = (__int64)v49;
          v52 = (__int64 *)sub_1DD4AE0(*(_QWORD *)a1, v49, *(_QWORD *)(a1 + 32), v50, 0, 0, a3, a4);
          v56 = (unsigned __int64)v52;
          if ( v52 && (v51 = (__int64)v52, !(unsigned __int8)sub_17AF800(*(_QWORD *)a1, v52, a3)) )
          {
            v53 = *(_QWORD *)v56;
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v56 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                      & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL) != 7 )
            {
              v65 = v56;
              v57 = (__int64 *)(v56 & 0xFFFFFFFFFFFFFFF8LL);
              v59 = v65 | 4;
              v17[8].m128i_i64[0] = v59;
LABEL_37:
              if ( v57 )
              {
                if ( (v59 & 4) != 0 )
                {
                  v66 = *v57;
                  v67 = *(_QWORD *)(*v57 & 0xFFFFFFFFFFFFFFF0LL);
                  v53 = *(_QWORD *)(v67 + 8) & 7LL | (*(__int64 *)(v67 + 8) >> 3) & 1;
                  if ( !v53 )
                  {
                    v57 = (__int64 *)(v67 & 0xFFFFFFFFFFFFFFF0LL);
                    goto LABEL_40;
                  }
                  v59 = sub_F64F00(v66, v51, v53, v54, v55);
                }
                v57 = (__int64 *)(v59 & 0xFFFFFFFFFFFFFFF0LL);
              }
LABEL_40:
              if ( sub_A62E10(*(_QWORD *)(*(_QWORD *)a1 + 248LL), (__int64)v57, v53, v54, v55) )
                v57 = (__int64 *)sub_AAF890(*(__int64 **)(*(_QWORD *)a1 + 248LL), (__int64)v57, v60, v61, v62);
              v17[8].m128i_i64[1] = (__int64)v57;
              goto LABEL_14;
            }
            v68 = *(void **)v56;
            v57 = (__int64 *)(sub_F64D20((__int64 *)&v68) & 0xFFFFFFFFFFFFFFF0LL);
            if ( v57 )
            {
LABEL_36:
              v58 = *v57;
              v57 = (__int64 *)(*v57 & 0xFFFFFFFFFFFFFFF8LL);
              v59 = v58 & 0xFFFFFFFFFFFFFFFBLL;
              v17[8].m128i_i64[0] = v59;
              goto LABEL_37;
            }
          }
          else
          {
            v57 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 248LL) + 18720LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( v57 )
              goto LABEL_36;
          }
          v17[8].m128i_i64[0] = 0;
          goto LABEL_40;
        }
      }
      else if ( v49 )
      {
        v48 &= 0xFFFFFFFFFFFFFFF0LL;
        if ( v48 )
          v48 = *(_QWORD *)v48 & 0xFFFFFFFFFFFFFFFBLL;
        goto LABEL_51;
      }
      v48 = 0;
    }
LABEL_51:
    v17[8].m128i_i64[0] = v48;
  }
LABEL_14:
  sub_1E40A90(
    *(_QWORD *)a1,
    *(__int64 **)(a1 + 32),
    a2,
    (unsigned __int64)v17,
    0,
    nullptr,
    a3,
    a4,
    *(double *)a5.m128i_i64,
    a6,
    v21,
    v22,
    a9,
    a10);
  v23 = (_QWORD *)sub_B8C330((__int64)v17);
  sub_B7DA50((__int64)v17, v23, a2, 1, v24, v25);
  v17[1].m128i_i8[13] = *(_BYTE *)(a2 + 29) & 0x60 | v17[1].m128i_i8[13] & 0x9F;
  v26 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
  v27 = sub_A8BD70(v26, a2, 0);
  sub_AB9320(v26, (__int64)v17, v27, v28, v29, v30);
  if ( sub_A681F0(*(_QWORD *)(*(_QWORD *)a1 + 248LL)) )
    sub_A681E0(*(_QWORD *)(*(_QWORD *)a1 + 248LL));
  if ( sub_A681D0(*(_QWORD *)(*(_QWORD *)a1 + 248LL)) )
    sub_A681C0(*(_QWORD *)(*(_QWORD *)a1 + 248LL));
  if ( (unsigned __int8)sub_1DFDC70(*(_QWORD *)a1, a2, (__int64)v17, *(_QWORD *)(a1 + 32)) )
    return nullptr;
  sub_B94AD0(*(__m128i **)(a1 + 24), (__int64)v17, v31, v32, v33, v34);
  v39 = sub_B7E870(a2, (__int64)v17, v35, v36, v37, v38);
  v40 = (__int64)v39;
  if ( !v39 )
  {
    sub_1DFEFF0(a2);
    return v17;
  }
  if ( (_QWORD *)a2 == v39 )
  {
    if ( !sub_1DFEFF0(a2) && v17[4].m128i_i8[12] < 0 )
      return v17;
    goto LABEL_27;
  }
  v41 = v39[16];
  if ( v41 )
  {
    if ( (v41 & 4) != 0 )
    {
      v42 = (__int64 *)(v41 & 0xFFFFFFFFFFFFFFF8LL);
      v43 = v42;
      if ( v42 )
      {
        v68 = (void *)*v42;
        v69 = v42 + 1;
        v44 = sub_F6CCB0((__int64 *)&v68, a3);
        v45 = sub_1DD1D30(*(_QWORD *)a1, *v43, *(_QWORD *)(a1 + 32), v44, 0, nullptr, a3, a4);
        sub_17B3720(
          *(_QWORD *)a1,
          *(_DWORD *)(v40 + 24),
          (unsigned __int8)*(_DWORD *)(v40 + 76) >> 7,
          (__int64)v45,
          1u,
          (__int64)v17);
      }
    }
  }
  if ( !sub_1DFEFF0(a2) && v17[4].m128i_i8[12] >= 0 )
  {
LABEL_27:
    if ( !v16 )
    {
      sub_1DC20B0(*(_QWORD *)(*(_QWORD *)a1 + 11280LL), a2, (__int64)v17, v46);
      sub_1E43120(a1, v17, v40, a3, a4, *(double *)a5.m128i_i64, a6, v63, v64, a9, a10);
    }
  }
  return v17;
}
