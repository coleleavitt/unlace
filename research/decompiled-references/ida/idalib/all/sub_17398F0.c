void __fastcall sub_17398F0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r15
  __int64 *v5; // rbx
  __int64 v6; // r13
  unsigned int *v7; // rbp
  unsigned int *v8; // r12
  size_t v9; // rcx
  const void *v10; // rbp
  size_t v11; // r14
  const void *v12; // r12
  size_t v13; // rdx
  int v14; // eax
  unsigned int *v15; // rsi
  size_t v16; // r9
  const void *v17; // r10
  size_t v18; // rdx
  int v19; // eax
  bool v20; // zf
  char v21; // dl
  char v22; // al
  void *v23; // rdi
  char v24; // al
  unsigned int *v25; // rsi
  size_t v26; // r9
  const void *v27; // r10
  size_t v28; // rdx
  int v29; // eax
  char v30; // al
  int v31; // esi
  __m128 v32; // xmm0
  char v33; // dl
  void *v34; // rdi
  char v35; // al
  size_t v36; // rdx
  int v37; // eax
  unsigned int *v38; // rax
  size_t v39; // r13
  const void *v40; // rbp
  __int64 v41; // rax
  __int64 *v42; // rdi
  char v43; // dl
  char v44; // al
  void *v45; // rdi
  char v46; // al
  unsigned int *v47; // rax
  char **v48; // r12
  unsigned int *v49; // rdi
  size_t v50; // r14
  size_t v51; // rdx
  int v52; // eax
  __int64 v53; // rax
  __int64 *v54; // r15
  __int64 v55; // rbx
  unsigned __int64 i; // r14
  unsigned int *v57; // rsi
  size_t v58; // rbp
  size_t v59; // rdx
  int v60; // eax
  int v61; // eax
  int v62; // edx
  __int64 v63; // rax
  __int64 v64; // r12
  __int64 j; // rbp
  __int64 v66; // rcx
  __int64 *v67; // r15
  __int64 v68; // r14
  __int64 *v69; // rdi
  __int64 v70; // rbp
  int v71; // r9d
  size_t v72; // rdx
  int v73; // eax
  void *v74; // rdi
  void *v75; // rdi
  int v76; // ecx
  int v77; // eax
  int v78; // edi
  int v79; // eax
  size_t v80; // [rsp+8h] [rbp-100h]
  size_t v81; // [rsp+8h] [rbp-100h]
  __int64 v82; // [rsp+8h] [rbp-100h]
  size_t v83; // [rsp+8h] [rbp-100h]
  size_t v84; // [rsp+10h] [rbp-F8h]
  size_t v85; // [rsp+10h] [rbp-F8h]
  __int64 *v86; // [rsp+10h] [rbp-F8h]
  char ***v87; // [rsp+10h] [rbp-F8h]
  size_t v88; // [rsp+10h] [rbp-F8h]
  __int64 v89; // [rsp+18h] [rbp-F0h]
  void *s1a; // [rsp+20h] [rbp-E8h]
  void *s1b; // [rsp+20h] [rbp-E8h]
  void *s1; // [rsp+20h] [rbp-E8h]
  __int64 *v93; // [rsp+28h] [rbp-E0h]
  __int64 *v94; // [rsp+40h] [rbp-C8h]
  __int64 *v95; // [rsp+48h] [rbp-C0h]
  char **v96; // [rsp+50h] [rbp-B8h]
  char **v97; // [rsp+50h] [rbp-B8h]
  void *v98[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v99; // [rsp+68h] [rbp-A0h] BYREF
  char v100; // [rsp+70h] [rbp-98h]
  int v101; // [rsp+78h] [rbp-90h]
  __int64 v102; // [rsp+80h] [rbp-88h]
  char **v103; // [rsp+90h] [rbp-78h] BYREF
  void *ptr; // [rsp+98h] [rbp-70h] BYREF
  int v105; // [rsp+A0h] [rbp-68h]
  char v106; // [rsp+A8h] [rbp-60h] BYREF
  char v107; // [rsp+B0h] [rbp-58h]
  int v108; // [rsp+B8h] [rbp-50h]
  __int64 v109; // [rsp+C0h] [rbp-48h]

  v3 = (__int64)a2 - a1;
  v89 = a3;
  if ( (__int64)a2 - a1 <= 896 )
    return;
  v4 = a1;
  if ( !a3 )
  {
    v94 = a2;
    goto LABEL_102;
  }
  v5 = a2;
  v95 = (__int64 *)(a1 + 56);
  while ( 2 )
  {
    --v89;
    v6 = v4 + 56 * (0x6DB6DB6DB6DB6DB7LL * (((__int64)v5 - v4) >> 3) / 2);
    v7 = *(unsigned int **)(*(_QWORD *)v6 + 16LL);
    v8 = *(unsigned int **)(*(_QWORD *)(v4 + 56) + 16LL);
    v9 = *v7;
    v10 = v7 + 4;
    v11 = *v8;
    v12 = v8 + 4;
    v13 = v11;
    if ( v9 <= v11 )
      v13 = v9;
    if ( v13 && (v80 = v9, v14 = memcmp(v12, v10, v13), v9 = v80, v14) )
    {
      if ( v14 < 0 )
      {
LABEL_10:
        v15 = *(unsigned int **)(*(v5 - 7) + 16);
        v16 = *v15;
        v17 = v15 + 4;
        v18 = v16;
        if ( v9 <= v16 )
          v18 = v9;
        if ( v18
          && (s1a = (void *)*v15,
              v84 = v9,
              v19 = memcmp(v10, v15 + 4, v18),
              v17 = v15 + 4,
              v9 = v84,
              v16 = (size_t)s1a,
              v19) )
        {
          if ( v19 < 0 )
            goto LABEL_16;
        }
        else if ( v9 != v16 && v9 < v16 )
        {
LABEL_16:
          v103 = *(char ***)v4;
          sub_1737F30((__int64)&ptr, v4 + 8);
          v20 = *(_BYTE *)(v4 + 32) == 0;
          v108 = *(_DWORD *)(v4 + 40);
          v109 = *(_QWORD *)(v4 + 48);
          *(_QWORD *)v4 = *(_QWORD *)v6;
          if ( v20 )
          {
            if ( !*(_BYTE *)(v6 + 32) )
            {
              *(_DWORD *)(v4 + 40) = *(_DWORD *)(v6 + 40);
              *(_QWORD *)(v4 + 48) = *(_QWORD *)(v6 + 48);
              *(_QWORD *)v6 = v103;
              v22 = v107;
              goto LABEL_157;
            }
            *(_QWORD *)(v4 + 8) = v4 + 24;
            *(_QWORD *)(v4 + 16) = 0x100000000LL;
            if ( *(_DWORD *)(v6 + 16) )
              sub_1712470((char ***)(v4 + 8), (char ***)(v6 + 8));
            *(_BYTE *)(v4 + 32) = 1;
            v21 = *(_BYTE *)(v6 + 32);
          }
          else if ( *(_BYTE *)(v6 + 32) )
          {
            sub_1712470((char ***)(v4 + 8), (char ***)(v6 + 8));
            v21 = *(_BYTE *)(v6 + 32);
          }
          else
          {
            v75 = *(void **)(v4 + 8);
            *(_BYTE *)(v4 + 32) = 0;
            if ( v75 != (void *)(v4 + 24) )
              free(v75);
            v21 = *(_BYTE *)(v6 + 32);
          }
          *(_DWORD *)(v4 + 40) = *(_DWORD *)(v6 + 40);
          *(_QWORD *)(v4 + 48) = *(_QWORD *)(v6 + 48);
          *(_QWORD *)v6 = v103;
          v22 = v107;
          if ( v21 )
          {
            if ( !v107 )
            {
              v23 = *(void **)(v6 + 8);
              *(_BYTE *)(v6 + 32) = 0;
              if ( v23 != (void *)(v6 + 24) )
              {
                free(v23);
                v24 = v107;
                goto LABEL_25;
              }
LABEL_154:
              *(_DWORD *)(v6 + 40) = v108;
              *(_QWORD *)(v6 + 48) = v109;
              goto LABEL_53;
            }
            sub_1712470((char ***)(v6 + 8), (char ***)&ptr);
            v24 = v107;
LABEL_25:
            *(_DWORD *)(v6 + 40) = v108;
            *(_QWORD *)(v6 + 48) = v109;
            if ( v24 )
              goto LABEL_152;
            goto LABEL_53;
          }
LABEL_157:
          if ( !v22 )
            goto LABEL_154;
          v78 = v105;
          *(_QWORD *)(v6 + 8) = v6 + 24;
          *(_QWORD *)(v6 + 16) = 0x100000000LL;
          if ( !v78 )
          {
            v79 = v108;
            *(_BYTE *)(v6 + 32) = 1;
            *(_DWORD *)(v6 + 40) = v79;
            *(_QWORD *)(v6 + 48) = v109;
            goto LABEL_152;
          }
          sub_1712470((char ***)(v6 + 8), (char ***)&ptr);
          v24 = v107;
          *(_BYTE *)(v6 + 32) = 1;
          goto LABEL_25;
        }
        v36 = v16;
        if ( v11 <= v16 )
          v36 = v11;
        if ( !v36 || (v81 = v16, v37 = memcmp(v12, v17, v36), v16 = v81, !v37) )
        {
          if ( v11 != v16 && v11 < v16 )
            goto LABEL_52;
LABEL_82:
          sub_1739190((__int64 *)v4, v95);
          goto LABEL_53;
        }
        if ( v37 >= 0 )
          goto LABEL_82;
LABEL_52:
        sub_1739190((__int64 *)v4, v5 - 7);
        goto LABEL_53;
      }
    }
    else if ( v9 != v11 && v9 > v11 )
    {
      goto LABEL_10;
    }
    v25 = *(unsigned int **)(*(v5 - 7) + 16);
    v26 = *v25;
    v27 = v25 + 4;
    v28 = v26;
    if ( v11 <= v26 )
      v28 = v11;
    if ( v28 )
    {
      s1b = (void *)*v25;
      v85 = v9;
      v29 = memcmp(v12, v25 + 4, v28);
      v27 = v25 + 4;
      v9 = v85;
      v26 = (size_t)s1b;
      if ( v29 )
      {
        if ( v29 < 0 )
          goto LABEL_34;
LABEL_130:
        v72 = v26;
        if ( v9 <= v26 )
          v72 = v9;
        if ( v72 && (v88 = v26, v83 = v9, v73 = memcmp(v10, v27, v72), v9 = v83, v26 = v88, v73) )
        {
          if ( v73 < 0 )
            goto LABEL_52;
        }
        else if ( v9 != v26 && v9 < v26 )
        {
          goto LABEL_52;
        }
        sub_1739190((__int64 *)v4, (__int64 *)(v4 + 56 * (0x6DB6DB6DB6DB6DB7LL * (((__int64)v5 - v4) >> 3) / 2)));
        goto LABEL_53;
      }
    }
    if ( v11 == v26 || v11 >= v26 )
      goto LABEL_130;
LABEL_34:
    v103 = *(char ***)v4;
    sub_1737F30((__int64)&ptr, v4 + 8);
    v20 = *(_BYTE *)(v4 + 32) == 0;
    v108 = *(_DWORD *)(v4 + 40);
    v109 = *(_QWORD *)(v4 + 48);
    *(_QWORD *)v4 = *(_QWORD *)(v4 + 56);
    if ( !v20 )
    {
      if ( *(_BYTE *)(v4 + 88) )
      {
        sub_1712470((char ***)(v4 + 8), (char ***)(v4 + 64));
        v30 = *(_BYTE *)(v4 + 88);
        goto LABEL_39;
      }
      v74 = *(void **)(v4 + 8);
      *(_BYTE *)(v4 + 32) = 0;
      if ( v74 != (void *)(v4 + 24) )
      {
        free(v74);
        v30 = *(_BYTE *)(v4 + 88);
        goto LABEL_39;
      }
LABEL_148:
      v33 = v107;
      *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 96);
      *(__m128 *)(v4 + 48) = _mm_loadh_ps((const double *)&v103);
      goto LABEL_149;
    }
    v30 = *(_BYTE *)(v4 + 88);
    if ( !v30 )
      goto LABEL_148;
    v31 = *(_DWORD *)(v4 + 72);
    *(_QWORD *)(v4 + 8) = v4 + 24;
    *(_QWORD *)(v4 + 16) = 0x100000000LL;
    if ( v31 )
    {
      sub_1712470((char ***)(v4 + 8), (char ***)(v4 + 64));
      v30 = *(_BYTE *)(v4 + 88);
    }
    *(_BYTE *)(v4 + 32) = 1;
LABEL_39:
    v32 = _mm_loadh_ps((const double *)&v103);
    *(_DWORD *)(v4 + 40) = *(_DWORD *)(v4 + 96);
    v33 = v107;
    *(__m128 *)(v4 + 48) = v32;
    if ( !v30 )
    {
LABEL_149:
      if ( !v33 )
        goto LABEL_147;
      v76 = v105;
      *(_QWORD *)(v4 + 64) = v4 + 80;
      *(_QWORD *)(v4 + 72) = 0x100000000LL;
      if ( !v76 )
      {
        v77 = v108;
        *(_BYTE *)(v4 + 88) = 1;
        *(_DWORD *)(v4 + 96) = v77;
        *(_QWORD *)(v4 + 104) = v109;
        goto LABEL_152;
      }
      sub_1712470((char ***)(v4 + 64), (char ***)&ptr);
      v35 = v107;
      *(_BYTE *)(v4 + 88) = 1;
      goto LABEL_43;
    }
    if ( !v33 )
    {
      v34 = *(void **)(v4 + 64);
      *(_BYTE *)(v4 + 88) = 0;
      if ( v34 != (void *)(v4 + 80) )
      {
        free(v34);
        v35 = v107;
        goto LABEL_43;
      }
LABEL_147:
      *(_DWORD *)(v4 + 96) = v108;
      *(_QWORD *)(v4 + 104) = v109;
      goto LABEL_53;
    }
    sub_1712470((char ***)(v4 + 64), (char ***)&ptr);
    v35 = v107;
LABEL_43:
    *(_DWORD *)(v4 + 96) = v108;
    *(_QWORD *)(v4 + 104) = v109;
    if ( v35 )
    {
LABEL_152:
      if ( ptr != &v106 )
        free(ptr);
    }
LABEL_53:
    v86 = v5;
    v93 = v5;
    v38 = *(unsigned int **)(*(_QWORD *)v4 + 16LL);
    v5 = v95;
    v39 = *v38;
    v40 = v38 + 4;
    while ( 1 )
    {
      v48 = (char **)*v5;
      v94 = v5;
      v49 = *(unsigned int **)(*v5 + 16);
      v50 = *v49;
      v51 = v50;
      if ( v39 <= v50 )
        v51 = v39;
      if ( !v51 )
        break;
      v52 = memcmp(v49 + 4, v40, v51);
      if ( !v52 )
        break;
      if ( v52 >= 0 )
        goto LABEL_73;
LABEL_66:
      v5 += 7;
    }
    if ( v39 != v50 && v39 > v50 )
      goto LABEL_66;
LABEL_73:
    s1 = (void *)v40;
    v53 = v4;
    v54 = v5;
    v55 = v53;
    for ( i = (unsigned __int64)(v86 - 7); ; i -= 56LL )
    {
      v86 = (__int64 *)i;
      v57 = *(unsigned int **)(*(_QWORD *)i + 16LL);
      v58 = *v57;
      v59 = v58;
      if ( v39 <= v58 )
        v59 = v39;
      if ( v59 )
      {
        v60 = memcmp(s1, v57 + 4, v59);
        if ( v60 )
          break;
      }
      if ( v39 == v58 || v39 >= v58 )
      {
        v41 = v55;
        v5 = v54;
        v4 = v41;
        if ( (unsigned __int64)v5 >= i )
          goto LABEL_100;
LABEL_55:
        v103 = v48;
        sub_1737F30((__int64)&ptr, (__int64)(v5 + 1));
        v20 = *((_BYTE *)v5 + 32) == 0;
        v108 = *((_DWORD *)v5 + 10);
        v109 = v5[6];
        *v5 = *(_QWORD *)i;
        if ( !v20 )
        {
          if ( *(_BYTE *)(i + 32) )
          {
            sub_1712470((char ***)v5 + 1, (char ***)(i + 8));
            v43 = *(_BYTE *)(i + 32);
          }
          else
          {
            v42 = (__int64 *)v5[1];
            *((_BYTE *)v5 + 32) = 0;
            if ( v42 != v5 + 3 )
              free(v42);
            v43 = *(_BYTE *)(i + 32);
          }
          goto LABEL_60;
        }
        if ( *(_BYTE *)(i + 32) )
        {
          *((_DWORD *)v5 + 4) = 0;
          *((_DWORD *)v5 + 5) = 1;
          v62 = *(_DWORD *)(i + 16);
          v5[1] = (__int64)(v5 + 3);
          if ( v62 )
            sub_1712470((char ***)v5 + 1, (char ***)(i + 8));
          *((_BYTE *)v5 + 32) = 1;
          v43 = *(_BYTE *)(i + 32);
LABEL_60:
          *((_DWORD *)v5 + 10) = *(_DWORD *)(i + 40);
          v5[6] = *(_QWORD *)(i + 48);
          *(_QWORD *)i = v103;
          v44 = v107;
          if ( v43 )
          {
            if ( !v107 )
            {
              v45 = *(void **)(i + 8);
              *(_BYTE *)(i + 32) = 0;
              if ( v45 != (void *)(i + 24) )
              {
                free(v45);
                v46 = v107;
                goto LABEL_64;
              }
LABEL_89:
              *(_DWORD *)(i + 40) = v108;
              *(_QWORD *)(i + 48) = v109;
LABEL_65:
              v47 = *(unsigned int **)(*(_QWORD *)v4 + 16LL);
              v39 = *v47;
              v40 = v47 + 4;
              goto LABEL_66;
            }
            sub_1712470((char ***)(i + 8), (char ***)&ptr);
            v46 = v107;
LABEL_64:
            *(_DWORD *)(i + 40) = v108;
            *(_QWORD *)(i + 48) = v109;
            if ( !v46 )
              goto LABEL_65;
            goto LABEL_87;
          }
        }
        else
        {
          *((_DWORD *)v5 + 10) = *(_DWORD *)(i + 40);
          v5[6] = *(_QWORD *)(i + 48);
          *(_QWORD *)i = v103;
          v44 = v107;
        }
        if ( !v44 )
          goto LABEL_89;
        *(_QWORD *)(i + 8) = i + 24;
        *(_QWORD *)(i + 16) = 0x100000000LL;
        if ( v105 )
        {
          sub_1712470((char ***)(i + 8), (char ***)&ptr);
          v46 = v107;
          *(_BYTE *)(i + 32) = 1;
          goto LABEL_64;
        }
        v61 = v108;
        *(_BYTE *)(i + 32) = 1;
        *(_DWORD *)(i + 40) = v61;
        *(_QWORD *)(i + 48) = v109;
LABEL_87:
        if ( ptr != &v106 )
          free(ptr);
        goto LABEL_65;
      }
LABEL_80:
      ;
    }
    if ( v60 < 0 )
      goto LABEL_80;
    v63 = v55;
    v5 = v54;
    v4 = v63;
    if ( (unsigned __int64)v5 < i )
      goto LABEL_55;
LABEL_100:
    v3 = (__int64)v5 - v4;
    sub_17398F0(v5, v93, v89);
    if ( (__int64)v5 - v4 > 896 )
    {
      if ( !v89 )
      {
LABEL_102:
        v82 = 0x6DB6DB6DB6DB6DB7LL * (v3 >> 3);
        v64 = (v82 - 2) >> 1;
        for ( j = v4 + 56 * v64 + 8; ; j -= 56 )
        {
          v96 = *(char ***)(j - 8);
          sub_1737F30((__int64)v98, j);
          v101 = *(_DWORD *)(j + 32);
          v102 = *(_QWORD *)(j + 40);
          v103 = v96;
          sub_1737F30((__int64)&ptr, (__int64)v98);
          v108 = v101;
          v109 = v102;
          sub_1738B80(v4, v64, v82, &v103);
          if ( v107 && ptr != &v106 )
            free(ptr);
          if ( !v64 )
            break;
          --v64;
          if ( v100 && v98[0] != &v99 )
            free(v98[0]);
        }
        if ( v100 && v98[0] != &v99 )
          free(v98[0]);
        v66 = v4;
        v87 = (char ***)(v4 + 8);
        v67 = v94 - 7;
        v68 = v66;
        do
        {
          v97 = (char **)*v67;
          sub_1737F30((__int64)v98, (__int64)(v67 + 1));
          v20 = *((_BYTE *)v67 + 32) == 0;
          v101 = *((_DWORD *)v67 + 10);
          v102 = v67[6];
          *v67 = *(_QWORD *)v68;
          if ( v20 )
          {
            if ( *(_BYTE *)(v68 + 32) )
            {
              *((_DWORD *)v67 + 4) = 0;
              *((_DWORD *)v67 + 5) = 1;
              v71 = *(_DWORD *)(v68 + 16);
              v67[1] = (__int64)(v67 + 3);
              if ( v71 )
                sub_1712470((char ***)v67 + 1, v87);
              *((_BYTE *)v67 + 32) = 1;
            }
          }
          else if ( *(_BYTE *)(v68 + 32) )
          {
            sub_1712470((char ***)v67 + 1, v87);
          }
          else
          {
            v69 = (__int64 *)v67[1];
            *((_BYTE *)v67 + 32) = 0;
            if ( v69 != v67 + 3 )
              free(v69);
          }
          v70 = (__int64)v67 - v68;
          *((_DWORD *)v67 + 10) = *(_DWORD *)(v68 + 40);
          v67[6] = *(_QWORD *)(v68 + 48);
          v103 = v97;
          sub_1737F30((__int64)&ptr, (__int64)v98);
          v108 = v101;
          v109 = v102;
          sub_1738B80(v68, 0, 0x6DB6DB6DB6DB6DB7LL * (((__int64)v67 - v68) >> 3), &v103);
          if ( v107 && ptr != &v106 )
            free(ptr);
          if ( v100 && v98[0] != &v99 )
            free(v98[0]);
          v67 -= 7;
        }
        while ( v70 > 56 );
        return;
      }
      continue;
    }
    break;
  }
}
