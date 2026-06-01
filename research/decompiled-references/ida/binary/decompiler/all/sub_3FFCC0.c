__int64 __fastcall sub_3FFCC0(_QWORD *a1, __int64 a2, _QWORD *a3)
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
  double v30; // xmm0_8
  int v31; // ebx
  int v32; // eax
  unsigned __int64 v33; // r14
  __int64 v34; // rbx
  int v35; // ebx
  unsigned int v36; // r15d
  __int64 v37; // r15
  int v38; // r12d
  __int64 v39; // r12
  __int64 v40; // rbx
  __int64 v41; // rdi
  __int64 (__fastcall *v42)(__int64, __int64); // rax
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rsi
  __int64 v46; // rax
  _QWORD *v47; // rbx
  int v48; // r12d
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 insn; // rdx
  __int64 v52; // rax
  int v53; // [rsp+8h] [rbp-2F0h]
  __int64 v54; // [rsp+8h] [rbp-2F0h]
  __int64 head; // [rsp+10h] [rbp-2E8h]
  __int64 v56; // [rsp+10h] [rbp-2E8h]
  int v57; // [rsp+18h] [rbp-2E0h]
  int v58; // [rsp+2Ch] [rbp-2CCh] BYREF
  __int64 v59; // [rsp+30h] [rbp-2C8h]
  __int128 v60; // [rsp+38h] [rbp-2C0h]
  __int64 v61; // [rsp+50h] [rbp-2A8h]
  __int128 v62; // [rsp+58h] [rbp-2A0h]
  __m128i v63; // [rsp+70h] [rbp-288h] BYREF
  __m128i v64; // [rsp+80h] [rbp-278h] BYREF
  __int64 v65; // [rsp+90h] [rbp-268h]
  int v66; // [rsp+98h] [rbp-260h]
  __int64 (__fastcall **v67)(); // [rsp+A0h] [rbp-258h]
  __int64 v68; // [rsp+A8h] [rbp-250h]
  int v69; // [rsp+B0h] [rbp-248h]
  __int64 v70; // [rsp+C0h] [rbp-238h] BYREF
  __int64 v71; // [rsp+C8h] [rbp-230h]
  __int128 v72; // [rsp+D0h] [rbp-228h]
  __int64 v73; // [rsp+E0h] [rbp-218h]
  __int64 v74; // [rsp+E8h] [rbp-210h]
  __int64 v75; // [rsp+F0h] [rbp-208h]
  __int128 v76; // [rsp+F8h] [rbp-200h]
  __int64 v77; // [rsp+108h] [rbp-1F0h]
  __int128 v78; // [rsp+110h] [rbp-1E8h]
  __int64 v79; // [rsp+120h] [rbp-1D8h]
  __int64 v80; // [rsp+128h] [rbp-1D0h]
  __int128 v81; // [rsp+130h] [rbp-1C8h]
  __int64 v82; // [rsp+140h] [rbp-1B8h]
  int v83; // [rsp+148h] [rbp-1B0h]
  __int128 v84; // [rsp+150h] [rbp-1A8h]
  __int64 v85; // [rsp+160h] [rbp-198h]
  __int64 v86; // [rsp+168h] [rbp-190h]
  __int64 v87; // [rsp+170h] [rbp-188h]
  char v88; // [rsp+178h] [rbp-180h] BYREF
  char v89; // [rsp+179h] [rbp-17Fh]
  unsigned __int16 v90; // [rsp+17Eh] [rbp-17Ah]
  _QWORD v91[8]; // [rsp+2B8h] [rbp-40h] BYREF

  v5 = a1[104];
  v91[0] = __readfsqword(0x28u);
  *(_BYTE *)(v5 + 3800) = 0;
  sub_14F3F0(a1[104], *(_QWORD *)(a1[104] + 3784LL));
  sub_14F3F0(a1[104], *(_QWORD *)(a1[104] + 3792LL));
  sub_1CFE70(a1[100]);
  v7 = a1[100];
  v8 = a1[104];
  v59 = 0;
  LODWORD(v8) = *(_DWORD *)(v8 + 464);
  v9 = *(_QWORD *)(v7 + 776);
  v60 = 0;
  *(_DWORD *)(v9 + 32) = v8;
  *(_QWORD *)(v9 + 56) = a1;
  *(_DWORD *)(a1[104] + 3776LL) = 0;
  *(_DWORD *)(a1[104] + 3780LL) = -1;
  v10 = a1[1];
  a1[105] = a2;
  a1[106] = a3;
  if ( *(int *)(a2 + 96) > 0 )
  {
    v11 = 0;
    do
    {
      while ( 1 )
      {
        if ( sub_64030(a3, v11) )
        {
          head = prev_head();
          v12 = v11 << 6;
          v13 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 96LL);
          if ( v13 == sub_131D20 )
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
            v16 = v15 == sub_131D40 ? **(_DWORD **)(*(_QWORD *)(a2 + 72) + v12 + 16) : v15(a2, v11, 0);
            if ( v16 >= *(_DWORD *)(a2 + 96) )
              break;
          }
          if ( (unsigned int)fc_calc_block_type() - 2 <= 1 )
            break;
          if ( sub_1CD070(v10, head) == *(_QWORD *)(v10 + 136) )
          {
            v85 = -1;
            v17 = &v88;
            v86 = 0;
            v87 = 0;
            v84 = -1;
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
            while ( v91 != (_QWORD *)v17 );
            if ( (int)decode_insn() > 0 && (unsigned __int16)(v86 - 87) <= 1u && v89 == 1 )
              break;
          }
        }
        if ( *(_DWORD *)(a2 + 96) <= (int)++v11 )
          goto LABEL_21;
      }
      v18 = v60;
      v19 = v59;
      if ( *((_QWORD *)&v60 + 1) < (unsigned __int64)(v60 + 1) )
      {
        v59 = qvector_reserve();
        v19 = v59;
        v18 = v60;
      }
      ++v11;
      *(_QWORD *)(v19 + 8 * v18) = head;
      *(_QWORD *)&v60 = v60 + 1;
    }
    while ( *(_DWORD *)(a2 + 96) > (int)v11 );
LABEL_21:
    v10 = a1[1];
  }
  v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4E8D18, (__m128i)(unsigned __int64)&v70);
  v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DB568, (__m128i)(unsigned __int64)off_4DB548);
  if ( (*(_BYTE *)(v10 + 112) & 0x10) != 0 )
  {
    *(_DWORD *)(v10 + 1184) = *(_DWORD *)(a1[104] + 400LL);
    v10 = a1[1];
  }
  v70 = 192;
  v71 = 0;
  v73 = -1;
  v74 = 0;
  v75 = 0;
  v77 = 0;
  v79 = 0;
  v80 = -1;
  v82 = 0;
  v83 = 144;
  v65 = -1;
  v66 = -1;
  v67 = off_4DB548;
  v68 = -1;
  v69 = -1;
  v72 = 0;
  v76 = 0;
  v78 = 0;
  v81 = 0;
  v63 = v20;
  v64 = v21;
  if ( !(unsigned __int8)sub_1CCA80(&v63, &v58, v10, a2) )
  {
    v22 = v58;
    if ( v58 )
      goto LABEL_26;
    v85 = -1;
    v28 = &v88;
    v86 = 0;
    v87 = 0;
    v84 = -1;
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
    while ( v28 != (char *)v91 );
    decode_insn();
    if ( (_WORD)v86 != 143 || v89 != 1 )
      goto LABEL_44;
    v35 = 0;
    v36 = v90;
    v62 = 0;
    v61 = 0;
    if ( !(_QWORD)v60 )
      goto LABEL_89;
    do
    {
      if ( decode_prev_insn() == -1 || (_WORD)v86 != 134 || v89 != 1 || v36 != v90 )
        break;
      v43 = v62;
      v44 = v85;
      v45 = v61;
      if ( *((_QWORD *)&v62 + 1) < (unsigned __int64)(v62 + 1) )
      {
        v54 = v85;
        v61 = qvector_reserve();
        v45 = v61;
        v44 = v54;
        v43 = v62;
      }
      ++v35;
      *(_QWORD *)(v45 + 8 * v43) = v44;
      *(_QWORD *)&v62 = v62 + 1;
    }
    while ( v35 < (unsigned __int64)v60 );
    if ( (_QWORD)v60 != (_QWORD)v62 )
      goto LABEL_69;
    if ( (_QWORD)v62 == 1 && decode_prev_insn() != -1 && (unsigned __int8)has_insn_feature() )
    {
      insn = decode_prev_insn();
      v46 = a1[1];
      if ( *(_QWORD *)(v46 + 40) == insn )
      {
LABEL_69:
        if ( v61 )
        {
          *(_QWORD *)&v62 = 0;
          qfree();
        }
LABEL_44:
        v22 = v58;
        goto LABEL_26;
      }
    }
    else
    {
LABEL_89:
      v46 = a1[1];
    }
    v47 = *(_QWORD **)(v46 + 920);
    v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)a1[104] + 168LL))(a1[104], v36);
    v49 = v47[2];
    v50 = v47[1];
    if ( v47[3] < (unsigned __int64)(v49 + 1) )
    {
      v52 = qvector_reserve();
      v47[1] = v52;
      v50 = v52;
      v49 = v47[2];
    }
    *(_DWORD *)(v50 + 4 * v49) = v48;
    ++v47[2];
    if ( (_QWORD)v62 )
    {
      do
      {
        netnode_supset();
        ++v22;
      }
      while ( v22 < (unsigned __int64)v62 );
    }
    netnode_supset();
    goto LABEL_69;
  }
  v85 = -1;
  v86 = 0;
  v87 = 0;
  v57 = v72;
  v29 = &v88;
  v84 = -1;
  v30 = 0.0;
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
  while ( v91 != (_QWORD *)v29 );
  if ( !(_QWORD)v60 )
    goto LABEL_53;
  v31 = 0;
  do
  {
    decode_insn();
    if ( sub_D3E80() != 1 )
    {
      if ( !under_debugger )
        sub_37EA20(50526);
      BUG();
    }
    ++v31;
  }
  while ( v31 < (unsigned __int64)v60 );
  if ( !(_QWORD)v60 || (v32 = v78, (unsigned __int64)v78 >= v57) )
LABEL_53:
    v32 = v57;
  v53 = 0;
  v33 = 0;
  v56 = v32;
  if ( v32 > 0 )
  {
    do
    {
      if ( v33 < (unsigned __int64)v78 )
      {
        v37 = v77 + 24 * v33;
        if ( *(_QWORD *)(v37 + 8) )
        {
          v38 = 0;
          do
          {
            LOBYTE(v61) = 2;
            netnode_supset();
            ++v38;
          }
          while ( (unsigned __int64)v38 < *(_QWORD *)(v37 + 8) );
        }
      }
      if ( *(_WORD *)(v71 + 32 * v33 + 24) == 5 && ++v53 == 2 )
      {
        *(_DWORD *)(a1[1] + 112LL) &= ~0x10u;
        v34 = sub_1CBEA0(a1[1]);
        if ( v34 )
        {
          get_func();
          *(_QWORD *)(v34 + 16) &= ~0x10uLL;
          update_func();
        }
      }
      ++v33;
    }
    while ( v56 != v33 );
  }
  if ( *(_DWORD *)(a1[104] + 84LL) != 8 || (v70 & 0x10) == 0 )
    goto LABEL_77;
  v39 = a1[1];
  v40 = *(_QWORD *)(v39 + 928);
  if ( !v40 )
  {
    v41 = *(_QWORD *)(v39 + 1504);
    v42 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 312LL);
    if ( v42 == sub_3E01C0 )
    {
      v40 = operator new(0x190u);
      sub_196C30(v40, v39);
      *(_BYTE *)(v40 + 392) = 0;
      v30 = NAN;
      *(_QWORD *)v40 = &off_4EBB80;
      *(_QWORD *)(v40 + 376) = -1;
      *(_QWORD *)(v40 + 384) = -1;
      *(_OWORD *)(v40 + 360) = -1;
    }
    else
    {
      v40 = ((__int64 (__fastcall *)(__int64, _QWORD, double))v42)(v41, a1[1], 0.0);
    }
    *(_QWORD *)(v39 + 928) = v40;
  }
  if ( !(unsigned __int8)sub_196EE0(v40, &v64, v30) )
  {
    v22 = -13;
  }
  else
  {
LABEL_77:
    sub_3FF980(*(_DWORD **)(a1[1] + 1504LL), (__int64 *)(*(_QWORD *)(a1[1] + 920LL) + 8LL), v63.m128i_i64[1], v57);
    v22 = v58;
  }
LABEL_26:
  v23 = v77;
  if ( v77 )
  {
    v24 = v78;
    if ( (_QWORD)v78 )
    {
      v25 = 0;
      do
      {
        v26 = (_QWORD *)(v23 + 24 * v25);
        if ( *v26 )
        {
          v26[1] = 0;
          qfree();
          v23 = v77;
        }
        ++v25;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v78 = 0;
    qfree();
  }
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree();
  }
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree();
  }
  if ( v59 )
  {
    *(_QWORD *)&v60 = 0;
    qfree();
  }
  return (unsigned int)v22;
}
