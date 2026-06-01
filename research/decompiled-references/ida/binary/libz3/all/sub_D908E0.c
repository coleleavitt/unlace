_QWORD *__fastcall sub_D908E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  _QWORD *result; // rax
  _QWORD *v7; // rdx
  _QWORD *v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r9
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // edi
  unsigned int v14; // edx
  __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // r8
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  void *v21; // r12
  __int64 v22; // r13
  __int64 v23; // rax
  void *v24; // r12
  __int64 v25; // r13
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // r10d
  __int64 v30; // r8
  __int64 *v31; // r14
  unsigned int v32; // r9d
  __int64 v33; // rcx
  __int64 *v34; // r15
  int v35; // esi
  __int64 v36; // r9
  __int64 *v37; // rdi
  __int64 *v38; // rax
  __int64 *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // r15
  bool v44; // zf
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // r15
  __int64 *v53; // rax
  int v54; // r10d
  __int64 *v55; // rax
  __int64 *v56; // r11
  __int64 v57; // rdx
  __int64 *v58; // rsi
  __int64 v59; // rdi
  __int64 *v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rax
  void *v63; // r15
  __int64 v64; // r12
  int *v65; // rax
  int v66; // r13d
  __int64 v67; // [rsp+8h] [rbp-108h]
  __int64 v70; // [rsp+28h] [rbp-E8h]
  unsigned int v71; // [rsp+34h] [rbp-DCh]
  unsigned int v72; // [rsp+38h] [rbp-D8h]
  int v73; // [rsp+40h] [rbp-D0h]
  __int64 v74; // [rsp+48h] [rbp-C8h]
  int v75; // [rsp+48h] [rbp-C8h]
  __int64 v76; // [rsp+48h] [rbp-C8h]
  int v77; // [rsp+50h] [rbp-C0h]
  void *v78; // [rsp+50h] [rbp-C0h]
  int v79; // [rsp+50h] [rbp-C0h]
  size_t v80; // [rsp+50h] [rbp-C0h]
  unsigned int v81; // [rsp+50h] [rbp-C0h]
  void *v82; // [rsp+50h] [rbp-C0h]
  void *v83; // [rsp+50h] [rbp-C0h]
  __int64 v84; // [rsp+58h] [rbp-B8h]
  _QWORD *v85; // [rsp+60h] [rbp-B0h]
  __int64 v86; // [rsp+68h] [rbp-A8h]
  size_t v87; // [rsp+68h] [rbp-A8h]
  __int64 v88; // [rsp+68h] [rbp-A8h]
  __int64 v89; // [rsp+68h] [rbp-A8h]
  __int64 v91; // [rsp+78h] [rbp-98h]
  __int64 v92; // [rsp+88h] [rbp-88h]
  int v93; // [rsp+88h] [rbp-88h]
  int v94; // [rsp+88h] [rbp-88h]
  __int64 v95; // [rsp+90h] [rbp-80h] BYREF
  __int64 v96; // [rsp+98h] [rbp-78h]
  int v97[2]; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v98; // [rsp+A8h] [rbp-68h]
  int v99[2]; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v100; // [rsp+B8h] [rbp-58h]
  __int64 v101; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v102; // [rsp+C8h] [rbp-48h]
  __int64 v103; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v104; // [rsp+D8h] [rbp-38h]

  result = *(_QWORD **)(a1 + 120);
  v7 = &result[2 * *(unsigned int *)(a1 + 128)];
  v84 = a4;
  v85 = v7;
  if ( v7 != result )
  {
    while ( 1 )
    {
      v8 = result;
      if ( *result > 1u )
        break;
      result += 2;
      if ( v7 == result )
        return result;
    }
    if ( v7 != result )
    {
      v92 = *result;
      v67 = a1 + 16;
      while ( 1 )
      {
        v9 = v8[1];
        v71 = sub_15C5540(v67, *(_QWORD *)(v92 + 40), (_DWORD)v7, a4, a5, a6);
        v77 = sub_15C5560(v67, *(_QWORD *)(v92 + 40));
        v70 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL) + 16LL);
        v11 = *(__int64 **)(a2 + 24);
        v12 = *(unsigned int *)(a2 + 32);
        v13 = *(_DWORD *)(v10 + 12);
        v14 = v12 - 1;
        v12 *= 24;
        v15 = (__int64 *)((char *)v11 + v12);
        v16 = 24LL * (v13 & v14);
        v17 = &v11[(unsigned __int64)v16 / 8];
        if ( v16 == v12 )
        {
LABEL_68:
          while ( v17 != v11 )
          {
            v51 = *v11;
            if ( (unsigned __int64)*v11 > 1 )
            {
              if ( *(_DWORD *)(v51 + 12) == v13 && v10 == v51 )
              {
                v18 = v11;
                goto LABEL_117;
              }
            }
            else if ( !v51 )
            {
              break;
            }
            v11 += 3;
          }
LABEL_14:
          v101 = 0;
          v102 = 0;
          v103 = 1;
          v86 = a1 + 80;
          v104 = 0;
          sub_182CBA0(qword_1C7F2C0, &v103);
          LODWORD(v103) = 1;
          BYTE4(v103) &= ~1u;
          v20 = sub_1674520(a1 + 80, &v101, 1);
          v21 = qword_1C7F2C0;
          v22 = v20;
          v91 = v20;
          sub_182CBA0(qword_1C7F2C0, &v101);
          sub_182CBA0(v21, &v103);
          if ( v22 )
            ++*(_DWORD *)(v91 + 8);
          v101 = 0;
          v102 = 0;
          v103 = 1;
          v104 = 0;
          sub_182CBA0(qword_1C7F2C0, &v103);
          LODWORD(v103) = 1;
          BYTE4(v103) &= ~1u;
          v23 = sub_1674520(v86, &v101, v71);
          v24 = qword_1C7F2C0;
          v25 = v23;
          sub_182CBA0(qword_1C7F2C0, &v101);
          sub_182CBA0(v24, &v103);
          if ( v25 )
            ++*(_DWORD *)(v25 + 8);
          v101 = 0;
          v102 = 0;
          v103 = 1;
          v72 = v77 - 1;
          v104 = 0;
          sub_182CBA0(qword_1C7F2C0, &v103);
          LODWORD(v103) = 1;
          BYTE4(v103) &= ~1u;
          v26 = sub_1674520(v86, &v101, (unsigned int)(v77 - 1));
          v78 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v101);
          sub_182CBA0(v78, &v103);
          if ( v26 )
          {
            ++*(_DWORD *)(v26 + 8);
            if ( v91 )
            {
              if ( v25 )
                goto LABEL_21;
              goto LABEL_127;
            }
          }
          else if ( v91 )
          {
            goto LABEL_112;
          }
          goto LABEL_132;
        }
        v18 = &v11[(unsigned __int64)v16 / 8];
        while ( 1 )
        {
          v19 = *v18;
          if ( (unsigned __int64)*v18 > 1 )
            break;
          if ( !v19 )
            goto LABEL_14;
LABEL_11:
          v18 += 3;
          if ( v15 == v18 )
            goto LABEL_68;
        }
        if ( *(_DWORD *)(v19 + 12) != v13 || v10 != v19 )
          goto LABEL_11;
LABEL_117:
        v64 = v18[2];
        if ( !v64 )
          goto LABEL_14;
        v65 = *(int **)(*(_QWORD *)(sub_15D1F10(v18[2]) + 24) + 8LL);
        if ( *((_BYTE *)v65 + 8) )
          sub_DBF6E(0);
        v66 = *v65;
        v95 = v64;
        LOBYTE(v102) = 0;
        LOBYTE(v104) = 0;
        LODWORD(v101) = v66 - 1;
        LODWORD(v103) = v66 - 1;
        v91 = sub_15DCAD0(*(_QWORD *)(a1 + 88), (int)&v95, 0);
        sub_15D0DF0(&v103);
        sub_15D0DF0(&v101);
        if ( v91 )
          ++*(_DWORD *)(v91 + 8);
        *(_QWORD *)v97 = v64;
        LODWORD(v101) = v66 - 2;
        LOBYTE(v102) = 0;
        v72 = v77 - 1;
        LODWORD(v103) = v77 - 1;
        LOBYTE(v104) = 0;
        v25 = sub_15DCAD0(*(_QWORD *)(a1 + 88), (int)v97, 0);
        sub_15D0DF0(&v103);
        sub_15D0DF0(&v101);
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
        *(_QWORD *)v99 = v64;
        LOBYTE(v102) = 0;
        v103 = 0;
        LODWORD(v101) = v77 - 2;
        v104 = 0;
        v26 = sub_15DCAD0(*(_QWORD *)(a1 + 88), (int)v99, 0);
        sub_15D0DF0(&v103);
        sub_15D0DF0(&v101);
        if ( !v26 )
        {
          if ( v91 )
          {
            v86 = a1 + 80;
LABEL_112:
            if ( v25 )
            {
LABEL_113:
              v101 = 0;
              v102 = 0;
              v103 = 1;
              v104 = 0;
              sub_182CBA0(qword_1C7F2C0, &v103);
              LODWORD(v103) = 1;
              BYTE4(v103) &= ~1u;
              v62 = sub_1674520(v86, &v101, v72);
              v63 = qword_1C7F2C0;
              v26 = v62;
              sub_182CBA0(qword_1C7F2C0, &v101);
              sub_182CBA0(v63, &v103);
              if ( v26 )
                ++*(_DWORD *)(v26 + 8);
              goto LABEL_21;
            }
LABEL_127:
            v101 = 0;
            v102 = 0;
            v103 = 1;
            v104 = 0;
            sub_182CBA0(qword_1C7F2C0, &v103);
            LODWORD(v103) = 1;
            BYTE4(v103) &= ~1u;
            v25 = sub_1674520(v86, &v101, v71);
            v82 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v101);
            sub_182CBA0(v82, &v103);
            if ( v25 )
              ++*(_DWORD *)(v25 + 8);
LABEL_129:
            if ( v26 )
              goto LABEL_21;
            goto LABEL_113;
          }
LABEL_131:
          v86 = a1 + 80;
LABEL_132:
          v101 = 0;
          v102 = 0;
          v103 = 1;
          v104 = 0;
          sub_182CBA0(qword_1C7F2C0, &v103);
          LODWORD(v103) = 1;
          BYTE4(v103) &= ~1u;
          v91 = sub_1674520(v86, &v101, 1);
          v83 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v101);
          sub_182CBA0(v83, &v103);
          if ( v91 )
            ++*(_DWORD *)(v91 + 8);
          if ( !v25 )
            goto LABEL_127;
          goto LABEL_129;
        }
        ++*(_DWORD *)(v26 + 8);
        if ( !v91 )
          goto LABEL_131;
        if ( !v25 )
        {
          v86 = a1 + 80;
          goto LABEL_127;
        }
LABEL_21:
        v95 = 0;
        *(_QWORD *)v97 = 0;
        v27 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)v99 = 0;
        v96 = v27;
        v98 = v27;
        v100 = v27;
        sub_14B9BF0(a1 + 104, v91, &v95);
        sub_14B9BF0(a1 + 104, v25, v97);
        sub_14B9BF0(a1 + 104, v26, v99);
        v28 = *(unsigned int *)(v84 + 8);
        v29 = 2 * v28;
        v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL) + 16LL);
        if ( 3 * (int)v28 < (unsigned int)(4 * (*(_DWORD *)(v84 + 12) + *(_DWORD *)(v84 + 16))) )
        {
          v52 = v29;
          v74 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 32LL) + 16LL);
          v79 = 2 * v28;
          v87 = 8LL * v29;
          v53 = (__int64 *)sub_186B270(v87);
          v54 = v79;
          v33 = v87;
          v31 = v53;
          v30 = v74;
          if ( v79 )
          {
            v75 = v79;
            v80 = v87;
            v88 = v30;
            memset(v53, 0, 8 * v52);
            v30 = v88;
            v33 = v80;
            v54 = v75;
          }
          v32 = v54 - 1;
          v34 = (__int64 *)((char *)v31 + v33);
          v55 = *(__int64 **)v84;
          v56 = (__int64 *)(*(_QWORD *)v84 + 8LL * *(unsigned int *)(v84 + 8));
          if ( *(__int64 **)v84 != v56 )
          {
            do
            {
              while ( (unsigned __int64)*v55 <= 1 )
              {
                if ( v56 == ++v55 )
                  goto LABEL_98;
              }
              v57 = 8LL * (*(_DWORD *)(*v55 + 12) & v32);
              v58 = &v31[(unsigned __int64)v57 / 8];
              if ( v33 == v57 )
              {
LABEL_102:
                if ( v31 == v58 )
                {
LABEL_110:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v59 = v92;
                v60 = v31;
                while ( *v60 )
                {
                  if ( v58 == ++v60 )
                    goto LABEL_110;
                }
              }
              else
              {
                v59 = v92;
                v60 = &v31[(unsigned __int64)v57 / 8];
                while ( *v60 )
                {
                  if ( v34 == ++v60 )
                    goto LABEL_102;
                }
              }
              v61 = *v55++;
              v92 = v59;
              *v60 = v61;
            }
            while ( v56 != v55 );
LABEL_98:
            v56 = *(__int64 **)v84;
          }
          if ( v56 )
          {
            v73 = v54;
            v76 = v33;
            v81 = v54 - 1;
            v89 = v30;
            sub_186B220(v56);
            v54 = v73;
            v33 = v76;
            v32 = v81;
            v30 = v89;
          }
          *(_QWORD *)v84 = v31;
          *(_DWORD *)(v84 + 8) = v54;
          *(_DWORD *)(v84 + 16) = 0;
        }
        else
        {
          v31 = *(__int64 **)v84;
          v32 = v28 - 1;
          v33 = 8 * v28;
          v34 = (__int64 *)(*(_QWORD *)v84 + v33);
        }
        v35 = *(_DWORD *)(v30 + 12);
        v36 = 8LL * (v35 & v32);
        v37 = &v31[(unsigned __int64)v36 / 8];
        if ( v36 == v33 )
        {
          v39 = nullptr;
LABEL_31:
          if ( v31 == v37 )
          {
LABEL_39:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          while ( 1 )
          {
            while ( 1 )
            {
              v41 = *v31;
              if ( (unsigned __int64)*v31 <= 1 )
                break;
              if ( *(_DWORD *)(v41 + 12) == v35 && v30 == v41 )
              {
                *v31 = v30;
                goto LABEL_40;
              }
              if ( v37 == ++v31 )
                goto LABEL_39;
            }
            if ( !v41 )
              break;
            v39 = v31++;
            if ( v37 == v31 )
              goto LABEL_39;
          }
          if ( v39 )
            goto LABEL_108;
          v39 = v31;
        }
        else
        {
          v38 = &v31[(unsigned __int64)v36 / 8];
          v39 = nullptr;
          while ( 1 )
          {
            while ( 1 )
            {
              v40 = *v38;
              if ( (unsigned __int64)*v38 <= 1 )
                break;
              if ( *(_DWORD *)(v40 + 12) == v35 && v30 == v40 )
              {
                *v38 = v30;
                goto LABEL_40;
              }
              if ( v34 == ++v38 )
                goto LABEL_31;
            }
            if ( !v40 )
              break;
            v39 = v38++;
            if ( v34 == v38 )
              goto LABEL_31;
          }
          if ( v39 )
LABEL_108:
            --*(_DWORD *)(v84 + 16);
          else
            v39 = v38;
        }
        *v39 = v30;
        ++*(_DWORD *)(v84 + 12);
LABEL_40:
        a6 = v99[0];
        a5 = v97[0];
        if ( v95 || *(_QWORD *)v99 || *(_QWORD *)v97 )
        {
          sub_D8F2D0(&v101, a1, *(_QWORD *)(v92 + 40), v95, *(__int64 *)v97, *(__int64 *)v99);
          v42 = v101;
          v43 = v102;
          sub_135F9B0(a3, v92, v101);
          if ( v42 )
          {
            v44 = (*(_DWORD *)(v42 + 8))-- == 1;
            if ( v44 )
              sub_15D7BC0(v43, v42);
          }
          v45 = *(_QWORD *)v99;
          if ( *(_QWORD *)v99 )
          {
            v46 = v100;
            v44 = (*(_DWORD *)(*(_QWORD *)v99 + 8LL))-- == 1;
            if ( v44 )
              sub_15D7BC0(v46, v45);
          }
          v47 = *(_QWORD *)v97;
          if ( *(_QWORD *)v97 )
          {
            v48 = v98;
            v44 = (*(_DWORD *)(*(_QWORD *)v97 + 8LL))-- == 1;
            if ( v44 )
              sub_15D7BC0(v48, v47);
          }
          v49 = v95;
          if ( v95 )
          {
            v50 = v96;
            v44 = (*(_DWORD *)(v95 + 8))-- == 1;
            if ( v44 )
              sub_15D7BC0(v50, v49);
          }
          if ( v26 )
          {
            v44 = (*(_DWORD *)(v26 + 8))-- == 1;
            if ( v44 )
              sub_15D7BC0(v70, v26);
          }
          if ( v25 )
          {
            v44 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( v44 )
              sub_15D7BC0(v70, v25);
          }
          LODWORD(a4) = v91;
          if ( v91 )
          {
            v93 = *(_DWORD *)(v91 + 8);
            *(_DWORD *)(v91 + 8) = v93 - 1;
            if ( v93 == 1 )
LABEL_61:
              sub_15D7BC0(v70, v91);
          }
        }
        else
        {
          if ( v26 )
          {
            v44 = (*(_DWORD *)(v26 + 8))-- == 1;
            if ( v44 )
              sub_15D7BC0(v70, v26);
          }
          if ( v25 )
          {
            v44 = (*(_DWORD *)(v25 + 8))-- == 1;
            if ( v44 )
              sub_15D7BC0(v70, v25);
          }
          LODWORD(a4) = v91;
          if ( v91 )
          {
            v94 = *(_DWORD *)(v91 + 8);
            *(_DWORD *)(v91 + 8) = v94 - 1;
            if ( v94 == 1 )
              goto LABEL_61;
          }
        }
        result = v8 + 2;
        if ( v85 != v8 + 2 )
        {
          LODWORD(v7) = (_DWORD)v85;
          while ( 1 )
          {
            v8 = result;
            if ( *result > 1u )
              break;
            result += 2;
            if ( v85 == result )
              return result;
          }
          v92 = *result;
          if ( v85 != result )
            continue;
        }
        return result;
      }
    }
  }
  return result;
}

