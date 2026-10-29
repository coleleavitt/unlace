void __fastcall sub_D95A50(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 *v4; // rbx
  __int64 v5; // r9
  __int64 *v6; // r14
  __int64 v8; // r13
  __int64 v9; // r11
  unsigned int v10; // esi
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 *v13; // rbp
  unsigned int v14; // r9d
  __int64 v15; // r11
  __int64 *v16; // r12
  int v17; // edi
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 *v20; // rax
  __int64 *v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rax
  int *v24; // rax
  int v25; // eax
  __int64 *v26; // rax
  _DWORD *v27; // rax
  char v28; // al
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 *v32; // rax
  __int64 *v33; // r15
  __int64 v34; // rax
  __int64 *v35; // r8
  __int64 v36; // r8
  __int64 *v37; // r13
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 *v40; // rdx
  __int64 *v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // rax
  unsigned int v49; // r8d
  unsigned int v50; // esi
  __int64 *v51; // rbp
  __int64 v52; // r12
  int v53; // esi
  __int64 v54; // rax
  __int64 *v55; // rdi
  __int64 *v56; // rax
  __int64 *v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 *v60; // rax
  __int64 *v61; // r13
  __int64 *v62; // rax
  __int64 v63; // rdx
  __int64 *v64; // rcx
  __int64 *v65; // rdx
  unsigned int ptr; // [rsp+8h] [rbp-D0h]
  void *ptra; // [rsp+8h] [rbp-D0h]
  unsigned int *ptrd; // [rsp+8h] [rbp-D0h]
  unsigned int *ptrb; // [rsp+8h] [rbp-D0h]
  void *ptre; // [rsp+8h] [rbp-D0h]
  _DWORD *ptrc; // [rsp+8h] [rbp-D0h]
  size_t n; // [rsp+18h] [rbp-C0h]
  __int64 na; // [rsp+18h] [rbp-C0h]
  size_t nc; // [rsp+18h] [rbp-C0h]
  size_t nd; // [rsp+18h] [rbp-C0h]
  size_t ne; // [rsp+18h] [rbp-C0h]
  __int64 nb; // [rsp+18h] [rbp-C0h]
  int nf; // [rsp+18h] [rbp-C0h]
  size_t ng; // [rsp+18h] [rbp-C0h]
  __int64 v81; // [rsp+20h] [rbp-B8h]
  __int64 v82; // [rsp+20h] [rbp-B8h]
  unsigned int *v83; // [rsp+28h] [rbp-B0h]
  __int64 v84; // [rsp+28h] [rbp-B0h]
  unsigned int v85; // [rsp+28h] [rbp-B0h]
  unsigned int *v86; // [rsp+28h] [rbp-B0h]
  unsigned int *v88; // [rsp+38h] [rbp-A0h]
  unsigned int v89; // [rsp+38h] [rbp-A0h]
  unsigned int *v91; // [rsp+50h] [rbp-88h]
  int v92[4]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v93; // [rsp+70h] [rbp-68h] BYREF
  __int64 v94; // [rsp+78h] [rbp-60h]
  __int64 v95; // [rsp+80h] [rbp-58h]
  _DWORD *v96; // [rsp+88h] [rbp-50h]
  __int64 v97; // [rsp+90h] [rbp-48h]

  v4 = *(__int64 **)(a1 + 168);
  v5 = 2LL * *(unsigned int *)(a1 + 176);
  v6 = &v4[v5];
  if ( &v4[v5] != v4 )
  {
    while ( (unsigned __int64)*v4 <= 1 )
    {
      v4 += 2;
      if ( v6 == v4 )
        return;
    }
    if ( v6 != v4 )
    {
      v8 = *v4;
      while ( 1 )
      {
        v9 = a4[2];
        v10 = a4[4];
        v11 = v4[1];
        v12 = 2 * v9;
        ptr = 2 * v9;
        if ( 3 * (int)v9 < 4 * (v10 + a4[3]) )
        {
          v83 = a4;
          v81 = v4[1];
          na = 8LL * v12;
          v32 = (__int64 *)sub_186B270(na);
          v15 = na;
          v11 = v81;
          a4 = v83;
          v13 = v32;
          if ( v12 )
          {
            memset(v32, 0, na);
            v15 = 8LL * v12;
            v11 = v81;
            a4 = v83;
          }
          v33 = *(__int64 **)a4;
          v16 = (__int64 *)((char *)v13 + v15);
          v14 = ptr - 1;
          v34 = a4[2];
          v35 = (__int64 *)(*(_QWORD *)a4 + 8 * v34);
          if ( *(__int64 **)a4 != v35 )
          {
            v36 = v8;
            v37 = v4;
            v38 = *(_QWORD *)a4 + 8 * v34;
            do
            {
              while ( (unsigned __int64)*v33 <= 1 )
              {
                if ( (__int64 *)v38 == ++v33 )
                  goto LABEL_53;
              }
              v39 = 8LL * (*(_DWORD *)(*v33 + 12) & v14);
              v40 = &v13[(unsigned __int64)v39 / 8];
              if ( v15 == v39 )
              {
LABEL_57:
                if ( v13 == v40 )
                {
LABEL_65:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v41 = v13;
                while ( *v41 )
                {
                  if ( v40 == ++v41 )
                    goto LABEL_65;
                }
              }
              else
              {
                v41 = &v13[(unsigned __int64)v39 / 8];
                while ( *v41 )
                {
                  if ( v16 == ++v41 )
                    goto LABEL_57;
                }
              }
              v42 = *v33++;
              *v41 = v42;
            }
            while ( (__int64 *)v38 != v33 );
LABEL_53:
            v4 = v37;
            v8 = v36;
            v35 = *(__int64 **)a4;
          }
          if ( v35 )
          {
            v88 = a4;
            v84 = v15;
            nc = v11;
            sub_186B220(v35);
            a4 = v88;
            v15 = v84;
            v14 = ptr - 1;
            v11 = nc;
          }
          *(_QWORD *)a4 = v13;
          v10 = 0;
          a4[4] = 0;
          a4[2] = ptr;
        }
        else
        {
          v13 = *(__int64 **)a4;
          v14 = v9 - 1;
          v15 = 8 * v9;
          v16 = (__int64 *)(*(_QWORD *)a4 + v15);
        }
        v17 = *(_DWORD *)(v11 + 12);
        v18 = 8LL * (v17 & v14);
        v19 = &v13[(unsigned __int64)v18 / 8];
        if ( v18 != v15 )
        {
          v20 = &v13[(unsigned __int64)v18 / 8];
          v21 = nullptr;
          while ( 1 )
          {
            v22 = *v20;
            if ( (unsigned __int64)*v20 > 1 )
            {
              if ( *(_DWORD *)(v22 + 12) == v17 && v11 == v22 )
              {
                *v20 = v11;
                goto LABEL_25;
              }
            }
            else
            {
              if ( !v22 )
              {
                if ( v21 )
                  goto LABEL_63;
                v21 = v20;
                goto LABEL_64;
              }
              v21 = v20;
            }
            if ( ++v20 == v16 )
              goto LABEL_20;
          }
        }
        v21 = nullptr;
        while ( 1 )
        {
LABEL_20:
          if ( v19 == v13 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v23 = *v13;
          if ( (unsigned __int64)*v13 > 1 )
            break;
          if ( !v23 )
          {
            if ( v21 )
LABEL_63:
              a4[4] = v10 - 1;
            else
              v21 = v13;
LABEL_64:
            *v21 = v11;
            ++a4[3];
            goto LABEL_25;
          }
          v21 = v13;
LABEL_19:
          ++v13;
        }
        if ( *(_DWORD *)(v23 + 12) != v17 || v11 != v23 )
          goto LABEL_19;
        *v13 = v11;
LABEL_25:
        if ( *(_DWORD *)(v8 + 32) )
        {
          v24 = *(int **)(v8 + 24);
          if ( v24 )
            v25 = *v24;
          else
            v25 = -1;
          if ( *(_DWORD *)(a1 + 32) == v25 )
          {
            ptrb = a4;
            v43 = sub_D94A80(a1, a2, v8, v11);
            v46 = v43[2];
            if ( v46 && *(_DWORD *)(v46 - 4) || v43[3] )
            {
              sub_135F980(a3, v8, v43);
              a4 = ptrb;
            }
            else
            {
              nd = (size_t)ptrb;
              ptre = v43;
              sub_13478D0(v43, a2, v43, v44, v45);
              sub_186B220(ptre);
              a4 = (unsigned int *)nd;
            }
          }
          goto LABEL_29;
        }
        n = (size_t)a4;
        ptra = (void *)v11;
        sub_1684300(v92, *(_QWORD *)(a1 + 8));
        v27 = *(_DWORD **)(*(_QWORD *)(v8 + 40) + 24LL);
        if ( !v27 || v92[0] != *v27 || v27[1] )
        {
          v93 = 0;
          v94 = *(_QWORD *)(a1 + 8);
          v28 = sub_135E850(a2, ptra, &v93);
          a4 = (unsigned int *)n;
          if ( v28 )
          {
            sub_135F9B0(a3, v8, v93);
            a4 = (unsigned int *)n;
          }
          v29 = v93;
          if ( v93 )
          {
            v30 = v94;
            if ( (*(_DWORD *)(v93 + 8))-- == 1 )
            {
              ptrd = a4;
              sub_15D7BC0(v30, v29);
              a4 = ptrd;
            }
          }
          goto LABEL_29;
        }
        sub_D955E0((__int64)&v93, a1, a2, v8, (__int64)ptra);
        a4 = (unsigned int *)n;
        v47 = v95;
        ptrc = v96;
        v82 = v97;
        if ( v93 )
        {
          sub_135F980(a3, v93, v94);
          a4 = (unsigned int *)n;
        }
        if ( ptrc )
        {
          ne = (size_t)a4;
          sub_135F9B0(a3, v8, ptrc);
          a4 = (unsigned int *)ne;
          if ( !v47 )
            goto LABEL_103;
        }
        else if ( !v47 )
        {
          goto LABEL_29;
        }
        v48 = a4[2];
        v49 = a4[4];
        v50 = 2 * v48;
        v89 = 2 * v48;
        if ( 3 * (int)v48 < 4 * (v49 + a4[3]) )
        {
          v86 = a4;
          nb = 8LL * v50;
          v60 = (__int64 *)sub_186B270(nb);
          a4 = v86;
          v51 = v60;
          if ( v50 )
          {
            memset(v60, 0, 8LL * v50);
            a4 = v86;
          }
          v61 = *(__int64 **)a4;
          v85 = v89 - 1;
          v52 = (__int64)&v51[(unsigned __int64)nb / 8];
          v62 = (__int64 *)(*(_QWORD *)a4 + 8LL * a4[2]);
          if ( *(__int64 **)a4 != v62 )
          {
            do
            {
              if ( (unsigned __int64)*v61 > 1 )
              {
                v63 = 8LL * (*(_DWORD *)(*v61 + 12) & v85);
                v64 = &v51[(unsigned __int64)v63 / 8];
                if ( nb == v63 )
                {
LABEL_116:
                  if ( v51 == v64 )
                  {
LABEL_130:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v65 = v51;
                  while ( *v65 )
                  {
                    if ( v64 == ++v65 )
                      goto LABEL_130;
                  }
                }
                else
                {
                  v65 = &v51[(unsigned __int64)v63 / 8];
                  while ( *v65 )
                  {
                    if ( (__int64 *)v52 == ++v65 )
                      goto LABEL_116;
                  }
                }
                *v65 = *v61;
              }
              ++v61;
            }
            while ( v62 != v61 );
            v62 = *(__int64 **)a4;
          }
          if ( v62 )
          {
            v91 = a4;
            sub_186B220(v62);
            a4 = v91;
          }
          *(_QWORD *)a4 = v51;
          v49 = 0;
          a4[4] = 0;
          a4[2] = v89;
        }
        else
        {
          v51 = *(__int64 **)a4;
          v85 = v48 - 1;
          nb = 8 * v48;
          v52 = *(_QWORD *)a4 + 8 * v48;
        }
        v53 = *(_DWORD *)(v47 + 12);
        v54 = 8LL * (v53 & v85);
        v55 = &v51[(unsigned __int64)v54 / 8];
        if ( v54 == nb )
        {
          v57 = nullptr;
          while ( 1 )
          {
LABEL_95:
            if ( v55 == v51 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v59 = *v51;
            if ( (unsigned __int64)*v51 > 1 )
            {
              if ( *(_DWORD *)(v59 + 12) == v53 && v47 == v59 )
              {
                *v51 = v47;
                goto LABEL_102;
              }
            }
            else
            {
              if ( !v59 )
              {
                if ( v57 )
                  a4[4] = v49 - 1;
                else
                  v57 = v51;
                goto LABEL_127;
              }
              v57 = v51;
            }
            ++v51;
          }
        }
        v56 = &v51[(unsigned __int64)v54 / 8];
        v57 = nullptr;
        while ( 2 )
        {
          v58 = *v56;
          if ( (unsigned __int64)*v56 > 1 )
          {
            if ( *(_DWORD *)(v58 + 12) == v53 && v47 == v58 )
            {
              *v56 = v47;
              goto LABEL_102;
            }
            goto LABEL_84;
          }
          if ( v58 )
          {
            v57 = v56;
LABEL_84:
            if ( ++v56 == (__int64 *)v52 )
              goto LABEL_95;
            continue;
          }
          break;
        }
        if ( v57 )
          a4[4] = v49 - 1;
        else
          v57 = v56;
LABEL_127:
        *v57 = v47;
        ++a4[3];
LABEL_102:
        if ( ptrc )
        {
LABEL_103:
          nf = ptrc[2];
          ptrc[2] = nf - 1;
          if ( nf == 1 )
          {
            ng = (size_t)a4;
            sub_15D7BC0(v82, ptrc);
            a4 = (unsigned int *)ng;
          }
        }
LABEL_29:
        v26 = v4 + 2;
        if ( v6 != v4 + 2 )
        {
          while ( 1 )
          {
            v8 = *v26;
            v4 = v26;
            if ( (unsigned __int64)*v26 > 1 )
              break;
            v26 += 2;
            if ( v6 == v26 )
              return;
          }
          if ( v6 != v26 )
            continue;
        }
        return;
      }
    }
  }
}

