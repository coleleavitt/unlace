void __fastcall sub_663E80(__int64 a1, __int64 *a2, unsigned __int64 *a3, char a4, int a5, __int64 a6, _BYTE *a7)
{
  __int16 v9; // bp
  int v11; // r11d
  __int16 v12; // r15
  char v13; // al
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r11
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // r11
  __int64 v22; // rsi
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  __int64 v25; // r11
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r11
  unsigned __int64 v29; // rdx
  __int64 v30; // rsi
  _DWORD *v31; // r8
  __int64 v32; // r8
  unsigned __int64 v33; // rdx
  __int64 v34; // r11
  __int64 v35; // rsi
  __int64 v36; // r8
  unsigned __int64 v37; // rdx
  __int64 v38; // r11
  __int64 v39; // rsi
  __int64 v40; // r8
  unsigned __int64 v41; // rdx
  __int64 v42; // r11
  __int64 v43; // rsi
  __int64 v44; // rbp
  unsigned __int64 v45; // r12
  __int64 v46; // r13
  __int64 v47; // rsi
  __int64 v48; // r8
  __int64 v49; // r10
  unsigned __int64 v50; // rdx
  __int64 v51; // rsi
  __m128i si128; // xmm0
  __m128i *v53; // r8
  __m128i v54; // xmm0
  __int64 v55; // r8
  __int64 v56; // r10
  unsigned __int64 v57; // rdx
  __int64 v58; // rsi
  _QWORD *v59; // r8
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // [rsp+8h] [rbp-60h]
  __int64 v71; // [rsp+8h] [rbp-60h]
  unsigned __int64 v72; // [rsp+8h] [rbp-60h]
  unsigned __int64 v73; // [rsp+8h] [rbp-60h]
  unsigned __int64 v74; // [rsp+8h] [rbp-60h]
  unsigned __int64 v75; // [rsp+8h] [rbp-60h]
  unsigned __int64 v76; // [rsp+8h] [rbp-60h]
  unsigned __int64 v77; // [rsp+8h] [rbp-60h]
  unsigned __int64 v78; // [rsp+8h] [rbp-60h]
  unsigned __int64 v79; // [rsp+8h] [rbp-60h]
  unsigned __int64 v80; // [rsp+8h] [rbp-60h]
  __int64 v81; // [rsp+10h] [rbp-58h]
  __int64 v82; // [rsp+10h] [rbp-58h]
  __int64 v83; // [rsp+10h] [rbp-58h]
  __int64 v84; // [rsp+10h] [rbp-58h]
  __int64 v85; // [rsp+10h] [rbp-58h]
  __int64 v86; // [rsp+10h] [rbp-58h]
  __int64 v87; // [rsp+10h] [rbp-58h]
  __int64 v88; // [rsp+10h] [rbp-58h]
  __int64 v89; // [rsp+10h] [rbp-58h]
  __int64 v90; // [rsp+18h] [rbp-50h]
  __int64 v91; // [rsp+18h] [rbp-50h]
  __int64 v92; // [rsp+18h] [rbp-50h]
  __int64 v93; // [rsp+18h] [rbp-50h]
  __int64 v94; // [rsp+18h] [rbp-50h]
  __int64 v95; // [rsp+18h] [rbp-50h]
  __int64 v96; // [rsp+18h] [rbp-50h]
  __int64 v97; // [rsp+18h] [rbp-50h]
  __int64 v98; // [rsp+18h] [rbp-50h]
  __int64 v99; // [rsp+20h] [rbp-48h]
  __int64 v100; // [rsp+20h] [rbp-48h]
  __int64 v101; // [rsp+20h] [rbp-48h]
  __int64 v102; // [rsp+20h] [rbp-48h]
  __int64 v103; // [rsp+20h] [rbp-48h]
  __int64 v104; // [rsp+20h] [rbp-48h]
  int v105; // [rsp+20h] [rbp-48h]
  int v106; // [rsp+20h] [rbp-48h]
  __int64 v107; // [rsp+20h] [rbp-48h]
  __int64 v108; // [rsp+28h] [rbp-40h]
  __int64 v109; // [rsp+28h] [rbp-40h]

  v9 = a5;
  if ( !a4 && !a5 )
    goto LABEL_3;
  v11 = a5 & 0x100;
  v12 = a5 & 0x40;
  if ( a6 != -1 )
  {
    if ( (a5 & 0x400) != 0 )
    {
      v71 = a6;
      sub_35A910(a2);
      v11 = v9 & 0x100;
      a6 = v71;
    }
    if ( (v9 & 0x20) != 0 )
    {
      v48 = a2[1];
      if ( v48 )
      {
        v49 = v48 + 49;
        v50 = v48 + 50;
        --v48;
      }
      else
      {
        v50 = 51;
        v49 = 50;
      }
      v51 = *a2;
      if ( a2[2] < v50 )
      {
        v108 = a6;
        v105 = v11;
        v96 = v48;
        v87 = v49;
        v78 = v50;
        v67 = qvector_reserve(a2, v51, v50, 1);
        a6 = v108;
        v11 = v105;
        v48 = v96;
        v49 = v87;
        *a2 = v67;
        v51 = v67;
        v50 = v78;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A7E10);
      a2[1] = v50;
      *(_BYTE *)(v51 + v49) = 0;
      v53 = (__m128i *)(*a2 + v48);
      *v53 = si128;
      v54 = _mm_load_si128((const __m128i *)&xmmword_23A7E30);
      v53[3].m128i_i16[0] = 8201;
      v53[1] = v54;
      v53[2] = _mm_load_si128((const __m128i *)&xmmword_23A7E40);
      if ( (v9 & 0x80u) == 0 )
      {
LABEL_11:
        if ( !v11 )
        {
          v12 |= 0x1001u;
          goto LABEL_13;
        }
LABEL_18:
        v70 = a6;
        v13 = sub_65E1F0((__int64)a2);
        v14 = v70;
        if ( v13 != 32 )
        {
          v15 = a2[1];
          if ( v15 )
          {
            v17 = v15 + 1;
            v16 = a2[1];
            --v15;
          }
          else
          {
            v16 = 1;
            v17 = 2;
          }
          v18 = *a2;
          if ( a2[2] < v17 )
          {
            v107 = v70;
            v98 = v16;
            v89 = v15;
            v80 = v17;
            v69 = qvector_reserve(a2, v18, v17, 1);
            v14 = v107;
            v16 = v98;
            v15 = v89;
            v17 = v80;
            *a2 = v69;
            v18 = v69;
          }
          a2[1] = v17;
          *(_BYTE *)(v18 + v15) = 32;
          *(_BYTE *)(*a2 + v16) = 0;
        }
        v19 = a2[1];
        if ( v19 )
        {
          v20 = v19 + 1;
          v21 = a2[1];
          --v19;
        }
        else
        {
          v21 = 1;
          v20 = 2;
        }
        v22 = *a2;
        if ( a2[2] < v20 )
        {
          v99 = v14;
          v90 = v21;
          v81 = v19;
          v72 = v20;
          v60 = qvector_reserve(a2, v22, v20, 1);
          v14 = v99;
          v21 = v90;
          v19 = v81;
          v20 = v72;
          *a2 = v60;
          v22 = v60;
        }
        a2[1] = v20;
        *(_BYTE *)(v22 + v19) = 1;
        *(_BYTE *)(*a2 + v21) = 0;
        v23 = a2[1];
        if ( v23 )
        {
          v24 = v23 + 1;
          v25 = a2[1];
          --v23;
        }
        else
        {
          v25 = 1;
          v24 = 2;
        }
        v26 = *a2;
        if ( a2[2] < v24 )
        {
          v104 = v14;
          v95 = v25;
          v86 = v23;
          v77 = v24;
          v65 = qvector_reserve(a2, v26, v24, 1);
          v14 = v104;
          v25 = v95;
          v23 = v86;
          v24 = v77;
          *a2 = v65;
          v26 = v65;
        }
        a2[1] = v24;
        *(_BYTE *)(v26 + v23) = 12;
        *(_BYTE *)(*a2 + v25) = 0;
        v27 = a2[1];
        if ( v27 )
        {
          v28 = v27 + 6;
          v29 = v27 + 7;
          --v27;
        }
        else
        {
          v29 = 8;
          v28 = 7;
        }
        v30 = *a2;
        if ( a2[2] < v29 )
        {
          v103 = v14;
          v94 = v28;
          v85 = v27;
          v76 = v29;
          v64 = qvector_reserve(a2, v30, v29, 1);
          v14 = v103;
          v28 = v94;
          v27 = v85;
          v29 = v76;
          *a2 = v64;
          v30 = v64;
        }
        a2[1] = v29;
        *(_BYTE *)(v30 + v28) = 0;
        v31 = (_DWORD *)(*a2 + v27);
        *v31 = 1180052015;
        *(_DWORD *)((char *)v31 + 3) = 791303238;
        v32 = a2[1];
        if ( v32 )
        {
          v33 = v32 + 1;
          v34 = a2[1];
          --v32;
        }
        else
        {
          v34 = 1;
          v33 = 2;
        }
        v35 = *a2;
        if ( a2[2] < v33 )
        {
          v102 = v14;
          v93 = v34;
          v84 = v32;
          v75 = v33;
          v63 = qvector_reserve(a2, v35, v33, 1);
          v14 = v102;
          v34 = v93;
          v32 = v84;
          v33 = v75;
          *a2 = v63;
          v35 = v63;
        }
        a2[1] = v33;
        *(_BYTE *)(v35 + v32) = 2;
        *(_BYTE *)(*a2 + v34) = 0;
        v36 = a2[1];
        if ( v36 )
        {
          v37 = v36 + 1;
          v38 = a2[1];
          --v36;
        }
        else
        {
          v38 = 1;
          v37 = 2;
        }
        v39 = *a2;
        if ( a2[2] < v37 )
        {
          v101 = v14;
          v92 = v38;
          v83 = v36;
          v74 = v37;
          v62 = qvector_reserve(a2, v39, v37, 1);
          v14 = v101;
          v38 = v92;
          v36 = v83;
          v37 = v74;
          *a2 = v62;
          v39 = v62;
        }
        a2[1] = v37;
        *(_BYTE *)(v39 + v36) = 12;
        *(_BYTE *)(*a2 + v38) = 0;
        v40 = a2[1];
        if ( v40 )
        {
          v41 = v40 + 1;
          v42 = a2[1];
          --v40;
        }
        else
        {
          v42 = 1;
          v41 = 2;
        }
        v43 = *a2;
        if ( a2[2] < v41 )
        {
          v100 = v14;
          v91 = v42;
          v82 = v40;
          v73 = v41;
          v61 = qvector_reserve(a2, v43, v41, 1);
          v14 = v100;
          v42 = v91;
          v40 = v82;
          v41 = v73;
          *a2 = v61;
          v43 = v61;
        }
        a2[1] = v41;
        *(_BYTE *)(v43 + v40) = 32;
        *(_BYTE *)(*a2 + v42) = 0;
        if ( v14 != -1 )
          v12 |= 0x1001u;
        goto LABEL_13;
      }
    }
    else if ( (v9 & 0x80u) == 0 )
    {
      goto LABEL_11;
    }
    v55 = a2[1];
    if ( v55 )
    {
      v56 = v55 + 12;
      v57 = v55 + 13;
      --v55;
    }
    else
    {
      v57 = 14;
      v56 = 13;
    }
    v58 = *a2;
    if ( a2[2] < v57 )
    {
      v109 = a6;
      v106 = v11;
      v97 = v55;
      v88 = v56;
      v79 = v57;
      v68 = qvector_reserve(a2, v58, v57, 1);
      a6 = v109;
      v11 = v106;
      v55 = v97;
      v56 = v88;
      *a2 = v68;
      v58 = v68;
      v57 = v79;
    }
    a2[1] = v57;
    *(_BYTE *)(v58 + v56) = 0;
    v59 = (_QWORD *)(*a2 + v55);
    *v59 = 0x6F7070635F5F2001LL;
    *(_QWORD *)((char *)v59 + 5) = 0x2020026A626F7070LL;
    goto LABEL_11;
  }
  if ( (a5 & 0x100) != 0 )
    goto LABEL_18;
LABEL_13:
  sub_65EB70((__int64)a2, a4, v12);
  if ( (v9 & 0x10) != 0 )
    sub_662480(a1, a2, a3, v12 | 0x804);
LABEL_3:
  if ( a7 && *a7 )
  {
    if ( (unsigned __int8)sub_65E1F0((__int64)a2) != 32 )
    {
      v44 = a2[1];
      if ( v44 )
      {
        v45 = v44 + 1;
        v46 = a2[1];
        --v44;
      }
      else
      {
        v46 = 1;
        v45 = 2;
      }
      v47 = *a2;
      if ( a2[2] < v45 )
      {
        v66 = qvector_reserve(a2, v47, v45, 1);
        *a2 = v66;
        v47 = v66;
      }
      a2[1] = v45;
      *(_BYTE *)(v47 + v44) = 32;
      *(_BYTE *)(*a2 + v46) = 0;
    }
    sub_35A910(a2);
  }
}
