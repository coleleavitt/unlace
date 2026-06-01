void __fastcall sub_182C660(
        __int64 *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  unsigned int v9; // eax
  unsigned __int16 v10; // ax
  __m128i *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128i *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128i *v28; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int32 v33; // r14d
  __m128i *v34; // r13
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128i *v39; // r13
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __m128i *v44; // r13
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __m128i *v49; // r13
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __m128i *v54; // r13
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __m128i *v59; // r13
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __m128i *v64; // r13
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __m128i *v69; // r13
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __m128i *v74; // r13
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __m128i *v79; // r13
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __m128i *v84; // r13
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __m128i *v89; // r13
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __m128i *v94; // r13
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __m128i *v99; // r13
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __m128i *v104; // r13
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  bool v109; // zf
  __m128i *v110; // r13
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __m128i *v115; // r13
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rax
  __int64 v121; // rax
  int v122; // [rsp+0h] [rbp-C8h] BYREF
  __int32 v123; // [rsp+4h] [rbp-C4h] BYREF
  int v124; // [rsp+8h] [rbp-C0h] BYREF
  int v125; // [rsp+Ch] [rbp-BCh] BYREF
  _BYTE v126[184]; // [rsp+10h] [rbp-B8h] BYREF

  v9 = sub_178EA20(a1[83], 0, nullptr, a4, a5, a6);
  if ( (a3[3].m128i_i8[10] & 1) != 0 )
    return;
  if ( (a3[3].m128i_i8[10] & 0x40) != 0 )
  {
    v122 = (unsigned __int8)((unsigned __int16)a3[3].m128i_i16[5] >> 7);
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x12 )
      goto LABEL_5;
LABEL_15:
    sub_168B9F0((__int64)v126, a1 + 1, a3[1].m128i_u32[2], 0x19C6u, 0);
    v16 = sub_15DD120((__int64)v126, (__int64)a3);
    LOBYTE(v124) = (a3[2].m128i_i8[3] & 2) != 0;
    v17 = sub_1588420(v16, (unsigned __int8 *)&v124);
    v125 = 3;
    sub_180E4C0(v17, &v125);
    sub_15F7200(v126);
    return;
  }
  if ( (unsigned __int8)sub_182A7E0(a1, (__int64)a3, &v122, 0, v9, a7, a8) )
    return;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x12 )
    goto LABEL_15;
LABEL_5:
  v10 = *(_WORD *)(a3[4].m128i_i64[1] + 8);
  if ( v10 == 311 )
  {
    v84 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
    sub_B176B0(v84, a1[31], a3);
    sub_B8CC60(a2, (__int64)v84, v85, v86, v87, v88);
    return;
  }
  if ( v10 > 0x137u )
    goto LABEL_30;
  if ( v10 == 133 )
  {
    v99 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
    sub_B12C60(v99, a1[31], a3);
    sub_B8CC60(a2, (__int64)v99, v100, v101, v102, v103);
    return;
  }
  if ( v10 <= 0x85u )
  {
    switch ( v10 )
    {
      case 1u:
        v89 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
        sub_B06800(v89, a1[31], a3);
        sub_B8CC60(a2, (__int64)v89, v90, v91, v92, v93);
        return;
      case 0u:
        v94 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
        sub_B06760(v94, a1[31], a3);
        sub_B8CC60(a2, (__int64)v94, v95, v96, v97, v98);
        return;
      case 0x3Au:
        v28 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
        sub_B0D350(v28, a1[31], a3);
        sub_B8CC60(a2, (__int64)v28, v29, v30, v31, v32);
        return;
    }
    if ( v10 != 117 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_30:
          if ( v10 == 350 )
          {
            v79 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
            sub_B195D0(v79, a1[31], a3);
            sub_B8CC60(a2, (__int64)v79, v80, v81, v82, v83);
            return;
          }
          if ( v10 <= 0x15Eu )
            break;
          if ( v10 == 371 )
          {
            v115 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
            sub_B19CE0(v115, a1[31], a3);
            sub_B8CC60(a2, (__int64)v115, v116, v117, v118, v119);
            return;
          }
          if ( v10 > 0x173u )
          {
            if ( v10 == 377 )
            {
              v64 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
              sub_B19DA0(v64, a1[31], a3);
              sub_B8CC60(a2, (__int64)v64, v65, v66, v67, v68);
              return;
            }
            if ( v10 == 401 )
            {
              v74 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
              sub_B1B400(v74, a1[31], a3);
              sub_B8CC60(a2, (__int64)v74, v75, v76, v77, v78);
              return;
            }
          }
          else
          {
            if ( v10 == 355 )
            {
              v44 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
              sub_B19770(v44, a1[31], a3);
              sub_B8CC60(a2, (__int64)v44, v45, v46, v47, v48);
              return;
            }
            if ( v10 == 362 )
            {
              v59 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
              sub_B198E0(v59, a1[31], a3);
              sub_B8CC60(a2, (__int64)v59, v60, v61, v62, v63);
              return;
            }
          }
        }
        if ( v10 == 320 )
          break;
        if ( v10 > 0x140u )
        {
          if ( v10 == 321 )
          {
            v54 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
            sub_B17B90(v54, a1[31], a3);
            sub_B8CC60(a2, (__int64)v54, v55, v56, v57, v58);
            return;
          }
          if ( v10 == 325 )
          {
            v69 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
            sub_B17C90(v69, a1[31], a3);
            sub_B8CC60(a2, (__int64)v69, v70, v71, v72, v73);
            return;
          }
        }
        else
        {
          if ( v10 == 312 )
          {
            v39 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
            sub_B176E0(v39, a1[31], a3);
            sub_B8CC60(a2, (__int64)v39, v40, v41, v42, v43);
            return;
          }
          if ( v10 == 313 )
          {
            v49 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
            sub_B17710(v49, a1[31], a3);
            sub_B8CC60(a2, (__int64)v49, v50, v51, v52, v53);
            return;
          }
        }
      }
      v109 = a3[3].m128i_i16[4] == 0;
      v123 = 128;
      if ( !v109 )
      {
        if ( !(unsigned __int8)sub_16211A0(a1, a3, a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, &v123, 0xFFFFFFFFLL, 0) )
          return;
        if ( (unsigned int)(v123 - 32) > 0xFFE0 )
        {
          sub_168B9F0((__int64)v126, a1 + 1, a3[1].m128i_u32[2], 0xBEEu, 0);
          v120 = sub_1588370((__int64)v126, (unsigned int *)&v123);
          v125 = 32;
          v121 = sub_1587D10(v120, &v125);
          v124 = (int)&stru_10000;
          sub_1587D10(v121, &v124);
          sub_15F7200(v126);
          return;
        }
        if ( ((unsigned int)v123 & ((unsigned int)v123 - 1LL)) != 0 )
        {
          sub_168B9F0((__int64)v126, a1 + 1, a3[1].m128i_u32[2], 0xBF1u, 0);
          sub_15F7200(v126);
          return;
        }
      }
      v110 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 48, 3u);
      sub_B17B20(v110, a1[31], a3, v123);
      sub_B8CC60(a2, (__int64)v110, v111, v112, v113, v114);
    }
  }
  else if ( v10 == 186 )
  {
    v104 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
    sub_B14210(v104, a1[31], a3);
    sub_B8CC60(a2, (__int64)v104, v105, v106, v107, v108);
  }
  else if ( v10 > 0xBAu )
  {
    if ( v10 == 298 )
    {
      v23 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
      sub_B17470(v23, a1[31], a3);
      sub_B8CC60(a2, (__int64)v23, v24, v25, v26, v27);
    }
    else
    {
      if ( v10 != 301 )
        goto LABEL_30;
      v10 = v122;
      if ( v122 == 9 )
      {
        v33 = 0;
      }
      else
      {
        if ( v122 != 10 )
          goto LABEL_30;
        v33 = 1;
      }
      v34 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 48, 3u);
      sub_B17560(v34, a1[31], a3, v33);
      sub_B8CC60(a2, (__int64)v34, v35, v36, v37, v38);
    }
  }
  else if ( v10 == 171 )
  {
    v11 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
    sub_B13D40(v11, a1[31], a3);
    sub_B8CC60(a2, (__int64)v11, v12, v13, v14, v15);
  }
  else
  {
    if ( v10 != 184 )
      goto LABEL_30;
    v18 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 40, 3u);
    sub_B141B0(v18, a1[31], a3);
    sub_B8CC60(a2, (__int64)v18, v19, v20, v21, v22);
  }
}
