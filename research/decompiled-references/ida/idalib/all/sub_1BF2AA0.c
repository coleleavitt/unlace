__int64 __fastcall sub_1BF2AA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        char a9,
        unsigned __int8 a10)
{
  __int64 *v10; // r9
  int v11; // r13d
  __m128i *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rsi
  __int64 *v17; // rdx
  unsigned __int64 v18; // r13
  __int64 *v19; // r12
  __int64 *v20; // rbp
  __int64 v21; // r13
  unsigned __int64 v22; // r14
  _QWORD *v23; // rcx
  unsigned __int8 v24; // al
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // r14
  int v33; // eax
  __int64 v34; // rax
  _QWORD *v35; // rcx
  const double *v36; // r12
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // r13d
  const __m128i *v48; // rax
  const __m128i *v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // rdi
  __m128i *v54; // rdi
  __m128i v55; // [rsp+0h] [rbp-1F78h] BYREF
  unsigned __int64 v56; // [rsp+18h] [rbp-1F60h]
  unsigned __int64 v57; // [rsp+20h] [rbp-1F58h]
  int v58; // [rsp+28h] [rbp-1F50h]
  unsigned int v59; // [rsp+2Ch] [rbp-1F4Ch]
  __int64 **v60; // [rsp+30h] [rbp-1F48h]
  __int64 *v61; // [rsp+38h] [rbp-1F40h]
  __int64 *v62; // [rsp+40h] [rbp-1F38h]
  __int64 *v63; // [rsp+48h] [rbp-1F30h]
  __m128i *v64; // [rsp+50h] [rbp-1F28h]
  __int64 v65; // [rsp+58h] [rbp-1F20h] BYREF
  __int64 v66; // [rsp+68h] [rbp-1F10h] BYREF
  __int64 v67; // [rsp+70h] [rbp-1F08h] BYREF
  __int64 v68; // [rsp+78h] [rbp-1F00h] BYREF
  _QWORD *v69; // [rsp+80h] [rbp-1EF8h] BYREF
  __int64 v70; // [rsp+88h] [rbp-1EF0h]
  _QWORD v71[338]; // [rsp+90h] [rbp-1EE8h] BYREF
  int v72; // [rsp+B20h] [rbp-1458h]
  char v73; // [rsp+B24h] [rbp-1454h]
  _QWORD v74[17]; // [rsp+B28h] [rbp-1450h] BYREF
  int v75; // [rsp+BB0h] [rbp-13C8h]
  __int64 v76; // [rsp+BB8h] [rbp-13C0h]
  __int64 v77; // [rsp+BC0h] [rbp-13B8h]
  _QWORD *v78; // [rsp+BC8h] [rbp-13B0h]
  __int64 v79; // [rsp+BD0h] [rbp-13A8h]
  _QWORD v80[6]; // [rsp+BD8h] [rbp-13A0h] BYREF
  _QWORD v81[2]; // [rsp+C08h] [rbp-1370h] BYREF
  int v82; // [rsp+C18h] [rbp-1360h]
  int v83; // [rsp+C1Ch] [rbp-135Ch]
  __int64 v84; // [rsp+C20h] [rbp-1358h]
  char v85; // [rsp+C28h] [rbp-1350h]
  int v86; // [rsp+C2Ch] [rbp-134Ch]
  int v87; // [rsp+1F30h] [rbp-48h]

  v10 = (__int64 *)(a6 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = a4;
  v12 = (__m128i *)a2;
  v13 = *v10;
  v65 = a3;
  v14 = *(_QWORD *)(v13 + 8);
  v55.m128i_i64[0] = a1;
  v59 = a4;
  v56 = a5;
  v15 = sub_F60F10(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, (__int64)v10);
  v82 = v11;
  v69 = v71;
  v71[336] = v74;
  v70 = 0x1000000000LL;
  v16 = 0x400000000LL;
  v78 = v80;
  v71[337] = 16;
  v72 = 0;
  v73 = 1;
  v74[16] = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v79 = 0x400000000LL;
  v80[4] = v81;
  v80[5] = 0;
  v81[0] = 0;
  v81[1] = 1;
  v83 = 2;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v18 = sub_B9F870((__int64)v15);
  v60 = (__int64 **)&v68;
  if ( v17 != (__int64 *)v18 )
  {
    v64 = v12;
    v19 = v17;
    v20 = (__int64 *)v18;
    v58 = a10;
    v61 = &v65;
    v62 = &v66;
    v63 = &v67;
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = *v20 & 0xFFFFFFFFFFFFFFF8LL;
        v23 = (_QWORD *)(*(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v22 + 16) & 4) != 0 )
          v23 = (_QWORD *)*v23;
        if ( v23 )
          v23 -= 8;
        v24 = *(_BYTE *)(v22 + 28) & 0x7F;
        v25 = (unsigned int)v24 - 53;
        if ( (unsigned int)v25 <= 1 )
        {
          v22 = *(_QWORD *)(v22 + 64);
          v24 = *(_BYTE *)(v22 + 28) & 0x7F;
        }
        if ( v24 != 71 )
          break;
        v21 = *(_QWORD *)(v22 + 48);
        if ( a9 )
          goto LABEL_4;
LABEL_31:
        v57 = (unsigned __int64)v23;
        v40 = sub_AED600(v21, v16, v25, (__int64)v23);
        v23 = (_QWORD *)v57;
        v43 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v43 + 16) - 43 > 1 )
        {
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
            goto LABEL_5;
          v45 = sub_F63050(v43, v16, v41, v57);
          v23 = (_QWORD *)v57;
          v43 = v45;
          if ( !v45 )
            goto LABEL_5;
        }
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 43 )
        {
          v57 = (unsigned __int64)v23;
          v44 = sub_9B4870(v43, v16, v41, (__int64)v23, v42);
          v23 = (_QWORD *)v57;
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 25 > 1 )
            goto LABEL_5;
        }
        if ( v22 )
        {
LABEL_4:
          v16 = v22;
          sub_1BEE2D0(v55.m128i_i64[0], (_QWORD *)v22, *v20, (__int64)v23, v56, v65, (__int64)&v69, 0, v58);
          goto LABEL_5;
        }
LABEL_16:
        v16 = v21;
        sub_1BECF20(v55.m128i_i64[0], v21, *v20++, v56, v65, (__int64)&v69, 0, v58, 1, 0);
        if ( v19 == v20 )
        {
LABEL_17:
          v12 = v64;
          goto LABEL_18;
        }
      }
      if ( !a9 )
      {
        v21 = v22;
        v22 = 0;
        goto LABEL_31;
      }
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 44
        || (v51 = sub_AED600(v22, v16, v25, (__int64)v23) & 0xFFFFFFFFFFFFFFF0LL,
            v53 = *(_QWORD *)v51,
            *(_BYTE *)(*(_QWORD *)v51 + 16LL) != 43)
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 43
         || (v53 = sub_F63050(v53, v16, v25, v23)) == 0)
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_9B4870(
                                                                                    v53,
                                                                                    v16,
                                                                                    v25,
                                                                                    (__int64)v23,
                                                                                    v52)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1 )
      {
        v21 = v22;
        v68 = sub_C1BEF0((__int64)v61, v16, v25, (__int64)v23);
        v57 = sub_6D5440(v60);
        v66 = sub_AED600(v22, v16, v26, v27);
        v67 = sub_C1BEF0((__int64)v62, v16, v28, v29);
        v30 = sub_6D5440(v63);
        v16 = v59;
        if ( (unsigned int)sub_1BE5E80(v55.m128i_i64[0], v59, v30, v57, 0) )
          goto LABEL_16;
      }
LABEL_5:
      if ( v19 == ++v20 )
        goto LABEL_17;
    }
  }
LABEL_18:
  v31 = v75 & 0x3FFFFFFF;
  v32 = (unsigned int)v70;
  v33 = sub_1BF27B0((__int64)&v69, v55.m128i_i64[0], v59, v60, a7, a8);
  if ( v33 == 1 )
    goto LABEL_39;
  if ( v33 )
  {
    if ( v33 == 2 )
    {
      if ( (v12->m128i_i32[0] & 0x7FFFFFFF) != 3 )
      {
        v12->m128i_i32[0] = v12->m128i_i32[0] & 0x80000000 | 3;
        v12[2].m128i_i64[0] = (__int64)v12[3].m128i_i64;
        v12[2].m128i_i64[1] = 0x400000000LL;
      }
      v34 = (unsigned int)v70;
      v35 = v69;
      v36 = (const double *)v69;
      if ( 21LL * (unsigned int)v70 )
      {
        do
        {
          if ( ((_BYTE)v36[13] & 2) != 0 )
          {
            v37 = v12[2].m128i_u32[3];
            v55.m128i_i64[0] = (_QWORD)v36[1] & 0xFFFFFFFFFFFFFFF8LL;
            v38 = v12[2].m128i_u32[2];
            v39 = (__m128i)_mm_loadh_ps(v36);
            if ( v38 + 1 > v37 )
            {
              v55 = v39;
              sub_2237220(&v12[2], &v12[3], v38 + 1, 16);
              v38 = v12[2].m128i_u32[2];
              v39 = _mm_load_si128(&v55);
            }
            *(__m128i *)(v12[2].m128i_i64[0] + 16 * v38) = v39;
            v35 = v69;
            v34 = (unsigned int)v70;
            ++v12[2].m128i_i32[2];
          }
          v36 += 21;
        }
        while ( v36 != (const double *)&v35[21 * v34] );
      }
      v46 = 1;
      goto LABEL_40;
    }
LABEL_39:
    v46 = 0;
    goto LABEL_40;
  }
  v48 = (const __m128i *)v68;
  v46 = 0;
  if ( (*(_BYTE *)(v68 + 116) & 0x10) != 0 )
  {
    if ( (v12->m128i_i32[0] & 0x7FFFFFFF) == 3 )
    {
      v54 = (__m128i *)v12[2].m128i_i64[0];
      if ( v54 != &v12[3] )
      {
        free(v54);
        v48 = (const __m128i *)v68;
      }
    }
    v46 = 1;
    v12->m128i_i32[0] = v12->m128i_i32[0] & 0x80000000 | 2;
    v49 = (const __m128i *)v48[3].m128i_i64[0];
    v12[1] = _mm_loadu_si128(v49 + 1);
    v12[2] = _mm_loadu_si128(v49 + 2);
    v12[3] = _mm_loadu_si128(v49 + 3);
    v12[4].m128i_i64[0] = v49[4].m128i_i64[0];
    v12[5] = _mm_loadu_si128(v48 + 7);
    v12[6] = _mm_loadu_si128(v48 + 8);
    v12[7] = _mm_loadu_si128(v48 + 9);
    v12[8].m128i_i64[0] = v48[10].m128i_i64[0];
    LOBYTE(v49) = (2 * ((unsigned __int64)(v32 + v31) > 1)) | v12[4].m128i_i8[8] & 0xFD;
    v12[4].m128i_i8[8] = (char)v49;
    v12[8].m128i_i64[1] = v48->m128i_i64[0];
    v50 = v48->m128i_i64[1];
    v12[4].m128i_i8[8] = (unsigned __int8)v49 & 0xFE;
    v12[9].m128i_i64[0] = v50;
  }
LABEL_40:
  sub_17A20D0((__int64)&v69);
  return v46;
}
