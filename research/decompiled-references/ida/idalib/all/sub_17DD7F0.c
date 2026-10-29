void __fastcall sub_17DD7F0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  int v9; // eax
  unsigned __int8 v10; // al
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  char v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  unsigned __int8 v26; // al
  int v27; // edx
  __int64 *v28; // r12
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // r9
  bool v40; // zf
  char v41; // al
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rcx
  char v47; // dl
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 *v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 *v59; // rax
  __int64 v60; // rcx
  _QWORD *v61; // rax
  _QWORD *v62; // rsi
  __int64 v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned __int64 v70; // rcx
  __int64 v71; // r14
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  unsigned __int8 v77; // al
  unsigned int v78; // edx
  bool v79; // al
  unsigned __int8 v80; // al
  unsigned int v81; // edx
  bool v82; // al
  unsigned __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rbp
  __int64 v87; // rax
  __m128i v88; // xmm0
  unsigned __int64 v89; // rax
  __int64 v90; // rax
  __m128i v91; // xmm0
  __m128i v92; // [rsp+0h] [rbp-118h] BYREF
  __m128i v93; // [rsp+10h] [rbp-108h] BYREF
  unsigned int v94; // [rsp+24h] [rbp-F4h]
  unsigned __int64 v95; // [rsp+28h] [rbp-F0h]
  _QWORD *v96; // [rsp+38h] [rbp-E0h] BYREF
  __m128 v97; // [rsp+40h] [rbp-D8h] BYREF
  __m128 v98[12]; // [rsp+50h] [rbp-C8h] BYREF

  v4 = a2;
  v6 = a3;
  v7 = *(_QWORD *)(a2 + 16);
  v92.m128i_i64[0] = a4;
  v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v7 & 4) != 0 )
    v8 = *(_QWORD *)v8;
  v9 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( (unsigned int)(v9 - 49) <= 2 )
  {
    v10 = *(_BYTE *)(v8 + 8) & 0x7F;
    if ( (unsigned int)v10 - 35 <= 3 && v8 != 72 )
    {
      if ( sub_B979F0((_QWORD *)(v8 - 72)) )
        return;
      v11 = sub_B72690(v8);
      if ( !v11 )
        BUG();
      v12 = *(_QWORD *)(v11 + 64);
      if ( !v12 || (*(_BYTE *)(v12 + 10) & 0x20) == 0 )
      {
        if ( (unsigned __int8)sub_B981D0((_QWORD *)(v8 - 72), a2) )
          return;
      }
      v10 = *(_BYTE *)(v8 + 8) & 0x7F;
    }
    if ( v10 == 38 && (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 32LL))(a2);
      v92.m128i_i64[0] = v6;
      v97 = _mm_loadh_ps((const double *)v92.m128i_i64);
      if ( (unsigned __int8)sub_17A95C0((__int64 *)(a1 + 3168), (__int64 *)&v97, &v96) )
      {
        sub_17A93C0(v98, v96, (_QWORD *)(*(_QWORD *)(a1 + 3168) + 16LL * *(unsigned int *)(a1 + 3184)), a1 + 3168, 1);
        return;
      }
      v62 = v96;
      v63 = (unsigned int)(*(_DWORD *)(a1 + 3176) + 1);
      v64 = *(_DWORD *)(a1 + 3184);
      v98[0].m128_u64[0] = (unsigned __int64)v96;
      v65 = (unsigned int)(4 * v63);
      if ( (unsigned int)v65 >= 3 * v64 )
      {
        sub_17DD5E0(a1 + 3168, 2 * v64, v63, 2 * v64, v65, v31);
      }
      else
      {
        v66 = v64 - *(_DWORD *)(a1 + 3180) - (unsigned int)v63;
        if ( (unsigned int)v66 > v64 >> 3 )
        {
LABEL_88:
          v40 = *v62 == -4096;
          *(_DWORD *)(a1 + 3176) = v63;
          if ( !v40 )
            --*(_DWORD *)(a1 + 3180);
          *(__m128 *)v62 = v97;
          v96 = v62;
          sub_17A93C0(v98, v62, (_QWORD *)(*(_QWORD *)(a1 + 3168) + 16LL * v64), a1 + 3168, 1);
          return;
        }
        sub_17DD5E0(a1 + 3168, v64, v63, v66, v65, v31);
      }
      sub_17A95C0((__int64 *)(a1 + 3168), (__int64 *)&v97, v98);
      v62 = (_QWORD *)v98[0].m128_u64[0];
      v64 = *(_DWORD *)(a1 + 3184);
      LODWORD(v63) = *(_DWORD *)(a1 + 3176) + 1;
      goto LABEL_88;
    }
    v9 = *(_BYTE *)(v6 + 28) & 0x7F;
  }
  if ( (unsigned int)(v9 - 40) <= 6 && (unsigned __int8)sub_B82160(v6) )
  {
    v13 = v6;
    v14 = 0;
    while ( !sub_A5EB90(v13) )
    {
      if ( (*(_BYTE *)(v13 + 72) & 3) != 0 )
      {
        if ( v14 )
          goto LABEL_22;
        v14 = 1;
      }
      a2 = v13;
      v19 = sub_705340((__int64 *)(v13 + 72), v13, v15, v16, v17, v18);
      v13 = (__int64)v19;
      if ( (_QWORD *)v6 == v19 )
        break;
      if ( !v19 )
      {
LABEL_22:
        v13 = v6;
        break;
      }
    }
    v6 = v13;
  }
  v20 = (_QWORD *)(*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v6 + 16) & 4) != 0 )
    v20 = (_QWORD *)*v20;
  v21 = sub_B8EAA0((__int64)v20);
  if ( (*(_BYTE *)(v4 + 28) & 0x7Fu) - 40 > 6 )
  {
    if ( sub_B72A20(v6, *(_QWORD *)(a1 + 232)) )
      return;
    v93.m128i_i32[0] = 0;
    v94 = 6802;
    if ( v8 )
    {
LABEL_31:
      if ( ((*(_BYTE *)(v8 + 8) + 70) & 0x7Fu) <= 3 && ((*(_BYTE *)(v21 + 8) + 70) & 0x7Fu) > 3 )
        return;
      v22 = sub_B8EAA0(v8);
      v25 = *(unsigned __int8 *)(v22 + 8);
      if ( (((_BYTE)v25 + 70) & 0x7Fu) <= 3 )
      {
        v32 = *(_BYTE *)(v4 + 28) & 0x7F;
        if ( (_BYTE)v32 == 33 && !sub_179A7B0(v21, v22, v32, v25, v23, v24) )
          return;
      }
LABEL_33:
      v96 = *(_QWORD **)(v92.m128i_i64[0] + 120);
      v26 = *(_BYTE *)(v6 + 28) & 0x7F;
      switch ( v26 )
      {
        case 'A':
          LODWORD(v95) = 5;
          break;
        case '@':
          LODWORD(v95) = 4;
          break;
        case '4':
          LODWORD(v95) = 6;
          break;
        default:
          v27 = *(_BYTE *)(v21 + 8) & 0x7F;
          if ( (unsigned int)(v27 - 58) <= 3 )
            LODWORD(v95) = ((unsigned int)v26 - 49 < 3) + 2;
          else
            LODWORD(v95) = v27 == 0 || v27 == 24;
          break;
      }
      v28 = (__int64 *)(a1 + 8);
      sub_168B9F0((__int64)v98, v28, *(_DWORD *)(v92.m128i_i64[0] + 128), v94, 0);
      v29 = sub_17B3DD0((__int64)v98, (__int64 *)&v96);
      v30 = v29;
      if ( *(_BYTE *)(v29 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v29 + 32), (unsigned int)v95, 2u);
      }
      else
      {
        if ( !*(_BYTE *)(v29 + 132) )
        {
LABEL_40:
          sub_15F7200(v98);
          if ( v93.m128i_i32[0] )
          {
            sub_168B9F0((__int64)v98, v28, v93.m128i_u32[0], 0x193Fu, 0);
            v33 = sub_17B3DD0((__int64)v98, (__int64 *)&v96);
            v97.m128_i32[0] = 1;
            sub_1587D10(v33, (int *)&v97);
            sub_15F7200(v98);
          }
          sub_168B9F0((__int64)v98, v28, *(_DWORD *)(v6 + 24), 0x70u, 0);
          sub_15F7200(v98);
          return;
        }
        v48 = sub_168B9E0((_QWORD *)v29);
        v52 = *(__int64 **)(v30 + 16);
        if ( v52 )
        {
          v53 = *v52;
          v92.m128i_i64[0] = v48;
          v52 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(v53 + 32))(v52);
          v48 = v92.m128i_i64[0];
        }
        v97.m128_u64[0] = (unsigned __int64)v52;
        v54 = sub_1587BC0(v48, (__int64 *)&v97, v48, v49, v50, v51);
        sub_AE9DF0((unsigned __int8 **)(*v54 + 32LL * *(unsigned int *)(v30 + 128) + 8), (unsigned int)v95, 2u);
      }
      if ( *(_BYTE *)(v30 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v30 + 32), v21, 0xCu);
      }
      else if ( *(_BYTE *)(v30 + 132) )
      {
        v55 = sub_168B9E0((_QWORD *)v30);
        v59 = *(__int64 **)(v30 + 16);
        if ( v59 )
        {
          v60 = *v59;
          v92.m128i_i64[0] = v55;
          v59 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(v60 + 32))(v59);
          v55 = v92.m128i_i64[0];
        }
        v97.m128_u64[0] = (unsigned __int64)v59;
        v61 = sub_1587BC0(v55, (__int64 *)&v97, v55, v56, v57, v58);
        sub_AE9DF0((unsigned __int8 **)(*v61 + 32LL * *(unsigned int *)(v30 + 128) + 8), v21, 0xCu);
      }
      goto LABEL_40;
    }
LABEL_45:
    v93.m128i_i32[0] = 0;
    v94 = 6802;
    goto LABEL_33;
  }
  if ( !v8 )
  {
    if ( sub_B72A20(v6, *(_QWORD *)(a1 + 232)) )
      return;
    goto LABEL_45;
  }
  if ( (*(_BYTE *)(v8 + 8) & 0x7Fu) - 35 > 3 )
    goto LABEL_29;
  v34 = sub_B72690(v8);
  if ( (*(_BYTE *)(v34 + 8) & 0x7Fu) - 59 > 2 || v34 == 64 )
    goto LABEL_29;
  v35 = *(_QWORD *)(v34 + 64);
  if ( !v35 || (*(_BYTE *)(v35 + 10) & 0x20) == 0 )
  {
    v41 = *(_BYTE *)(v6 + 28);
    goto LABEL_93;
  }
  v93.m128i_i64[0] = v34;
  v37 = *(_QWORD *)(sub_B8C1B0(v8) + 16);
  if ( (v37 & 4) != 0 )
    a2 = *(_QWORD *)((v37 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  else
    a2 = v37 & 0xFFFFFFFFFFFFFFF8LL;
  v40 = (unsigned __int8)sub_B91990(v21, a2, v93.m128i_i64[0], v36, v38, v39) == 0;
  v41 = *(_BYTE *)(v6 + 28);
  if ( v40 )
  {
LABEL_93:
    if ( (v41 & 0x7Fu) - 40 <= 6 )
    {
      v94 = 6802;
      v93.m128i_i32[0] = 0;
LABEL_95:
      if ( sub_9B48E0(v6) )
      {
        v70 = v8;
        if ( v21 )
        {
          do
          {
            v95 = v70;
            v71 = sub_B91570(v70, a2, v67, v70, v68, v69);
            if ( v71 == sub_B91570(v21, a2, v72, v73, v74, v75) )
              break;
            v76 = v95;
            v77 = *(_BYTE *)(v95 + 8) & 0x7F;
            v78 = v77 - 35;
            if ( ((v77 + 121) & 0x7Fu) > 1 )
            {
              if ( v78 > 3 || !sub_C1DDA0(v95 - 72) )
                return;
              v76 = v95;
              v78 = (*(_BYTE *)(v95 + 8) & 0x7F) - 35;
            }
            if ( v78 <= 3 && (v95 = v76, v79 = sub_C1DDA0(v76 - 72), v76 = v95, v79) )
            {
              v83 = sub_B72690(v95);
              v70 = sub_B72690(v83);
            }
            else
            {
              v70 = sub_B72690(v76);
            }
          }
          while ( v70 );
        }
        else
        {
          do
          {
            v80 = *(_BYTE *)(v70 + 8) & 0x7F;
            v81 = v80 - 35;
            if ( ((v80 + 121) & 0x7Fu) > 1 )
            {
              if ( v81 > 3 )
                return;
              v95 = v70;
              if ( !sub_C1DDA0(v70 - 72) )
                return;
              v70 = v95;
              v81 = (*(_BYTE *)(v95 + 8) & 0x7F) - 35;
            }
            if ( v81 <= 3 && (v95 = v70, v82 = sub_C1DDA0(v70 - 72), v70 = v95, v82) )
            {
              v89 = sub_B72690(v95);
              v70 = sub_B72690(v89);
            }
            else
            {
              v70 = sub_B72690(v70);
            }
          }
          while ( v70 );
        }
      }
LABEL_30:
      if ( sub_B72A20(v6, *(_QWORD *)(a1 + 232)) )
        return;
      goto LABEL_31;
    }
    goto LABEL_29;
  }
  v42 = v41 & 0x7F;
  if ( (unsigned int)(v42 - 40) > 6 )
  {
    if ( (unsigned int)(v42 - 49) <= 2 )
    {
      v84 = *(unsigned int *)(a1 + 40);
      if ( !(_DWORD)v84 )
        BUG();
      v85 = *(_QWORD *)(a1 + 32);
      v92.m128i_i64[0] = v6;
      v86 = *(_QWORD *)(v85 + 8 * v84 - 8);
      v87 = *(unsigned int *)(v86 + 1832);
      v88 = (__m128i)_mm_loadh_ps((const double *)v92.m128i_i64);
      if ( v87 + 1 > (unsigned __int64)*(unsigned int *)(v86 + 1836) )
      {
        v92 = v88;
        sub_2237220(v86 + 1824, v86 + 1840, v87 + 1, 16);
        v87 = *(unsigned int *)(v86 + 1832);
        v88 = _mm_load_si128(&v92);
      }
      *(__m128i *)(*(_QWORD *)(v86 + 1824) + 16 * v87) = v88;
      ++*(_DWORD *)(v86 + 1832);
      return;
    }
LABEL_29:
    v93.m128i_i32[0] = 0;
    v94 = 6802;
    goto LABEL_30;
  }
  v43 = *(unsigned int *)(a1 + 40);
  v44 = 0;
  if ( (_DWORD)v43 )
    v44 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v43 - 8);
  if ( (*(_BYTE *)(*(_QWORD *)(v93.m128i_i64[0] + 64) + 104LL) & 0x18) == 0 )
  {
    v45 = *(_QWORD *)(v44 + 1320);
    v46 = v45 + 32LL * *(unsigned int *)(v44 + 1328);
    if ( v45 == v46 )
    {
LABEL_76:
      v93.m128i_i32[0] = 0;
      v94 = 6803;
    }
    else
    {
      while ( 1 )
      {
        v47 = *(_BYTE *)(v45 + 24);
        if ( (v47 & 8) == 0 && (v47 & 3) != 3 && v6 == *(_QWORD *)v45 )
          break;
        v45 += 32;
        if ( v46 == v45 )
          goto LABEL_76;
      }
      v93.m128i_i32[0] = *(_DWORD *)(v45 + 8);
      v94 = 6803 - (v93.m128i_i32[0] != 0);
    }
    goto LABEL_95;
  }
  v92.m128i_i64[0] = v4;
  v90 = *(unsigned int *)(v44 + 1832);
  v92.m128i_i64[0] = v6;
  v91 = (__m128i)_mm_loadh_ps((const double *)v92.m128i_i64);
  if ( v90 + 1 > (unsigned __int64)*(unsigned int *)(v44 + 1836) )
  {
    v93 = v91;
    v92.m128i_i64[0] = v44;
    sub_2237220(v44 + 1824, v44 + 1840, v90 + 1, 16);
    v44 = v92.m128i_i64[0];
    v91 = _mm_load_si128(&v93);
    v90 = *(unsigned int *)(v92.m128i_i64[0] + 1832);
  }
  *(__m128i *)(*(_QWORD *)(v44 + 1824) + 16 * v90) = v91;
  ++*(_DWORD *)(v44 + 1832);
}
