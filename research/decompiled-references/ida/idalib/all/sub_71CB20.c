__int64 __fastcall sub_71CB20(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        __m128i a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v11; // rax
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  double v16; // xmm4_8
  double v17; // xmm5_8
  unsigned int v18; // r14d
  unsigned __int32 v20; // r14d
  const __m128i *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  double v29; // xmm4_8
  double v30; // xmm5_8
  __int64 v31; // rdx
  __int64 v32; // rax
  int *v33; // r15
  unsigned __int64 v34; // rdx
  __int64 *v35; // rax
  __int64 v36; // rax
  _BOOL8 v37; // rcx
  char v38; // al
  __int64 v39; // rdx
  bool v40; // r12
  __int64 v41; // rdx
  int *v42; // rax
  int *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 (__fastcall *v46)(__int64); // rax
  __int64 v47; // rsi
  double v48; // xmm4_8
  double v49; // xmm5_8
  unsigned __int64 v50; // rbx
  double v51; // xmm4_8
  double v52; // xmm5_8
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  int *v57; // r15
  __int64 v58; // rax
  double v59; // xmm4_8
  double v60; // xmm5_8
  __int64 v61; // r9
  __int64 v62; // r15
  __int64 *v63; // r8
  __int64 v64; // rax
  __int64 *v65; // rax
  char v66; // al
  __m128 v67; // [rsp+20h] [rbp-88h]
  __int64 v68; // [rsp+20h] [rbp-88h]
  __int64 v69; // [rsp+20h] [rbp-88h]
  __int64 v70; // [rsp+30h] [rbp-78h]
  __int64 *v71; // [rsp+30h] [rbp-78h]
  __int64 v72; // [rsp+30h] [rbp-78h]
  __int64 v73; // [rsp+38h] [rbp-70h]
  char v74[8]; // [rsp+48h] [rbp-60h] BYREF
  __m128i v75; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v76; // [rsp+60h] [rbp-48h]
  unsigned __int64 v77; // [rsp+68h] [rbp-40h]

  v11 = *(_QWORD *)(a2 + 56);
  v77 = __readfsqword(0x28u);
  if ( (v11 & 4) != 0 )
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = (const __m128i *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v20 >= v21[1].m128i_i32[0] )
        break;
      v22 = v20++;
      sub_7154D0(a1, *(_QWORD *)(v21[1].m128i_i64[1] + 8 * v22), a3, a4, *(double *)a5.m128i_i64, a6, a7, a8, a9, a10);
      v11 = *(_QWORD *)(a2 + 56);
      if ( (v11 & 4) == 0 )
        goto LABEL_2;
    }
    a5 = _mm_loadu_si128(v21);
    v67 = (__m128)a5;
  }
  else
  {
LABEL_2:
    a4 = 0;
    v67 = 0;
  }
  v13 = v67.m128_u64[0];
  if ( !(unsigned __int8)sub_718340(
                           a1,
                           v67.m128_i64[0],
                           v67.m128_i64[1],
                           a3,
                           a4,
                           *(double *)a5.m128i_i64,
                           a6,
                           a7,
                           a8,
                           a9,
                           a10) )
    return 0;
  v23 = *(unsigned int *)(a2 + 24);
  v24 = *(__int64 **)(a2 + 160);
  v75.m128i_i64[0] = *(_QWORD *)(a2 + 40);
  v75.m128i_i32[2] = v23;
  v76 = v24;
  v25 = _mm_load_si128(&v75);
  v18 = sub_719170(
          a1,
          *(double *)v25.m128i_i64,
          a4,
          *(double *)a5.m128i_i64,
          a6,
          v16,
          v17,
          a9,
          a10,
          v67.m128_i64[0],
          v23,
          v75.m128i_i64[0],
          v14,
          v15,
          v25.m128i_i64[0],
          v25.m128i_i32[2],
          v24);
  if ( !(_BYTE)v18 )
    return 0;
  v26 = sub_B77B20(a2);
  if ( v26 )
  {
    if ( (*(_BYTE *)(v26 + 16) & 6) != 0 )
    {
      v31 = *(_QWORD *)(v26 + 32);
      if ( v31 )
      {
        v32 = *(unsigned int *)(v31 + 8);
        if ( (_DWORD)v32 )
        {
          v33 = (int *)(v31 + 16);
          v68 = v31 + 16 + 32 * v32;
          do
          {
            v13 = (__int64)v33;
            if ( !(unsigned __int8)sub_718840(
                                     a1,
                                     v33,
                                     v31,
                                     v27,
                                     v28,
                                     *(double *)v25.m128i_i64,
                                     a4,
                                     *(double *)a5.m128i_i64,
                                     a6,
                                     v29,
                                     v30,
                                     a9,
                                     a10) )
              return 0;
            v33 += 8;
          }
          while ( v33 != (int *)v68 );
        }
      }
    }
  }
  else
  {
    v54 = sub_B77C50(a2);
    if ( v54 )
    {
      v55 = *(_QWORD *)(v54 + 8);
      if ( v55 )
      {
        v56 = *(unsigned int *)(v55 + 8);
        if ( (_DWORD)v56 )
        {
          v57 = (int *)(v55 + 16);
          v69 = v55 + 16 + 32 * v56;
          do
          {
            v13 = (__int64)v57;
            if ( !(unsigned __int8)sub_718840(
                                     a1,
                                     v57,
                                     v55,
                                     v27,
                                     v28,
                                     *(double *)v25.m128i_i64,
                                     a4,
                                     *(double *)a5.m128i_i64,
                                     a6,
                                     v29,
                                     v30,
                                     a9,
                                     a10) )
              return 0;
            v57 += 8;
          }
          while ( v57 != (int *)v69 );
        }
      }
    }
  }
  v34 = *(_QWORD *)(a2 + 56);
  v35 = (__int64 *)(v34 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v34 & 4) != 0 )
  {
    if ( !v35[4] )
      goto LABEL_62;
    v35 = (__int64 *)v35[4];
  }
  else if ( v34 <= 7 )
  {
    goto LABEL_24;
  }
  v13 = *v35;
  if ( !(unsigned __int8)sub_717AC0(
                           a1,
                           *v35,
                           (__int64)(v35 + 1),
                           v27,
                           v28,
                           *(double *)v25.m128i_i64,
                           a4,
                           *(double *)a5.m128i_i64,
                           a6,
                           v29,
                           v30,
                           a9,
                           a10) )
    return 0;
  v36 = *(_QWORD *)(a2 + 56);
  if ( (v36 & 4) == 0 )
    goto LABEL_24;
  v35 = (__int64 *)(v36 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_62:
  v13 = v35[5];
  if ( v13
    && !(unsigned __int8)sub_70DBE0(
                           a1,
                           v13,
                           0,
                           *(double *)v25.m128i_i64,
                           a4,
                           *(double *)a5.m128i_i64,
                           a6,
                           v29,
                           v30,
                           a9,
                           a10) )
  {
    return 0;
  }
LABEL_24:
  v37 = a2 != 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x26 )
  {
    if ( a2 )
    {
      v70 = sub_B98F20(a2) + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 84) >> 13);
      v58 = sub_B98F20(a2);
      v61 = v70;
      if ( v70 != v58 )
      {
        v62 = v58;
        do
        {
          v63 = *(__int64 **)v62;
          if ( (*(_BYTE *)(*(_QWORD *)v62 + 28LL) & 4) != 0 )
          {
            v64 = *v63;
            if ( !*v63 )
              goto LABEL_86;
            if ( (v64 & 6) != 0 )
              goto LABEL_86;
            v65 = (__int64 *)(v64 & 0xFFFFFFFFFFFFFFF8LL);
            if ( !v65 )
              goto LABEL_86;
            v73 = v61;
            v71 = *(__int64 **)v62;
            v13 = *v65;
            if ( !(unsigned __int8)sub_717AC0(
                                     a1,
                                     *v65,
                                     (__int64)(v65 + 1),
                                     v37,
                                     (__int64)v63,
                                     *(double *)v25.m128i_i64,
                                     a4,
                                     *(double *)a5.m128i_i64,
                                     a6,
                                     v59,
                                     v60,
                                     a9,
                                     a10) )
              return 0;
            v63 = v71;
            v61 = v73;
            if ( (*((_BYTE *)v71 + 28) & 4) != 0 )
            {
LABEL_86:
              v13 = v63[1];
              v72 = v61;
              v66 = sub_70DBE0(a1, v13, 0, *(double *)v25.m128i_i64, a4, *(double *)a5.m128i_i64, a6, v59, v60, a9, a10);
              v61 = v72;
              if ( !v66 )
                return 0;
            }
          }
          v62 += 8;
        }
        while ( v61 != v62 );
      }
    }
  }
  v38 = *(_BYTE *)(a2 + 83);
  v39 = v38 & 2;
  if ( (*(_BYTE *)(a2 + 82) & 0x40) != 0 )
  {
    if ( (_BYTE)v39 )
      goto LABEL_28;
  }
  else if ( (_BYTE)v39
         || ((v38 & 8) != 0 || (*(_BYTE *)(a2 + 128) & 1) == 0 && !*(_QWORD *)(a2 + 128))
         && (v38 & 0x40) == 0
         && (*(_BYTE *)(a2 + 84) & 0x60) == 0
         && (!(unsigned __int8)sub_B8CF80(a2, v13, v39, v37) || (*(_BYTE *)(a2 + 83) & 2) != 0) )
  {
LABEL_28:
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 > 3 )
      return v18;
    v40 = 0;
    if ( !a2 )
      return v18;
    goto LABEL_30;
  }
  v40 = (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3 && a2 != 0;
  if ( !v40 )
    goto LABEL_40;
LABEL_30:
  v41 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  v42 = (int *)(v41 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v41 & 4) != 0 )
    v42 = *(int **)v42;
  if ( v42 )
  {
    v43 = v42 - 16;
    if ( v42 != &dword_40 )
    {
      v44 = *((_QWORD *)v42 + 8);
      if ( v44 )
      {
        if ( (*(_BYTE *)(v44 + 10) & 0x20) != 0 )
        {
          v45 = sub_B96F60(v43);
          if ( v45 )
          {
            if ( v45 != a2 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
            }
          }
        }
      }
    }
  }
  if ( v40 )
  {
LABEL_40:
    v46 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
    if ( v46 == sub_6EF210 )
      v47 = sub_B7F750(a2, v74);
    else
      v47 = v46(a2);
    if ( (unsigned __int8)sub_70DBE0(
                            a1,
                            v47,
                            0,
                            *(double *)v25.m128i_i64,
                            a4,
                            *(double *)a5.m128i_i64,
                            a6,
                            v48,
                            v49,
                            a9,
                            a10) )
    {
      v50 = sub_B8E970(a2 + 72);
      if ( !v50 )
        return v18;
      while ( (*(_BYTE *)(v50 + 28) & 0x7Fu) - 53 > 1
           || (unsigned __int8)sub_709840(
                                 a1,
                                 v50,
                                 *(double *)v25.m128i_i64,
                                 a4,
                                 *(double *)a5.m128i_i64,
                                 a6,
                                 v51,
                                 v52,
                                 a9,
                                 a10) )
      {
        v53 = *(_QWORD *)(v50 + 8);
        v50 = v53 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v53 <= 7 )
          return v18;
      }
    }
    return 0;
  }
  return v18;
}
