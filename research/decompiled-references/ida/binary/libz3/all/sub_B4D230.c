void __fastcall sub_B4D230(__int64 a1, __int64 a2, int *a3, unsigned int a4)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rdx
  _DWORD *v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // r11d
  __int64 v11; // rax
  _BYTE *v12; // rdx
  __int64 v13; // r10
  __int64 v14; // rbp
  _QWORD *v15; // rdi
  int v16; // ecx
  __int64 v17; // rdx
  unsigned int v18; // esi
  _QWORD *v19; // rax
  unsigned int v20; // r14d
  __int64 v21; // r12
  __int64 v22; // rax
  void *v23; // rcx
  void *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 ***v27; // rax
  __int64 **v28; // r12
  __int64 **v29; // rbx
  __int64 v30; // r15
  __int64 **v31; // r14
  __int64 *v32; // rbp
  __int64 v33; // r12
  __int64 *v34; // r15
  __int64 **v35; // rsi
  __int64 v36; // rax
  int v37; // ecx
  unsigned int v38; // edx
  __int64 **v39; // rdi
  __int64 v40; // rdx
  __int64 **v41; // r9
  __int64 **v42; // rax
  __int64 *v43; // rdx
  __int64 v44; // r14
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 ***v47; // rax
  __int64 **v48; // rbp
  __int64 **v49; // rbx
  __int64 **v50; // rbp
  __int64 *v51; // r15
  __int64 v52; // r12
  int v53; // r11d
  __int64 v54; // r14
  __int64 v55; // rax
  unsigned int v56; // r15d
  _QWORD *v57; // r12
  __int64 v58; // r9
  unsigned int v59; // r8d
  __int64 v60; // rcx
  int v61; // edi
  __int64 v62; // rax
  _QWORD *v63; // rsi
  _QWORD *v64; // rax
  _QWORD *v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rax
  int v68; // edx
  int v69; // edx
  int v70; // edx
  __int64 v71; // rax
  unsigned int v72; // esi
  __int64 v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // r10
  unsigned int v76; // edx
  _QWORD *v77; // rdi
  __int64 v78; // rsi
  unsigned int v79; // eax
  __int64 v80; // r8
  _QWORD *v81; // r13
  __int64 v82; // r15
  __int64 v83; // r12
  __int64 **v84; // r9
  __int64 v85; // r10
  _QWORD *v86; // rbx
  unsigned int v87; // r11d
  unsigned int v88; // r14d
  __int64 v89; // rax
  _QWORD *v90; // rdx
  _QWORD *v91; // rax
  unsigned int v92; // esi
  __int64 *v93; // rax
  __int64 v94; // rdx
  unsigned int v95; // eax
  __int64 **v96; // r12
  __int64 v97; // r9
  __int64 v98; // rax
  __int64 **v99; // rdi
  __int64 **v100; // rax
  __int64 **v101; // rsi
  __int64 *v102; // rdx
  __int64 *v103; // rax
  __int64 **v104; // rax
  __int64 **v105; // r11
  __int64 **v106; // rbp
  __int64 v107; // rdx
  __int64 **v108; // rsi
  __int64 **v109; // rdx
  __int64 v110; // rdx
  __int64 v111; // [rsp+0h] [rbp-A8h]
  unsigned int v112; // [rsp+8h] [rbp-A0h]
  __int64 v113; // [rsp+8h] [rbp-A0h]
  __int64 v114; // [rsp+8h] [rbp-A0h]
  _DWORD *v115; // [rsp+10h] [rbp-98h]
  __int64 v116; // [rsp+18h] [rbp-90h]
  __int64 v117; // [rsp+18h] [rbp-90h]
  __int64 v118; // [rsp+18h] [rbp-90h]
  __int64 v119; // [rsp+18h] [rbp-90h]
  __int64 v122; // [rsp+30h] [rbp-78h]
  unsigned int v123; // [rsp+30h] [rbp-78h]
  __int64 v124; // [rsp+38h] [rbp-70h]
  __int64 v125; // [rsp+38h] [rbp-70h]
  unsigned int n; // [rsp+40h] [rbp-68h]
  unsigned int na; // [rsp+40h] [rbp-68h]
  size_t v128; // [rsp+48h] [rbp-60h]
  __int64 v129; // [rsp+48h] [rbp-60h]
  __int64 v130; // [rsp+50h] [rbp-58h]
  unsigned int v131; // [rsp+50h] [rbp-58h]
  unsigned int v132; // [rsp+58h] [rbp-50h]

  if ( *(_DWORD *)(a2 + 24) )
  {
    v115 = *(_DWORD **)(a2 + 16);
    v5 = 0;
    v6 = a2;
    v111 = *(unsigned int *)(a2 + 24);
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v6 + 8 * v5 + 32);
        v10 = v5;
        if ( *(_WORD *)(v9 + 4) == 1 )
          break;
        v7 = *(_QWORD *)(v6 + 16);
        v8 = *(_DWORD **)(v7 + 24);
        if ( !v8 || *v8 )
        {
          sub_B4CD20(a1, v9, (_DWORD *)v7, v5);
          goto LABEL_6;
        }
        ++v5;
        sub_B4CD20(a1, v9, nullptr, 0);
        if ( v5 == v111 )
          return;
      }
      v11 = *(unsigned int *)(v9 + 16);
      if ( (unsigned int)v11 >= *(_DWORD *)(a1 + 20) )
        return;
      v12 = (_BYTE *)(v11 + *(_QWORD *)(a1 + 24));
      v13 = 24 * v11 + *(_QWORD *)(a1 + 32);
      if ( !*v12 || !*(_BYTE *)(a1 + 16) )
      {
        v44 = *(_QWORD *)a1;
        *v12 = 1;
        v45 = *(_QWORD *)(v44 + 8696);
        v46 = *v115 + 0x80000000;
        if ( v45 && (unsigned int)v46 < *(_DWORD *)(v45 - 4) )
          v47 = (__int64 ***)(v45 + 8 * v46);
        else
          v47 = (__int64 ***)(v44 + 8704);
        v48 = *v47;
        if ( !*v47 || &v48[*((unsigned int *)v48 - 1)] == v48 )
          goto LABEL_6;
        v114 = v5;
        v49 = *v47;
        v50 = &v48[*((unsigned int *)v48 - 1)];
        v123 = v10;
        v125 = v13;
        v119 = v6;
        while ( 1 )
        {
          v51 = *v49;
          v52 = **v49;
          if ( (!(unsigned int)sub_8E7030(v44)
             || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v44 + 7488) + 56LL))(
                  *(_QWORD *)(v44 + 7488),
                  v52))
            && v51 == (__int64 *)v51[3]
            && (unsigned __int8)sub_B4CC00((_BYTE *)a1, (__int64)v51, a3, a4)
            && (*((_BYTE *)v51 + 44) & 8) == 0
            && v123 < *(_DWORD *)(*v51 + 24) )
          {
            break;
          }
LABEL_55:
          if ( v50 == ++v49 )
          {
            v5 = v114;
            v6 = v119;
            goto LABEL_6;
          }
          v44 = *(_QWORD *)a1;
        }
        v53 = *(_DWORD *)(v125 + 16);
        v54 = *(_QWORD *)(v51[v123 + 14] + 8);
        v55 = *(unsigned int *)(v125 + 8);
        v56 = 2 * v55;
        if ( 3 * (int)v55 < (unsigned int)(4 * (v53 + *(_DWORD *)(v125 + 12))) )
        {
          v74 = (_QWORD *)sub_186B270(8LL * v56);
          v58 = 8LL * v56;
          v57 = v74;
          if ( v56 )
          {
            memset(v74, 0, 8LL * v56);
            v58 = 8LL * v56;
          }
          v59 = v56 - 1;
          v60 = (__int64)v57 + v58;
          v75 = (_QWORD *)(*(_QWORD *)v125 + 8LL * *(unsigned int *)(v125 + 8));
          if ( *(_QWORD **)v125 != v75 )
          {
            v76 = v56 - 1;
            v77 = (_QWORD *)((char *)v57 + v58);
            v78 = a1;
            v79 = v56;
            v80 = v54;
            v81 = v57;
            v82 = v58;
            v83 = *(_QWORD *)v125 + 8LL * *(unsigned int *)(v125 + 8);
            v84 = v49;
            v85 = v78;
            v86 = *(_QWORD **)v125;
            v87 = v79;
            v88 = v76;
            do
            {
              if ( *v86 > 1u )
              {
                v89 = 8LL * (*(_DWORD *)(*(_QWORD *)*v86 + 12LL) & v88);
                v90 = &v81[(unsigned __int64)v89 / 8];
                if ( v82 == v89 )
                {
LABEL_100:
                  if ( v81 == v90 )
                  {
LABEL_137:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v91 = v81;
                  while ( *v91 )
                  {
                    if ( v90 == ++v91 )
                      goto LABEL_137;
                  }
                }
                else
                {
                  v91 = &v81[(unsigned __int64)v89 / 8];
                  while ( *v91 )
                  {
                    if ( v77 == ++v91 )
                      goto LABEL_100;
                  }
                }
                *v91 = *v86;
              }
              ++v86;
            }
            while ( (_QWORD *)v83 != v86 );
            v92 = v88;
            v57 = v81;
            v60 = (__int64)v77;
            a1 = v85;
            v54 = v80;
            v49 = v84;
            v59 = v92;
            v58 = v82;
            v56 = v87;
            v75 = *(_QWORD **)v125;
          }
          if ( v75 )
          {
            v130 = v60;
            v128 = v58;
            na = v59;
            sub_186B220(v75);
            v60 = v130;
            v58 = v128;
            v59 = na;
          }
          v53 = 0;
          *(_QWORD *)v125 = v57;
          *(_DWORD *)(v125 + 8) = v56;
          *(_DWORD *)(v125 + 16) = 0;
        }
        else
        {
          v57 = *(_QWORD **)v125;
          v58 = 8 * v55;
          v59 = v55 - 1;
          v60 = *(_QWORD *)v125 + 8 * v55;
        }
        v61 = *(_DWORD *)(*(_QWORD *)v54 + 12LL);
        v62 = 8LL * (v61 & v59);
        v63 = &v57[(unsigned __int64)v62 / 8];
        if ( v62 != v58 )
        {
          v64 = &v57[(unsigned __int64)v62 / 8];
          v65 = nullptr;
          while ( 1 )
          {
            v66 = *v64;
            if ( *v64 > 1u )
            {
              if ( *(_DWORD *)(*(_QWORD *)v66 + 12LL) == v61 && v54 == v66 )
              {
                *v64 = v54;
                goto LABEL_55;
              }
            }
            else
            {
              if ( !v66 )
              {
                if ( v65 )
                  *(_DWORD *)(v125 + 16) = v53 - 1;
                else
                  v65 = v64;
                goto LABEL_111;
              }
              v65 = v64;
            }
            if ( ++v64 == (_QWORD *)v60 )
              goto LABEL_83;
          }
        }
        v65 = nullptr;
        while ( 1 )
        {
LABEL_83:
          if ( v63 == v57 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v71 = *v57;
          if ( *v57 > 1u )
          {
            if ( *(_DWORD *)(*(_QWORD *)v71 + 12LL) == v61 && v54 == v71 )
            {
              *v57 = v54;
              goto LABEL_55;
            }
          }
          else
          {
            if ( !v71 )
            {
              if ( v65 )
                *(_DWORD *)(v125 + 16) = v53 - 1;
              else
                v65 = v57;
LABEL_111:
              *v65 = v54;
              ++*(_DWORD *)(v125 + 12);
              goto LABEL_55;
            }
            v65 = v57;
          }
          ++v57;
        }
      }
      if ( !*(_DWORD *)(v13 + 12) )
        goto LABEL_6;
      v14 = *(_QWORD *)(a1 + 40) + 24 * v11;
      if ( !*(_DWORD *)(v14 + 12) && !*(_DWORD *)(v14 + 16) )
        goto LABEL_25;
      v15 = *(_QWORD **)v14;
      v16 = 0;
      v17 = *(_QWORD *)v14 + 8LL * *(unsigned int *)(v14 + 8);
      v18 = *(_DWORD *)(v14 + 8);
      v19 = *(_QWORD **)v14;
      if ( *(_QWORD *)v14 != v17 )
      {
        do
        {
          while ( *v19 )
          {
            *v19++ = 0;
            if ( (_QWORD *)v17 == v19 )
              goto LABEL_18;
          }
          ++v19;
          ++v16;
        }
        while ( (_QWORD *)v17 != v19 );
LABEL_18:
        if ( v18 > 0x10 && 3 * v18 < 4 * v16 )
          break;
      }
LABEL_24:
      *(_QWORD *)(v14 + 12) = 0;
LABEL_25:
      v25 = *(_QWORD *)(*(_QWORD *)a1 + 8696LL);
      v26 = *v115 + 0x80000000;
      if ( v25 && (unsigned int)v26 < *(_DWORD *)(v25 - 4) )
        v27 = (__int64 ***)(v25 + 8 * v26);
      else
        v27 = (__int64 ***)(*(_QWORD *)a1 + 8704LL);
      v28 = *v27;
      if ( !*v27 || v28 == &v28[*((unsigned int *)v28 - 1)] )
        goto LABEL_78;
      v122 = v5;
      v29 = *v27;
      v124 = v6;
      v30 = *(_QWORD *)a1;
      v31 = &v28[*((unsigned int *)v28 - 1)];
      v113 = v14;
      n = v10;
      v118 = v13;
      while ( 2 )
      {
        v32 = *v29;
        v33 = **v29;
        if ( (unsigned int)sub_8E7030(v30)
          && !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v30 + 7488) + 56LL))(
                *(_QWORD *)(v30 + 7488),
                v33)
          || v32 != (__int64 *)v32[3]
          || !(unsigned __int8)sub_B4CC00((_BYTE *)a1, (__int64)v32, a3, a4)
          || (*((_BYTE *)v32 + 44) & 8) != 0
          || n >= *(_DWORD *)(*v32 + 24) )
        {
          goto LABEL_31;
        }
        v34 = *(__int64 **)(v32[n + 14] + 8);
        v35 = *(__int64 ***)v118;
        v36 = *(unsigned int *)(v118 + 8);
        v37 = *(_DWORD *)(*v34 + 12);
        v38 = v36 - 1;
        v36 *= 8;
        v39 = (__int64 **)(*(_QWORD *)v118 + v36);
        v40 = 8LL * (v37 & v38);
        v41 = (__int64 **)(*(_QWORD *)v118 + v40);
        if ( v40 == v36 )
        {
LABEL_112:
          if ( v35 == v41 )
            goto LABEL_31;
          while ( 1 )
          {
            v93 = *v35;
            if ( (unsigned __int64)*v35 > 1 )
            {
              if ( *(_DWORD *)(*v93 + 12) == v37 && v34 == v93 )
                goto LABEL_120;
            }
            else if ( !v93 )
            {
              goto LABEL_31;
            }
            if ( v41 == ++v35 )
              goto LABEL_31;
          }
        }
        v42 = (__int64 **)(*(_QWORD *)v118 + v40);
        while ( 1 )
        {
          v43 = *v42;
          if ( (unsigned __int64)*v42 <= 1 )
          {
            if ( !v43 )
              goto LABEL_31;
            goto LABEL_43;
          }
          if ( *(_DWORD *)(*v43 + 12) == v37 && v34 == v43 )
            break;
LABEL_43:
          if ( v39 == ++v42 )
            goto LABEL_112;
        }
LABEL_120:
        v94 = *(unsigned int *)(v113 + 8);
        v131 = 2 * v94;
        if ( 3 * (int)v94 < (unsigned int)(4 * (*(_DWORD *)(v113 + 12) + *(_DWORD *)(v113 + 16))) )
        {
          v129 = 8LL * v131;
          v104 = (__int64 **)sub_186B270(v129);
          v96 = v104;
          if ( v131 )
            memset(v104, 0, v129);
          v95 = v131 - 1;
          v105 = (__int64 **)(*(_QWORD *)v113 + 8LL * *(unsigned int *)(v113 + 8));
          v97 = (__int64)&v96[(unsigned __int64)v129 / 8];
          if ( *(__int64 ***)v113 != v105 )
          {
            v106 = *(__int64 ***)v113;
            do
            {
              if ( (unsigned __int64)*v106 > 1 )
              {
                v107 = 8LL * (*(_DWORD *)(**v106 + 12) & (v131 - 1));
                v108 = &v96[(unsigned __int64)v107 / 8];
                if ( v129 == v107 )
                {
LABEL_157:
                  if ( v96 == v108 )
                  {
LABEL_167:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v109 = v96;
                  while ( *v109 )
                  {
                    if ( v108 == ++v109 )
                      goto LABEL_167;
                  }
                }
                else
                {
                  v109 = &v96[(unsigned __int64)v107 / 8];
                  while ( *v109 )
                  {
                    if ( (__int64 **)v97 == ++v109 )
                      goto LABEL_157;
                  }
                }
                *v109 = *v106;
              }
              ++v106;
            }
            while ( v105 != v106 );
            v105 = *(__int64 ***)v113;
            v95 = v131 - 1;
          }
          if ( v105 )
          {
            v132 = v95;
            sub_186B220(v105);
            v97 = (__int64)&v96[(unsigned __int64)v129 / 8];
            v95 = v132;
          }
          v110 = *v34;
          *(_QWORD *)v113 = v96;
          *(_DWORD *)(v113 + 8) = v131;
          *(_DWORD *)(v113 + 16) = 0;
          v37 = *(_DWORD *)(v110 + 12);
        }
        else
        {
          v95 = v94 - 1;
          v96 = *(__int64 ***)v113;
          v129 = 8 * v94;
          v97 = *(_QWORD *)v113 + 8 * v94;
        }
        v98 = 8LL * (v37 & v95);
        v99 = &v96[(unsigned __int64)v98 / 8];
        if ( v98 != v129 )
        {
          v100 = &v96[(unsigned __int64)v98 / 8];
          v101 = nullptr;
          while ( 1 )
          {
            v102 = *v100;
            if ( (unsigned __int64)*v100 > 1 )
            {
              if ( *(_DWORD *)(*v102 + 12) == v37 && v34 == v102 )
              {
                *v100 = v34;
                goto LABEL_31;
              }
            }
            else
            {
              if ( !v102 )
              {
                if ( v101 )
                  goto LABEL_144;
                v101 = v100;
                goto LABEL_145;
              }
              v101 = v100;
            }
            if ( ++v100 == (__int64 **)v97 )
              goto LABEL_133;
          }
        }
        v101 = nullptr;
LABEL_133:
        while ( 2 )
        {
          if ( v99 == v96 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v103 = *v96;
          if ( (unsigned __int64)*v96 > 1 )
          {
            if ( *(_DWORD *)(*v103 + 12) == v37 && v34 == v103 )
            {
              *v96 = v34;
              goto LABEL_31;
            }
            goto LABEL_132;
          }
          if ( v103 )
          {
            v101 = v96;
LABEL_132:
            ++v96;
            continue;
          }
          break;
        }
        if ( v101 )
LABEL_144:
          --*(_DWORD *)(v113 + 16);
        else
          v101 = v96;
LABEL_145:
        *v101 = v34;
        ++*(_DWORD *)(v113 + 12);
LABEL_31:
        if ( v31 != ++v29 )
        {
          v30 = *(_QWORD *)a1;
          continue;
        }
        break;
      }
      v14 = v113;
      v5 = v122;
      v13 = v118;
      v6 = v124;
LABEL_78:
      v67 = *(_QWORD *)v13;
      *(_QWORD *)v13 = *(_QWORD *)v14;
      v68 = *(_DWORD *)(v14 + 8);
      *(_QWORD *)v14 = v67;
      LODWORD(v67) = *(_DWORD *)(v13 + 8);
      *(_DWORD *)(v13 + 8) = v68;
      v69 = *(_DWORD *)(v14 + 12);
      *(_DWORD *)(v14 + 8) = v67;
      LODWORD(v67) = *(_DWORD *)(v13 + 12);
      *(_DWORD *)(v13 + 12) = v69;
      v70 = *(_DWORD *)(v14 + 16);
      *(_DWORD *)(v14 + 12) = v67;
      LODWORD(v67) = *(_DWORD *)(v13 + 16);
      *(_DWORD *)(v13 + 16) = v70;
      *(_DWORD *)(v14 + 16) = v67;
LABEL_6:
      if ( ++v5 == v111 )
        return;
    }
    v116 = v13;
    if ( v15 )
    {
      sub_186B220(v15);
      v20 = *(_DWORD *)(v14 + 8);
      *(_QWORD *)v14 = 0;
      v20 >>= 1;
      *(_DWORD *)(v14 + 8) = v20;
      v21 = v20;
      v22 = sub_186B270(8LL * v20);
      v10 = v5;
      v13 = v116;
      v23 = (void *)v22;
      if ( !v20 )
      {
LABEL_23:
        *(_QWORD *)v14 = v23;
        goto LABEL_24;
      }
    }
    else
    {
      v72 = v18 >> 1;
      *(_QWORD *)v14 = 0;
      v21 = v72;
      *(_DWORD *)(v14 + 8) = v72;
      v73 = sub_186B270(8LL * v72);
      v10 = v5;
      v13 = v116;
      v23 = (void *)v73;
    }
    v117 = v13;
    v112 = v10;
    v24 = memset(v23, 0, 8 * v21);
    v10 = v112;
    v13 = v117;
    v23 = v24;
    goto LABEL_23;
  }
}

