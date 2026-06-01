__int64 __fastcall sub_1930830(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9)
{
  unsigned __int64 v12; // rbx
  __int16 v13; // ax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  bool v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int16 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  _WORD *v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r13
  _WORD *v44; // rax
  _BYTE *v45; // rcx
  __int64 v46; // rbp
  __int16 v47; // ax
  unsigned __int8 v48; // al
  unsigned __int64 v49; // rax
  __int64 *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rdx
  _QWORD *v54; // rsi
  unsigned __int64 v55; // r13
  __int64 v56; // r14
  __int16 v57; // ax
  unsigned __int16 v58; // ax
  unsigned int v59; // eax
  unsigned __int64 v60; // rax
  double v61; // [rsp+8h] [rbp-100h] BYREF
  int v62; // [rsp+14h] [rbp-F4h] BYREF
  __int64 v63; // [rsp+18h] [rbp-F0h] BYREF
  __m128 v64; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v65; // [rsp+30h] [rbp-D8h]
  _BYTE v66[200]; // [rsp+40h] [rbp-C8h] BYREF

  v12 = a3;
  if ( a3 )
  {
    if ( (*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v30 = *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v30 + 16) == 13 && ((*(_WORD *)(v30 + 18) >> 3) & 0x1FF) == 0x1FA )
      {
        v31 = (_WORD *)*a5;
        if ( *(_DWORD *)(a3 + 16) )
          return sub_1AA4090(a1[93], a3, a4, (_DWORD)v31, 0, 0, a9);
        else
          return sub_1B176A0(a1[95], a3, a4, (_DWORD)v31, 0, 0, 0, 0, a9);
      }
    }
  }
  v13 = *(_WORD *)a3 & 0x1FF;
  if ( v13 == 19 )
  {
    v34 = sub_192A480((__int64)a1, a2, a3, a7, a8);
    if ( v34 == 1 )
      return 1;
    v64.m128_u64[0] = (unsigned __int64)a1;
    v12 = v34 & 0xFFFFFFFFFFFFFFFELL;
    v64.m128_u64[1] = v34 & 0xFFFFFFFFFFFFFFFELL;
    v65 = a9;
    if ( (v34 & 0xFFFFFFFFFFFFFFFELL) == 0 )
      BUG();
    v13 = *(_WORD *)v12 & 0x1FF;
  }
  else
  {
    v61 = (_BYTE *)a3;
    v65 = a9;
    a7 = _mm_loadh_ps((const double *)&v61);
    v64 = a7;
  }
  v14 = *(_QWORD *)(v12 + 8);
  if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v15 + 16) == 13 )
    {
      v16 = *(unsigned __int16 *)(v15 + 18);
      LOWORD(v16) = ((unsigned __int16)v16 >> 3) & 0x1FF;
      if ( (_WORD)v16 == 505 )
      {
        if ( v13 != 47 )
        {
          v35 = sub_C00A40(v12, a2, v14, v16, (__int64)a5);
          sub_168B9F0((__int64)v66, a1 + 1, v35, 0x102Au, 0);
          LODWORD(v63) = sub_EEB7E0(v12, (__int64)(a1 + 1), *(double *)a7.m128_u64);
          HIDWORD(v63) = a9;
          sub_1587DB0((__int64)v66, &v63);
          sub_15F7200(v66);
          return 1;
        }
        goto LABEL_9;
      }
    }
  }
  if ( v13 == 47 )
  {
LABEL_9:
    v17 = *a5;
    if ( ((*(_WORD *)*a5 + 394) & 0x1FFu) > 1 || ((*(_WORD *)(v17 + 2) >> 3) & 0x3F) != 0x20 )
      return sub_190A860(
               (__int64)a1,
               *(_QWORD **)(v12 + 16),
               *(_QWORD **)(v12 + 24),
               (_QWORD *)v17,
               a9,
               a6,
               (__m128i)a7,
               a8);
    if ( !(unsigned __int8)sub_18E61D0((__int64)&v64, *a5, v14, v17, (__int64)a5, *(double *)a7.m128_u64) )
    {
      v17 = *a5;
      return sub_190A860(
               (__int64)a1,
               *(_QWORD **)(v12 + 16),
               *(_QWORD **)(v12 + 24),
               (_QWORD *)v17,
               a9,
               a6,
               (__m128i)a7,
               a8);
    }
    return 1;
  }
  v22 = sub_F65F60(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v22 )
  {
    v32 = sub_C00A40(v12, a2, v19, v20, v21);
    sub_168B9F0((__int64)v66, a1 + 1, v32, 0x1560u, 0);
    LODWORD(v63) = sub_EEB7E0(v12, (__int64)(a1 + 1), *(double *)a7.m128_u64);
    HIDWORD(v63) = a9;
    v33 = sub_1587DB0((__int64)v66, &v63);
    v62 = 3;
    sub_1587D10(v33, &v62);
    sub_15F7200(v66);
    return 1;
  }
  sub_16CDEE0((__int64)a1, v12, 4u, *(double *)a7.m128_u64);
  v27 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v27 + 16) == 13 && ((*(_WORD *)(v27 + 18) >> 3) & 0x1FFu) > 0x1F2 )
  {
    v28 = (unsigned __int16 *)sub_BFB9F0(v12);
    v23 = *v28;
    LOWORD(v23) = v23 & 0x1FF;
    if ( (_WORD)v23 == 50 )
    {
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v28 + 3) + 48LL)
                                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                                              + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 2) <= 4u )
      {
LABEL_18:
        v22 = 1;
        goto LABEL_19;
      }
    }
    else if ( (_WORD)v23 == 49 )
    {
      goto LABEL_18;
    }
    v49 = sub_1907C70((__int64)a1, (_QWORD *)v12, (__m128i)a7, a8, v23, v24, v25, v26);
    if ( v49 == 1 )
      return 1;
    v12 = v49 & 0xFFFFFFFFFFFFFFFELL;
  }
LABEL_19:
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 31 <= 1 )
  {
    v29 = *a5;
    if ( ((*(_WORD *)*a5 + 394) & 0x1FFu) <= 1 && ((*(_WORD *)(v29 + 2) >> 3) & 0x3F) == 0x20 )
    {
      if ( (unsigned __int8)sub_18E61D0((__int64)&v64, *a5, v29, v24, v25, *(double *)a7.m128_u64) )
        return 1;
      v29 = *a5;
    }
    return sub_190A860((__int64)a1, (_QWORD *)v12, (_QWORD *)v29, nullptr, a9, v26, (__m128i)a7, a8);
  }
  if ( a6 != 1 )
  {
    if ( (unsigned __int8)sub_190A790((__int64)a1, (__int64)a5, a6, v24, v25, v26, (__m128i)a7, a8) )
      return 1;
    goto LABEL_37;
  }
  v38 = *a5;
  if ( *(char *)(a1[29] + 1) < 0 )
  {
    v58 = *(_WORD *)v38 & 0x1FF;
    if ( v58 <= 0x75u )
    {
      if ( v58 != 91 || ((*(_BYTE *)(v38 + 3) >> 1) & 0x3F) != 0x27 )
        goto LABEL_45;
    }
    else if ( v58 > 0x77u || ((*(_WORD *)(v38 + 2) >> 3) & 0x3F) != 0x20 )
    {
      goto LABEL_45;
    }
    v59 = sub_C00A40(*a5, v38, v23, v24, v25);
    v61 = v66;
    sub_168B9F0((__int64)v66, a1 + 1, v59, 0x1AA9u, 0);
    LODWORD(v63) = sub_EEB7E0(v12, (__int64)(a1 + 1), *(double *)a7.m128_u64);
    HIDWORD(v63) = a9;
    sub_1587DB0((__int64)v61, &v63);
    sub_15F7200(v61);
    v38 = *a5;
  }
LABEL_45:
  v39 = *(_QWORD *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v39 + 16) == 13 && ((*(_WORD *)(v39 + 18) >> 3) & 0x1FFu) > 0x1F2 )
  {
    v60 = sub_1907C70((__int64)a1, (_QWORD *)v38, (__m128i)a7, a8, v23, v24, v25, v26);
    if ( v60 == 1 )
      return 1;
    *a5 = v60 & 0xFFFFFFFFFFFFFFFELL;
  }
  else if ( (unsigned __int8)sub_190A790((__int64)a1, (__int64)a5, 1, v24, v25, v26, (__m128i)a7, a8) )
  {
    return 1;
  }
  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0
    && ((*(_DWORD *)v12 & 0x10000) != 0 || (unsigned __int8)sub_BFE470((_DWORD **)a5, 1u)) )
  {
    v41 = *a5;
    if ( (*(_WORD *)*a5 & 0x1FF) != 0x16 )
    {
      v42 = a1[31];
      v61 = (_BYTE *)*a5;
      v43 = sub_18BE970(v12, (__int64)v61, v42, v41, v40, v36);
      v44 = (_WORD *)sub_EEE9A0(32, (_QWORD *)a1[31], 8u);
      v45 = v61;
      v46 = (__int64)v44;
      *v44 = *v44 & 0xFE00 | 0x7B;
      if ( unk_2CD7484 )
      {
        sub_EE9B50(123);
        v45 = v61;
      }
      v47 = *(_WORD *)(v46 + 1);
      *(_QWORD *)(v46 + 8) = v43;
      *(_QWORD *)(v46 + 16) = v12;
      *(_QWORD *)(v46 + 24) = v45;
      *(_WORD *)(v46 + 1) = v47 & 0xF801 | 2;
      *(_DWORD *)(v46 + 4) = a9;
      v48 = sub_B62950(v46);
      goto LABEL_54;
    }
  }
LABEL_37:
  if ( v22 )
  {
    v54 = (_QWORD *)a1[31];
    v55 = *a5;
    v56 = v54[2390];
    v46 = sub_EEE9A0(40, v54, 8u);
    *(_WORD *)v46 = *(_WORD *)v46 & 0xFE00 | 0x31;
    if ( unk_2CD7484 )
      sub_EE9B50(49);
    v57 = *(_WORD *)(v46 + 1);
    *(_QWORD *)(v46 + 8) = v56;
    *(_QWORD *)(v46 + 16) = v12;
    *(_QWORD *)(v46 + 24) = v55;
    *(_WORD *)(v46 + 1) = v57 & 0xF801 | 2;
    *(_DWORD *)(v46 + 32) = a9;
    v48 = sub_B63480(v46);
LABEL_54:
    *(_BYTE *)(v46 + 1) = (v48 << 6) | *(_BYTE *)(v46 + 1) & 0x3F;
    *(_BYTE *)(v46 + 2) = *(_BYTE *)(v46 + 2) & 0xF8 | (v48 >> 2) & 7;
    return v46;
  }
  if ( (*(_BYTE *)(a1[29] + 1) & 8) == 0
    || (v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v37 + 16) == 34) )
  {
    v50 = (__int64 *)*a5;
  }
  else
  {
    if ( *(_BYTE *)(v37 + 16) == 48 )
      return sub_1C067C0(a1, a4, a9, v12, a5, a6);
    if ( a6 != 1 )
      return sub_1C067C0(a1, a4, a9, v12, a5, a6);
    v50 = (__int64 *)*a5;
    if ( (*(_WORD *)*a5 & 0x1FF) == 0x16
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 48 )
    {
      return sub_1C067C0(a1, a4, a9, v12, a5, a6);
    }
  }
  result = sub_191AF90((__int64)a1, (_QWORD *)v12, a4, v50, a9, v36, a7, a8);
  if ( result != 1 )
  {
    v53 = *(unsigned __int16 *)(result & 0xFFFFFFFFFFFFFFFELL);
    LOWORD(v53) = v53 & 0x1FF;
    if ( (_WORD)v53 == 123 )
    {
      v61 = (_BYTE *)result;
      sub_18C1D90((__int64)a1, (_QWORD *)(result & 0xFFFFFFFFFFFFFFFELL), v53, v51, v52);
      return (__int64)v61;
    }
  }
  return result;
}
