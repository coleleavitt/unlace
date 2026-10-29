__int64 __fastcall sub_DDE0D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 *v4; // rdi
  __int64 *v5; // r13
  __int64 *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 *v15; // rdi
  __int64 v16; // rsi
  __int64 v18; // rsi
  __int64 *v19; // rdx
  __int64 *v20; // rax
  int v21; // ecx
  unsigned int v22; // r14d
  size_t v23; // r13
  __int64 *v24; // rdx
  __int64 *v25; // rax
  __int64 *v26; // r12
  __int64 *v27; // rcx
  __int64 v28; // rsi
  _DWORD *v29; // r9
  __int64 v30; // rdi
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdi
  _OWORD *v35; // rdi
  __int64 v36; // rsi
  __int64 *v37; // rdx
  __int64 *v38; // rax
  int v39; // ecx
  unsigned int v40; // ecx
  size_t v41; // r12
  __int64 *v42; // rcx
  __int64 *v43; // rax
  __int64 v44; // rdi
  _QWORD *v45; // r11
  _QWORD *v46; // r10
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rdi
  _QWORD *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 *v53; // rcx
  _QWORD *v54; // r10
  _QWORD *v55; // r11
  void *v56; // rdi
  _DWORD *v57; // r9
  __int64 v58; // rsi
  _QWORD *v59; // rdx
  _QWORD *v60; // rax
  int v61; // r10d
  unsigned int v62; // esi
  __int64 v63; // rax
  __int64 v64; // rdx
  _OWORD *v65; // rsi
  _OWORD *v66; // rax
  size_t v67; // rsi
  size_t v68; // rsi
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 *v72; // [rsp+8h] [rbp-60h]
  __int64 *v73; // [rsp+8h] [rbp-60h]
  __int64 *v74; // [rsp+8h] [rbp-60h]
  unsigned int v75; // [rsp+8h] [rbp-60h]
  __int64 *v76; // [rsp+8h] [rbp-60h]
  __int64 v77; // [rsp+8h] [rbp-60h]
  __int64 *v78; // [rsp+8h] [rbp-60h]
  __int64 *v79; // [rsp+8h] [rbp-60h]
  _DWORD *v80; // [rsp+8h] [rbp-60h]
  __int64 *v81; // [rsp+8h] [rbp-60h]
  __int64 *v82; // [rsp+8h] [rbp-60h]
  __int64 *v83; // [rsp+8h] [rbp-60h]
  _DWORD *v84; // [rsp+10h] [rbp-58h]
  _DWORD *v85; // [rsp+10h] [rbp-58h]
  _QWORD *v86; // [rsp+10h] [rbp-58h]
  __int64 *v87; // [rsp+10h] [rbp-58h]
  _QWORD *v88; // [rsp+10h] [rbp-58h]
  _QWORD *v89; // [rsp+10h] [rbp-58h]
  _QWORD *v90; // [rsp+10h] [rbp-58h]
  _DWORD *v91; // [rsp+10h] [rbp-58h]
  _DWORD *v92; // [rsp+10h] [rbp-58h]
  _QWORD *v93; // [rsp+18h] [rbp-50h]
  _QWORD *v94; // [rsp+18h] [rbp-50h]
  _QWORD *v95; // [rsp+18h] [rbp-50h]
  _QWORD *v96; // [rsp+18h] [rbp-50h]
  _QWORD *v97; // [rsp+18h] [rbp-50h]
  __int64 *v98; // [rsp+18h] [rbp-50h]
  _DWORD *v99; // [rsp+20h] [rbp-48h]
  _QWORD *v100; // [rsp+20h] [rbp-48h]
  _DWORD *v101; // [rsp+20h] [rbp-48h]
  _DWORD *v102; // [rsp+20h] [rbp-48h]
  __int64 *v103; // [rsp+20h] [rbp-48h]
  _DWORD *v104; // [rsp+20h] [rbp-48h]
  __int64 v105; // [rsp+28h] [rbp-40h]
  _DWORD *v106; // [rsp+28h] [rbp-40h]
  __int64 v107; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    if ( *(_DWORD *)v2 )
    {
      v4 = *(__int64 **)(v2 + 16);
      v5 = v4;
      v6 = &v4[2 * *(unsigned int *)(v2 + 24)];
      if ( v4 == v6 )
        goto LABEL_36;
      while ( (unsigned __int64)*v5 <= 1 )
      {
        v5 += 2;
        if ( v6 == v5 )
          goto LABEL_36;
      }
      if ( v6 != v5 )
      {
        v7 = *v5;
        v8 = v5[1];
        if ( *v5 )
        {
          v9 = *a2;
          v10 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v10 )
            goto LABEL_20;
        }
LABEL_10:
        if ( *(_DWORD *)v2 == 1 )
        {
LABEL_11:
          if ( v8 )
          {
            v11 = *a2;
            v10 = (*(_DWORD *)(v8 + 8))-- == 1;
            if ( v10 )
              sub_15D7BC0(v11, v8);
          }
          goto LABEL_14;
        }
        while ( !*(_DWORD *)v8 )
        {
          v13 = *(_QWORD *)(v8 + 8);
          if ( v13 )
          {
            v14 = *a2;
            v10 = (*(_DWORD *)(v13 + 8))-- == 1;
            if ( v10 )
              sub_15D7BC0(v14, v13);
          }
          *(_QWORD *)(v8 + 8) = 0;
          v15 = *(__int64 **)(v8 + 16);
LABEL_26:
          if ( v15 )
            goto LABEL_27;
LABEL_28:
          sub_17E9C40(a2[1], 40, v8);
LABEL_14:
          v12 = v5 + 2;
          if ( v6 == v5 + 2 )
            goto LABEL_35;
          while ( 1 )
          {
            v7 = *v12;
            v5 = v12;
            if ( (unsigned __int64)*v12 > 1 )
              break;
            v12 += 2;
            if ( v6 == v12 )
              goto LABEL_35;
          }
          if ( v6 == v12 )
          {
LABEL_35:
            v4 = *(__int64 **)(v2 + 16);
            goto LABEL_36;
          }
          v8 = v12[1];
          v9 = *a2;
          v10 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( !v10 )
            goto LABEL_10;
LABEL_20:
          sub_15D7BC0(v9, v7);
          if ( *(_DWORD *)v2 == 1 )
            goto LABEL_11;
        }
        v15 = *(__int64 **)(v8 + 16);
        v26 = v15;
        v27 = &v15[2 * *(unsigned int *)(v8 + 24)];
        if ( v15 == v27 )
          goto LABEL_78;
        while ( (unsigned __int64)*v26 <= 1 )
        {
          v26 += 2;
          if ( v27 == v26 )
            goto LABEL_78;
        }
        if ( v27 != v26 )
        {
          v28 = *v26;
          v29 = (_DWORD *)v26[1];
          if ( !*v26 )
          {
LABEL_57:
            if ( *(_DWORD *)v8 != 1 )
              goto LABEL_69;
LABEL_58:
            if ( v29 )
            {
              v30 = *a2;
              v10 = v29[2]-- == 1;
              if ( v10 )
              {
                v81 = v27;
                sub_15D7BC0(v30, v29);
                v27 = v81;
              }
            }
            goto LABEL_61;
          }
          while ( 1 )
          {
            v32 = *a2;
            v10 = (*(_DWORD *)(v28 + 8))-- == 1;
            if ( !v10 )
              goto LABEL_57;
            v84 = v29;
            v72 = v27;
            sub_15D7BC0(v32, v28);
            v29 = v84;
            v27 = v72;
            if ( *(_DWORD *)v8 == 1 )
              goto LABEL_58;
LABEL_69:
            if ( *v29 )
            {
              v35 = *((_OWORD **)v29 + 2);
              v45 = v35;
              v46 = &v35[v29[6]];
              if ( v35 != (_OWORD *)v46 )
              {
                while ( *v45 <= 1u )
                {
                  v45 += 2;
                  if ( v46 == v45 )
                    goto LABEL_119;
                }
                if ( v46 != v45 )
                {
                  v47 = *v45;
                  v48 = v45[1];
                  if ( !*v45 )
                  {
LABEL_103:
                    if ( *v29 != 1 )
                      goto LABEL_115;
LABEL_104:
                    if ( v48 )
                    {
                      v49 = *a2;
                      v10 = (*(_DWORD *)(v48 + 8))-- == 1;
                      if ( v10 )
                      {
                        v104 = v29;
                        v97 = v45;
                        v90 = v46;
                        v82 = v27;
                        sub_15D7BC0(v49, v48);
                        v27 = v82;
                        v46 = v90;
                        v45 = v97;
                        v29 = v104;
                      }
                    }
                    goto LABEL_107;
                  }
                  while ( 1 )
                  {
                    v51 = *a2;
                    v10 = (*(_DWORD *)(v47 + 8))-- == 1;
                    if ( !v10 )
                      goto LABEL_103;
                    v105 = v48;
                    v99 = v29;
                    v93 = v45;
                    v86 = v46;
                    v76 = v27;
                    sub_15D7BC0(v51, v47);
                    v29 = v99;
                    v48 = v105;
                    v45 = v93;
                    v46 = v86;
                    v27 = v76;
                    if ( *v99 == 1 )
                      goto LABEL_104;
LABEL_115:
                    v106 = v29;
                    v100 = v45;
                    v94 = v46;
                    v87 = v27;
                    v77 = v48;
                    sub_DE95C0(v48, a2);
                    v52 = v77;
                    v53 = v87;
                    v54 = v94;
                    v55 = v100;
                    v56 = *(void **)(v77 + 16);
                    v57 = v106;
                    if ( v56 )
                    {
                      v107 = v77;
                      v101 = v57;
                      v95 = v55;
                      v88 = v54;
                      v78 = v53;
                      sub_186B220(v56);
                      v52 = v107;
                      v57 = v101;
                      v55 = v95;
                      v54 = v88;
                      v53 = v78;
                    }
                    v102 = v57;
                    v96 = v55;
                    v89 = v54;
                    v79 = v53;
                    sub_17E9C40(a2[1], 40, v52);
                    v29 = v102;
                    v45 = v96;
                    v46 = v89;
                    v27 = v79;
LABEL_107:
                    v50 = v45 + 2;
                    if ( v46 == v45 + 2 )
                      break;
                    while ( 1 )
                    {
                      v47 = *v50;
                      v45 = v50;
                      if ( *v50 > 1u )
                        break;
                      v50 += 2;
                      if ( v46 == v50 )
                        goto LABEL_118;
                    }
                    if ( v46 == v50 )
                      break;
                    v48 = v50[1];
                  }
LABEL_118:
                  v35 = *((_OWORD **)v29 + 2);
                }
              }
LABEL_119:
              if ( v29[7] || v29[8] )
              {
                v58 = (unsigned int)v29[6];
                v59 = &v35[v58];
                if ( v59 != (_QWORD *)v35 )
                {
                  v60 = v35;
                  v61 = 0;
                  do
                  {
                    while ( *v60 )
                    {
                      *v60 = 0;
                      v60 += 2;
                      if ( v59 == v60 )
                        goto LABEL_126;
                    }
                    v60 += 2;
                    ++v61;
                  }
                  while ( v59 != v60 );
LABEL_126:
                  if ( (unsigned int)v58 > 0x10 && 3 * (int)v58 < (unsigned int)(4 * v61) )
                  {
                    if ( v35 )
                    {
                      v103 = v27;
                      v80 = v29;
                      sub_186B220(v35);
                      v62 = v80[6];
                      *((_QWORD *)v80 + 2) = 0;
                      v62 >>= 1;
                      v80[6] = v62;
                      v63 = sub_186B270(16LL * v62);
                      v64 = v62;
                      v29 = v80;
                      v27 = v103;
                      v35 = (_OWORD *)v63;
                      if ( v62 )
                        goto LABEL_130;
                    }
                    else
                    {
                      v69 = (unsigned int)v58 >> 1;
                      *((_QWORD *)v29 + 2) = 0;
                      v29[6] = v69;
                      v98 = v27;
                      v92 = v29;
                      v70 = sub_186B270(16 * v69);
                      v64 = v69;
                      v29 = v92;
                      v27 = v98;
                      v35 = (_OWORD *)v70;
LABEL_130:
                      v65 = &v35[v64];
                      v66 = v35;
                      if ( ((v64 * 16) & 0x10) == 0 || (v66 = v35 + 1, *v35 = 0, v35 + 1 != v65) )
                      {
                        do
                        {
                          *v66 = 0;
                          v66 += 2;
                          *(v66 - 1) = 0;
                        }
                        while ( v66 != v65 );
                      }
                    }
                    *((_QWORD *)v29 + 2) = v35;
                    *(_QWORD *)(v29 + 7) = 0;
LABEL_75:
                    v85 = v29;
                    v73 = v27;
                    sub_186B220(v35);
                    v29 = v85;
                    v27 = v73;
                    goto LABEL_76;
                  }
                }
                *(_QWORD *)(v29 + 7) = 0;
              }
            }
            else
            {
              v33 = *((_QWORD *)v29 + 1);
              if ( v33 )
              {
                v34 = *a2;
                v10 = (*(_DWORD *)(v33 + 8))-- == 1;
                if ( v10 )
                {
                  v91 = v29;
                  v83 = v27;
                  sub_15D7BC0(v34, v33);
                  v29 = v91;
                  v27 = v83;
                }
              }
              *((_QWORD *)v29 + 1) = 0;
              v35 = *((_OWORD **)v29 + 2);
            }
            if ( v35 )
              goto LABEL_75;
LABEL_76:
            v74 = v27;
            sub_17E9C40(a2[1], 40, v29);
            v27 = v74;
LABEL_61:
            v31 = v26 + 2;
            if ( v27 == v26 + 2 )
              goto LABEL_77;
            while ( 1 )
            {
              v28 = *v31;
              v26 = v31;
              if ( (unsigned __int64)*v31 > 1 )
                break;
              v31 += 2;
              if ( v27 == v31 )
                goto LABEL_77;
            }
            if ( v27 == v31 )
            {
LABEL_77:
              v15 = *(__int64 **)(v8 + 16);
              break;
            }
            v29 = (_DWORD *)v31[1];
          }
        }
LABEL_78:
        if ( !*(_DWORD *)(v8 + 28) && !*(_DWORD *)(v8 + 32) )
          goto LABEL_26;
        v36 = *(unsigned int *)(v8 + 24);
        v37 = &v15[2 * v36];
        if ( v37 == v15 )
          goto LABEL_134;
        v38 = v15;
        v39 = 0;
        do
        {
          while ( *v38 )
          {
            *v38 = 0;
            v38 += 2;
            if ( v37 == v38 )
              goto LABEL_84;
          }
          v38 += 2;
          ++v39;
        }
        while ( v37 != v38 );
LABEL_84:
        if ( (unsigned int)v36 <= 0x10 || 3 * (int)v36 >= (unsigned int)(4 * v39) )
        {
LABEL_134:
          *(_QWORD *)(v8 + 28) = 0;
          goto LABEL_26;
        }
        if ( v15 )
        {
          sub_186B220(v15);
          v40 = *(_DWORD *)(v8 + 24);
          *(_QWORD *)(v8 + 16) = 0;
          v40 >>= 1;
          *(_DWORD *)(v8 + 24) = v40;
          v75 = v40;
          v41 = 2LL * v40;
          v15 = (__int64 *)sub_186B270(v41 * 8);
          if ( !v75 )
          {
LABEL_91:
            *(_QWORD *)(v8 + 16) = v15;
            *(_QWORD *)(v8 + 28) = 0;
LABEL_27:
            sub_186B220(v15);
            goto LABEL_28;
          }
        }
        else
        {
          v68 = (unsigned int)v36 >> 1;
          *(_QWORD *)(v8 + 16) = 0;
          *(_DWORD *)(v8 + 24) = v68;
          v41 = 2 * v68;
          v15 = (__int64 *)sub_186B270(16 * v68);
        }
        v42 = &v15[v41];
        v43 = v15;
        if ( ((v41 * 8) & 0x10) == 0 || (v43 = v15 + 2, *(_OWORD *)v15 = 0, v42 != v15 + 2) )
        {
          do
          {
            *(_OWORD *)v43 = 0;
            v43 += 4;
            *((_OWORD *)v43 - 1) = 0;
          }
          while ( v42 != v43 );
        }
        goto LABEL_91;
      }
LABEL_36:
      if ( *(_DWORD *)(v2 + 28) || *(_DWORD *)(v2 + 32) )
      {
        v18 = *(unsigned int *)(v2 + 24);
        v19 = &v4[2 * v18];
        if ( v19 != v4 )
        {
          v20 = v4;
          v21 = 0;
          do
          {
            while ( *v20 )
            {
              *v20 = 0;
              v20 += 2;
              if ( v19 == v20 )
                goto LABEL_43;
            }
            v20 += 2;
            ++v21;
          }
          while ( v19 != v20 );
LABEL_43:
          if ( (unsigned int)v18 > 0x10 && 3 * (int)v18 < (unsigned int)(4 * v21) )
          {
            if ( v4 )
            {
              sub_186B220(v4);
              v22 = *(_DWORD *)(v2 + 24);
              *(_QWORD *)(v2 + 16) = 0;
              v22 >>= 1;
              *(_DWORD *)(v2 + 24) = v22;
              v23 = 2LL * v22;
              v4 = (__int64 *)sub_186B270(v23 * 8);
              if ( !v22 )
              {
LABEL_50:
                *(_QWORD *)(v2 + 16) = v4;
                *(_QWORD *)(v2 + 28) = 0;
                goto LABEL_32;
              }
            }
            else
            {
              v67 = (unsigned int)v18 >> 1;
              *(_QWORD *)(v2 + 16) = 0;
              *(_DWORD *)(v2 + 24) = v67;
              v23 = 2 * v67;
              v4 = (__int64 *)sub_186B270(16 * v67);
            }
            v24 = &v4[v23];
            v25 = v4;
            if ( ((v23 * 8) & 0x10) == 0 || (v25 = v4 + 2, *(_OWORD *)v4 = 0, v4 + 2 != v24) )
            {
              do
              {
                *(_OWORD *)v25 = 0;
                v25 += 4;
                *((_OWORD *)v25 - 1) = 0;
              }
              while ( v25 != v24 );
            }
            goto LABEL_50;
          }
        }
        *(_QWORD *)(v2 + 28) = 0;
      }
    }
    else
    {
      v16 = *(_QWORD *)(v2 + 8);
      if ( v16 )
      {
        v44 = *a2;
        v10 = (*(_DWORD *)(v16 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v44, v16);
      }
      *(_QWORD *)(v2 + 8) = 0;
      v4 = *(__int64 **)(v2 + 16);
    }
    if ( !v4 )
    {
LABEL_33:
      sub_17E9C40(a2[1], 40, v2);
      goto LABEL_34;
    }
LABEL_32:
    sub_186B220(v4);
    goto LABEL_33;
  }
LABEL_34:
  *(_QWORD *)(a1 + 40) = 0;
  return a1;
}

