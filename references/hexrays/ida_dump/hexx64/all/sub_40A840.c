__int64 __fastcall sub_40A840(__int64 *a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(__int64, int); // rax
  int v14; // eax
  __int64 (__fastcall *v15)(__int64, int, int); // rax
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __m128i v22; // xmm2
  __m128i v23; // xmm1
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r14d
  __int64 v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // rbx
  __int64 *v31; // rax
  __int64 v32; // rdi
  char *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  char *v38; // rax
  __int64 v39; // r9
  int v40; // ebx
  __int64 v41; // rax
  int v42; // eax
  unsigned __int64 v43; // r14
  _QWORD *v44; // rax
  _QWORD *v45; // rbx
  int v46; // ebx
  __int64 v47; // rax
  unsigned int v48; // r15d
  __int64 v49; // rdx
  _QWORD *v50; // r15
  int v51; // r12d
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // r12
  __int64 v56; // rbx
  __int64 v57; // rdi
  __int64 (__fastcall *v58)(__int64, __int64); // rax
  __int64 v59; // rax
  _QWORD *v60; // rsi
  __int64 v61; // rax
  _QWORD *v62; // rbx
  int v63; // r12d
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rax
  int v75; // [rsp+8h] [rbp-2F0h]
  __int64 v76; // [rsp+8h] [rbp-2F0h]
  unsigned __int64 head; // [rsp+10h] [rbp-2E8h]
  __int64 v78; // [rsp+10h] [rbp-2E8h]
  int v79; // [rsp+18h] [rbp-2E0h]
  char v80; // [rsp+2Ah] [rbp-2CEh] BYREF
  char v81; // [rsp+2Bh] [rbp-2CDh] BYREF
  int v82; // [rsp+2Ch] [rbp-2CCh] BYREF
  __int64 v83; // [rsp+30h] [rbp-2C8h] BYREF
  __int128 v84; // [rsp+38h] [rbp-2C0h]
  _QWORD *v85; // [rsp+50h] [rbp-2A8h] BYREF
  __int128 v86; // [rsp+58h] [rbp-2A0h]
  __m128i v87; // [rsp+70h] [rbp-288h] BYREF
  __m128i v88; // [rsp+80h] [rbp-278h] BYREF
  __int64 v89; // [rsp+90h] [rbp-268h]
  int v90; // [rsp+98h] [rbp-260h]
  __int64 (__fastcall **v91)(); // [rsp+A0h] [rbp-258h]
  __int64 v92; // [rsp+A8h] [rbp-250h]
  int v93; // [rsp+B0h] [rbp-248h]
  __int64 v94; // [rsp+C0h] [rbp-238h] BYREF
  __int64 v95; // [rsp+C8h] [rbp-230h]
  __int128 v96; // [rsp+D0h] [rbp-228h]
  __int64 v97; // [rsp+E0h] [rbp-218h]
  __int64 v98; // [rsp+E8h] [rbp-210h]
  __int64 v99; // [rsp+F0h] [rbp-208h]
  __int128 v100; // [rsp+F8h] [rbp-200h]
  __int64 v101; // [rsp+108h] [rbp-1F0h]
  __int128 v102; // [rsp+110h] [rbp-1E8h]
  __int64 v103; // [rsp+120h] [rbp-1D8h]
  __int64 v104; // [rsp+128h] [rbp-1D0h]
  __int128 v105; // [rsp+130h] [rbp-1C8h]
  __int64 v106; // [rsp+140h] [rbp-1B8h]
  int v107; // [rsp+148h] [rbp-1B0h]
  __int128 v108; // [rsp+150h] [rbp-1A8h] BYREF
  __int64 v109; // [rsp+160h] [rbp-198h]
  __int64 v110; // [rsp+168h] [rbp-190h]
  __int64 v111; // [rsp+170h] [rbp-188h]
  char v112; // [rsp+178h] [rbp-180h] BYREF
  char v113; // [rsp+179h] [rbp-17Fh]
  unsigned __int16 v114; // [rsp+17Eh] [rbp-17Ah]
  _QWORD v115[8]; // [rsp+2B8h] [rbp-40h] BYREF

  v5 = a1[104];
  v115[0] = __readfsqword(0x28u);
  *(_BYTE *)(v5 + 3800) = 0;
  sub_151770(a1[104], *(_QWORD *)(a1[104] + 3784));
  sub_151770(a1[104], *(_QWORD *)(a1[104] + 3792));
  sub_1D29F0(a1[100]);
  v7 = a1[100];
  v8 = a1[104];
  v83 = 0;
  LODWORD(v8) = *(_DWORD *)(v8 + 464);
  v9 = *(_QWORD *)(v7 + 784);
  v84 = 0;
  *(_DWORD *)(v9 + 32) = v8;
  *(_QWORD *)(v9 + 56) = a1;
  *(_DWORD *)(a1[104] + 3776) = 0;
  *(_DWORD *)(a1[104] + 3780) = -1;
  v10 = a1[1];
  a1[105] = a2;
  a1[106] = (__int64)a3;
  if ( *(int *)(a2 + 96) > 0 )
  {
    v11 = 0;
    do
    {
      while ( 1 )
      {
        if ( sub_64930(a3, v11) )
        {
          head = prev_head(
                   *(_QWORD *)(*(_QWORD *)(a2 + 72) + (v11 << 6) + 8),
                   *(_QWORD *)(*(_QWORD *)(a2 + 72) + (v11 << 6)));
          v12 = v11 << 6;
          v13 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 96LL);
          if ( v13 == sub_134250 )
          {
            v14 = *(_DWORD *)(*(_QWORD *)(a2 + 72) + (v11 << 6) + 24);
          }
          else
          {
            v14 = v13(a2, v11);
            v12 = v11 << 6;
          }
          if ( v14 == 1 )
          {
            v15 = *(__int64 (__fastcall **)(__int64, int, int))(*(_QWORD *)a2 + 112LL);
            v16 = v15 == sub_134270 ? **(_DWORD **)(*(_QWORD *)(a2 + 72) + v12 + 16) : v15(a2, v11, 0);
            if ( v16 >= *(_DWORD *)(a2 + 96) )
              break;
          }
          if ( (unsigned int)fc_calc_block_type(a2, v11, v12) - 2 <= 1 )
            break;
          if ( sub_1CFBB0(v10, head) == *(_QWORD *)(v10 + 136) )
          {
            v109 = -1;
            v19 = &v112;
            v110 = 0;
            v111 = 0;
            v108 = -1;
            do
            {
              *(_WORD *)v19 = 0;
              v19 += 40;
              *((_WORD *)v19 - 19) = 0;
              *((_WORD *)v19 - 18) = 0;
              *((_DWORD *)v19 - 2) = 0;
              *((_WORD *)v19 - 17) = 0;
              *((_OWORD *)v19 - 2) = 0;
              *((_QWORD *)v19 - 2) = 0;
            }
            while ( v115 != (_QWORD *)v19 );
            if ( (int)decode_insn(&v108, head, v115, 0, v17, v18, 0.0) > 0
              && (unsigned __int16)(v110 - 87) <= 1u
              && v113 == 1 )
            {
              break;
            }
          }
        }
        if ( *(_DWORD *)(a2 + 96) <= (int)++v11 )
          goto LABEL_21;
      }
      v20 = v84;
      v21 = v83;
      if ( *((_QWORD *)&v84 + 1) < (unsigned __int64)(v84 + 1) )
      {
        v83 = qvector_reserve(&v83, v83, v84 + 1, 8);
        v21 = v83;
        v20 = v84;
      }
      ++v11;
      *(_QWORD *)(v21 + 8 * v20) = head;
      *(_QWORD *)&v84 = v84 + 1;
    }
    while ( *(_DWORD *)(a2 + 96) > (int)v11 );
LABEL_21:
    v10 = a1[1];
  }
  v22 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4E9C98, (__m128i)(unsigned __int64)&v94);
  v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DBD90, (__m128i)(unsigned __int64)off_4DBD70);
  if ( (*(_BYTE *)(v10 + 112) & 0x10) != 0 )
  {
    *(_DWORD *)(v10 + 1184) = *(_DWORD *)(a1[104] + 400);
    v10 = a1[1];
  }
  v94 = 192;
  v95 = 0;
  v97 = -1;
  v98 = 0;
  v99 = 0;
  v101 = 0;
  v103 = 0;
  v104 = -1;
  v106 = 0;
  v107 = 144;
  v89 = -1;
  v90 = -1;
  v91 = off_4DBD70;
  v92 = -1;
  v93 = -1;
  v96 = 0;
  v100 = 0;
  v102 = 0;
  v105 = 0;
  v87 = v22;
  v88 = v23;
  if ( !(unsigned __int8)sub_1CF5C0((__int64)&v87, &v82, v10, a2) )
  {
    v27 = v82;
    if ( v82 )
      goto LABEL_26;
    v109 = -1;
    v34 = &v112;
    v110 = 0;
    v111 = 0;
    v108 = -1;
    do
    {
      *(_WORD *)v34 = 0;
      v34 += 40;
      *((_WORD *)v34 - 19) = 0;
      *((_WORD *)v34 - 18) = 0;
      *((_DWORD *)v34 - 2) = 0;
      *((_WORD *)v34 - 17) = 0;
      *((_OWORD *)v34 - 2) = 0;
      *((_QWORD *)v34 - 2) = 0;
    }
    while ( v34 != (char *)v115 );
    decode_insn(&v108, *(_QWORD *)(a1[1] + 40), v115, 0, 0, v26, 0.0);
    if ( (_WORD)v110 != 143 || v113 != 1 )
      goto LABEL_44;
    v46 = 0;
    v47 = 0;
    v48 = v114;
    v86 = 0;
    v85 = nullptr;
    if ( !(_QWORD)v84 )
      goto LABEL_89;
    do
    {
      if ( decode_prev_insn(&v108, *(_QWORD *)(v83 + 8 * v47), v83, v35, v36, v37, 0.0) == -1
        || (_WORD)v110 != 134
        || v113 != 1
        || v48 != v114 )
      {
        break;
      }
      v59 = v86;
      v36 = v109;
      v60 = v85;
      v49 = v86 + 1;
      if ( *((_QWORD *)&v86 + 1) < (unsigned __int64)(v86 + 1) )
      {
        v76 = v109;
        v85 = (_QWORD *)qvector_reserve(&v85, v85, v49, 8);
        v60 = v85;
        v36 = v76;
        v59 = v86;
      }
      ++v46;
      v60[v59] = v36;
      v47 = v46;
      *(_QWORD *)&v86 = v86 + 1;
    }
    while ( v46 < (unsigned __int64)v84 );
    if ( (_QWORD)v84 != (_QWORD)v86 )
      goto LABEL_69;
    if ( (_QWORD)v86 == 1
      && decode_prev_insn(&v108, *v85, v49, v35, v36, v37, 0.0) != -1
      && (unsigned __int8)has_insn_feature((unsigned __int16)v110, 2) )
    {
      v73 = decode_prev_insn(&v108, v109, v69, v70, v71, v72, 0.0);
      v61 = a1[1];
      if ( *(_QWORD *)(v61 + 40) == v73 )
      {
LABEL_69:
        if ( v85 )
        {
          *(_QWORD *)&v86 = 0;
          qfree(v85);
        }
LABEL_44:
        v27 = v82;
        goto LABEL_26;
      }
    }
    else
    {
LABEL_89:
      v61 = a1[1];
    }
    v62 = *(_QWORD **)(v61 + 920);
    v63 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1[104] + 168LL))(a1[104], v48);
    v64 = v62[2];
    v65 = v62[1];
    if ( v62[3] < (unsigned __int64)(v64 + 1) )
    {
      v74 = qvector_reserve(v62 + 1, v65, v64 + 1, 4);
      v62[1] = v74;
      v65 = v74;
      v64 = v62[2];
    }
    *(_DWORD *)(v65 + 4 * v64) = v63;
    v66 = 0;
    ++v62[2];
    if ( (_QWORD)v86 )
    {
      do
      {
        v80 = 2;
        netnode_supset(*(_QWORD *)(a1[100] + 104), v85[v66], &v80, 1, 256);
        v66 = ++v27;
      }
      while ( v27 < (unsigned __int64)v86 );
    }
    v67 = a1[1];
    v68 = a1[100];
    v81 = 2;
    netnode_supset(*(_QWORD *)(v68 + 104), *(_QWORD *)(v67 + 40), &v81, 1, 256);
    goto LABEL_69;
  }
  v109 = -1;
  v110 = 0;
  v111 = 0;
  v79 = v96;
  v38 = &v112;
  v108 = -1;
  do
  {
    v39 = 0;
    *(_WORD *)v38 = 0;
    v38 += 40;
    *((_WORD *)v38 - 19) = 0;
    *((_WORD *)v38 - 18) = 0;
    *((_DWORD *)v38 - 2) = 0;
    *((_WORD *)v38 - 17) = 0;
    *((_OWORD *)v38 - 2) = 0;
    *((_QWORD *)v38 - 2) = 0;
  }
  while ( v115 != (_QWORD *)v38 );
  if ( !(_QWORD)v84 )
    goto LABEL_53;
  v40 = 0;
  v41 = 0;
  do
  {
    decode_insn(&v108, *(_QWORD *)(v83 + 8 * v41), v83, v24, v25, v39, 0.0);
    if ( sub_CFF70(0xBBCu, &v85, &v94, &v108) != 1 )
    {
      if ( !under_debugger )
        sub_383060(0xC55Eu, (__int64)&v85, 0.0);
      BUG();
    }
    v41 = ++v40;
  }
  while ( v40 < (unsigned __int64)v84 );
  if ( !(_QWORD)v84 || (v42 = v102, (unsigned __int64)v102 >= v79) )
LABEL_53:
    v42 = v79;
  v75 = 0;
  v43 = 0;
  v78 = v42;
  if ( v42 > 0 )
  {
    do
    {
      if ( v43 < (unsigned __int64)v102 )
      {
        v50 = (_QWORD *)(v101 + 24 * v43);
        if ( v50[1] )
        {
          v51 = 0;
          v52 = 0;
          do
          {
            v53 = a1[100];
            v54 = *(_QWORD *)(*v50 + 8 * v52);
            LOBYTE(v85) = 2;
            netnode_supset(*(_QWORD *)(v53 + 104), v54, &v85, 1, 256);
            v52 = ++v51;
          }
          while ( (unsigned __int64)v51 < v50[1] );
        }
      }
      if ( *(_WORD *)(v95 + 32 * v43 + 24) == 5 && ++v75 == 2 )
      {
        *(_DWORD *)(a1[1] + 112) &= ~0x10u;
        v44 = sub_1CE9E0(a1[1]);
        v45 = v44;
        if ( v44 )
        {
          get_func(*v44);
          v45[2] &= ~0x10uLL;
          update_func(v45);
        }
      }
      ++v43;
    }
    while ( v78 != v43 );
  }
  if ( *(_DWORD *)(a1[104] + 84) != 8 || (v94 & 0x10) == 0 )
    goto LABEL_77;
  v55 = a1[1];
  v56 = *(_QWORD *)(v55 + 928);
  if ( !v56 )
  {
    v57 = *(_QWORD *)(v55 + 1504);
    v58 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v57 + 312LL);
    if ( v58 == sub_3EAE30 )
    {
      v56 = operator new(0x190u);
      sub_199470(v56, v55);
      *(_BYTE *)(v56 + 392) = 0;
      *(_QWORD *)v56 = &off_4ECBC0;
      *(_QWORD *)(v56 + 376) = -1;
      *(_QWORD *)(v56 + 384) = -1;
      *(_OWORD *)(v56 + 360) = -1;
    }
    else
    {
      v56 = v58(v57, a1[1]);
    }
    *(_QWORD *)(v55 + 928) = v56;
  }
  if ( !(unsigned __int8)sub_199720(v56, (__int64)&v88) )
  {
    v27 = -13;
  }
  else
  {
LABEL_77:
    sub_40A500(*(_DWORD **)(a1[1] + 1504), (__int64 *)(*(_QWORD *)(a1[1] + 920) + 8LL), v87.m128i_i64[1], v79);
    v27 = v82;
  }
LABEL_26:
  v28 = v101;
  if ( v101 )
  {
    v29 = v102;
    if ( (_QWORD)v102 )
    {
      v30 = 0;
      do
      {
        v31 = (__int64 *)(v28 + 24 * v30);
        v32 = *v31;
        if ( *v31 )
        {
          v31[1] = 0;
          qfree(v32);
          v28 = v101;
        }
        ++v30;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v102 = 0;
    qfree(v28);
  }
  if ( v99 )
  {
    *(_QWORD *)&v100 = 0;
    qfree(v99);
  }
  if ( v95 )
  {
    *(_QWORD *)&v96 = 0;
    qfree(v95);
  }
  if ( v83 )
  {
    *(_QWORD *)&v84 = 0;
    qfree(v83);
  }
  return (unsigned int)v27;
}
