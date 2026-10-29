__int64 __fastcall sub_40A840(__int64 *a1, __int64 a2, _QWORD *a3)
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
  char *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  __m128i v20; // xmm2
  __m128i v21; // xmm1
  int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rbx
  _QWORD *v26; // rax
  char *v28; // rax
  char *v29; // rax
  int v30; // ebx
  int v31; // eax
  unsigned __int64 v32; // r14
  _QWORD *v33; // rbx
  int v34; // ebx
  unsigned int v35; // r15d
  __int64 v36; // r15
  int v37; // r12d
  __int64 v38; // r12
  __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 (__fastcall *v41)(__int64, __int64); // rax
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rsi
  __int64 v45; // rax
  _QWORD *v46; // rbx
  int v47; // r12d
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 insn; // rdx
  __int64 v51; // rax
  int v52; // [rsp+8h] [rbp-2F0h]
  __int64 v53; // [rsp+8h] [rbp-2F0h]
  unsigned __int64 head; // [rsp+10h] [rbp-2E8h]
  __int64 v55; // [rsp+10h] [rbp-2E8h]
  int v56; // [rsp+18h] [rbp-2E0h]
  int v57; // [rsp+2Ch] [rbp-2CCh] BYREF
  __int64 v58; // [rsp+30h] [rbp-2C8h]
  __int128 v59; // [rsp+38h] [rbp-2C0h]
  __int64 v60; // [rsp+50h] [rbp-2A8h]
  __int128 v61; // [rsp+58h] [rbp-2A0h]
  __m128i v62; // [rsp+70h] [rbp-288h] BYREF
  __m128i v63; // [rsp+80h] [rbp-278h] BYREF
  __int64 v64; // [rsp+90h] [rbp-268h]
  int v65; // [rsp+98h] [rbp-260h]
  __int64 (__fastcall **v66)(); // [rsp+A0h] [rbp-258h]
  __int64 v67; // [rsp+A8h] [rbp-250h]
  int v68; // [rsp+B0h] [rbp-248h]
  __int64 v69; // [rsp+C0h] [rbp-238h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-230h]
  __int128 v71; // [rsp+D0h] [rbp-228h]
  __int64 v72; // [rsp+E0h] [rbp-218h]
  __int64 v73; // [rsp+E8h] [rbp-210h]
  __int64 v74; // [rsp+F0h] [rbp-208h]
  __int128 v75; // [rsp+F8h] [rbp-200h]
  __int64 v76; // [rsp+108h] [rbp-1F0h]
  __int128 v77; // [rsp+110h] [rbp-1E8h]
  __int64 v78; // [rsp+120h] [rbp-1D8h]
  __int64 v79; // [rsp+128h] [rbp-1D0h]
  __int128 v80; // [rsp+130h] [rbp-1C8h]
  __int64 v81; // [rsp+140h] [rbp-1B8h]
  int v82; // [rsp+148h] [rbp-1B0h]
  __int128 v83; // [rsp+150h] [rbp-1A8h]
  __int64 v84; // [rsp+160h] [rbp-198h]
  __int64 v85; // [rsp+168h] [rbp-190h]
  __int64 v86; // [rsp+170h] [rbp-188h]
  char v87; // [rsp+178h] [rbp-180h] BYREF
  char v88; // [rsp+179h] [rbp-17Fh]
  unsigned __int16 v89; // [rsp+17Eh] [rbp-17Ah]
  _QWORD v90[8]; // [rsp+2B8h] [rbp-40h] BYREF

  v5 = a1[104];
  v90[0] = __readfsqword(0x28u);
  *(_BYTE *)(v5 + 3800) = 0;
  sub_151770(a1[104], *(_QWORD *)(a1[104] + 3784));
  sub_151770(a1[104], *(_QWORD *)(a1[104] + 3792));
  sub_1D29F0(a1[100]);
  v7 = a1[100];
  v8 = a1[104];
  v58 = 0;
  LODWORD(v8) = *(_DWORD *)(v8 + 464);
  v9 = *(_QWORD *)(v7 + 784);
  v59 = 0;
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
          head = prev_head();
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
          if ( (unsigned int)fc_calc_block_type() - 2 <= 1 )
            break;
          if ( sub_1CFBB0(v10, head) == *(_QWORD *)(v10 + 136) )
          {
            v84 = -1;
            v17 = &v87;
            v85 = 0;
            v86 = 0;
            v83 = -1;
            do
            {
              *(_WORD *)v17 = 0;
              v17 += 40;
              *((_WORD *)v17 - 19) = 0;
              *((_WORD *)v17 - 18) = 0;
              *((_DWORD *)v17 - 2) = 0;
              *((_WORD *)v17 - 17) = 0;
              *((_OWORD *)v17 - 2) = 0;
              *((_QWORD *)v17 - 2) = 0;
            }
            while ( v90 != (_QWORD *)v17 );
            if ( (int)decode_insn() > 0 && (unsigned __int16)(v85 - 87) <= 1u && v88 == 1 )
              break;
          }
        }
        if ( *(_DWORD *)(a2 + 96) <= (int)++v11 )
          goto LABEL_21;
      }
      v18 = v59;
      v19 = v58;
      if ( *((_QWORD *)&v59 + 1) < (unsigned __int64)(v59 + 1) )
      {
        v58 = qvector_reserve();
        v19 = v58;
        v18 = v59;
      }
      ++v11;
      *(_QWORD *)(v19 + 8 * v18) = head;
      *(_QWORD *)&v59 = v59 + 1;
    }
    while ( *(_DWORD *)(a2 + 96) > (int)v11 );
LABEL_21:
    v10 = a1[1];
  }
  v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4E9C98, (__m128i)(unsigned __int64)&v69);
  v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DBD90, (__m128i)(unsigned __int64)off_4DBD70);
  if ( (*(_BYTE *)(v10 + 112) & 0x10) != 0 )
  {
    *(_DWORD *)(v10 + 1184) = *(_DWORD *)(a1[104] + 400);
    v10 = a1[1];
  }
  v69 = 192;
  v70 = 0;
  v72 = -1;
  v73 = 0;
  v74 = 0;
  v76 = 0;
  v78 = 0;
  v79 = -1;
  v81 = 0;
  v82 = 144;
  v64 = -1;
  v65 = -1;
  v66 = off_4DBD70;
  v67 = -1;
  v68 = -1;
  v71 = 0;
  v75 = 0;
  v77 = 0;
  v80 = 0;
  v62 = v20;
  v63 = v21;
  if ( !(unsigned __int8)sub_1CF5C0((__int64)&v62, &v57, v10, a2) )
  {
    v22 = v57;
    if ( v57 )
      goto LABEL_26;
    v84 = -1;
    v28 = &v87;
    v85 = 0;
    v86 = 0;
    v83 = -1;
    do
    {
      *(_WORD *)v28 = 0;
      v28 += 40;
      *((_WORD *)v28 - 19) = 0;
      *((_WORD *)v28 - 18) = 0;
      *((_DWORD *)v28 - 2) = 0;
      *((_WORD *)v28 - 17) = 0;
      *((_OWORD *)v28 - 2) = 0;
      *((_QWORD *)v28 - 2) = 0;
    }
    while ( v28 != (char *)v90 );
    decode_insn();
    if ( (_WORD)v85 != 143 || v88 != 1 )
      goto LABEL_44;
    v34 = 0;
    v35 = v89;
    v61 = 0;
    v60 = 0;
    if ( !(_QWORD)v59 )
      goto LABEL_89;
    do
    {
      if ( decode_prev_insn() == -1 || (_WORD)v85 != 134 || v88 != 1 || v35 != v89 )
        break;
      v42 = v61;
      v43 = v84;
      v44 = v60;
      if ( *((_QWORD *)&v61 + 1) < (unsigned __int64)(v61 + 1) )
      {
        v53 = v84;
        v60 = qvector_reserve();
        v44 = v60;
        v43 = v53;
        v42 = v61;
      }
      ++v34;
      *(_QWORD *)(v44 + 8 * v42) = v43;
      *(_QWORD *)&v61 = v61 + 1;
    }
    while ( v34 < (unsigned __int64)v59 );
    if ( (_QWORD)v59 != (_QWORD)v61 )
      goto LABEL_69;
    if ( (_QWORD)v61 == 1 && decode_prev_insn() != -1 && (unsigned __int8)has_insn_feature() )
    {
      insn = decode_prev_insn();
      v45 = a1[1];
      if ( *(_QWORD *)(v45 + 40) == insn )
      {
LABEL_69:
        if ( v60 )
        {
          *(_QWORD *)&v61 = 0;
          qfree();
        }
LABEL_44:
        v22 = v57;
        goto LABEL_26;
      }
    }
    else
    {
LABEL_89:
      v45 = a1[1];
    }
    v46 = *(_QWORD **)(v45 + 920);
    v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1[104] + 168LL))(a1[104], v35);
    v48 = v46[2];
    v49 = v46[1];
    if ( v46[3] < (unsigned __int64)(v48 + 1) )
    {
      v51 = qvector_reserve();
      v46[1] = v51;
      v49 = v51;
      v48 = v46[2];
    }
    *(_DWORD *)(v49 + 4 * v48) = v47;
    ++v46[2];
    if ( (_QWORD)v61 )
    {
      do
      {
        netnode_supset();
        ++v22;
      }
      while ( v22 < (unsigned __int64)v61 );
    }
    netnode_supset();
    goto LABEL_69;
  }
  v84 = -1;
  v85 = 0;
  v86 = 0;
  v56 = v71;
  v29 = &v87;
  v83 = -1;
  do
  {
    *(_WORD *)v29 = 0;
    v29 += 40;
    *((_WORD *)v29 - 19) = 0;
    *((_WORD *)v29 - 18) = 0;
    *((_DWORD *)v29 - 2) = 0;
    *((_WORD *)v29 - 17) = 0;
    *((_OWORD *)v29 - 2) = 0;
    *((_QWORD *)v29 - 2) = 0;
  }
  while ( v90 != (_QWORD *)v29 );
  if ( !(_QWORD)v59 )
    goto LABEL_53;
  v30 = 0;
  do
  {
    decode_insn();
    if ( sub_CFF70() != 1 )
    {
      if ( !under_debugger )
        sub_383060(0xC55Eu, 0.0);
      BUG();
    }
    ++v30;
  }
  while ( v30 < (unsigned __int64)v59 );
  if ( !(_QWORD)v59 || (v31 = v77, (unsigned __int64)v77 >= v56) )
LABEL_53:
    v31 = v56;
  v52 = 0;
  v32 = 0;
  v55 = v31;
  if ( v31 > 0 )
  {
    do
    {
      if ( v32 < (unsigned __int64)v77 )
      {
        v36 = v76 + 24 * v32;
        if ( *(_QWORD *)(v36 + 8) )
        {
          v37 = 0;
          do
          {
            LOBYTE(v60) = 2;
            netnode_supset();
            ++v37;
          }
          while ( (unsigned __int64)v37 < *(_QWORD *)(v36 + 8) );
        }
      }
      if ( *(_WORD *)(v70 + 32 * v32 + 24) == 5 && ++v52 == 2 )
      {
        *(_DWORD *)(a1[1] + 112) &= ~0x10u;
        v33 = sub_1CE9E0(a1[1]);
        if ( v33 )
        {
          get_func();
          v33[2] &= ~0x10uLL;
          update_func();
        }
      }
      ++v32;
    }
    while ( v55 != v32 );
  }
  if ( *(_DWORD *)(a1[104] + 84) != 8 || (v69 & 0x10) == 0 )
    goto LABEL_77;
  v38 = a1[1];
  v39 = *(_QWORD *)(v38 + 928);
  if ( !v39 )
  {
    v40 = *(_QWORD *)(v38 + 1504);
    v41 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 312LL);
    if ( v41 == sub_3EAE30 )
    {
      v39 = operator new(0x190u);
      sub_199470(v39, v38);
      *(_BYTE *)(v39 + 392) = 0;
      *(_QWORD *)v39 = &off_4ECBC0;
      *(_QWORD *)(v39 + 376) = -1;
      *(_QWORD *)(v39 + 384) = -1;
      *(_OWORD *)(v39 + 360) = -1;
    }
    else
    {
      v39 = ((__int64 (__fastcall *)(__int64, __int64, double))v41)(v40, a1[1], 0.0);
    }
    *(_QWORD *)(v38 + 928) = v39;
  }
  if ( !(unsigned __int8)sub_199720(v39, (__int64)&v63) )
  {
    v22 = -13;
  }
  else
  {
LABEL_77:
    sub_40A500(*(_DWORD **)(a1[1] + 1504), (__int64 *)(*(_QWORD *)(a1[1] + 920) + 8LL), v62.m128i_i64[1], v56);
    v22 = v57;
  }
LABEL_26:
  v23 = v76;
  if ( v76 )
  {
    v24 = v77;
    if ( (_QWORD)v77 )
    {
      v25 = 0;
      do
      {
        v26 = (_QWORD *)(v23 + 24 * v25);
        if ( *v26 )
        {
          v26[1] = 0;
          qfree();
          v23 = v76;
        }
        ++v25;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v77 = 0;
    qfree();
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree();
  }
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree();
  }
  return (unsigned int)v22;
}
