void __fastcall sub_1673220(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        unsigned int a8)
{
  __int64 v8; // rbx
  __int64 v9; // rbp
  char v10; // r12
  __m128i *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r8d
  __int64 *v23; // r12
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __m128i *v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // r8d
  __int64 *v46; // r12
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r13
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __m128i *v60; // r12
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  _QWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // r8d
  __int64 *v69; // r12
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r13
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  _QWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __m128i *v83; // r12
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  _QWORD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  int v91; // r8d
  __int64 *v92; // r12
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // r13
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  _QWORD *v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __m128i *v106; // r12
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __m128i v111; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v112; // [rsp+60h] [rbp-68h]
  __m128i v113; // [rsp+70h] [rbp-58h] BYREF
  __int128 v114; // [rsp+80h] [rbp-48h]
  unsigned int v115; // [rsp+90h] [rbp-38h]
  __int64 v116; // [rsp+A8h] [rbp-20h]
  __int64 v117; // [rsp+B0h] [rbp-18h]

  if ( (_BYTE)a4 )
  {
    v117 = v9;
    v116 = v8;
    switch ( a3 )
    {
      case 0:
        v17 = _mm_loadu_si128((const __m128i *)&a7);
        if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 34 > 5 )
        {
          v113 = v17;
          v111.m128i_i64[0] = a1;
          LODWORD(v114) = a8;
          sub_1673010(a1, a2, 0, (__int64)sub_1672F90, (__int64)&v111, a6, v17.m128i_i64[0], v17.m128i_i64[1], a8);
        }
        else
        {
          v111 = v17;
          v10 = a8;
          v112 = a8;
          if ( (a8 & 1) == 0 )
          {
            v113 = 0;
            v114 = 0;
            v115 = v115 & 0xFF000000 | 0x101A4;
            HIBYTE(v115) &= 0xFCu;
            v11 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, a4, a8, a6);
            sub_B0DA70(v11, *(_QWORD *)(a1 + 248), &v113);
            goto LABEL_5;
          }
          v19 = (_QWORD *)sub_9C8850(a2);
          v23 = sub_1670F00(v19, v20, v20, v21, v22);
          if ( (__int64 *)sub_9C88C0(a2) != v23 )
          {
            v27 = sub_B35EA0(*(_QWORD *)(a1 + 248), v111.m128i_i64[0], v111.m128i_i64[1], *v23, 1, 0);
            v32 = sub_B8C3D0(a2, v111.m128i_i64[0], v28, v29, v30, v31);
            sub_1672BE0((__int64)v32, (__int64)v23);
            sub_B8CC60(a2, v27, v33, v34, v35, v36);
          }
          v113 = 0;
          v114 = 0;
          v115 = v115 & 0xFF000000 | 0x101A4;
          HIBYTE(v115) &= 0xFCu;
          v37 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, v24, v25, v26);
          sub_B0DA70(v37, *(_QWORD *)(a1 + 248), &v113);
          sub_B8CC60(a2, (__int64)v37, v38, v39, v40, v41);
        }
        break;
      case 1:
        v111.m128i_i64[0] = a1;
        v18 = _mm_loadu_si128((const __m128i *)&a7);
        LODWORD(v114) = a8;
        v113 = v18;
        sub_1673010(a1, a2, 1, (__int64)sub_1672F90, (__int64)&v111, a6, v18.m128i_i64[0], v18.m128i_i64[1], a8);
        break;
      case 2:
        v10 = a8;
        v111 = _mm_loadu_si128((const __m128i *)&a7);
        v112 = a8;
        if ( (a8 & 1) == 0 )
        {
          v113 = 0;
          v114 = 0;
          v115 = v115 & 0xFF000000 | 0x101A4;
          HIBYTE(v115) &= 0xFCu;
          v11 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, a4, a8, a6);
          sub_B0D930(v11, *(_QWORD *)(a1 + 248), &v113);
          goto LABEL_5;
        }
        v88 = (_QWORD *)sub_9C8850(a2);
        v92 = sub_1670F00(v88, v89, v89, v90, v91);
        if ( (__int64 *)sub_9C88C0(a2) != v92 )
        {
          v96 = sub_B35EA0(*(_QWORD *)(a1 + 248), v111.m128i_i64[0], v111.m128i_i64[1], *v92, 1, 0);
          v101 = sub_B8C3D0(a2, v111.m128i_i64[0], v97, v98, v99, v100);
          sub_1672BE0((__int64)v101, (__int64)v92);
          sub_B8CC60(a2, v96, v102, v103, v104, v105);
        }
        v113 = 0;
        v114 = 0;
        v115 = v115 & 0xFF000000 | 0x101A4;
        HIBYTE(v115) &= 0xFCu;
        v106 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, v93, v94, v95);
        sub_B0D930(v106, *(_QWORD *)(a1 + 248), &v113);
        sub_B8CC60(a2, (__int64)v106, v107, v108, v109, v110);
        break;
      case 3:
        v10 = a8;
        v111 = _mm_loadu_si128((const __m128i *)&a7);
        v112 = a8;
        if ( (a8 & 1) == 0 )
        {
          v113 = 0;
          v114 = 0;
          v115 = v115 & 0xFF000000 | 0x101A4;
          HIBYTE(v115) &= 0xFCu;
          v11 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, a4, a8, a6);
          sub_B14BB0(v11, *(_QWORD *)(a1 + 248), &v113);
          goto LABEL_5;
        }
        v65 = (_QWORD *)sub_9C8850(a2);
        v69 = sub_1670F00(v65, v66, v66, v67, v68);
        if ( (__int64 *)sub_9C88C0(a2) != v69 )
        {
          v73 = sub_B35EA0(*(_QWORD *)(a1 + 248), v111.m128i_i64[0], v111.m128i_i64[1], *v69, 1, 0);
          v78 = sub_B8C3D0(a2, v111.m128i_i64[0], v74, v75, v76, v77);
          sub_1672BE0((__int64)v78, (__int64)v69);
          sub_B8CC60(a2, v73, v79, v80, v81, v82);
        }
        v113 = 0;
        v114 = 0;
        v115 = v115 & 0xFF000000 | 0x101A4;
        HIBYTE(v115) &= 0xFCu;
        v83 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, v70, v71, v72);
        sub_B14BB0(v83, *(_QWORD *)(a1 + 248), &v113);
        sub_B8CC60(a2, (__int64)v83, v84, v85, v86, v87);
        break;
      case 4:
        v10 = a8;
        v111 = _mm_loadu_si128((const __m128i *)&a7);
        v112 = a8;
        if ( (a8 & 1) != 0 )
        {
          v42 = (_QWORD *)sub_9C8850(a2);
          v46 = sub_1670F00(v42, v43, v43, v44, v45);
          if ( (__int64 *)sub_9C88C0(a2) != v46 )
          {
            v50 = sub_B35EA0(*(_QWORD *)(a1 + 248), v111.m128i_i64[0], v111.m128i_i64[1], *v46, 1, 0);
            v55 = sub_B8C3D0(a2, v111.m128i_i64[0], v51, v52, v53, v54);
            sub_1672BE0((__int64)v55, (__int64)v46);
            sub_B8CC60(a2, v50, v56, v57, v58, v59);
          }
          v113 = 0;
          v114 = 0;
          v115 = v115 & 0xFF000000 | 0x101A4;
          HIBYTE(v115) &= 0xFCu;
          v60 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, v47, v48, v49);
          sub_B14B80(v60, *(_QWORD *)(a1 + 248), &v113);
          sub_B8CC60(a2, (__int64)v60, v61, v62, v63, v64);
        }
        else
        {
          v113 = 0;
          v114 = 0;
          v115 = v115 & 0xFF000000 | 0x101A4;
          HIBYTE(v115) &= 0xFCu;
          v11 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, a4, a8, a6);
          sub_B14B80(v11, *(_QWORD *)(a1 + 248), &v113);
LABEL_5:
          v12 = sub_B35EA0(*(_QWORD *)(a1 + 248), v111.m128i_i64[0], v111.m128i_i64[1], (__int64)v11, (v10 & 2) != 0, 0);
          sub_B8CC60(a2, v12, v13, v14, v15, v16);
        }
        break;
      default:
        return;
    }
  }
}
