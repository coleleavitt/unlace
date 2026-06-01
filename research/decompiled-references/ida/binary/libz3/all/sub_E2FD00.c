void __fastcall sub_E2FD00(__m128i *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r12
  _DWORD *v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  int *v9; // rax
  __int64 v10; // r12
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // r14d
  __int64 v15; // r15
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  _BYTE *v19; // rax
  int v20; // r13d
  int v21; // r12d
  _DWORD *v22; // rax
  int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rax
  const char **v26; // rax
  __m128i *v27; // rdi
  __m128i v28; // xmm0
  __int64 v29; // rdx
  _QWORD *exception; // rax
  int v31; // eax
  __int64 v32; // rdx
  int *v33; // rax
  int v34; // ecx
  __int64 v35; // rcx
  _DWORD *v36; // rax
  _DWORD *v37; // rax
  int v38; // eax
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r8
  _DWORD *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdi
  _DWORD *v46; // rcx
  __int64 v47; // r9
  char v48; // di
  __int64 v49; // rcx
  __int64 v50; // r8
  _DWORD *v51; // rsi
  __int64 v52; // rcx
  _DWORD *v53; // rsi
  __int64 v54; // r9
  __int64 v55; // rsi
  _DWORD *v56; // r9
  __int64 v57; // rsi
  _DWORD *v58; // rcx
  _DWORD *v59; // rdi
  _DWORD *v60; // rdi
  __int64 v61; // rdi
  __int64 v62; // r9
  _DWORD *v63; // r8
  _DWORD *v64; // r8
  _DWORD *v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // r8
  _DWORD *v68; // rdi
  _DWORD *v69; // rdi
  _DWORD *v70; // rsi
  __int64 v71; // rsi
  __int64 v72; // rsi
  __int64 v73; // rcx
  __int64 v74; // r10
  _DWORD *v75; // r9
  _DWORD *v76; // r9
  _DWORD *v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // r9
  _DWORD *v80; // rdi
  _DWORD *v81; // rdi
  _DWORD *v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdi
  _DWORD *v85; // rsi
  _DWORD *v86; // rsi
  _DWORD *v87; // rax
  __int64 v88; // rax
  __int64 v89; // rsi
  _DWORD *v90; // rcx
  _DWORD *v91; // rcx
  _DWORD *v92; // rax
  int *v93; // rax
  int v94; // edx
  int v95; // eax
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rax
  __int64 v99; // rdi
  __int64 v100; // rsi
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rsi
  __int64 v107; // rdi
  __m128i v108; // xmm0
  __int64 v109; // rdx
  __m128i *v110; // [rsp+0h] [rbp-1E8h] BYREF
  __m128i src; // [rsp+8h] [rbp-1E0h] BYREF
  char v112[16]; // [rsp+20h] [rbp-1C8h] BYREF
  char v113[432]; // [rsp+38h] [rbp-1B0h] BYREF

  v2 = a2;
  v4 = sub_15D1F10(a2);
  v5 = *(_DWORD **)(v4 + 24);
  if ( !v5 )
  {
LABEL_42:
    if ( !a1[18].m128i_i8[8] )
      sub_E2E330(a1, "logic does not support uninterpreted sorts");
    v8 = *(_QWORD *)(a2 + 16);
    v9 = *(int **)(v8 + 24);
    if ( v9 )
    {
      v10 = *v9;
      if ( (_DWORD)v10 != -1 )
        goto LABEL_11;
    }
LABEL_45:
    if ( !a1[18].m128i_i8[14] )
      return;
    v20 = *(_DWORD *)(a2 + 24);
    if ( !v20 )
      return;
    v21 = 0;
LABEL_49:
    v22 = *(_DWORD **)(sub_15D1F10(v2) + 24);
    if ( !v22 || *v22 != 5 )
      goto LABEL_48;
    if ( *(_WORD *)(v2 + 4) )
      goto LABEL_52;
    v32 = *(_QWORD *)(v2 + 16);
    v33 = *(int **)(v32 + 24);
    if ( !v33 )
      goto LABEL_48;
    v34 = *v33;
    if ( *v33 == -1 )
      goto LABEL_48;
    if ( !v34 )
    {
      if ( v33[1] == 4 )
        goto LABEL_48;
      goto LABEL_104;
    }
    if ( v34 != 5 )
    {
LABEL_104:
      v35 = v2;
      goto LABEL_105;
    }
    v72 = v2;
    if ( v33[1] == 8 )
    {
      v35 = *(_QWORD *)(v2 + 32);
      if ( *(_WORD *)(v35 + 4) )
        goto LABEL_107;
      v33 = *(int **)(*(_QWORD *)(v35 + 16) + 24LL);
      if ( !v33 || *v33 != 5 )
      {
LABEL_105:
        v36 = *(_DWORD **)(*(_QWORD *)(v35 + 16) + 24LL);
        if ( !v36 )
          goto LABEL_107;
        if ( *v36 != 5 )
          goto LABEL_107;
        if ( v36[1] != 10 )
          goto LABEL_107;
        v83 = *(_QWORD *)(v35 + 32);
        if ( *(_WORD *)(v83 + 4) )
          goto LABEL_107;
        v84 = *(_QWORD *)(v83 + 16);
        v85 = *(_DWORD **)(v84 + 24);
        if ( !v85 )
          goto LABEL_107;
        if ( *v85 == 5 && v85[1] == 8 )
        {
          v83 = *(_QWORD *)(v83 + 32);
          if ( *(_WORD *)(v83 + 4) )
            goto LABEL_107;
          v86 = *(_DWORD **)(*(_QWORD *)(v83 + 16) + 24LL);
          if ( !v86 )
            goto LABEL_107;
        }
        else
        {
          v86 = *(_DWORD **)(v84 + 24);
        }
        if ( *v86 == 5 && v86[1] == 18 )
        {
          v102 = *(_QWORD *)(v83 + 32);
          if ( *(_WORD *)(v102 + 4) )
            goto LABEL_107;
          v87 = *(_DWORD **)(*(_QWORD *)(v102 + 16) + 24LL);
          if ( !v87 )
            goto LABEL_107;
        }
        else
        {
          v87 = *(_DWORD **)(*(_QWORD *)(v83 + 16) + 24LL);
        }
        if ( *v87 == 5 && !v87[1] )
        {
          v88 = *(_QWORD *)(v35 + 40);
          if ( !*(_WORD *)(v88 + 4) )
          {
            v89 = *(_QWORD *)(v88 + 16);
            v90 = *(_DWORD **)(v89 + 24);
            if ( v90 )
            {
              if ( *v90 == 5 && v90[1] == 8 )
              {
                v88 = *(_QWORD *)(v88 + 32);
                if ( *(_WORD *)(v88 + 4) )
                  goto LABEL_107;
                v91 = *(_DWORD **)(*(_QWORD *)(v88 + 16) + 24LL);
                if ( !v91 )
                  goto LABEL_107;
              }
              else
              {
                v91 = *(_DWORD **)(v89 + 24);
              }
              if ( *v91 != 5 || v91[1] != 18 )
              {
                v92 = *(_DWORD **)(*(_QWORD *)(v88 + 16) + 24LL);
                goto LABEL_243;
              }
              v105 = *(_QWORD *)(v88 + 32);
              if ( !*(_WORD *)(v105 + 4) )
              {
                v92 = *(_DWORD **)(*(_QWORD *)(v105 + 16) + 24LL);
                if ( v92 )
                {
LABEL_243:
                  if ( *v92 == 5 && !v92[1] )
                    goto LABEL_48;
                }
              }
            }
          }
        }
LABEL_107:
        v37 = *(_DWORD **)(v32 + 24);
        if ( !v37 )
          goto LABEL_52;
        if ( *v37 != 5 )
          goto LABEL_52;
        v38 = v37[1];
        if ( v38 != 6 && v38 != 7 )
          goto LABEL_52;
        v39 = v2;
LABEL_112:
        v40 = *(unsigned int *)(v39 + 24);
        if ( !(_DWORD)v40 )
          goto LABEL_48;
        v41 = v39;
        v42 = v39 + 8 * v40;
        v39 = 0;
        while ( 1 )
        {
          v44 = *(_QWORD *)(v41 + 32);
          if ( *(_WORD *)(v44 + 4) )
            break;
          v45 = *(_QWORD *)(v41 + 32);
          v46 = *(_DWORD **)(*(_QWORD *)(v44 + 16) + 24LL);
          if ( !v46 || *v46 != 5 )
            goto LABEL_114;
          if ( v46[1] == 8 )
          {
            v45 = *(_QWORD *)(v44 + 32);
            if ( *(_WORD *)(v45 + 4) )
              break;
            v46 = *(_DWORD **)(*(_QWORD *)(v45 + 16) + 24LL);
            if ( !v46 || *v46 != 5 )
              goto LABEL_114;
          }
          if ( (v47 = v45, v46[1] == 8)
            && ((v47 = *(_QWORD *)(v45 + 32), *(_WORD *)(v47 + 4))
             || (v46 = *(_DWORD **)(*(_QWORD *)(v47 + 16) + 24LL)) == nullptr
             || *v46 != 5)
            || v46[1] == 18
            && ((v96 = *(_QWORD *)(v47 + 32), *(_WORD *)(v96 + 4))
             || (v46 = *(_DWORD **)(*(_QWORD *)(v96 + 16) + 24LL)) == nullptr
             || *v46 != 5)
            || v46[1] )
          {
LABEL_114:
            v43 = *(_DWORD **)(*(_QWORD *)(v45 + 16) + 24LL);
            if ( !v43 )
              break;
            if ( *v43 != 5 )
              break;
            if ( v43[1] != 10 )
              break;
            v73 = *(_QWORD *)(v45 + 32);
            if ( *(_WORD *)(v73 + 4) )
              break;
            v74 = *(_QWORD *)(v73 + 16);
            v75 = *(_DWORD **)(v74 + 24);
            if ( !v75 )
              break;
            if ( *v75 == 5 && v75[1] == 8 )
            {
              v73 = *(_QWORD *)(v73 + 32);
              if ( *(_WORD *)(v73 + 4) )
                break;
              v76 = *(_DWORD **)(*(_QWORD *)(v73 + 16) + 24LL);
              if ( !v76 )
                break;
            }
            else
            {
              v76 = *(_DWORD **)(v74 + 24);
            }
            if ( *v76 == 5 && v76[1] == 18 )
            {
              v101 = *(_QWORD *)(v73 + 32);
              if ( *(_WORD *)(v101 + 4) )
                break;
              v77 = *(_DWORD **)(*(_QWORD *)(v101 + 16) + 24LL);
              if ( !v77 )
                break;
            }
            else
            {
              v77 = *(_DWORD **)(*(_QWORD *)(v73 + 16) + 24LL);
            }
            if ( *v77 != 5 )
              break;
            if ( v77[1] )
              break;
            v78 = *(_QWORD *)(v45 + 40);
            if ( *(_WORD *)(v78 + 4) )
              break;
            v79 = *(_QWORD *)(v78 + 16);
            v80 = *(_DWORD **)(v79 + 24);
            if ( !v80 )
              break;
            if ( *v80 == 5 && v80[1] == 8 )
            {
              v78 = *(_QWORD *)(v78 + 32);
              if ( *(_WORD *)(v78 + 4) )
                break;
              v81 = *(_DWORD **)(*(_QWORD *)(v78 + 16) + 24LL);
              if ( !v81 )
                break;
            }
            else
            {
              v81 = *(_DWORD **)(v79 + 24);
            }
            if ( *v81 == 5 && v81[1] == 18 )
            {
              v104 = *(_QWORD *)(v78 + 32);
              if ( *(_WORD *)(v104 + 4) )
                break;
              v82 = *(_DWORD **)(*(_QWORD *)(v104 + 16) + 24LL);
              if ( !v82 )
                break;
            }
            else
            {
              v82 = *(_DWORD **)(*(_QWORD *)(v78 + 16) + 24LL);
            }
            if ( *v82 != 5 || v82[1] )
              break;
          }
LABEL_118:
          v41 += 8;
          if ( v41 == v42 )
          {
            if ( !v39 )
              goto LABEL_48;
            if ( *(_WORD *)(v39 + 4) )
              goto LABEL_52;
            v93 = *(int **)(*(_QWORD *)(v39 + 16) + 24LL);
            if ( !v93 )
              goto LABEL_48;
            v94 = *v93;
            if ( *v93 == -1 )
              goto LABEL_48;
            if ( v94 )
            {
              if ( v94 != 5 )
                goto LABEL_52;
              v95 = v93[1];
              if ( v95 != 6 && v95 != 7 )
                goto LABEL_52;
              goto LABEL_112;
            }
            if ( v93[1] == 4 )
            {
LABEL_48:
              if ( v20 != ++v21 )
                goto LABEL_49;
              return;
            }
LABEL_52:
            sub_E2E330(a1, "logic only supports difference arithmetic");
          }
        }
        if ( v39 )
          goto LABEL_52;
        v39 = *(_QWORD *)(v41 + 32);
        goto LABEL_118;
      }
      if ( v33[1] == 8 )
      {
        v72 = *(_QWORD *)(v35 + 32);
        if ( *(_WORD *)(v72 + 4) )
          goto LABEL_105;
        v33 = *(int **)(*(_QWORD *)(v72 + 16) + 24LL);
        if ( !v33 || *v33 != 5 )
          goto LABEL_105;
        goto LABEL_199;
      }
      v72 = *(_QWORD *)(v2 + 32);
    }
    v35 = v72;
LABEL_199:
    if ( v33[1] != 18
      || (v98 = *(_QWORD *)(v72 + 32), !*(_WORD *)(v98 + 4))
      && (v33 = *(int **)(*(_QWORD *)(v98 + 16) + 24LL)) != nullptr
      && *v33 == 5 )
    {
      if ( !v33[1] )
        goto LABEL_48;
    }
    goto LABEL_105;
  }
  while ( 1 )
  {
    if ( *v5 == -1 )
      goto LABEL_42;
    if ( *(_QWORD *)(a1->m128i_i64[0] + 840) == v4 )
      goto LABEL_9;
    if ( *v5 != 5 )
      goto LABEL_5;
    v23 = v5[1];
    if ( v23 == 1 )
      break;
    if ( !v23 )
    {
      if ( !a1[18].m128i_i8[12] )
        sub_E2E330(a1, "logic does not support reals");
      goto LABEL_9;
    }
LABEL_5:
    if ( (unsigned __int8)sub_1673B10(&a1[2], v4) )
    {
      if ( !a1[19].m128i_i8[0] )
        sub_E2E330(a1, "logic does not support bitvectors");
      goto LABEL_9;
    }
    v6 = sub_15F0200(&a1[13]);
    v7 = *(_QWORD *)(v4 + 24);
    if ( !v7 )
      goto LABEL_9;
    if ( v6 == *(_DWORD *)v7 )
    {
      if ( !*(_DWORD *)(v7 + 4) && !a1[18].m128i_i8[9] )
        sub_E2E330(a1, "logic does not support algebraic datatypes");
      goto LABEL_9;
    }
    if ( *(_DWORD *)v7 != a1[3].m128i_i32[2] || *(_DWORD *)(v7 + 4) || a1[18].m128i_i8[10] )
      goto LABEL_9;
    if ( !a1[18].m128i_i8[11] )
      sub_E2E330(a1, "logic does not support arrays");
    v13 = *(_QWORD *)(v7 + 8);
    if ( !v13 )
    {
      v14 = -1;
LABEL_34:
      v15 = 0;
      v16 = 16LL * v14;
      do
      {
        v17 = v15 + v13;
        if ( *(_BYTE *)(v17 + 8) != 1 )
          goto LABEL_367;
        if ( !(unsigned __int8)sub_1673B10(&a1[2], *(_QWORD *)v17) )
          sub_E2E330(a1, "logic supports only arrays from bitvectors to bitvectors");
        v15 += 16;
        v13 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL);
      }
      while ( v16 != v15 );
      v18 = 0xFFFFFFFF0LL;
      if ( !v13 )
        goto LABEL_40;
      goto LABEL_39;
    }
    v14 = *(_DWORD *)(v13 - 4) - 1;
    if ( *(_DWORD *)(v13 - 4) != 1 )
      goto LABEL_34;
LABEL_39:
    v18 = 16LL * (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
LABEL_40:
    v19 = (_BYTE *)(v18 + v13);
    if ( v19[8] != 1 )
LABEL_367:
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    v4 = *(_QWORD *)v19;
    v5 = *(_DWORD **)(*(_QWORD *)v19 + 24LL);
    if ( !v5 )
      goto LABEL_42;
  }
  if ( !a1[18].m128i_i8[13] )
    sub_E2E330(a1, "logic does not support integers");
LABEL_9:
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(int **)(v8 + 24);
  if ( !v9 || (v10 = *v9, (_DWORD)v10 == -1) )
  {
    if ( !a1[18].m128i_i8[8] && *(_DWORD *)(v8 + 32) )
      sub_E2E330(a1, "logic does not support uninterpreted functions");
    goto LABEL_45;
  }
LABEL_11:
  if ( (_DWORD)v10 == 5 )
  {
    if ( *(_WORD *)(a2 + 4) )
    {
      if ( !a1[18].m128i_i8[13] )
        return;
      goto LABEL_64;
    }
    v12 = v9[1];
    if ( v12 != 9 )
    {
      if ( (unsigned int)(v12 - 10) > 1 && (unsigned int)(v12 - 15) > 1 )
        goto LABEL_24;
      if ( *(_DWORD *)(a2 + 24) == 2 )
      {
        if ( a1[18].m128i_i8[15] )
          goto LABEL_24;
        v24 = *(_QWORD *)(a2 + 40);
        if ( !*(_WORD *)(v24 + 4) )
        {
          v59 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL);
          if ( v59 && *v59 == 5 )
          {
            if ( v59[1] != 8 )
              goto LABEL_271;
            v24 = *(_QWORD *)(v24 + 32);
            if ( *(_WORD *)(v24 + 4) )
              goto LABEL_71;
            v59 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL);
            if ( v59 )
            {
              if ( *v59 == 5 )
              {
LABEL_271:
                v97 = v24;
                if ( v59[1] != 8
                  || (v97 = *(_QWORD *)(v24 + 32), !*(_WORD *)(v97 + 4))
                  && (v59 = *(_DWORD **)(*(_QWORD *)(v97 + 16) + 24LL)) != nullptr
                  && *v59 == 5 )
                {
                  if ( v59[1] != 18
                    || (v99 = *(_QWORD *)(v97 + 32), !*(_WORD *)(v99 + 4))
                    && (v59 = *(_DWORD **)(*(_QWORD *)(v99 + 16) + 24LL)) != nullptr
                    && *v59 == 5 )
                  {
                    if ( !v59[1] )
                    {
LABEL_24:
                      if ( !a1[18].m128i_i8[14] || v12 != 2 && (unsigned int)(v12 - 3) > 2 )
                      {
LABEL_93:
                        if ( !a1[18].m128i_i8[13] )
                        {
LABEL_96:
                          if ( *v9 == 5 )
                          {
                            v31 = v9[1];
                            if ( v31 == 18 || v31 == 19 )
                              sub_E2E330(a1, "logic does not support casting operators");
                          }
                          return;
                        }
                        if ( a1[18].m128i_i8[12] )
                          return;
LABEL_95:
                        v9 = *(int **)(v8 + 24);
                        if ( !v9 )
                          return;
                        goto LABEL_96;
                      }
                      sub_E2E4E0(a1, *(_QWORD *)(v2 + 32), *(_QWORD *)(v2 + 40));
                      if ( !a1[18].m128i_i8[13] )
                      {
LABEL_27:
                        if ( *(_WORD *)(v2 + 4) )
                          return;
                        v8 = *(_QWORD *)(v2 + 16);
                        goto LABEL_95;
                      }
LABEL_64:
                      if ( a1[18].m128i_i8[12] )
                        return;
                      goto LABEL_27;
                    }
                  }
                }
              }
            }
          }
          v60 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL);
          if ( v60 )
          {
            if ( *v60 == 5 && v60[1] == 10 )
            {
              v61 = *(_QWORD *)(v24 + 32);
              if ( !*(_WORD *)(v61 + 4) )
              {
                v62 = *(_QWORD *)(v61 + 16);
                v63 = *(_DWORD **)(v62 + 24);
                if ( v63 )
                {
                  if ( *v63 == 5 && v63[1] == 8 )
                  {
                    v61 = *(_QWORD *)(v61 + 32);
                    if ( *(_WORD *)(v61 + 4) )
                      goto LABEL_71;
                    v64 = *(_DWORD **)(*(_QWORD *)(v61 + 16) + 24LL);
                    if ( !v64 )
                      goto LABEL_71;
                  }
                  else
                  {
                    v64 = *(_DWORD **)(v62 + 24);
                  }
                  if ( *v64 == 5 && v64[1] == 18 )
                  {
                    v107 = *(_QWORD *)(v61 + 32);
                    if ( *(_WORD *)(v107 + 4) )
                      goto LABEL_71;
                    v65 = *(_DWORD **)(*(_QWORD *)(v107 + 16) + 24LL);
                    if ( !v65 )
                      goto LABEL_71;
                  }
                  else
                  {
                    v65 = *(_DWORD **)(*(_QWORD *)(v61 + 16) + 24LL);
                  }
                  if ( *v65 == 5 && !v65[1] )
                  {
                    v66 = *(_QWORD *)(v24 + 40);
                    if ( !*(_WORD *)(v66 + 4) )
                    {
                      v67 = *(_QWORD *)(v66 + 16);
                      v68 = *(_DWORD **)(v67 + 24);
                      if ( v68 )
                      {
                        if ( *v68 == 5 && v68[1] == 8 )
                        {
                          v66 = *(_QWORD *)(v66 + 32);
                          if ( *(_WORD *)(v66 + 4) )
                            goto LABEL_71;
                          v69 = *(_DWORD **)(*(_QWORD *)(v66 + 16) + 24LL);
                          if ( !v69 )
                            goto LABEL_71;
                        }
                        else
                        {
                          v69 = *(_DWORD **)(v67 + 24);
                        }
                        if ( *v69 == 5 && v69[1] == 18 )
                        {
                          v106 = *(_QWORD *)(v66 + 32);
                          if ( *(_WORD *)(v106 + 4) )
                            goto LABEL_71;
                          v70 = *(_DWORD **)(*(_QWORD *)(v106 + 16) + 24LL);
                          if ( !v70 )
                            goto LABEL_71;
                        }
                        else
                        {
                          v70 = *(_DWORD **)(*(_QWORD *)(v66 + 16) + 24LL);
                        }
                        if ( *v70 == 5 && !v70[1] )
                          goto LABEL_24;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_71:
      sub_E2E330(a1, "logic does not support nonlinear arithmetic");
    }
    v48 = a1[18].m128i_i8[15];
    if ( v48 )
      goto LABEL_93;
    v49 = *(unsigned int *)(a2 + 24);
    if ( !(_DWORD)v49 )
      goto LABEL_93;
    v50 = a2 + 8 * v49;
    while ( 1 )
    {
      v52 = *(_QWORD *)(v2 + 32);
      if ( *(_WORD *)(v52 + 4) )
        break;
      v53 = *(_DWORD **)(*(_QWORD *)(v52 + 16) + 24LL);
      if ( !v53 || *v53 != 5 )
        goto LABEL_376;
      if ( v53[1] == 8 )
      {
        v52 = *(_QWORD *)(v52 + 32);
        if ( *(_WORD *)(v52 + 4) )
          break;
        v53 = *(_DWORD **)(*(_QWORD *)(v52 + 16) + 24LL);
        if ( !v53 || *v53 != 5 )
          goto LABEL_376;
      }
      if ( (v54 = v52, v53[1] == 8)
        && ((v54 = *(_QWORD *)(v52 + 32), *(_WORD *)(v54 + 4))
         || (v53 = *(_DWORD **)(*(_QWORD *)(v54 + 16) + 24LL)) == nullptr
         || *v53 != 5)
        || v53[1] == 18
        && ((v71 = *(_QWORD *)(v54 + 32), *(_WORD *)(v71 + 4))
         || (v53 = *(_DWORD **)(*(_QWORD *)(v71 + 16) + 24LL)) == nullptr
         || *v53 != 5)
        || v53[1] )
      {
LABEL_376:
        v51 = *(_DWORD **)(*(_QWORD *)(v52 + 16) + 24LL);
        if ( !v51 )
          break;
        if ( *v51 != 5 )
          break;
        if ( v51[1] != 10 )
          break;
        v55 = *(_QWORD *)(v52 + 32);
        if ( *(_WORD *)(v55 + 4) )
          break;
        v56 = *(_DWORD **)(*(_QWORD *)(v55 + 16) + 24LL);
        if ( !v56 )
          break;
        if ( *v56 != 5 )
          break;
        if ( v56[1] == 8 )
        {
          v55 = *(_QWORD *)(v55 + 32);
          if ( *(_WORD *)(v55 + 4) )
            break;
          v56 = *(_DWORD **)(*(_QWORD *)(v55 + 16) + 24LL);
          if ( !v56 || *v56 != 5 )
            break;
        }
        if ( v56[1] == 18 )
        {
          v100 = *(_QWORD *)(v55 + 32);
          if ( *(_WORD *)(v100 + 4) )
            break;
          v56 = *(_DWORD **)(*(_QWORD *)(v100 + 16) + 24LL);
          if ( !v56 || *v56 != 5 )
            break;
        }
        if ( v56[1] )
          break;
        v57 = *(_QWORD *)(v52 + 40);
        if ( *(_WORD *)(v57 + 4) )
          break;
        v58 = *(_DWORD **)(*(_QWORD *)(v57 + 16) + 24LL);
        if ( !v58 )
          break;
        if ( *v58 != 5 )
          break;
        if ( v58[1] == 8 )
        {
          v57 = *(_QWORD *)(v57 + 32);
          if ( *(_WORD *)(v57 + 4) )
            break;
          v58 = *(_DWORD **)(*(_QWORD *)(v57 + 16) + 24LL);
          if ( !v58 || *v58 != 5 )
            break;
        }
        if ( v58[1] == 18 )
        {
          v103 = *(_QWORD *)(v57 + 32);
          if ( *(_WORD *)(v103 + 4) )
            break;
          v58 = *(_DWORD **)(*(_QWORD *)(v103 + 16) + 24LL);
          if ( !v58 || *v58 != 5 )
            break;
        }
        if ( v58[1] )
          break;
      }
LABEL_137:
      v2 += 8;
      if ( v50 == v2 )
        goto LABEL_93;
    }
    if ( v48 )
      goto LABEL_71;
    v48 = 1;
    goto LABEL_137;
  }
  if ( a1[2].m128i_i32[0] == (_DWORD)v10 )
    return;
  if ( a1[3].m128i_i32[2] == (_DWORD)v10 )
  {
    if ( !a1[18].m128i_i8[14] )
      return;
LABEL_19:
    sub_E2F6F0(a1, a2);
    return;
  }
  if ( (_DWORD)v10 )
  {
    if ( (unsigned int)(v10 + 1) <= 5
      || a1[6].m128i_i32[0] == (_DWORD)v10
      || (unsigned int)sub_15F0200(&a1[13]) == (_DWORD)v10 && a1[18].m128i_i8[9]
      || a1[15].m128i_i32[0] == (_DWORD)v10 && (unsigned __int8)sub_E3A060((int)a1 + 8) )
    {
      return;
    }
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v112);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( (int)v10 >= 0 && (v25 = *(_QWORD *)(a1->m128i_i64[0] + 608)) != 0 && (int)v10 < *(_DWORD *)(v25 - 4) )
      v26 = (const char **)(v25 + 8 * v10);
    else
      v26 = (const char **)&qword_18D6CD0;
    if ( ((unsigned __int8)*v26 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( *v26 )
        strlen(*v26);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::stringbuf::str(&v110, v113);
    v27 = (__m128i *)a1[19].m128i_i64[1];
    if ( v27 == (__m128i *)&a1[20].m128i_u64[1] )
    {
      if ( v110 != (__m128i *)&src.m128i_u64[1] )
      {
        v108 = _mm_loadu_si128(&src);
        a1[19].m128i_i64[1] = (__int64)v110;
        a1[20] = v108;
LABEL_366:
        v110 = (__m128i *)&src.m128i_u64[1];
        goto LABEL_91;
      }
    }
    else if ( v110 != (__m128i *)&src.m128i_u64[1] )
    {
      v28 = _mm_loadu_si128(&src);
      v29 = a1[20].m128i_i64[1];
      a1[19].m128i_i64[1] = (__int64)v110;
      a1[20] = v28;
      if ( v27 )
      {
        v110 = v27;
        src.m128i_i64[1] = v29;
        goto LABEL_91;
      }
      goto LABEL_366;
    }
    v109 = src.m128i_i64[0];
    if ( src.m128i_i64[0] )
    {
      if ( src.m128i_i64[0] == 1 )
        v27->m128i_i8[0] = src.m128i_i8[8];
      else
        memcpy(v27, &src.m128i_u64[1], src.m128i_u64[0]);
      v27 = (__m128i *)a1[19].m128i_i64[1];
      v109 = src.m128i_i64[0];
    }
    a1[20].m128i_i64[0] = v109;
    v27->m128i_i8[v109] = 0;
LABEL_91:
    src.m128i_i64[0] = 0;
    v110->m128i_i8[0] = 0;
    exception = __cxa_allocate_exception(8u);
    *exception = &off_1C76478;
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'check_logic::imp::failed, (void (*)(void *))sub_E2DA50);
  }
  if ( a1[18].m128i_i8[14] && !*(_WORD *)(a2 + 4) )
  {
    v11 = v9[1];
    if ( v11 == 2 )
    {
      sub_E2E4E0(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
      return;
    }
    if ( (unsigned int)(v11 - 3) <= 1 )
      goto LABEL_19;
  }
}

