void __fastcall sub_CA5AF0(__int64 *a1, int **a2, __int64 a3, __int64 *a4)
{
  int *v4; // r13
  void *v6; // r14
  bool v7; // al
  int *v8; // r13
  void *v9; // r14
  bool v10; // al
  __int64 v11; // r14
  unsigned int v12; // r13d
  int *i; // r15
  int *v14; // r15
  void *v15; // rdi
  unsigned __int64 v16; // r14
  void *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v26; // r14
  int v27; // eax
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned int v33; // r14d
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r15
  __int64 v38; // rcx
  __int64 v39; // rbx
  int *v40; // rbp
  int *v42; // rax
  unsigned int v43; // edx
  __int64 v44; // rsi
  char *v45; // r13
  __int64 v46; // rcx
  char *v47; // r15
  char *v48; // rdi
  int *v49; // rax
  int v50; // edx
  __int64 v51; // rdx
  char v52; // cl
  char v53; // bl
  __int64 v54; // rdx
  char v55; // cl
  char v56; // bl
  int v57; // [rsp-8h] [rbp-E0h]
  int v58; // [rsp+0h] [rbp-D8h]
  int v59; // [rsp+0h] [rbp-D8h]
  int v61; // [rsp+8h] [rbp-D0h]
  __int64 *v62; // [rsp+8h] [rbp-D0h]
  int v63; // [rsp+10h] [rbp-C8h]
  char *v64; // [rsp+10h] [rbp-C8h]
  __int64 v65; // [rsp+18h] [rbp-C0h]
  int v66; // [rsp+18h] [rbp-C0h]
  __int64 v67; // [rsp+18h] [rbp-C0h]
  unsigned int v68; // [rsp+18h] [rbp-C0h]
  int v69; // [rsp+20h] [rbp-B8h]
  int v70; // [rsp+20h] [rbp-B8h]
  unsigned int v71; // [rsp+24h] [rbp-B4h]
  int v72; // [rsp+24h] [rbp-B4h]
  void *v73; // [rsp+28h] [rbp-B0h]
  char v74[8]; // [rsp+28h] [rbp-B0h]
  char v75[8]; // [rsp+28h] [rbp-B0h]
  int v76; // [rsp+28h] [rbp-B0h]
  char v77; // [rsp+28h] [rbp-B0h]
  char v78[8]; // [rsp+28h] [rbp-B0h]
  int v80; // [rsp+30h] [rbp-A8h]
  __int64 v81; // [rsp+30h] [rbp-A8h]
  int *v82; // [rsp+30h] [rbp-A8h]
  __int64 v83; // [rsp+38h] [rbp-A0h]
  int v84; // [rsp+38h] [rbp-A0h]
  int v85; // [rsp+40h] [rbp-98h]
  void *v86; // [rsp+48h] [rbp-90h]
  __int64 v87; // [rsp+48h] [rbp-90h]
  int v88[2]; // [rsp+50h] [rbp-88h] BYREF
  int v89[2]; // [rsp+58h] [rbp-80h]
  int v90[2]; // [rsp+60h] [rbp-78h] BYREF
  int v91[2]; // [rsp+68h] [rbp-70h]
  int v92[2]; // [rsp+70h] [rbp-68h] BYREF
  int v93[2]; // [rsp+78h] [rbp-60h]
  int v94[2]; // [rsp+80h] [rbp-58h] BYREF
  int v95[2]; // [rsp+88h] [rbp-50h]
  int v96[2]; // [rsp+90h] [rbp-48h]
  int v97; // [rsp+98h] [rbp-40h]
  int v98; // [rsp+A0h] [rbp-38h]
  void *v99; // [rsp+A8h] [rbp-30h]
  int v100; // [rsp+B0h] [rbp-28h]
  __int64 v101; // [rsp+B8h] [rbp-20h]

  v4 = *a2;
  if ( !*a2 || (unsigned int)*(v4 - 1) <= 2 )
    return;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    v6 = qword_1C7F2C0;
LABEL_5:
    if ( (unsigned int)sub_182C7B0(v6, v4, a3) )
      return;
    goto LABEL_10;
  }
  if ( *(_DWORD *)a3 == 1 && (*(_BYTE *)(a3 + 20) & 1) == 0 && *(_DWORD *)(a3 + 16) == 1 )
    return;
  v6 = qword_1C7F2C0;
  if ( (v4[1] & 1) != 0 )
    goto LABEL_5;
  if ( *v4 != *(_DWORD *)a3 )
    return;
LABEL_10:
  v65 = a3 + 16;
  if ( (v4[5] & 1) != 0 || (*(_BYTE *)(a3 + 20) & 1) != 0 )
    v7 = (unsigned int)sub_182C7B0(v6, v4 + 4, v65) == 0;
  else
    v7 = v4[4] == *(_DWORD *)(a3 + 16);
  if ( v7 )
  {
    v8 = *a2;
    v9 = qword_1C7F2C0;
    if ( ((*a2)[11] & 1) != 0 || (*(_BYTE *)(a3 + 4) & 1) != 0 )
      v10 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v8 + 10, a3) == 0;
    else
      v10 = v8[10] == *(_DWORD *)a3;
    if ( v10 )
    {
      if ( (v8[15] & 1) != 0 || (*(_BYTE *)(a3 + 20) & 1) != 0 )
      {
        if ( (unsigned int)sub_182C7B0(v9, v8 + 14, v65) )
          return;
      }
      else if ( v8[14] != *(_DWORD *)(a3 + 16) )
      {
        return;
      }
      if ( *a2 )
      {
        v71 = *(*a2 - 1);
        if ( v71 > 2 )
        {
          v11 = 20;
          v12 = 2;
          for ( i = *a2; ; i = *a2 )
          {
            v14 = &i[v11];
            v15 = qword_1C7F2C0;
            if ( (v14[1] & 1) != 0 || (*(_BYTE *)(a3 + 4) & 1) != 0 )
            {
              v15 = qword_1C7F2C0;
              if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v14, a3) )
                break;
            }
            else if ( *v14 != *(_DWORD *)a3 )
            {
              break;
            }
            if ( !((v14[5] & 1) != 0 || (*(_BYTE *)(a3 + 20) & 1) != 0
                 ? (unsigned int)sub_182C7B0(v15, v14 + 4, v65) == 0
                 : v14[4] == *(_DWORD *)(a3 + 16)) )
              break;
            ++v12;
            v11 += 10;
            if ( v12 == v71 )
              return;
          }
          if ( v12 < v71 )
          {
            v16 = 0;
            v83 = 40LL * v12;
            do
            {
              v21 = *a2;
              *(_QWORD *)v88 = 1;
              *(_QWORD *)v89 = 0;
              *(_QWORD *)v90 = 1;
              *(_QWORD *)v74 = &v21[v16 / 4];
              *(_QWORD *)v91 = 0;
              sub_182CBA0(qword_1C7F2C0, v90);
              LOBYTE(v90[1]) &= ~1u;
              v22 = *(_QWORD *)(*(_QWORD *)v74 + 32LL);
              v90[0] = 1;
              *(_QWORD *)v92 = 0;
              *(_QWORD *)v75 = v22;
              *(_QWORD *)v93 = 0;
              *(_QWORD *)v94 = 1;
              *(_QWORD *)v95 = 0;
              sub_27B950((__int64)qword_1C7F2C0, (__int64)v92, v88);
              v23 = *a4;
              *(_QWORD *)v96 = *(_QWORD *)v75;
              if ( !v23 || (v24 = *(unsigned int *)(v23 - 4), (_DWORD)v24 == *(_DWORD *)(v23 - 8)) )
              {
                sub_CA58E0(a4);
                v23 = *a4;
                v24 = *(unsigned int *)(*a4 - 4);
              }
              v17 = qword_1C7F2C0;
              v16 += 40LL;
              v18 = v23 + 40 * v24;
              *(_DWORD *)v18 = v92[0];
              *(_BYTE *)(v18 + 4) = v92[1] & 3 | *(_BYTE *)(v18 + 4) & 0xFC;
              v19 = *(_QWORD *)v93;
              *(_QWORD *)v93 = 0;
              *(_QWORD *)(v18 + 8) = v19;
              *(_DWORD *)(v18 + 16) = v94[0];
              *(_BYTE *)(v18 + 20) = v94[1] & 3 | *(_BYTE *)(v18 + 20) & 0xFC;
              v20 = *(_QWORD *)v95;
              *(_QWORD *)v95 = 0;
              *(_QWORD *)(v18 + 24) = v20;
              *(_QWORD *)(v18 + 32) = *(_QWORD *)v96;
              ++*(_DWORD *)(v23 - 4);
              sub_182CBA0(v17, v92);
              sub_182CBA0(v17, v94);
              v73 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v88);
              sub_182CBA0(v73, v90);
            }
            while ( v83 != v16 );
            v26 = *a1;
            v76 = sub_15D2CD0(a1[45], 5, 1, 0, 0);
            sub_180C5A0(v92, 0);
            v27 = sub_15E3D10(
                    v26,
                    (int)v92,
                    (int)&qword_18D6CD0,
                    0,
                    0,
                    v76,
                    1,
                    v57,
                    v58,
                    (int)a4,
                    (int)v92,
                    (int)v90,
                    v69,
                    v76,
                    (char)a1,
                    v83,
                    (int)v94,
                    40 * v12,
                    v88[0],
                    v89[0],
                    v90[0],
                    v91[0],
                    v92[0],
                    v93[0],
                    v94[0],
                    v95[0],
                    v96[0],
                    v97,
                    v98,
                    v99,
                    v100,
                    v101);
            v30 = sub_15DC610(v26, v27, 0, 0, v28, v29, v59, v61, v63, v66, v70, v77, v80, v84, v85, v86);
            *(_QWORD *)v78 = v30;
            *(_QWORD *)v92 = v30;
            if ( v30 )
              ++*(_DWORD *)(v30 + 8);
            sub_C9F390((_QWORD *)(v81 + 560), v64);
            *(_QWORD *)v88 = 1;
            *(_QWORD *)v89 = 0;
            *(_QWORD *)v90 = 1;
            *(_QWORD *)v91 = 0;
            sub_182CBA0(qword_1C7F2C0, v67);
            LOBYTE(v90[1]) &= ~1u;
            v90[0] = 1;
            *(_QWORD *)v92 = 0;
            *(_QWORD *)v93 = 0;
            *(_QWORD *)v94 = 1;
            *(_QWORD *)v95 = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)v64, v88);
            *(_QWORD *)v96 = *(_QWORD *)v78 | 1LL;
            v31 = *v62;
            if ( !*v62 || (v32 = *(unsigned int *)(v31 - 4), (_DWORD)v32 == *(_DWORD *)(v31 - 8)) )
            {
              sub_CA58E0(v62);
              v31 = *v62;
              v32 = *(unsigned int *)(*v62 - 4);
            }
            v33 = 1;
            v34 = v31 + 40 * v32;
            *(_DWORD *)v34 = v92[0];
            *(_BYTE *)(v34 + 4) = v92[1] & 3 | *(_BYTE *)(v34 + 4) & 0xFC;
            v35 = *(_QWORD *)v93;
            *(_QWORD *)v93 = 0;
            *(_QWORD *)(v34 + 8) = v35;
            *(_DWORD *)(v34 + 16) = v94[0];
            *(_BYTE *)(v34 + 20) = v94[1] & 3 | *(_BYTE *)(v34 + 20) & 0xFC;
            v36 = *(_QWORD *)v95;
            *(_QWORD *)v95 = 0;
            *(_QWORD *)(v34 + 24) = v36;
            *(_QWORD *)(v34 + 32) = *(_QWORD *)v96;
            ++*(_DWORD *)(v31 - 4);
            sub_25A130(v64);
            sub_25A130((char *)v88);
            v82 = (int *)a3;
            v68 = v12;
            v37 = v87;
            do
            {
              v38 = v33++;
              v39 = (__int64)&(*a2)[10 * v38];
              v40 = (int *)((char *)*a2 + v37);
              v37 += 40;
              sub_27B950((__int64)qword_1C7F2C0, v39, v40);
              *(_QWORD *)(v39 + 32) = *((_QWORD *)v40 + 4);
            }
            while ( v72 - v12 + 1 != v33 );
            v42 = *a2;
            if ( *a2 )
            {
              v43 = v72 + 1 - v12;
              v44 = 40LL * v43;
              v45 = (char *)&v42[(unsigned __int64)v44 / 4];
              v46 = 40LL * (unsigned int)*(v42 - 1);
              v47 = (char *)&v42[(unsigned __int64)v46 / 4];
              if ( v44 != v46 )
              {
                do
                {
                  v48 = v45;
                  v45 += 40;
                  sub_25A130(v48);
                }
                while ( v47 != v45 );
                v42 = *a2;
                v43 = v72 + 1 - v68;
              }
              *(v42 - 1) = v43;
            }
            *(_QWORD *)v92 = 0;
            *(_QWORD *)v93 = 0;
            *(_QWORD *)v94 = 1;
            *(_QWORD *)v95 = 0;
            sub_27B950((__int64)qword_1C7F2C0, (__int64)v64, v82);
            *(_QWORD *)v96 = *(_QWORD *)v78;
            v49 = *a2;
            v50 = **a2;
            *v49 = v92[0];
            v92[0] = v50;
            v51 = *((_QWORD *)v49 + 1);
            *((_QWORD *)v49 + 1) = *(_QWORD *)v93;
            *(_QWORD *)v93 = v51;
            v52 = *((_BYTE *)v49 + 4);
            *((_BYTE *)v49 + 4) = v92[1] & 2 | v52 & 0xFD;
            LOBYTE(v92[1]) = v52 & 2 | v92[1] & 0xFD;
            v53 = *((_BYTE *)v49 + 4);
            *((_BYTE *)v49 + 4) = v92[1] & 1 | v53 & 0xFE;
            LOBYTE(v92[1]) = v53 & 1 | v92[1] & 0xFE;
            LODWORD(v51) = v49[4];
            v49[4] = v94[0];
            v94[0] = v51;
            v54 = *((_QWORD *)v49 + 3);
            *((_QWORD *)v49 + 3) = *(_QWORD *)v95;
            *(_QWORD *)v95 = v54;
            v55 = *((_BYTE *)v49 + 20);
            *((_BYTE *)v49 + 20) = v94[1] & 2 | v55 & 0xFD;
            LOBYTE(v94[1]) = v55 & 2 | v94[1] & 0xFD;
            v56 = v49[5] & 1;
            *((_BYTE *)v49 + 20) = v94[1] & 1 | v49[5] & 0xFE;
            LOBYTE(v94[1]) = v56 | v94[1] & 0xFE;
            *((_QWORD *)v49 + 4) = *(_QWORD *)v96;
            sub_25A130(v64);
          }
        }
      }
    }
  }
}

