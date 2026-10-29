void __fastcall sub_963FE0(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 **a12)
{
  __int64 v12; // r11
  __int64 v13; // rbx
  __int64 v14; // rax
  char *v15; // rax
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // r12
  char *v19; // r13
  __int64 v20; // r11
  __int64 v21; // r15
  int v22; // ecx
  int v23; // eax
  int v24; // r8d
  int v25; // esi
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 *v29; // rsi
  int v30; // r8d
  unsigned int v31; // ebx
  __int64 v32; // rbp
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 k; // rax
  __int64 v37; // rcx
  unsigned int v38; // r11d
  int v39; // r8d
  int v40; // ecx
  int v41; // eax
  __int64 v42; // rbx
  __int64 *v43; // rcx
  __int64 *m; // r8
  __int64 v45; // r9
  __int64 v46; // r15
  __int64 v47; // r12
  unsigned __int64 *v48; // r13
  __int64 v49; // rax
  __int64 v50; // r12
  char *v51; // rax
  __int64 v52; // r8
  __int64 v53; // r13
  __int64 v54; // r15
  int v55; // edx
  char *v56; // r12
  __int64 v57; // rdi
  __int64 v58; // rbp
  int v59; // eax
  int v60; // r11d
  int v61; // ecx
  int v62; // eax
  __int64 v63; // rdx
  int v64; // r11d
  unsigned int v65; // r9d
  __int64 *v66; // rax
  __int64 v67; // r10
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rbx
  __int64 i; // rcx
  __int64 v72; // rsi
  int v73; // r11d
  int v74; // esi
  int v75; // ecx
  __int64 v76; // r9
  __int64 *v77; // rsi
  __int64 *j; // r9
  __int64 v79; // r10
  unsigned int v80; // eax
  __int64 v81; // rdi
  __int64 *v82; // rax
  __int64 v83; // rcx
  unsigned int v84; // eax
  __int64 v85; // rdx
  __int64 *v86; // rcx
  unsigned __int64 v87; // rsi
  char *v88; // [rsp+0h] [rbp-98h]
  unsigned int v89; // [rsp+8h] [rbp-90h]
  char *v90; // [rsp+10h] [rbp-88h]
  __int64 v91; // [rsp+18h] [rbp-80h]
  __int64 v92; // [rsp+20h] [rbp-78h]
  __int64 v93; // [rsp+28h] [rbp-70h]
  unsigned __int64 *v94; // [rsp+30h] [rbp-68h]
  char *v95; // [rsp+38h] [rbp-60h]
  __int64 v98; // [rsp+58h] [rbp-40h]

  v12 = a4;
  if ( a5 <= a4 )
    a4 = a5;
  v94 = a1;
  if ( a11 >= a4 )
  {
    sub_9636E0(a1, a2, a3, v12, a5, a6, a7, a8, a9, a10, (__int64)a12);
    return;
  }
  v93 = v12;
  v13 = v12;
  v92 = a5;
  v14 = a5;
  v95 = (char *)a2;
  if ( v12 > a5 )
    goto LABEL_5;
  while ( 2 )
  {
    v50 = v14 / 2;
    v51 = &v95[16 * (v14 / 2)];
    v98 = v50;
    v52 = *(_QWORD *)v51;
    v53 = *((_QWORD *)v51 + 1);
    v88 = v51;
    v90 = (char *)v94;
    v54 = (v95 - (char *)v94) >> 4;
LABEL_30:
    if ( v54 <= 0 )
      goto LABEL_48;
    do
    {
      v55 = *(_DWORD *)(v52 + 12);
      v56 = &v90[16 * (v54 >> 1)];
      v57 = *(_QWORD *)v56;
      v58 = *((_QWORD *)v56 + 1);
      v59 = (*(_DWORD *)(v53 + 12) - v55) ^ (v55 << 8);
      v60 = (v55 - v59) << 10;
      v61 = v59 ^ ((v55 - v59) << 16);
      v62 = v59 - v55;
      v63 = *((unsigned int *)a12 + 2);
      v64 = (v61 + v62) ^ v60;
      v65 = v63 - 1;
      v66 = *a12;
      v67 = 24 * v63;
      v68 = (__int64)&(*a12)[3 * v63];
      v69 = 24LL * (v65 & v64);
      v70 = (__int64)&(*a12)[(unsigned __int64)v69 / 8];
      if ( v69 != v67 )
      {
        for ( i = (__int64)&(*a12)[(unsigned __int64)v69 / 8]; v68 != i; i += 24 )
        {
          v72 = *(_QWORD *)i;
          if ( *(_QWORD *)i > 1u )
          {
            if ( *(_DWORD *)(i + 20) == v64 && v52 == v72 && v53 == *(_QWORD *)(i + 8) )
            {
              v89 = *(_DWORD *)(i + 16);
              goto LABEL_39;
            }
          }
          else if ( !v72 )
          {
            goto LABEL_38;
          }
        }
      }
      if ( v66 == (__int64 *)v70 )
      {
LABEL_38:
        v89 = 0;
        goto LABEL_39;
      }
      v86 = *a12;
      while ( 1 )
      {
        v87 = *v86;
        if ( (unsigned __int64)*v86 > 1 )
          break;
        if ( !v87 )
          goto LABEL_38;
LABEL_93:
        v86 += 3;
        if ( (__int64 *)v70 == v86 )
          goto LABEL_38;
      }
      if ( *((_DWORD *)v86 + 5) != v64 || v52 != v87 || v53 != v86[1] )
        goto LABEL_93;
      v89 = *((_DWORD *)v86 + 4);
LABEL_39:
      v73 = *(_DWORD *)(v57 + 12);
      v74 = (*(_DWORD *)(v58 + 12) - v73) ^ (v73 << 8);
      v75 = ((v74 ^ ((v73 - v74) << 16)) + v74 - v73) ^ ((v73 - v74) << 10);
      v76 = 24LL * (v75 & v65);
      v77 = &v66[(unsigned __int64)v76 / 8];
      if ( v67 != v76 )
      {
        for ( j = &v66[(unsigned __int64)v76 / 8]; (__int64 *)v68 != j; j += 3 )
        {
          v79 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *((_DWORD *)j + 5) == v75 && v57 == v79 && v58 == j[1] )
            {
              v84 = *((_DWORD *)j + 4);
              goto LABEL_77;
            }
          }
          else if ( !v79 )
          {
            goto LABEL_46;
          }
        }
      }
      while ( v77 != v66 )
      {
        v85 = *v66;
        if ( (unsigned __int64)*v66 > 1 )
        {
          if ( *((_DWORD *)v66 + 5) == v75 && v57 == v85 && v58 == v66[1] )
          {
            v84 = *((_DWORD *)v66 + 4);
LABEL_77:
            if ( v84 >= v89 )
              goto LABEL_47;
LABEL_78:
            v54 >>= 1;
            goto LABEL_30;
          }
        }
        else if ( !v85 )
        {
          break;
        }
        v66 += 3;
      }
LABEL_46:
      if ( v89 )
        goto LABEL_78;
LABEL_47:
      v90 = v56 + 16;
      v54 = v54 - (v54 >> 1) - 1;
    }
    while ( v54 > 0 );
LABEL_48:
    v47 = v98;
    v46 = (v90 - (char *)v94) >> 4;
LABEL_25:
    v93 -= v46;
    v48 = (unsigned __int64 *)sub_963A80(v90, v95, v88, v93, v47, (__int64)a6, a11);
    sub_963FE0((_DWORD)v94, (_DWORD)v90, (_DWORD)v48, v46, v47, (_DWORD)a6, a11, (__int64)a12);
    v92 -= v47;
    v49 = v92;
    if ( v93 <= v92 )
      v49 = v93;
    if ( a11 < v49 )
    {
      v13 = v93;
      v94 = v48;
      v95 = v88;
      v14 = v92;
      if ( v93 <= v92 )
        continue;
LABEL_5:
      v15 = (char *)&v94[2 * (v13 / 2)];
      v91 = v13 / 2;
      v16 = *(_QWORD *)v15;
      v17 = *((_QWORD *)v15 + 1);
      v90 = v15;
      v88 = v95;
      v18 = ((char *)a3 - v95) >> 4;
LABEL_6:
      if ( v18 <= 0 )
        goto LABEL_24;
LABEL_7:
      v19 = &v88[16 * (v18 >> 1)];
      v20 = *(_QWORD *)v19;
      v21 = *((_QWORD *)v19 + 1);
      v22 = *(_DWORD *)(*(_QWORD *)v19 + 12LL);
      v23 = (*(_DWORD *)(v21 + 12) - v22) ^ (v22 << 8);
      v24 = (v22 - v23) << 10;
      v25 = v23 ^ ((v22 - v23) << 16);
      v26 = v23 - v22;
      v27 = *((unsigned int *)a12 + 2);
      v28 = v25 + v26;
      v29 = *a12;
      v30 = v28 ^ v24;
      v31 = v27 - 1;
      v32 = 24 * v27;
      v33 = (__int64)&(*a12)[3 * v27];
      v34 = 3LL * (((_DWORD)v27 - 1) & (unsigned int)v30);
      v35 = (__int64)&(*a12)[v34];
      if ( v34 != 3 * v27 )
      {
        for ( k = (__int64)&(*a12)[v34]; v33 != k; k += 24 )
        {
          v37 = *(_QWORD *)k;
          if ( *(_QWORD *)k > 1u )
          {
            if ( *(_DWORD *)(k + 20) == v30 && v20 == v37 && v21 == *(_QWORD *)(k + 8) )
            {
              v38 = *(_DWORD *)(k + 16);
              goto LABEL_15;
            }
          }
          else if ( !v37 )
          {
            goto LABEL_14;
          }
        }
      }
      if ( v29 == (__int64 *)v35 )
      {
LABEL_14:
        v38 = 0;
        goto LABEL_15;
      }
      v82 = *a12;
      while ( 1 )
      {
        v83 = *v82;
        if ( (unsigned __int64)*v82 > 1 )
        {
          if ( *((_DWORD *)v82 + 5) == v30 && v20 == v83 && v21 == v82[1] )
          {
            v38 = *((_DWORD *)v82 + 4);
LABEL_15:
            v39 = *(_DWORD *)(v16 + 12);
            v40 = (*(_DWORD *)(v17 + 12) - v39) ^ (v39 << 8);
            v41 = ((v40 ^ ((v39 - v40) << 16)) + v40 - v39) ^ ((v39 - v40) << 10);
            v42 = v41 & v31;
            v43 = &v29[3 * v42];
            if ( v32 != 24 * v42 )
            {
              for ( m = &v29[3 * v42]; (__int64 *)v33 != m; m += 3 )
              {
                v45 = *m;
                if ( (unsigned __int64)*m > 1 )
                {
                  if ( *((_DWORD *)m + 5) == v41 && v16 == v45 && v17 == m[1] )
                  {
                    v80 = *((_DWORD *)m + 4);
                    goto LABEL_51;
                  }
                }
                else if ( !v45 )
                {
                  goto LABEL_22;
                }
              }
            }
            while ( v43 != v29 )
            {
              v81 = *v29;
              if ( (unsigned __int64)*v29 > 1 )
              {
                if ( *((_DWORD *)v29 + 5) == v41 && v16 == v81 && v17 == v29[1] )
                {
                  v80 = *((_DWORD *)v29 + 4);
LABEL_51:
                  if ( v80 < v38 )
                    goto LABEL_23;
LABEL_52:
                  v18 >>= 1;
                  goto LABEL_6;
                }
              }
              else if ( !v81 )
              {
                break;
              }
              v29 += 3;
            }
LABEL_22:
            if ( !v38 )
              goto LABEL_52;
LABEL_23:
            v88 = v19 + 16;
            v18 = v18 - (v18 >> 1) - 1;
            if ( v18 <= 0 )
            {
LABEL_24:
              v46 = v91;
              v47 = (v88 - v95) >> 4;
              goto LABEL_25;
            }
            goto LABEL_7;
          }
        }
        else if ( !v83 )
        {
          goto LABEL_14;
        }
        v82 += 3;
        if ( (__int64 *)v35 == v82 )
          goto LABEL_14;
      }
    }
    break;
  }
  sub_9636E0(v48, (unsigned __int64 *)v88, a3, v93, v92, a6, a7, a8, a9, a10, (__int64)a12);
}

