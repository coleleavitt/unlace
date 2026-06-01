__int64 __fastcall sub_1946010(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v10; // rbx
  __int128 v11; // rax
  __m128 v12; // kr00_16
  __int64 result; // rax
  int v14; // eax
  __int64 v15; // rdx
  _DWORD *v16; // rdx
  int v17; // eax
  __int64 v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rbx
  _DWORD *v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rbx
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __m128 v36; // kr10_16
  __m128 v37; // kr20_16
  __int64 v38; // rax
  __int64 v39; // rdx
  __m128 v40; // kr30_16
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  __m128 v44; // kr40_16
  __m128 v45; // kr50_16
  __m128 v46; // xmm0
  __int64 v47; // rax
  void *v48; // rdi
  __m128 v49; // kr60_16
  __m128 v50; // kr70_16
  __m128 v51; // kr80_16
  __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int64 v54; // rsi
  __m128 v55; // kr90_16
  __m128 v56; // krA0_16
  __int64 v57; // rdx
  unsigned int v58; // ecx
  __m128 v59; // krB0_16
  __m128 v60; // krC0_16
  __m128 v61; // krD0_16
  __m128 v62; // krE0_16
  __m128 v63; // krF0_16
  __m128 v64; // kr100_16
  __m128 v65; // kr110_16
  __m128 v66; // kr120_16
  __m128 v67; // kr130_16
  __m128 v68; // kr140_16
  __m128 v69; // kr150_16
  __m128 v70; // kr160_16
  __m128 v71; // kr170_16
  __m128 v72; // kr180_16
  __m128 v73; // kr190_16
  __m128 v74; // kr1A0_16
  __m128 v75; // kr1B0_16
  __m128 v76; // kr1C0_16
  __m128 v77; // kr1D0_16
  __int64 v78; // rax
  unsigned __int64 v79; // r12
  _DWORD *v80; // rdx
  __m128 v81; // kr1E0_16
  __m128 v82; // kr1F0_16
  __m128 v83; // kr200_16
  __m128 v84; // kr210_16
  __m128 v85; // kr220_16
  __m128 v86; // kr230_16
  __m128 v87; // [rsp+0h] [rbp-A8h] BYREF
  __m128 v88; // [rsp+10h] [rbp-98h]
  __m128 v89; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v90[4]; // [rsp+30h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v92; // [rsp+60h] [rbp-48h] BYREF
  __int128 v93; // [rsp+70h] [rbp-38h]

  *(_QWORD *)&v11 = (a3 >> 3) & 1;
  v10 = a3;
  *((_QWORD *)&v11 + 1) = a3 & 7;
  v87.m128_u64[0] = a4;
  if ( v11 == 0 )
  {
    switch ( *(_BYTE *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) )
    {
      case 0:
        v88.m128_u64[0] = v10;
        *(__m128 *)ptr = _mm_loadh_ps((const double *)v87.m128_u64);
        v38 = sub_17430D0((__int64)ptr);
        return sub_1946010(a1, a2, v38, v39);
      case 1:
        v88.m128_u64[0] = v10;
        v37 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_19483A0(a1, a2, v37.m128_u64[0], v37.m128_u64[1], a5, a6, v37.m128_u64[0], v37.m128_u64[1], v10);
      case 2:
        v88.m128_u64[0] = v10;
        v36 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1948440(a1, a2, v36.m128_u64[0], v36.m128_u64[1], a5, a6, v36.m128_u64[0], v36.m128_u64[1], v10);
      case 3:
        v88.m128_u64[0] = v10;
        *(__m128 *)ptr = _mm_loadh_ps((const double *)v87.m128_u64);
        v33 = sub_BEB530((__int64)ptr);
        v35 = sub_1946010(a1, a2, v33, v34);
        v10 = v35 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v10 = sub_A72990(*(_QWORD *)(*a1 + 248), v35);
          sub_1EA6140(a2, v10, 16, 8);
        }
        goto LABEL_11;
      case 4:
        v88.m128_u64[0] = v10;
        v61 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_19486B0(a1, a2, v61.m128_u64[0], v61.m128_u64[1], a5, a6, v61.m128_u64[0], v61.m128_u64[1], v10);
      case 5:
        v88.m128_u64[0] = v10;
        v73 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1948850(a1, a2, v73.m128_u64[0], v73.m128_u64[1], a5, a6, v73.m128_u64[0], v73.m128_u64[1], v10);
      case 6:
        v88.m128_u64[0] = v10;
        v72 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1948930(a1, a2, v72.m128_u64[0], v72.m128_u64[1], a5, a6, v72.m128_u64[0], v72.m128_u64[1], v10);
      case 7:
        v88.m128_u64[0] = v10;
        v75 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1948AA0(a1, a2, v75.m128_u64[0], v75.m128_u64[1], a5, a6, v75.m128_u64[0], v75.m128_u64[1], v10);
      case 8:
        v88.m128_u64[0] = v10;
        v74 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1948B60(a1, a2, v74.m128_u64[0], v74.m128_u64[1], a5, a6, v74.m128_u64[0], v74.m128_u64[1], v10);
      case 9:
      case 0x3B:
        goto LABEL_3;
      case 0xA:
        v78 = sub_18FEE30(
                a1,
                *(_BYTE *)(v10 + 32) & 1,
                (*(_DWORD *)(v10 + 32) >> 1) & 0xFFFFFF,
                *(unsigned int *)v87.m128_u64[0],
                a5);
        v79 = v78;
        v10 = v78 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v78 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          sub_1EA6140(a2, v78, 4, 4);
          v10 = v79;
          *v80 = *(_DWORD *)v87.m128_u64[0];
        }
        goto LABEL_11;
      case 0xB:
        v88.m128_u64[0] = v10;
        v77 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1948EC0(a1, a2, v77.m128_u64[0], v77.m128_u64[1], a5, a6, v77.m128_u64[0], v77.m128_u64[1], v10);
      case 0xC:
        v88.m128_u64[0] = v10;
        v76 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1948F70(a1, a2, v76.m128_u64[0], v76.m128_u64[1], a5, a6, v76.m128_u64[0], v76.m128_u64[1], v10);
      case 0xD:
        v14 = (*(_WORD *)(v10 + 18) >> 3) & 0x1FF;
        if ( (unsigned int)(v14 - 443) <= 4 || (unsigned int)(v14 - 451) <= 0x24 || v14 == 438 || (v15 = 8, v14 == 449) )
          v15 = 12;
        sub_1EA6140(a2, v10, v15, 4);
        v17 = *(_DWORD *)v87.m128_u64[0];
        *v16 = *(_DWORD *)v87.m128_u64[0];
        v16[1] = v17;
        if ( (((*(_WORD *)(v10 + 18) >> 3) + 74) & 0x1FFu) <= 0x31
          && ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(v10 + 18) >> 3) + 74)) & 1) != 0 )
        {
          v16[2] = *(_DWORD *)(v87.m128_u64[0] + 8);
        }
        goto LABEL_11;
      case 0xE:
      case 0x2D:
      case 0x32:
        goto LABEL_15;
      case 0xF:
        v88.m128_u64[0] = v10;
        v87 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1945370(a1, a2, v87.m128_i64[0], (_DWORD *)v87.m128_u64[1], a7, a8);
      case 0x10:
        v88.m128_u64[0] = v10;
        v86 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194C300(a1, a2, v86.m128_u64[0], v86.m128_u64[1], a5, a6, v86.m128_u64[0], v86.m128_u64[1], v10);
      case 0x11:
        v88.m128_u64[0] = v10;
        v85 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_19470F0(a1, a2, v85.m128_u64[0], v85.m128_u64[1], a5, a6, v85.m128_u64[0], v85.m128_u64[1], v10);
      case 0x12:
        v88.m128_u64[0] = v10;
        v84 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194D680(a1, a2, v84.m128_u64[0], v84.m128_u64[1], a5, a6, v84.m128_u64[0], v84.m128_u64[1], v10);
      case 0x13:
        v88.m128_u64[0] = v10;
        v87 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1945420(a1, a2, v87.m128_i64[0], (unsigned int *)v87.m128_u64[1], a7, a8);
      case 0x14:
        v88.m128_u64[0] = v10;
        v83 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194C7B0(a1, a2, v83.m128_u64[0], v83.m128_u64[1], 0, a6, v83.m128_u64[0], v83.m128_u64[1], v10);
      case 0x15:
        v88.m128_u64[0] = v10;
        v55 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194D7C0(a1, a2, v55.m128_u64[0], v55.m128_u64[1], a5, a6, v55.m128_u64[0], v55.m128_u64[1], v10);
      case 0x16:
        v88.m128_u64[0] = v10;
        v52 = 0;
        v53 = *(_QWORD *)(v87.m128_u64[0] + 8);
        v88 = _mm_loadh_ps((const double *)v87.m128_u64);
        if ( !v53 )
          goto LABEL_40;
        v54 = *(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v54 )
        {
          v10 = 0;
          v53 = sub_1949260(a1, v54, v53, 0, 0);
          if ( !v53 )
            goto LABEL_11;
        }
        else
        {
          v53 = 0;
        }
LABEL_40:
        *(_OWORD *)ptr = 0;
        v92 = 0;
        v93 = 0;
        sub_15AB8B0((__int64)ptr, v53, v52);
        v10 = sub_194B570(a1, a2, v88.m128_u64[0], v88.m128_u64[1], ptr);
        if ( HIDWORD(v92) )
        {
LABEL_41:
          v48 = (void *)v92;
LABEL_33:
          free(v48);
        }
LABEL_11:
        result = v10;
        break;
      case 0x17:
        v88.m128_u64[0] = v10;
        v51 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194D8D0(a1, a2, v51.m128_u64[0], v51.m128_u64[1], a5, a6, v51.m128_u64[0], v51.m128_u64[1], v10);
      case 0x18:
        v88.m128_u64[0] = v10;
        v50 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194D9E0(a1, a2, v50.m128_u64[0], v50.m128_u64[1], a5, a6, v50.m128_u64[0], v50.m128_u64[1], v10);
      case 0x19:
        v88.m128_u64[0] = v10;
        v49 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194DF00(a1, a2, v49.m128_u64[0], v49.m128_u64[1], a5, a6, v49.m128_u64[0], v49.m128_u64[1], v10);
      case 0x1A:
        v88.m128_u64[0] = v10;
        ptr[1] = (void *)0x400000000LL;
        v46 = _mm_loadh_ps((const double *)v87.m128_u64);
        v90[1] = &v89;
        v87 = v46;
        v89 = v46;
        ptr[0] = &v92;
        v90[0] = a1;
        v90[2] = ptr;
        v47 = sub_1945670(
                a1,
                a2,
                v46.m128_i64[0],
                (_DWORD *)v46.m128_u64[1],
                0,
                0,
                *(double *)v46.m128_u64,
                a8,
                (__int64)a1,
                (__int64 *)&v89,
                (__int64)ptr);
        v48 = ptr[0];
        v10 = v47;
        if ( ptr[0] != &v92 )
          goto LABEL_33;
        goto LABEL_11;
      case 0x1B:
        v88.m128_u64[0] = v10;
        v44 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194E050(a1, a2, v44.m128_u64[0], v44.m128_u64[1], a5, a6, v44.m128_u64[0], v44.m128_u64[1], v10);
      case 0x1C:
        goto LABEL_11;
      case 0x1D:
        v18 = v10;
        v10 = 0;
        v19 = sub_F61460(v18, a2, *((__int64 *)&v11 + 1), a4, a5, a6);
        v20 = sub_18CBA40((__int64)a1, (__int64)v19);
        if ( !v20 )
          goto LABEL_11;
        v24 = *(_QWORD *)(v20 + 48);
        if ( v24 )
          v10 = v24 & 0xFFFFFFFFFFFFFFF0LL;
        else
          v10 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v20, *a1, v21, v22, v23);
        goto LABEL_15;
      case 0x1E:
        v88.m128_u64[0] = v10;
        v45 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194E140(a1, a2, v45.m128_u64[0], v45.m128_u64[1], a5, a6, v45.m128_u64[0], v45.m128_u64[1], v10);
      case 0x1F:
        v88.m128_u64[0] = v10;
        v82 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1947650(a1, a2, v82.m128_u64[0], v82.m128_u64[1], a5, a6, v82.m128_u64[0], v82.m128_u64[1], v10);
      case 0x20:
        v88.m128_u64[0] = v10;
        v81 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_19476F0(a1, a2, v81.m128_u64[0], v81.m128_u64[1], a5, a6, v81.m128_u64[0], v81.m128_u64[1], v10);
      case 0x21:
        v88.m128_u64[0] = v10;
        v62 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194E1F0(a1, a2, v62.m128_u64[0], v62.m128_u64[1], a5, a6, v62.m128_u64[0], v62.m128_u64[1], v10);
      case 0x22:
        v88.m128_u64[0] = v10;
        v64 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194E3C0(a1, a2, v64.m128_u64[0], v64.m128_u64[1], a5, a6, v64.m128_u64[0], v64.m128_u64[1], v10);
      case 0x23:
        v88.m128_u64[0] = v10;
        v63 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194E470(a1, a2, v63.m128_u64[0], v63.m128_u64[1], a5, a6, v63.m128_u64[0], v63.m128_u64[1], v10);
      case 0x24:
        sub_1EA6360(a2, v10, v87.m128_u64[0]);
        return v10;
      case 0x25:
        v88.m128_u64[0] = v10;
        v87 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_18CCE30((__int64)a1, a2, v87.m128_i64[0], v87.m128_i64[1]);
      case 0x26:
        v88.m128_u64[0] = v10;
        v66 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194EB40(a1, a2, v66.m128_u64[0], v66.m128_u64[1], a5, a6, v66.m128_u64[0], v66.m128_u64[1], v10);
      case 0x27:
        v88.m128_u64[0] = v10;
        v65 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1946D00(a1, a2, v65.m128_u64[0], v65.m128_u64[1], a5, a6, v65.m128_u64[0], v65.m128_u64[1], v10);
      case 0x28:
        v88.m128_u64[0] = v10;
        v71 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194EC60(a1, a2, v71.m128_u64[0], v71.m128_u64[1], a5, a6, v71.m128_u64[0], v71.m128_u64[1], v10);
      case 0x29:
        v88.m128_u64[0] = v10;
        v70 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194ED10(a1, a2, v70.m128_u64[0], v70.m128_u64[1], a5, a6, v70.m128_u64[0], v70.m128_u64[1], v10);
      case 0x2A:
        v88.m128_u64[0] = v10;
        v69 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194EDF0(a1, a2, v69.m128_u64[0], v69.m128_u64[1], a5, a6, v69.m128_u64[0], v69.m128_u64[1], v10);
      case 0x2B:
      case 0x2C:
        v88.m128_u64[0] = v10;
        v87 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194EF10(a1, a2, v87.m128_u64[0], v87.m128_u64[1]);
      case 0x2E:
        v88.m128_u64[0] = v10;
        v67 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1947890(a1, a2, v67.m128_u64[0], v67.m128_u64[1], a5, a6, v67.m128_u64[0], v67.m128_u64[1], v10);
      case 0x2F:
      case 0x30:
        v26 = sub_F60F10(v10, a2, *((__int64 *)&v11 + 1), a4, a5, a6);
        v27 = sub_18CBA40((__int64)a1, (__int64)v26);
        if ( v27 )
          goto LABEL_17;
        goto LABEL_20;
      case 0x31:
        v88.m128_u64[0] = v10;
        v57 = *(_QWORD *)(v10 + 32);
        v58 = *(_DWORD *)v87.m128_u64[0];
        v10 = 0;
        v88 = _mm_loadh_ps((const double *)v87.m128_u64);
        *(_OWORD *)ptr = 0;
        v92 = 0;
        v93 = 0;
        v90[0] = sub_19014F0(a1, (__int64)ptr, v57, v58, 0, 0, 0);
        if ( !sub_F22B30(v90) )
          v10 = sub_194AE10(a1, a2, v88.m128_u64[0], v88.m128_u64[1], v90[0]);
        if ( HIDWORD(v92) )
          goto LABEL_41;
        goto LABEL_11;
      case 0x33:
        v88.m128_u64[0] = v10;
        v87 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1945510(a1, a2, v87.m128_i64[0], (_DWORD *)v87.m128_u64[1], a7, a8);
      case 0x34:
        v88.m128_u64[0] = v10;
        v60 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1947DA0(a1, a2, v60.m128_u64[0], v60.m128_u64[1], a5, a6, v60.m128_u64[0], v60.m128_u64[1], v10);
      case 0x35:
        v27 = sub_18CBA40((__int64)a1, *(_QWORD *)(v10 + 32));
        if ( v27 )
        {
LABEL_17:
          v31 = *(_QWORD *)(v27 + 48);
          if ( v31 )
          {
            v10 = v31 & 0xFFFFFFFFFFFFFFF0LL;
            v32 = v10;
          }
          else
          {
            v10 = sub_A7AA70(*(_QWORD *)(*a1 + 248), v27, *a1, v28, v29, v30);
            v32 = v10 & 0xFFFFFFFFFFFFFFF0LL;
          }
          if ( v32 )
          {
LABEL_15:
            sub_1EA6140(a2, v10, 4, 4);
            *v25 = *(_DWORD *)v87.m128_u64[0];
          }
          else
          {
LABEL_20:
            v10 = 0;
          }
        }
        else
        {
          v10 = 0;
        }
        goto LABEL_11;
      case 0x36:
        v88.m128_u64[0] = v10;
        v59 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1947E50(a1, a2, v59.m128_u64[0], v59.m128_u64[1], a5, a6, v59.m128_u64[0], v59.m128_u64[1], v10);
      case 0x37:
        v41 = sub_18CBA40((__int64)a1, *(_QWORD *)(v10 + 24));
        if ( !v41 )
          goto LABEL_20;
        v10 = sub_18FEF10(
                a1,
                *(_DWORD *)v87.m128_u64[0],
                v41,
                v87.m128_i64[0],
                v42,
                v43,
                (__m128i)a7,
                *(double *)a8.m128_u64);
        if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          goto LABEL_15;
        v10 = 0;
        goto LABEL_11;
      case 0x38:
        v88.m128_u64[0] = v10;
        v56 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_1947A60(a1, a2, v56.m128_u64[0], v56.m128_u64[1], a5, a6, v56.m128_u64[0], v56.m128_u64[1], v10);
      case 0x39:
        v88.m128_u64[0] = v10;
        v68 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194EFE0(a1, a2, v68.m128_u64[0], v68.m128_u64[1], a5, a6, v68.m128_u64[0], v68.m128_u64[1], v10);
      case 0x3A:
        v88.m128_u64[0] = v10;
        v40 = _mm_loadh_ps((const double *)v87.m128_u64);
        return sub_194F0A0(a1, a2, v40.m128_u64[0], v40.m128_u64[1], a5, a6, v40.m128_u64[0], v40.m128_u64[1], v10);
    }
  }
  else
  {
LABEL_3:
    v88.m128_u64[0] = v10;
    v12 = _mm_loadh_ps((const double *)v87.m128_u64);
    return sub_1948250(a1, a2, v12.m128_u64[0], v12.m128_u64[1], a5, a6, v12.m128_u64[0], v12.m128_u64[1], v10);
  }
  return result;
}
