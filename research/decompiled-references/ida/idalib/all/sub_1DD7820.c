__int64 __fastcall sub_1DD7820(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int32 a6,
        __m128 a7,
        __m128 a8,
        int a9)
{
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r15d
  __int64 *v17; // rbp
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 *v21; // r15
  __m128 *v22; // rax
  unsigned __int64 v23; // r8
  unsigned int v24; // r10d
  int v25; // r15d
  char v26; // r12
  unsigned __int64 v27; // r11
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  _QWORD *v30; // rdi
  unsigned __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rbp
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdi
  int v37; // eax
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rdx
  int v43; // eax
  unsigned int v44; // esi
  __int64 v46; // rdi
  unsigned int v47; // eax
  __int64 *v48; // rax
  __int64 v49; // rbx
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  __int64 *v56; // rdi
  int v57; // edx
  __int64 v58; // rdx
  unsigned int v59; // esi
  __int64 v60; // rdx
  unsigned int v61; // eax
  __int64 *v62; // r12
  __int64 v63; // rax
  unsigned __int64 *v64; // rdx
  unsigned __int64 v65; // r15
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  int v68; // r10d
  int v69; // eax
  int v70; // eax
  bool v71; // zf
  unsigned __int64 v72; // rax
  __m128i v73; // xmm0
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rbp
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rax
  _QWORD *v80; // rax
  __m128i v81; // [rsp+0h] [rbp-118h] BYREF
  unsigned __int64 v82; // [rsp+18h] [rbp-100h]
  unsigned __int64 v83; // [rsp+20h] [rbp-F8h]
  __int64 v84; // [rsp+28h] [rbp-F0h]
  __int64 v85; // [rsp+30h] [rbp-E8h]
  __int64 v86; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v87; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD v88[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v89; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v90; // [rsp+70h] [rbp-A8h] BYREF
  char v91; // [rsp+C8h] [rbp-50h]
  unsigned int v92; // [rsp+D0h] [rbp-48h]
  char v93; // [rsp+D4h] [rbp-44h]

  v12 = *(_QWORD *)(a2 + 56);
  v86 = a2;
  LODWORD(v84) = a5;
  LODWORD(v85) = a9;
  v13 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v12 & 4) != 0 )
    v13 = *(_QWORD *)(v13 + 32);
  v14 = *(_QWORD *)v13;
  v15 = *(_QWORD *)(a2 + 40);
  v81.m128i_i32[0] = a6;
  v16 = *(_DWORD *)(a2 + 24);
  if ( !(v14 & 7 | (v14 >> 3) & 1) && *(_BYTE *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 && v14 )
  {
    v46 = *(_QWORD *)(v14 + 32);
    v83 = v15;
    v82 = v14;
    v47 = sub_F6C520(v46);
    v48 = sub_1DD3670(
            a1,
            *(_QWORD *)(v82 + 32),
            (const __m128i *)(v47 * ((v13 + 12 - (v13 != -12)) / v47 + (v13 != -12))),
            a3,
            v16,
            v83,
            *(double *)a7.m128_u64,
            a8);
    v17 = v48;
    if ( !v48 )
      return 0;
    if ( (*(_BYTE *)(*(_QWORD *)(*v48 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) == 0 )
    {
      if ( v81.m128i_i8[0] )
      {
        sub_168B9F0((__int64)v88, (__int64 *)(a1 + 8), *(_DWORD *)(v86 + 24), 0xF1Au, 0);
        v49 = *v17;
        if ( v91 )
        {
          sub_AE9DF0(&v90, *v17, 8u);
        }
        else if ( v93 )
        {
          v76 = sub_168B9E0(v88);
          v79 = v89;
          if ( v89 )
            v79 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v89 + 32LL))(v89);
          v87 = v79;
          v80 = sub_1587BC0(v76, &v87, v74, v75, v77, v78);
          sub_AE9DF0((unsigned __int8 **)(*v80 + 32LL * v92 + 8), v49, 8u);
        }
        sub_15F7200(v88);
        return 0;
      }
      goto LABEL_8;
    }
    v17 = (__int64 *)sub_1E509C0(a1, v48);
  }
  else
  {
    v17 = (__int64 *)sub_1DD4AE0(a1, (void **)v13, a3, v16, v15, 0, a7, a8);
  }
  if ( !v17 )
    return 0;
LABEL_8:
  v18 = *v17;
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v17 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) == 13 && ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    sub_168B9F0((__int64)v88, (__int64 *)(a1 + 8), *(_DWORD *)(v86 + 24), 0x12BAu, 0);
    v33 = 0;
    sub_15F7200(v88);
    return v33;
  }
  if ( (*(_QWORD *)v13 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v20 = sub_1DB9660((__int64)v88, *(_QWORD *)(*(_QWORD *)v13 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v20 )
    {
      if ( (*(_BYTE *)(v20 + 60) & 4) != 0 )
      {
        v21 = (__int64 *)(v20 + 80);
        if ( v20 != -80 )
        {
          v22 = (__m128 *)sub_1E38470(a1, *(unsigned int *)(v20 + 24), v20, a3, 0);
          if ( v22 )
          {
            if ( (v22[3].m128_i8[12] & 4) == 0 || v22 == (__m128 *)-80LL )
            {
              if ( (unsigned __int8)sub_1DD7690(a1, v22, v21, a3, (unsigned __int8)v85, a7, a8) )
                return 0;
            }
          }
        }
      }
    }
    v18 = *v17;
  }
  v23 = 0;
  v24 = *(_DWORD *)(v86 + 24);
  v25 = *(_DWORD *)(v86 + 64);
  v26 = *(_BYTE *)(v86 + 96) & 7;
  if ( (*(_QWORD *)(v86 + 40) & 7) == 0 )
    v23 = *(_QWORD *)(v86 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2264LL) + 80LL);
  v28 = *(_QWORD *)(v27 + 72);
  v29 = v28 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v28 & 1) == 0 )
  {
    v30 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v28 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v31 = v28 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v28 & 2) == 0 )
        goto LABEL_23;
      v50 = v27 & 0xFFFFFFFFFFFFFFFBLL;
      v81.m128i_i64[0] = v30[2295];
      if ( v81.m128i_i64[0] )
      {
        v51 = v30[294];
        v30[304] += 24LL;
        v52 = (v51 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v30[295] >= v52 + 24 && v51 )
        {
          v30[294] = v52 + 24;
          v53 = (v51 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v85 = v18;
          LODWORD(v84) = v24;
          v83 = v23;
          v82 = v27;
          v53 = sub_986170((__int64)(v30 + 294), 24, 24, 3, v23, v18);
          v18 = v85;
          v24 = v84;
          v23 = v83;
          v27 = v82;
          v52 = v53 & 0xFFFFFFFFFFFFFFFBLL;
        }
        v54 = v81.m128i_i64[0];
        *(_DWORD *)(v53 + 8) = 0;
        v50 = v52 | 4;
        *(_QWORD *)(v53 + 16) = v27;
        *(_QWORD *)v53 = v54;
      }
      v29 = v50 & 0xFFFFFFFFFFFFFFFELL;
      v28 = v29 | 1;
      *(_QWORD *)(v27 + 72) = v29 | 1;
    }
  }
  v55 = v28 & 0xFFFFFFFFFFFFFFF8LL;
  v31 = v55;
  if ( v29 && (v29 & 4) != 0 )
  {
    v31 = 0;
    if ( !v55 )
      goto LABEL_25;
    v56 = *(__int64 **)v55;
    v57 = *(_DWORD *)(*(_QWORD *)v55 + 12LL);
    if ( *(_DWORD *)(v55 + 8) != v57 )
    {
      *(_DWORD *)(v55 + 8) = v57;
      v58 = *v56;
      v84 = v18;
      LODWORD(v83) = v24;
      v82 = v23;
      v81.m128i_i64[0] = v55;
      (*(void (__fastcall **)(__int64 *, unsigned __int64))(v58 + 152))(v56, v27);
      v18 = v84;
      v24 = v83;
      v23 = v82;
      v55 = v81.m128i_i64[0];
    }
    v31 = *(_QWORD *)(v55 + 16);
  }
LABEL_23:
  if ( v31 )
    v31 += 40LL;
LABEL_25:
  v33 = sub_17D1270((__int64 *)a1, v31, v25, v24, v23, v18, a7, a8, v17, v26);
  if ( !v33 )
    return 0;
  v36 = v86;
  v37 = *(_DWORD *)(v86 + 96);
  v38 = BYTE1(v37) & 6;
  if ( (_BYTE)v38 == 4 )
  {
    v67 = sub_B74810(v86);
    sub_B747F0(v33, v67);
    goto LABEL_30;
  }
  if ( (BYTE1(v37) & 6) != 2 )
  {
    v39 = sub_B74740(v86);
    if ( v39 )
      sub_B747F0(v33, v39);
    goto LABEL_30;
  }
  *(_BYTE *)(v33 + 97) = *(_BYTE *)(v33 + 97) & 0xF9 | 2;
  v59 = *(_DWORD *)(a1 + 11304);
  if ( !v59 )
  {
    v88[0] = 0;
LABEL_85:
    v59 *= 2;
    goto LABEL_86;
  }
  v60 = *(_QWORD *)(a1 + 11288);
  v61 = (v59 - 1) & (((unsigned int)v36 >> 9) ^ ((unsigned int)v36 >> 4));
  v62 = (__int64 *)(v60 + 16LL * v61);
  v34 = *v62;
  if ( v36 == *v62 )
    goto LABEL_65;
  v68 = 1;
  v35 = 0;
  if ( v34 != -4096 )
  {
    while ( 1 )
    {
      if ( !v35 && v34 == -8192 )
        v35 = (__int64)v62;
      v61 = (v59 - 1) & (v68 + v61);
      v62 = (__int64 *)(v60 + 16LL * v61);
      v34 = *v62;
      if ( v36 == *v62 )
        break;
      if ( v34 == -4096 )
      {
        if ( v35 )
          v62 = (__int64 *)v35;
        goto LABEL_74;
      }
      ++v68;
    }
LABEL_65:
    v63 = v62[1];
    v64 = (unsigned __int64 *)(v62 + 1);
    v65 = v63 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v63 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (v63 & 4) != 0 )
      {
        v66 = *(unsigned int *)(v65 + 8);
        if ( v66 + 1 > (unsigned __int64)*(unsigned int *)(v65 + 12) )
        {
          sub_2237220(v62[1] & 0xFFFFFFFFFFFFFFF8LL, v65 + 16, v66 + 1, 8);
          v66 = *(unsigned int *)(v65 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v65 + 8 * v66) = v33;
        ++*(_DWORD *)(v65 + 8);
      }
      else
      {
        v81.m128i_i64[0] = v33;
        v81 = (__m128i)_mm_loadh_ps((const double *)v81.m128i_i64);
        v72 = operator new(0x30u);
        v73 = _mm_load_si128(&v81);
        *(_QWORD *)(v72 + 8) = 0x400000002LL;
        *(_QWORD *)v72 = v72 + 16;
        *(__m128i *)(v72 + 16) = v73;
        v62[1] = v72 | 4;
      }
      goto LABEL_30;
    }
    goto LABEL_79;
  }
LABEL_74:
  v69 = *(_DWORD *)(a1 + 11296);
  v38 = 3 * v59;
  v88[0] = v62;
  v70 = v69 + 1;
  v32 = (unsigned int)(4 * v70);
  if ( (unsigned int)v32 >= (unsigned int)v38 )
    goto LABEL_85;
  v38 = v59 - *(_DWORD *)(a1 + 11300) - v70;
  v32 = v59 >> 3;
  if ( (unsigned int)v38 <= (unsigned int)v32 )
  {
LABEL_86:
    sub_1DC2F80(a1 + 11288, v59, v38, v32, v34, v35);
    sub_1DBC970((__int64 *)(a1 + 11288), &v86, v88);
    v36 = v86;
    v62 = (__int64 *)v88[0];
    v70 = *(_DWORD *)(a1 + 11296) + 1;
  }
  v71 = *v62 == -4096;
  *(_DWORD *)(a1 + 11296) = v70;
  if ( !v71 )
    --*(_DWORD *)(a1 + 11300);
  *v62 = v36;
  v64 = (unsigned __int64 *)(v62 + 1);
  v62[1] = 0;
LABEL_79:
  *v64 = v33 & 0xFFFFFFFFFFFFFFFBLL;
LABEL_30:
  v40 = v86;
  *(_DWORD *)(v33 + 100) = *(_DWORD *)(v86 + 100);
  *(_BYTE *)(v33 + 97) = *(_BYTE *)(v40 + 97) & 1 | *(_BYTE *)(v33 + 97) & 0xFE;
  if ( sub_B799A0(v40) && !sub_B799A0(v33) )
    sub_1DC26A0(*(_QWORD *)(a1 + 11280), v86, v33, v41);
  else
    sub_1DC20B0(*(_QWORD *)(a1 + 11280), v86, v33, v41);
  sub_B8C080(v33, *(_QWORD *)(a1 + 544));
  v42 = v86;
  v43 = (unsigned __int8)(*(_WORD *)(v86 + 98) >> 4);
  if ( v43 == 255 )
  {
    v43 = sub_B74880(v86);
    v42 = v86;
  }
  v44 = a4 + v43;
  LOBYTE(v43) = 0;
  if ( (*(_BYTE *)(v42 + 97) & 0x10) == 0 )
    v43 = (*(_DWORD *)(v42 + 96) >> 13) & 0x7F;
  *(_DWORD *)(v33 + 96) = *(_DWORD *)(v33 + 96) & 0xFFF01FFF | ((v43 & 0x7F) << 13);
  if ( v44 > 0xFE )
  {
    sub_B74850(v33, v44);
    v42 = v86;
  }
  else
  {
    *(_WORD *)(v33 + 98) = *(_WORD *)(v33 + 98) & 0xF00F | (16 * (unsigned __int8)v44);
  }
  sub_1E40A90(a1, a3, v42, v33, 0, 0);
  return v33;
}
