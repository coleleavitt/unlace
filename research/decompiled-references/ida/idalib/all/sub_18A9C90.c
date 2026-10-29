unsigned __int64 __fastcall sub_18A9C90(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v8; // r15
  _QWORD *v10; // rbp
  __int64 v11; // rbx
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r12
  __int64 v19; // r14
  size_t v20; // rax
  unsigned __int64 v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // r14
  __int64 v27; // r10
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r13
  __int64 v33; // rsi
  _QWORD *v34; // rax
  __int64 v35; // rax
  unsigned __int64 result; // rax
  __int64 *v37; // r13
  __int64 *v38; // r12
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  unsigned __int64 v43; // r13
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // r10
  __int64 v47; // rax
  bool v48; // zf
  __int64 v49; // rax
  unsigned __int64 *v50; // rax
  __int64 *v51; // rdx
  __int64 *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int64 v57; // rax
  __int64 v58; // r14
  __int64 v59; // rax
  unsigned __int64 v60; // r12
  __int64 v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // edx
  __int64 *v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // r14
  size_t v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rsi
  _QWORD *v74; // rax
  __int64 v75; // rdx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  __int64 v78; // r8
  __int64 v79; // r9
  char v80; // al
  __int64 v81; // r9
  __int64 v82; // rax
  int v83; // esi
  int v84; // r8d
  __int64 v85; // rsi
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rcx
  unsigned int *v92; // r14
  __int64 v93; // rax
  unsigned __int64 v94; // rdx
  __int64 *v95; // rbp
  unsigned __int64 v96; // rax
  __int64 *v97; // rax
  __int64 *v98; // rbx
  __int64 v99; // rdi
  unsigned __int64 v100; // rax
  int v102; // [rsp+8h] [rbp-70h]
  __int64 v103; // [rsp+10h] [rbp-68h]
  __int64 v104; // [rsp+18h] [rbp-60h]
  __int64 v105; // [rsp+20h] [rbp-58h]
  __int64 v106; // [rsp+20h] [rbp-58h]
  unsigned __int64 v107; // [rsp+20h] [rbp-58h]
  __int64 v108; // [rsp+20h] [rbp-58h]
  __int64 v109; // [rsp+20h] [rbp-58h]
  __int64 v110; // [rsp+20h] [rbp-58h]
  __int64 v112; // [rsp+28h] [rbp-50h]
  __m128 v113[4]; // [rsp+30h] [rbp-48h] BYREF

  v8 = a2;
  v10 = a1;
  v11 = a6;
  v102 = a4;
  v12 = *(_BYTE *)(a7 + 28) & 0x7F;
  if ( v12 == 23 )
  {
    v103 = *(_QWORD *)(a7 + 88);
    v104 = a7;
    v13 = sub_BAB630(v103, a2, a3, a4, a5, a6);
  }
  else
  {
    v104 = 0;
    v48 = v12 == 20;
    v49 = 0;
    if ( v48 )
      v49 = a7;
    v103 = v49;
    v13 = sub_BAB630(v49, a2, a3, a4, a5, a6);
  }
  v18 = v13;
  if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
    goto LABEL_4;
  v50 = sub_B8C3D0(a3, a2, v14, v15, v16, v17);
  v51 = (__int64 *)*v50;
  v15 = *v50 + 8LL * *((unsigned int *)v50 + 2);
  if ( *v50 < v15 )
  {
    v57 = *v50;
    while ( *(_WORD *)(*(_QWORD *)v57 + 36LL) != 307 )
    {
      v57 += 8LL;
      if ( v15 == v57 )
        goto LABEL_4;
    }
    if ( v15 == v57 )
      goto LABEL_4;
  }
  else
  {
    if ( v51 == (__int64 *)v15 )
      goto LABEL_4;
    if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 307 )
    {
      v52 = (__int64 *)(v15 + 8);
      do
      {
        v15 = (unsigned __int64)v52;
        if ( v51 == v52 )
          goto LABEL_4;
        v53 = *v52++;
      }
      while ( *(_WORD *)(v53 + 36) != 307 );
    }
  }
  v58 = *a8;
  if ( !*a8 )
  {
    v87 = operator new(0x18u);
    v91 = (__int64)a8;
    *(_QWORD *)v87 = 0;
    v92 = (unsigned int *)*a8;
    *(_QWORD *)(v87 + 8) = 0;
    *(_DWORD *)(v87 + 16) = 0;
    *a8 = v87;
    if ( v92 )
    {
      operator delete(*(_QWORD *)v92, 8LL * v92[4], 8);
      a2 = 24;
      operator delete(v92, 0x18u);
      v87 = *a8;
    }
    v58 = v87;
    if ( v18 )
    {
      v112 = v11;
      while ( 1 )
      {
        v93 = *(_QWORD *)(v18 + 120);
        if ( !v93 )
        {
          a2 = *(_QWORD *)(v18 + 96);
          sub_A794E0((__int64 *)(a2 + 88), a2, v88, v91, v89, v90);
          v93 = *(_QWORD *)(v18 + 120);
        }
        v94 = v93 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v93 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          if ( (*(_BYTE *)(v94 + 72) & 1) == 0 )
          {
            v91 = *(unsigned int *)(v94 + 48);
            if ( (_DWORD)v91 )
            {
LABEL_117:
              v94 = *(_QWORD *)(v94 + 40);
              v95 = (__int64 *)(v94 + 8 * v91);
            }
            else
            {
LABEL_142:
              v91 = v94;
              if ( (*(_BYTE *)(v94 + 72) & 1) != 0 )
              {
                sub_BA8900(v18);
                v93 = *(_QWORD *)(v18 + 120);
                v91 = v93 & 0xFFFFFFFFFFFFFFF8LL;
              }
              a2 = *(unsigned int *)(v91 + 24);
              v94 = *(_QWORD *)(v91 + 16);
              v95 = (__int64 *)(v94 + 8 * a2);
            }
            if ( !v93 )
            {
LABEL_133:
              a2 = *(_QWORD *)(v18 + 96);
              sub_A794E0((__int64 *)(a2 + 88), a2, v94, v91, v89, v90);
              v93 = *(_QWORD *)(v18 + 120);
            }
            v96 = v93 & 0xFFFFFFFFFFFFFFF8LL;
            v94 = v96;
            if ( v96 )
            {
              if ( (*(_BYTE *)(v96 + 72) & 1) != 0 )
              {
                sub_BA8900(v18);
                v94 = *(_QWORD *)(v18 + 120) & 0xFFFFFFFFFFFFFFF8LL;
                a2 = *(unsigned int *)(v94 + 48);
                if ( (_DWORD)a2 )
                {
LABEL_122:
                  v97 = *(__int64 **)(v94 + 40);
                }
                else
                {
                  if ( !*(_QWORD *)(v18 + 120) )
                  {
                    a2 = *(_QWORD *)(v18 + 96);
                    sub_A794E0((__int64 *)(a2 + 88), a2, v94, v91, v89, v90);
                    v94 = *(_QWORD *)(v18 + 120) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  v97 = nullptr;
                  if ( v94 )
                    goto LABEL_138;
                }
              }
              else
              {
                if ( *(_DWORD *)(v96 + 48) )
                  goto LABEL_122;
LABEL_138:
                v100 = v94;
                if ( (*(_BYTE *)(v94 + 72) & 1) != 0 )
                {
                  sub_BA8900(v18);
                  v100 = *(_QWORD *)(v18 + 120) & 0xFFFFFFFFFFFFFFF8LL;
                }
                v97 = *(__int64 **)(v100 + 16);
              }
            }
            else
            {
              v97 = nullptr;
            }
            if ( v95 != v97 )
            {
              v98 = v97;
              do
              {
                v99 = *v98;
                a2 = v58;
                ++v98;
                sub_18A99F0(v99, v58, v94, v91, v89, v90);
              }
              while ( v95 != v98 );
            }
            goto LABEL_126;
          }
          sub_BA8900(v18);
          v93 = *(_QWORD *)(v18 + 120);
          v94 = v93 & 0xFFFFFFFFFFFFFFF8LL;
          v91 = *(unsigned int *)((v93 & 0xFFFFFFFFFFFFFFF8LL) + 48);
          if ( (_DWORD)v91 )
            goto LABEL_117;
          if ( v93 )
          {
            if ( v94 )
              goto LABEL_142;
            goto LABEL_126;
          }
          a2 = *(_QWORD *)(v18 + 96);
          sub_A794E0((__int64 *)(a2 + 88), a2, v94, v91, v89, v90);
          v93 = *(_QWORD *)(v18 + 120);
          v94 = v93 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v93 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            goto LABEL_142;
        }
        if ( !v93 )
        {
          v95 = nullptr;
          goto LABEL_133;
        }
LABEL_126:
        v18 = sub_BAB630(v18, a2, v94, v91, v89, v90);
        if ( !v18 )
        {
          v10 = a1;
          v11 = v112;
          v58 = *a8;
          break;
        }
      }
    }
  }
  v59 = *(_QWORD *)(a3 + 40);
  v60 = v59 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v59 & 7) != 0 )
    v60 = 0;
  sub_1898420(
    v113,
    (_QWORD *)(*(_QWORD *)v58 + 8LL * *(unsigned int *)(v58 + 16)),
    (_QWORD *)(*(_QWORD *)v58 + 8LL * *(unsigned int *)(v58 + 16)),
    v58,
    1);
  v61 = *(_QWORD *)v58;
  v107 = v113[0].m128_u64[0];
  v62 = *(unsigned int *)(v58 + 16);
  if ( !(_DWORD)v62 )
    goto LABEL_107;
  v63 = (v62 - 1) & (((unsigned int)v60 >> 9) ^ ((unsigned int)v60 >> 4));
  v64 = (__int64 *)(v61 + 8LL * v63);
  v65 = *v64;
  if ( v60 != *v64 )
  {
    v83 = 1;
    if ( v65 != -4096 )
    {
      do
      {
        v84 = v83 + 1;
        v85 = ((_DWORD)v62 - 1) & (v63 + v83);
        v63 = v85;
        v64 = (__int64 *)(v61 + 8 * v85);
        v86 = *v64;
        if ( v60 == *v64 )
          goto LABEL_85;
        v83 = v84;
      }
      while ( v86 != -4096 );
    }
LABEL_107:
    sub_1898420(v113, (_QWORD *)(v61 + 8 * v62), (_QWORD *)(v61 + 8 * v62), v58, 1);
    result = v113[0].m128_u64[0];
    goto LABEL_86;
  }
LABEL_85:
  sub_1898420(v113, v64, (_QWORD *)(v61 + 8 * v62), v58, 1);
  result = v113[0].m128_u64[0];
LABEL_86:
  if ( v107 != result )
    return result;
  v18 = 0;
LABEL_4:
  if ( *(_DWORD *)(v10[29] + 368LL) > 3u )
    goto LABEL_11;
  v19 = *(_QWORD *)(v10[31] + 17504LL);
  v20 = j__strlen("forwardInvocation");
  v113[0].m128_u64[0] = sub_6F3470(v19, "forwardInvocation", v20);
  v21 = sub_FE3230(*(_QWORD **)(v10[31] + 17512LL), 1u, (unsigned __int64 *)v113);
  if ( *(_BYTE *)(a5 + 20) )
  {
    v22 = *(_QWORD **)a5;
    v15 = *(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 12);
    if ( *(_QWORD *)a5 != v15 )
    {
      if ( *v22 == v21 )
        goto LABEL_89;
      while ( (_QWORD *)v15 != ++v22 )
      {
        if ( v21 == *v22 )
          goto LABEL_89;
      }
    }
LABEL_11:
    v23 = 0;
    goto LABEL_12;
  }
  if ( !sub_2236570(a5, v21) )
    goto LABEL_11;
LABEL_89:
  v66 = *(_QWORD *)(v10[31] + 17504LL);
  v67 = j__strlen("NSProxy");
  v68 = sub_6F3470(v66, "NSProxy", v67);
  v23 = sub_BABB90(v103, v68, v69, v70, v71, v72);
LABEL_12:
  v24 = *(_QWORD *)(a3 + 104);
  if ( v24 )
  {
    v25 = (__int64 *)(v24 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v25 )
      goto LABEL_48;
  }
  else
  {
    v105 = v23;
    sub_A79820((__int64 *)(*(_QWORD *)(a3 + 96) + 88LL), *(_QWORD *)(a3 + 96), v23, v15, v16, v17);
    v23 = v105;
    v25 = (__int64 *)(*(_QWORD *)(a3 + 104) & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v25 )
    {
      if ( *(_QWORD *)(a3 + 104) )
        goto LABEL_48;
      sub_A79820((__int64 *)(*(_QWORD *)(a3 + 96) + 88LL), *(_QWORD *)(a3 + 96), v105, 0, v40, v41);
      v23 = v105;
      v25 = (__int64 *)(*(_QWORD *)(a3 + 104) & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v25 )
        goto LABEL_48;
      goto LABEL_47;
    }
  }
  v26 = *v25;
  if ( a3 == *v25 )
    goto LABEL_15;
LABEL_47:
  v26 = *v25;
  if ( *v25 )
  {
LABEL_15:
    v27 = v26 + 48;
    if ( v23 )
      goto LABEL_16;
    goto LABEL_49;
  }
LABEL_48:
  v26 = a3;
  v27 = a3 + 48;
  if ( v23 )
    goto LABEL_16;
LABEL_49:
  v106 = v27;
  v42 = sub_B8E970(v27);
  v27 = v106;
  v43 = v42;
  if ( !v42 )
    goto LABEL_16;
  while ( (*(_BYTE *)(v43 + 28) & 0x7F) != 0x12 || (*(_BYTE *)(v43 + 58) & 2) == 0 )
  {
    v43 = *(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v43 )
      goto LABEL_16;
  }
  v44 = v11;
  v45 = v106;
  v46 = v44;
LABEL_55:
  if ( (*(_BYTE *)(v43 + 59) & 3) != 2 && (*(_BYTE *)(v43 + 58) & 8) == 0 )
  {
    v73 = *(_QWORD *)(v43 + 40);
    if ( *(_BYTE *)(a5 + 20) )
    {
      v74 = *(_QWORD **)a5;
      v75 = *(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 12);
      if ( *(_QWORD *)a5 != v75 )
      {
        while ( v73 != *v74 )
        {
          if ( (_QWORD *)v75 == ++v74 )
            goto LABEL_94;
        }
        goto LABEL_57;
      }
    }
    else
    {
      v110 = v46;
      v82 = sub_2236570(a5, v73);
      v46 = v110;
      if ( v82 )
        goto LABEL_57;
      v73 = *(_QWORD *)(v43 + 40);
    }
LABEL_94:
    if ( v18 )
    {
      v108 = v46;
      v76 = sub_BAD910(v18, v73, 1, 0, 1, 0);
      v46 = v108;
      if ( v76 )
        goto LABEL_57;
      v73 = *(_QWORD *)(v43 + 40);
    }
    v109 = v46;
    v77 = sub_BAD910(v103, v73, 1, 1, 0, 0);
    v46 = v109;
    if ( !v77 || !v104 && (*(_BYTE *)(v77 + 58) & 8) == 0 )
    {
      v80 = sub_FD3830(*(_QWORD *)(v10[33] + 32LL), 0x1D36u, *(unsigned int *)(v8 + 24), v10[33], v78, v79);
      v46 = v109;
      if ( v80 != 1 )
      {
        sub_18A00C0((__int64)v10, v8, v43, 0x1D36u, v26, v81);
        v46 = v109;
      }
    }
  }
LABEL_57:
  while ( 1 )
  {
    v43 = *(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v43 )
      break;
    while ( (*(_BYTE *)(v43 + 28) & 0x7F) == 0x12 )
    {
      if ( (*(_BYTE *)(v43 + 58) & 2) != 0 )
        goto LABEL_55;
      v43 = *(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v43 )
        goto LABEL_61;
    }
  }
LABEL_61:
  v47 = v46;
  v27 = v45;
  v11 = v47;
LABEL_16:
  v32 = sub_B8E970(v27);
  if ( !v32 )
    goto LABEL_31;
  while ( (*(_BYTE *)(v32 + 28) & 0x7F) != 0x12 || (*(_BYTE *)(v32 + 58) & 2) != 0 )
  {
    v32 = *(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v32 )
      goto LABEL_31;
  }
LABEL_21:
  if ( (*(_BYTE *)(v32 + 59) & 3) != 2 )
  {
    v33 = *(_QWORD *)(v32 + 40);
    if ( *(_BYTE *)(v11 + 20) )
    {
      v34 = *(_QWORD **)v11;
      v28 = *(_QWORD *)v11 + 8LL * *(unsigned int *)(v11 + 12);
      if ( *(_QWORD *)v11 != v28 )
      {
        while ( v33 != *v34 )
        {
          if ( (_QWORD *)v28 == ++v34 )
            goto LABEL_38;
        }
        goto LABEL_27;
      }
    }
    else if ( sub_2236570(v11, v33) )
    {
      goto LABEL_27;
    }
LABEL_38:
    if ( (!v18 || !sub_BAD910(v18, *(_QWORD *)(v32 + 40), 0, 0, 1, 0))
      && (!v104 || !sub_BAD910(v103, *(_QWORD *)(v32 + 40), 0, 1, 0, 0))
      && (unsigned __int8)sub_FD3830(
                            *(_QWORD *)(v10[33] + 32LL),
                            0x1D36u,
                            *(unsigned int *)(v8 + 24),
                            v10[33],
                            v30,
                            v31) != 1 )
    {
      sub_18A00C0((__int64)v10, v8, v32, 0x1D36u, v26, v31);
    }
  }
LABEL_27:
  while ( 1 )
  {
    v32 = *(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v32 )
      break;
    while ( (*(_BYTE *)(v32 + 28) & 0x7F) == 0x12 )
    {
      if ( (*(_BYTE *)(v32 + 58) & 2) == 0 )
        goto LABEL_21;
      v32 = *(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v32 )
        goto LABEL_31;
    }
  }
LABEL_31:
  v35 = *(_QWORD *)(v26 + 104);
  if ( v35 )
  {
    result = v35 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !result )
      return result;
    goto LABEL_33;
  }
  sub_A79820((__int64 *)(*(_QWORD *)(v26 + 96) + 88LL), *(_QWORD *)(v26 + 96), v28, v29, v30, v31);
  result = *(_QWORD *)(v26 + 104) & 0xFFFFFFFFFFFFFFF8LL;
  if ( result )
  {
LABEL_33:
    v37 = *(__int64 **)(result + 8);
    result = *(unsigned int *)(result + 16);
    v38 = &v37[result];
    goto LABEL_34;
  }
  if ( *(_QWORD *)(v26 + 104) )
    return result;
  sub_A79820((__int64 *)(*(_QWORD *)(v26 + 96) + 88LL), *(_QWORD *)(v26 + 96), 0, v54, v55, v56);
  result = *(_QWORD *)(v26 + 104) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !result )
    return result;
  v37 = *(__int64 **)(result + 8);
  v38 = nullptr;
LABEL_34:
  while ( v38 != v37 )
  {
    v39 = *v37++;
    result = sub_18A9C90((_DWORD)v10, v8, v39, v102, a5, v11, a7, (__int64)a8);
  }
  return result;
}
