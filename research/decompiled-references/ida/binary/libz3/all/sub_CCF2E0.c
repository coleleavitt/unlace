__int64 __fastcall sub_CCF2E0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int64 v7; // r13
  _OWORD *v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rax
  char v19; // al
  _QWORD *v20; // rdi
  void (*v21)(); // rax
  __int64 *v22; // rbx
  __int64 result; // rax
  _QWORD *v24; // rbp
  __int64 v25; // rdx
  __int64 (__fastcall *v26)(); // rax
  __int64 v27; // rax
  unsigned int v28; // r13d
  _QWORD *v29; // r12
  _QWORD *v30; // r15
  __int64 v31; // rbp
  __int64 v32; // r14
  unsigned int *v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rdx
  __int64 *v36; // r15
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // r8
  __int64 v42; // r13
  __int64 v43; // r14
  unsigned int *v44; // rdx
  __int64 *v45; // rbp
  _QWORD *v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 *v52; // rbp
  __int64 *v53; // r13
  __int64 v54; // rsi
  __int64 v55; // rdi
  void *v56; // rdi
  _QWORD *v57; // rbp
  __int64 v58; // rax
  _QWORD *v59; // r13
  void *v60; // rdi
  __int64 v61; // rdi
  __int64 (__fastcall *v62)(); // rax
  unsigned int v63; // eax
  unsigned int v64; // [rsp+0h] [rbp-58h]
  _QWORD *v65; // [rsp+0h] [rbp-58h]
  unsigned int v66; // [rsp+Ch] [rbp-4Ch]
  _QWORD *v67; // [rsp+10h] [rbp-48h]
  _QWORD *v68; // [rsp+18h] [rbp-40h]

  v2 = a1 + 24;
  v3 = **(_QWORD **)(a1 + 16);
  v4 = sub_186B270(0x288u);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL);
  if ( v6 == sub_CCDBE0 )
  {
    v7 = sub_186B270(0x48u);
    *(_QWORD *)v7 = &off_1C59598;
    *(_QWORD *)(v7 + 16) = v3;
    v8 = (_OWORD *)sub_186B270(0x80u);
    *(_QWORD *)(v7 + 48) = v3;
    *(_QWORD *)(v7 + 24) = v8;
    *(_QWORD *)(v7 + 32) = 8;
    *(_DWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 56) = 0;
    *(_QWORD *)(v7 + 64) = 0;
    *v8 = 0;
    v8[1] = 0;
    v8[2] = 0;
    v8[3] = 0;
    v8[4] = 0;
    v8[5] = 0;
    v8[6] = 0;
    v8[7] = 0;
  }
  else
  {
    v7 = v6(v5, v3);
  }
  *(__m128i *)v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)(unsigned __int64)v7);
  sub_17E9B40(v4 + 16, "context-simplifier");
  *(_QWORD *)(v4 + 560) = &off_1C59548;
  v9 = *(_QWORD *)v4;
  *(_WORD *)(v4 + 568) = 257;
  *(_OWORD *)(v4 + 536) = 0;
  v10 = sub_186B270(0x80u);
  *(_QWORD *)v10 = 0;
  v11 = *(_QWORD *)v4;
  *(_DWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  *(_DWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 48) = 0;
  *(_DWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = 0;
  *(_DWORD *)(v10 + 72) = 0;
  *(_QWORD *)(v10 + 80) = 0;
  *(_DWORD *)(v10 + 88) = 0;
  *(_QWORD *)(v10 + 96) = 0;
  *(_DWORD *)(v10 + 104) = 0;
  *(_QWORD *)(v10 + 112) = 0;
  *(_DWORD *)(v10 + 120) = 0;
  *(_QWORD *)(v4 + 576) = v10;
  *(_QWORD *)(v4 + 600) = v9;
  *(_QWORD *)(v4 + 584) = 8;
  *(_DWORD *)(v4 + 592) = 0;
  *(_QWORD *)(v4 + 560) = &off_1C59570;
  *(_QWORD *)(v4 + 608) = 0;
  sub_1447E40(v4 + 616, v11, v2, v12, v13, v14);
  v15 = sub_1859960(v2, "max_memory", 0xFFFFFFFFLL);
  v16 = (unsigned __int64)v15 << 20;
  v17 = v15 == -1;
  v18 = -1;
  if ( !v17 )
    v18 = v16;
  *(_QWORD *)(v4 + 624) = v18;
  *(_DWORD *)(v4 + 636) = sub_1859960(v2, "max_steps", 0xFFFFFFFFLL);
  *(_DWORD *)(v4 + 632) = sub_1859960(v2, "max_depth", 1024);
  v19 = sub_1859610(v2, "bail_on_blowup", 0);
  v20 = *(_QWORD **)(v4 + 8);
  *(_BYTE *)(v4 + 640) = v19;
  v21 = *(void (**)())(*v20 + 64LL);
  if ( v21 != nullsub_366 )
  {
    ((void (__fastcall *)(_QWORD *, __int64))v21)(v20, v2);
    v20 = *(_QWORD **)(v4 + 8);
  }
  v22 = *(__int64 **)(a1 + 16);
  result = v4 + 560;
  v20[1] = v4 + 560;
  *(_QWORD *)(a1 + 16) = v4;
  if ( v22 )
  {
    v24 = (_QWORD *)v22[1];
    v25 = *v24;
    v26 = *(__int64 (__fastcall **)())(*v24 + 56LL);
    if ( v26 != sub_CD0230 )
    {
      v66 = ((__int64 (__fastcall *)(__int64))v26)(v22[1]);
      if ( v66 )
      {
        v24 = (_QWORD *)v22[1];
        v25 = *v24;
        v62 = *(__int64 (__fastcall **)())(*v24 + 56LL);
        if ( v62 != sub_CD0230 )
        {
          v63 = ((__int64 (__fastcall *)(__int64))v62)(v22[1]);
          v24 = (_QWORD *)v22[1];
          v28 = v63;
          v25 = *v24;
          goto LABEL_12;
        }
        v27 = v24[8];
        v28 = 0;
        if ( !v27 )
          goto LABEL_12;
LABEL_11:
        v28 = *(_DWORD *)(v27 - 4);
LABEL_12:
        v29 = v22 + 2;
        (*(void (__fastcall **)(_QWORD *, _QWORD))(v25 + 40))(v24, v66);
        v64 = 0;
        v30 = (_QWORD *)v22[68];
LABEL_13:
        if ( !v30 )
          goto LABEL_46;
        while ( 1 )
        {
          while ( v28 >= *((_DWORD *)v30 - 1) )
          {
            ++v64;
            --v28;
            if ( v64 >= v66 )
            {
              if ( *((_DWORD *)v30 - 1) )
                goto LABEL_32;
              goto LABEL_46;
            }
          }
          v31 = v30[v28];
          v67 = &v30[v28];
          if ( v31 )
          {
            v32 = v31 + 8LL * *(unsigned int *)(v31 - 4);
            if ( v31 != v32 )
            {
              do
              {
                v33 = *(unsigned int **)(v32 - 8);
                v32 -= 8;
                v34 = v22[67] + 16LL * *v33;
                v35 = *(_QWORD **)(v34 + 8);
                v36 = (__int64 *)v34;
                v37 = *v35;
                if ( *v35 )
                {
                  v38 = *v22;
                  v17 = (*(_DWORD *)(v37 + 8))-- == 1;
                  if ( v17 )
                  {
                    sub_15D7BC0(v38, v37);
                    v35 = (_QWORD *)v36[1];
                  }
                }
                v39 = v35[2];
                v36[1] = v39;
                if ( !v39 )
                {
                  v40 = *v36;
                  if ( *v36 )
                  {
                    v41 = *v22;
                    v17 = (*(_DWORD *)(v40 + 8))-- == 1;
                    if ( v17 )
                    {
                      v68 = v35;
                      sub_15D7BC0(v41, v40);
                      v35 = v68;
                    }
                  }
                  *v36 = 0;
                }
                sub_17E9C40(v22 + 2, 24, v35);
              }
              while ( v31 != v32 );
              v30 = (_QWORD *)v22[68];
              if ( *v67 )
                *(_DWORD *)(*v67 - 4LL) = 0;
              ++v64;
              --v28;
              if ( v64 < v66 )
                goto LABEL_13;
LABEL_30:
              if ( v30 )
              {
LABEL_31:
                if ( *((_DWORD *)v30 - 1) )
                {
LABEL_32:
                  v42 = *v30;
                  if ( *v30 )
                  {
                    v43 = v42 + 8LL * *(unsigned int *)(v42 - 4);
                    if ( v42 == v43 )
                      goto LABEL_76;
                    do
                    {
                      v44 = *(unsigned int **)(v43 - 8);
                      v43 -= 8;
                      v45 = (__int64 *)(v22[67] + 16LL * *v44);
                      v46 = (_QWORD *)v45[1];
                      v47 = *v46;
                      if ( *v46 )
                      {
                        v48 = *v22;
                        v17 = (*(_DWORD *)(v47 + 8))-- == 1;
                        if ( v17 )
                        {
                          sub_15D7BC0(v48, v47);
                          v46 = (_QWORD *)v45[1];
                        }
                      }
                      v49 = v46[2];
                      v45[1] = v49;
                      if ( !v49 )
                      {
                        v50 = *v45;
                        if ( *v45 )
                        {
                          v51 = *v22;
                          v17 = (*(_DWORD *)(v50 + 8))-- == 1;
                          if ( v17 )
                          {
                            v65 = v46;
                            sub_15D7BC0(v51, v50);
                            v46 = v65;
                          }
                        }
                        *v45 = 0;
                      }
                      sub_17E9C40(v29, 24, v46);
                    }
                    while ( v42 != v43 );
                    v43 = *v30;
                    if ( *v30 )
LABEL_76:
                      *(_DWORD *)(v43 - 4) = 0;
                  }
                }
              }
LABEL_46:
              v24 = (_QWORD *)v22[1];
              if ( v24 )
              {
                v25 = *v24;
                goto LABEL_48;
              }
              goto LABEL_49;
            }
            *(_DWORD *)(v31 - 4) = 0;
          }
          ++v64;
          --v28;
          if ( v64 >= v66 )
            goto LABEL_30;
        }
      }
LABEL_83:
      v30 = (_QWORD *)v22[68];
      v29 = v22 + 2;
      goto LABEL_30;
    }
    v27 = v24[8];
    if ( v27 )
    {
      v66 = *(_DWORD *)(v27 - 4);
      if ( v66 )
        goto LABEL_11;
      goto LABEL_83;
    }
    v30 = (_QWORD *)v22[68];
    v29 = v22 + 2;
    if ( v30 )
      goto LABEL_31;
LABEL_48:
    (*(void (__fastcall **)(_QWORD *))v25)(v24);
    sub_186B220(v24);
LABEL_49:
    sub_14476A0(v22 + 77);
    v52 = (__int64 *)v22[76];
    v22[70] = (__int64)&off_1C59570;
    if ( v52 )
    {
      v53 = &v52[*((unsigned int *)v52 - 1)];
      if ( v52 >= v53 )
        goto LABEL_57;
      do
      {
        while ( 1 )
        {
          v54 = *v52;
          if ( *v52 )
          {
            v55 = v22[75];
            v17 = (*(_DWORD *)(v54 + 8))-- == 1;
            if ( v17 )
              break;
          }
          if ( ++v52 >= v53 )
            goto LABEL_56;
        }
        sub_15D7BC0(v55, v54);
        ++v52;
      }
      while ( v52 < v53 );
LABEL_56:
      v52 = (__int64 *)v22[76];
      if ( v52 )
LABEL_57:
        sub_186B220(v52 - 1);
    }
    v56 = (void *)v22[72];
    v22[70] = (__int64)&off_1C59548;
    if ( v56 )
      sub_186B220(v56);
    v57 = (_QWORD *)v22[68];
    if ( v57 )
    {
      v58 = *((unsigned int *)v57 - 1);
      if ( (_DWORD)v58 )
      {
        v59 = &v57[v58];
        do
        {
          while ( *v57 )
          {
            v60 = (void *)(*v57++ - 8LL);
            sub_186B220(v60);
            if ( v57 == v59 )
              goto LABEL_65;
          }
          ++v57;
        }
        while ( v57 != v59 );
LABEL_65:
        v57 = (_QWORD *)v22[68];
      }
      sub_186B220(v57 - 1);
    }
    v61 = v22[67];
    if ( v61 )
      sub_186B220((void *)(v61 - 8));
    sub_17E9B80(v29);
    return sub_186B220(v22);
  }
  return result;
}

