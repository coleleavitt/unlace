__int64 __fastcall sub_20E97F0(_DWORD *a1, unsigned int *a2)
{
  __int64 v2; // r11
  unsigned int v4; // r14d
  unsigned int v5; // ebp
  unsigned int v6; // r10d
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // r13
  unsigned __int64 v14; // rsi
  __int64 v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int64 *v17; // rax
  int v18; // eax
  _DWORD *v19; // rdi
  char v21; // r14
  unsigned int v22; // r15d
  int v23; // esi
  char *v24; // rcx
  int v25; // eax
  int v26; // edi
  int v27; // edi
  _DWORD *v28; // rdx
  char *v29; // rcx
  int v30; // esi
  __int64 v31; // r9
  __int64 v32; // r8
  unsigned int v33; // ecx
  unsigned int v34; // r8d
  _DWORD *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  _DWORD *v38; // rdi
  unsigned int v39; // eax
  __int64 v40; // rax
  int v41; // ecx
  _QWORD *v42; // rax
  __int64 *v43; // rsi
  __int64 v44; // r10
  __int64 v45; // rax
  __int64 *v46; // r8
  __int64 v47; // r10
  __int64 v48; // rax
  __int64 *v49; // rsi
  __int64 v50; // r10
  __int64 v51; // rax
  __int64 *v52; // r8
  __int64 v53; // r10
  __int64 v54; // rax
  __int64 *v55; // rsi
  __int64 v56; // r10
  __int64 v57; // rax
  __int64 *v58; // r8
  __int64 v59; // r10
  __int64 v60; // rax
  __int64 *v61; // rsi
  __int64 v62; // r10
  __int64 v63; // rax
  __int64 *v64; // r8
  __int64 v65; // r10
  __int64 v66; // rax
  __int64 *v67; // rsi
  __int64 v68; // r10
  __int64 v69; // rax
  __int64 *v70; // r8
  __int64 v71; // r10
  __int64 v72; // rax
  __int64 *v73; // rsi
  __int64 v74; // r10
  __int64 v75; // rax
  __int64 *v76; // r8
  __int64 v77; // r10
  __int64 v78; // rax
  __int64 *v79; // rsi
  __int64 v80; // r10
  __int64 v81; // rax
  __int64 *v82; // r8
  __int64 v83; // r10
  __int64 v84; // rax
  __int64 *v85; // rsi
  __int64 v86; // r9
  __int64 v87; // r10
  int v88; // ecx
  __int64 v89; // [rsp+0h] [rbp-118h]
  _DWORD *v90; // [rsp+8h] [rbp-110h]
  unsigned int v91; // [rsp+10h] [rbp-108h]
  unsigned __int64 v92; // [rsp+10h] [rbp-108h]
  unsigned int v93; // [rsp+10h] [rbp-108h]
  __int64 v94; // [rsp+10h] [rbp-108h]
  __int64 v95; // [rsp+10h] [rbp-108h]
  __int64 v96; // [rsp+18h] [rbp-100h]
  __int64 v97; // [rsp+18h] [rbp-100h]
  __int64 v98; // [rsp+18h] [rbp-100h]
  _DWORD *v99; // [rsp+20h] [rbp-F8h] BYREF
  void *ptr; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v101; // [rsp+30h] [rbp-E8h]
  _DWORD *v102; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v103; // [rsp+40h] [rbp-D8h]
  _DWORD *v104; // [rsp+80h] [rbp-98h] BYREF
  void *v105; // [rsp+88h] [rbp-90h] BYREF
  unsigned int v106; // [rsp+90h] [rbp-88h]
  int v107; // [rsp+94h] [rbp-84h]
  _DWORD *v108; // [rsp+98h] [rbp-80h] BYREF
  __int64 v109; // [rsp+A0h] [rbp-78h]

  v2 = (__int64)a2;
  v4 = a1[66];
  v5 = *a2;
  v6 = a2[1];
  v90 = a1;
  v7 = &v102;
  v99 = a1;
  v8 = (unsigned int)a1[67];
  ptr = &v102;
  v101 = 0x400000000LL;
  if ( v4 )
  {
    v9 = (unsigned int)v8;
    v10 = 0;
    v102 = a1 + 2;
    v11 = v6;
    v12 = 1;
    v13 = v2;
    v103 = v9;
    v14 = 4;
    LODWORD(v101) = 1;
    while ( 1 )
    {
      v15 = (*(_QWORD *)(v7[2 * v10] + 8LL * HIDWORD(v7[2 * v10 + 1])) & 0x3FLL) + 1;
      v16 = *(_QWORD *)(v7[2 * v10] + 8LL * HIDWORD(v7[2 * v10 + 1])) & 0xFFFFFFFFFFFFFFC0LL;
      if ( v12 + 1 > v14 )
      {
        v97 = (*(_QWORD *)(v7[2 * v10] + 8LL * HIDWORD(v7[2 * v10 + 1])) & 0x3FLL) + 1;
        v92 = *(_QWORD *)(v7[2 * v10] + 8LL * HIDWORD(v7[2 * v10 + 1])) & 0xFFFFFFFFFFFFFFC0LL;
        sub_2237220(&ptr, &v102, v12 + 1, 16);
        v15 = v97;
        v17 = (unsigned __int64 *)((char *)ptr + 16 * (unsigned int)v101);
        *v17 = v92;
      }
      else
      {
        v17 = &v7[2 * v12];
        *v17 = v16;
      }
      v17[1] = v15;
      v10 = (unsigned int)v101;
      v12 = (unsigned int)(v101 + 1);
      LODWORD(v101) = v101 + 1;
      if ( v4 <= (unsigned int)v10 )
        break;
      v7 = ptr;
      v14 = HIDWORD(v101);
    }
    v2 = v13;
    v6 = v11;
    if ( v5 > v11 || !(_DWORD)v12 )
    {
      v89 = 0;
      v8 = (unsigned int)a1[67];
      if ( !a1[66] )
        goto LABEL_10;
LABEL_101:
      v104 = a1;
      v107 = 4;
      v105 = &v108;
      if ( (_DWORD)v8 && v5 > a1[44] )
      {
        v35 = a1 + 45;
        LODWORD(v36) = 0;
        do
        {
          v36 = (unsigned int)(v36 + 1);
          if ( (_DWORD)v36 == (_DWORD)v8 )
            break;
          ++v35;
        }
        while ( v5 > *(v35 - 1) );
      }
      else
      {
        v36 = 0;
      }
      v106 = 1;
      v108 = a1 + 2;
      v109 = v8 | (v36 << 32);
      if ( (unsigned int)v8 <= HIDWORD(v109)
        || (v96 = v2, v91 = v6, sub_20E4750((__int64)&v104, v5), v6 = v91, v2 = v96, v90 = v104, v104[66]) )
      {
        v37 = v2;
        goto LABEL_109;
      }
LABEL_131:
      v98 = v2;
      v93 = v6;
      v39 = sub_20E4130((__int64)v90, (unsigned int *)v105 + 4 * v106 - 1, v90[67], v5, v6, v2);
      if ( v39 <= 0x10 )
      {
        v38 = v105;
        v90[67] = v39;
        v38[2] = v39;
LABEL_110:
        if ( v38 != (_DWORD *)&v108 )
          free(v38);
        goto LABEL_42;
      }
      v40 = sub_20E8030(v90, *((_DWORD *)v105 + 4 * v106 - 1));
      sub_2227D20(&v105, v90 + 2, (unsigned int)v90[67], v40);
      v6 = v93;
      v37 = v98;
LABEL_109:
      sub_20E9540((__int64)&v104, v5, v6, v37);
      v38 = v105;
      goto LABEL_110;
    }
  }
  else
  {
    v102 = a1;
    v103 = (unsigned int)v8;
    LODWORD(v101) = 1;
    if ( v5 > v6 )
    {
      v89 = 0;
      goto LABEL_10;
    }
    v12 = 1;
  }
  v89 = 0;
  v21 = 0;
  v22 = v6;
  while ( *((_DWORD *)ptr + 3) < *((_DWORD *)ptr + 2) )
  {
    if ( v99[66] )
    {
      v94 = v2;
      sub_20E4AF0((__int64)&v99, v5);
      v2 = v94;
      goto LABEL_87;
    }
    v23 = v99[67];
    v24 = (char *)ptr + 16 * v12 - 16;
    v25 = *((_DWORD *)v24 + 3);
    if ( v23 != v25 && v99[2 * v25 + 1] < v5 )
    {
      v26 = v25 + 1;
      if ( v23 == v25 + 1 )
        goto LABEL_140;
      if ( v5 > v99[2 * v26 + 1] )
      {
        v26 = v25 + 2;
        if ( v23 == v25 + 2 )
          goto LABEL_140;
        if ( v5 > v99[2 * v26 + 1] )
        {
          v26 = v25 + 3;
          if ( v23 == v25 + 3 )
            goto LABEL_140;
          if ( v5 > v99[2 * v26 + 1] )
          {
            v26 = v25 + 4;
            if ( v23 == v25 + 4 )
              goto LABEL_140;
            if ( v5 > v99[2 * v26 + 1] )
            {
              v26 = v25 + 5;
              if ( v23 == v25 + 5 )
                goto LABEL_140;
              if ( v5 > v99[2 * v26 + 1] )
              {
                v26 = v25 + 6;
                if ( v23 == v25 + 6 )
                  goto LABEL_140;
                if ( v5 > v99[2 * v26 + 1] )
                {
                  v26 = v25 + 7;
                  if ( v23 == v25 + 7 )
                    goto LABEL_140;
                  if ( v5 > v99[2 * v26 + 1] )
                  {
                    v26 = v25 + 8;
                    if ( v23 == v25 + 8 )
                      goto LABEL_140;
                    if ( v5 > v99[2 * v26 + 1] )
                    {
                      v26 = v25 + 9;
                      if ( v23 == v25 + 9 )
                        goto LABEL_140;
                      if ( v5 > v99[2 * v26 + 1] )
                      {
                        v26 = v25 + 10;
                        if ( v23 == v25 + 10 )
                          goto LABEL_140;
                        if ( v5 > v99[2 * v26 + 1] )
                        {
                          v26 = v25 + 11;
                          if ( v23 == v25 + 11 )
                            goto LABEL_140;
                          if ( v5 > v99[2 * v26 + 1] )
                          {
                            v26 = v25 + 12;
                            if ( v23 == v25 + 12 )
                              goto LABEL_140;
                            if ( v5 > v99[2 * v26 + 1] )
                            {
                              v26 = v25 + 13;
                              if ( v23 == v25 + 13 )
                                goto LABEL_140;
                              if ( v5 > v99[2 * v26 + 1] )
                              {
                                v26 = v25 + 14;
                                if ( v23 == v25 + 14 )
                                  goto LABEL_140;
                                if ( v5 > v99[2 * v26 + 1] )
                                {
                                  v26 = v25 + 15;
                                  if ( v23 == v25 + 15 )
                                    goto LABEL_140;
                                  if ( v5 > v99[2 * v26 + 1] )
                                  {
                                    v27 = v25 + 16;
                                    if ( v23 != v25 + 16 )
                                    {
                                      v25 += 17;
                                      if ( v5 <= v99[2 * v27 + 1] )
                                        v25 = v27;
                                      goto LABEL_86;
                                    }
LABEL_140:
                                    v25 = v99[67];
                                    goto LABEL_86;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v25 = v26;
    }
LABEL_86:
    *((_DWORD *)v24 + 3) = v25;
LABEL_87:
    if ( !(_DWORD)v101 )
      break;
    v19 = ptr;
    if ( *((_DWORD *)ptr + 2) <= *((_DWORD *)ptr + 3) )
      break;
    v28 = v99;
    v29 = (char *)ptr + 16 * (unsigned int)v101 - 16;
    v30 = v99[66];
    v31 = *((unsigned int *)v29 + 3);
    v32 = 8 * v31 + *(_QWORD *)v29;
    v33 = *(_DWORD *)v32;
    if ( v22 < *(_DWORD *)v32 )
      break;
    if ( !v21 )
    {
      if ( v30 )
        v89 = *(_QWORD *)(v32 + 96);
      else
        v89 = *(_QWORD *)(v32 + 128);
      v21 = 1;
    }
    v34 = *(_DWORD *)(v32 + 4);
    if ( v5 >= v33 )
    {
      if ( v22 <= v34 )
        goto LABEL_43;
      if ( v5 != v33 )
      {
        if ( v30 )
        {
LABEL_167:
          v5 = v34 + 1;
          goto LABEL_98;
        }
LABEL_166:
        if ( v22 <= v34 )
          goto LABEL_98;
        goto LABEL_167;
      }
      if ( !v30 )
      {
LABEL_143:
        if ( v22 >= v34 )
        {
          v41 = v99[67];
          if ( v41 != (_DWORD)v31 + 1 )
          {
            v42 = &v99[2 * v31];
            v43 = (__int64 *)&v99[2 * (unsigned int)(v31 + 1)];
            v44 = *v43;
            v42[16] = v43[16];
            *v42 = v44;
            v45 = (unsigned int)(v31 + 2);
            if ( (_DWORD)v45 != v41 )
            {
              v46 = (__int64 *)&v28[2 * v45];
              v47 = *v46;
              v43[16] = v46[16];
              v48 = (unsigned int)(v31 + 3);
              *v43 = v47;
              if ( (_DWORD)v48 != v41 )
              {
                v49 = (__int64 *)&v28[2 * v48];
                v50 = *v49;
                v46[16] = v49[16];
                v51 = (unsigned int)(v31 + 4);
                *v46 = v50;
                if ( (_DWORD)v51 != v41 )
                {
                  v52 = (__int64 *)&v28[2 * v51];
                  v53 = *v52;
                  v49[16] = v52[16];
                  v54 = (unsigned int)(v31 + 5);
                  *v49 = v53;
                  if ( v41 != (_DWORD)v54 )
                  {
                    v55 = (__int64 *)&v28[2 * v54];
                    v56 = *v55;
                    v52[16] = v55[16];
                    v57 = (unsigned int)(v31 + 6);
                    *v52 = v56;
                    if ( v41 != (_DWORD)v57 )
                    {
                      v58 = (__int64 *)&v28[2 * v57];
                      v59 = *v58;
                      v55[16] = v58[16];
                      v60 = (unsigned int)(v31 + 7);
                      *v55 = v59;
                      if ( v41 != (_DWORD)v60 )
                      {
                        v61 = (__int64 *)&v28[2 * v60];
                        v62 = *v61;
                        v58[16] = v61[16];
                        v63 = (unsigned int)(v31 + 8);
                        *v58 = v62;
                        if ( v41 != (_DWORD)v63 )
                        {
                          v64 = (__int64 *)&v28[2 * v63];
                          v65 = *v64;
                          v61[16] = v64[16];
                          v66 = (unsigned int)(v31 + 9);
                          *v61 = v65;
                          if ( v41 != (_DWORD)v66 )
                          {
                            v67 = (__int64 *)&v28[2 * v66];
                            v68 = *v67;
                            v64[16] = v67[16];
                            v69 = (unsigned int)(v31 + 10);
                            *v64 = v68;
                            if ( v41 != (_DWORD)v69 )
                            {
                              v70 = (__int64 *)&v28[2 * v69];
                              v71 = *v70;
                              v67[16] = v70[16];
                              v72 = (unsigned int)(v31 + 11);
                              *v67 = v71;
                              if ( v41 != (_DWORD)v72 )
                              {
                                v73 = (__int64 *)&v28[2 * v72];
                                v74 = *v73;
                                v70[16] = v73[16];
                                v75 = (unsigned int)(v31 + 12);
                                *v70 = v74;
                                if ( v41 != (_DWORD)v75 )
                                {
                                  v76 = (__int64 *)&v28[2 * v75];
                                  v77 = *v76;
                                  v73[16] = v76[16];
                                  v78 = (unsigned int)(v31 + 13);
                                  *v73 = v77;
                                  if ( v41 != (_DWORD)v78 )
                                  {
                                    v79 = (__int64 *)&v28[2 * v78];
                                    v80 = *v79;
                                    v76[16] = v79[16];
                                    v81 = (unsigned int)(v31 + 14);
                                    *v76 = v80;
                                    if ( v41 != (_DWORD)v81 )
                                    {
                                      v82 = (__int64 *)&v28[2 * v81];
                                      v83 = *v82;
                                      v79[16] = v82[16];
                                      v84 = (unsigned int)(v31 + 15);
                                      *v79 = v83;
                                      if ( v41 != (_DWORD)v84 )
                                      {
                                        v85 = (__int64 *)&v28[2 * v84];
                                        v86 = (unsigned int)(v31 + 16);
                                        v87 = *v85;
                                        v82[16] = v85[16];
                                        *v82 = v87;
                                        if ( v41 != (_DWORD)v86 )
                                        {
                                          *v85 = *(_QWORD *)&v28[2 * v86];
                                          v85[16] = *(_QWORD *)&v28[2 * v86 + 32];
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          v88 = v41 - 1;
          v28[67] = v88;
          v19[2] = v88;
          goto LABEL_98;
        }
        if ( v5 < v33 )
        {
LABEL_97:
          v22 = v33 - 1;
          goto LABEL_98;
        }
        goto LABEL_166;
      }
    }
    else
    {
      if ( !v30 )
        goto LABEL_143;
      if ( v22 < v34 )
        goto LABEL_97;
    }
    v95 = v2;
    sub_20E55E0((__int64)&v99, 1);
    v2 = v95;
LABEL_98:
    if ( v22 >= v5 )
    {
      v12 = (unsigned int)v101;
      if ( (_DWORD)v101 )
        continue;
    }
    break;
  }
  v6 = v22;
  v8 = (unsigned int)a1[67];
  if ( a1[66] )
    goto LABEL_101;
LABEL_10:
  if ( (_DWORD)v8 == 16 )
  {
    v104 = a1;
    v107 = 4;
    v105 = &v108;
    if ( a1[1] >= v5 )
    {
      v8 = 0;
    }
    else if ( a1[3] >= v5 )
    {
      v8 = 1;
    }
    else if ( a1[5] >= v5 )
    {
      v8 = 2;
    }
    else if ( a1[7] >= v5 )
    {
      v8 = 3;
    }
    else if ( a1[9] >= v5 )
    {
      v8 = 4;
    }
    else if ( a1[11] >= v5 )
    {
      v8 = 5;
    }
    else if ( a1[13] >= v5 )
    {
      v8 = 6;
    }
    else if ( a1[15] >= v5 )
    {
      v8 = 7;
    }
    else if ( a1[17] >= v5 )
    {
      v8 = 8;
    }
    else if ( a1[19] >= v5 )
    {
      v8 = 9;
    }
    else if ( a1[21] >= v5 )
    {
      v8 = 10;
    }
    else if ( a1[23] >= v5 )
    {
      v8 = 11;
    }
    else if ( a1[25] >= v5 )
    {
      v8 = 12;
    }
    else if ( a1[27] >= v5 )
    {
      v8 = 13;
    }
    else if ( a1[29] >= v5 )
    {
      v8 = 14;
    }
    else if ( a1[31] >= v5 )
    {
      v8 = 15;
    }
    v108 = a1;
    v106 = 1;
    v109 = (v8 << 32) | 0x10;
    goto LABEL_131;
  }
  if ( (_DWORD)v8 && a1[1] < v5 )
  {
    if ( (_DWORD)v8 == 1 || a1[3] >= v5 )
    {
      v18 = 1;
    }
    else if ( (_DWORD)v8 == 2 || a1[5] >= v5 )
    {
      v18 = 2;
    }
    else if ( (_DWORD)v8 == 3 || a1[7] >= v5 )
    {
      v18 = 3;
    }
    else if ( (_DWORD)v8 == 4 || a1[9] >= v5 )
    {
      v18 = 4;
    }
    else if ( (_DWORD)v8 == 5 || a1[11] >= v5 )
    {
      v18 = 5;
    }
    else if ( (_DWORD)v8 == 6 || a1[13] >= v5 )
    {
      v18 = 6;
    }
    else if ( (_DWORD)v8 == 7 || a1[15] >= v5 )
    {
      v18 = 7;
    }
    else if ( (_DWORD)v8 == 8 || a1[17] >= v5 )
    {
      v18 = 8;
    }
    else if ( (_DWORD)v8 == 9 || a1[19] >= v5 )
    {
      v18 = 9;
    }
    else if ( (_DWORD)v8 == 10 || a1[21] >= v5 )
    {
      v18 = 10;
    }
    else if ( (_DWORD)v8 == 11 || a1[23] >= v5 )
    {
      v18 = 11;
    }
    else if ( (_DWORD)v8 == 12 || a1[25] >= v5 )
    {
      v18 = 12;
    }
    else if ( (_DWORD)v8 == 13 || a1[27] >= v5 )
    {
      v18 = 13;
    }
    else if ( (_DWORD)v8 == 14 )
    {
      v18 = 14;
    }
    else
    {
      v18 = (a1[29] < v5) + 14;
    }
  }
  else
  {
    v18 = 0;
  }
  LODWORD(v104) = v18;
  a1[67] = sub_20E4130((__int64)a1, (unsigned int *)&v104, v8, v5, v6, v2);
LABEL_42:
  v19 = ptr;
LABEL_43:
  if ( v19 != (_DWORD *)&v102 )
    free(v19);
  return v89;
}
