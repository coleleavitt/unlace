_BYTE *__fastcall sub_98FD40(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r13
  int v4; // r12d
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  _QWORD *v7; // rdi
  __int64 (*v8)(void); // rdx
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  _QWORD **v15; // rdi
  char v16; // al
  _QWORD *v17; // rdi
  __int64 (__fastcall *v18)(__int64); // rax
  _QWORD *v19; // rdi
  __int64 (*v20)(void); // rdx
  __int64 v21; // rax
  __int64 v22; // rbp
  char v23; // bl
  _BYTE *result; // rax
  _QWORD *v25; // rdi
  _QWORD *v26; // rdi
  _QWORD *v27; // rdi
  _QWORD *v28; // rdi
  _QWORD *v29; // rdi
  _QWORD *v30; // rdi
  _QWORD **v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  _DWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rbp
  unsigned int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rbp
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // r12
  unsigned __int64 v50; // rax
  char *v51; // r13
  char *v52; // rbp
  char *v53; // rdi
  _QWORD *v54; // rdi
  _QWORD *v55; // rbp
  _QWORD *v56; // rdi
  __int64 v57; // rbp
  unsigned int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rbp
  __int64 v61; // r15
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rdx
  __int64 v65; // rax
  _QWORD *v66; // r13
  _QWORD *v67; // rbp
  _QWORD *v68; // rdi
  _QWORD *v69; // rdi
  _QWORD *v70; // rbp
  _QWORD *v71; // rdi
  unsigned __int64 v72; // rdx
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // r12
  __int64 v76; // r14
  __int64 v77; // r12
  void *v78; // rdi
  __int64 v79; // rdx
  unsigned __int64 v80; // rdx
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // r12
  __int64 v84; // r15
  __int64 v85; // r12
  void *v86; // rdi
  __int64 v87; // [rsp+0h] [rbp-98h]
  int v88; // [rsp+8h] [rbp-90h]
  void *v89; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v90; // [rsp+18h] [rbp-80h]
  __int64 v91; // [rsp+20h] [rbp-78h]
  void *v92; // [rsp+30h] [rbp-68h]
  _QWORD v93[2]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v94; // [rsp+50h] [rbp-48h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a1[25] + 24LL);
  if ( !(unsigned __int8)sub_A1AD60(a1) )
    goto LABEL_20;
  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v6 != sub_8D7F10 )
    goto LABEL_12;
  v7 = (_QWORD *)v5[3];
  v8 = *(__int64 (**)(void))(*v7 + 24LL);
  if ( (char *)v8 != (char *)v6 )
    goto LABEL_29;
  v9 = (_QWORD *)v7[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v9 + 24LL);
  if ( (char *)v6 != (char *)v8 )
    goto LABEL_12;
  v10 = (_QWORD *)v9[3];
  v8 = *(__int64 (**)(void))(*v10 + 24LL);
  if ( (char *)v8 != (char *)v6 )
    goto LABEL_29;
  v11 = (_QWORD *)v10[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v11 + 24LL);
  if ( (char *)v6 != (char *)v8 )
    goto LABEL_12;
  v12 = (_QWORD *)v11[3];
  v8 = *(__int64 (**)(void))(*v12 + 24LL);
  if ( (char *)v8 != (char *)v6 )
    goto LABEL_29;
  v13 = (_QWORD *)v12[3];
  v6 = *(__int64 (__fastcall **)(__int64))(*v13 + 24LL);
  if ( (char *)v6 != (char *)v8 )
  {
LABEL_12:
    v16 = ((__int64 (*)(void))v6)();
    goto LABEL_13;
  }
  v14 = (_QWORD *)v13[3];
  v8 = *(__int64 (**)(void))(*v14 + 24LL);
  if ( (char *)v8 == (char *)v6 )
  {
    v15 = (_QWORD **)v14[3];
    v6 = (__int64 (__fastcall *)(__int64))(*v15)[3];
    if ( (char *)v6 == (char *)v8 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v15[3] + 24LL))(v15[3]);
      goto LABEL_13;
    }
    goto LABEL_12;
  }
LABEL_29:
  v16 = v8();
LABEL_13:
  if ( v16 )
    goto LABEL_20;
  v17 = (_QWORD *)a1[3];
  v18 = *(__int64 (__fastcall **)(__int64))(*v17 + 96LL);
  if ( v18 != sub_97DD60 )
    goto LABEL_30;
  v19 = (_QWORD *)v17[3];
  v20 = *(__int64 (**)(void))(*v19 + 96LL);
  if ( (char *)v20 == (char *)v18 )
  {
    v25 = (_QWORD *)v19[3];
    v18 = *(__int64 (__fastcall **)(__int64))(*v25 + 96LL);
    if ( (char *)v18 == (char *)v20 )
    {
      v26 = (_QWORD *)v25[3];
      v20 = *(__int64 (**)(void))(*v26 + 96LL);
      if ( (char *)v20 != (char *)v18 )
        goto LABEL_16;
      v27 = (_QWORD *)v26[3];
      v18 = *(__int64 (__fastcall **)(__int64))(*v27 + 96LL);
      if ( (char *)v18 == (char *)v20 )
      {
        v28 = (_QWORD *)v27[3];
        v20 = *(__int64 (**)(void))(*v28 + 96LL);
        if ( (char *)v20 != (char *)v18 )
          goto LABEL_16;
        v29 = (_QWORD *)v28[3];
        v18 = *(__int64 (__fastcall **)(__int64))(*v29 + 96LL);
        if ( (char *)v18 == (char *)v20 )
        {
          v30 = (_QWORD *)v29[3];
          v20 = *(__int64 (**)(void))(*v30 + 96LL);
          if ( (char *)v20 != (char *)v18 )
            goto LABEL_16;
          v31 = (_QWORD **)v30[3];
          v18 = (__int64 (__fastcall *)(__int64))(*v31)[12];
          if ( (char *)v18 == (char *)v20 )
          {
            v21 = (*(__int64 (__fastcall **)(_QWORD *))(*v31[3] + 96LL))(v31[3]);
            goto LABEL_17;
          }
        }
      }
    }
LABEL_30:
    v21 = ((__int64 (*)(void))v18)();
    goto LABEL_17;
  }
LABEL_16:
  v21 = v20();
LABEL_17:
  if ( !*(_QWORD *)(v21 + 8) )
    goto LABEL_20;
  if ( v4 != 1 )
  {
    if ( v4 != 2 )
      goto LABEL_20;
    v32 = sub_A16C10(v3);
    v33 = v32;
    if ( !v32 )
      goto LABEL_20;
    if ( !sub_79C450(v32) )
      goto LABEL_20;
    v34 = *(_QWORD *)(v33 + 40);
    if ( (v34 & 7) != 0 )
      goto LABEL_20;
    v35 = v34 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v35 )
      goto LABEL_20;
    v36 = *(_DWORD **)(v35 + 16);
    if ( *v36 != 21 || memcmp(v36 + 4, "is_constant_evaluated", 0x15u) )
      goto LABEL_20;
  }
  if ( *(_QWORD *)(v3 + 8) )
  {
    v37 = sub_A16C10(v3);
    v38 = v37;
    if ( v37 )
    {
      if ( sub_79C450(v37) )
      {
        v39 = *(_QWORD *)(v38 + 40);
        if ( (v39 & 7) == 0 )
        {
          v40 = v39 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v40 )
          {
            v41 = *(_QWORD *)(v40 + 16);
            if ( *(_DWORD *)v41 == 21
              && !(*(_QWORD *)(v41 + 24) ^ 0x6C6176655F746E61LL | *(_QWORD *)(v41 + 16) ^ 0x74736E6F635F7369LL)
              && *(_QWORD *)(v41 + 29) == 0x64657461756C6176LL )
            {
              v42 = sub_A180F0(*(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 152));
              v43 = sub_8124E0(v42);
              sub_A2CB00(&v89, a1, v43, 2354);
              sub_8356A0((unsigned __int8 **)&v89, (__int64)"std::is_constant_evaluated", 1u);
              v44 = sub_AC7B80(v42);
              v45 = (__int64)v89;
              v46 = v44;
              if ( !v89 )
              {
                v80 = v90;
                v81 = *(_DWORD *)(v90 + 14976);
                if ( v81 )
                {
                  v82 = (unsigned int)(v81 - 1);
                  *(_DWORD *)(v90 + 14976) = v82;
                  v45 = *(_QWORD *)(v80 + 8 * v82 + 14848);
                  v83 = *(unsigned int *)(v45 + 536);
                  *(_BYTE *)v45 = 0;
                  v84 = *(_QWORD *)(v45 + 528);
                  *(_DWORD *)(v45 + 424) = 0;
                  v85 = v84 + (v83 << 6);
                  while ( v84 != v85 )
                  {
                    while ( 1 )
                    {
                      v85 -= 64;
                      v86 = *(void **)(v85 + 24);
                      if ( v86 == (void *)(v85 + 40) )
                        break;
                      operator delete(v86, *(_QWORD *)(v85 + 40) + 1LL);
                      if ( v84 == v85 )
                        goto LABEL_109;
                    }
                  }
LABEL_109:
                  *(_DWORD *)(v45 + 536) = 0;
                }
                else
                {
                  v45 = operator new(0x3A0u);
                  *(_BYTE *)v45 = 0;
                  *(_QWORD *)(v45 + 96) = v45 + 112;
                  *(_QWORD *)(v45 + 104) = 0;
                  *(_QWORD *)(v45 + 128) = v45 + 144;
                  *(_QWORD *)(v45 + 160) = v45 + 176;
                  *(_QWORD *)(v45 + 192) = v45 + 208;
                  *(_QWORD *)(v45 + 224) = v45 + 240;
                  *(_QWORD *)(v45 + 256) = v45 + 272;
                  *(_QWORD *)(v45 + 288) = v45 + 304;
                  *(_QWORD *)(v45 + 320) = v45 + 336;
                  *(_QWORD *)(v45 + 352) = v45 + 368;
                  *(_QWORD *)(v45 + 384) = v45 + 400;
                  *(_BYTE *)(v45 + 112) = 0;
                  *(_QWORD *)(v45 + 136) = 0;
                  *(_BYTE *)(v45 + 144) = 0;
                  *(_QWORD *)(v45 + 168) = 0;
                  *(_BYTE *)(v45 + 176) = 0;
                  *(_QWORD *)(v45 + 200) = 0;
                  *(_BYTE *)(v45 + 208) = 0;
                  *(_QWORD *)(v45 + 232) = 0;
                  *(_BYTE *)(v45 + 240) = 0;
                  *(_QWORD *)(v45 + 264) = 0;
                  *(_BYTE *)(v45 + 272) = 0;
                  *(_QWORD *)(v45 + 296) = 0;
                  *(_BYTE *)(v45 + 304) = 0;
                  *(_QWORD *)(v45 + 328) = 0;
                  *(_BYTE *)(v45 + 336) = 0;
                  *(_QWORD *)(v45 + 360) = 0;
                  *(_BYTE *)(v45 + 368) = 0;
                  *(_QWORD *)(v45 + 392) = 0;
                  *(_BYTE *)(v45 + 400) = 0;
                  *(_QWORD *)(v45 + 416) = v45 + 432;
                  *(_QWORD *)(v45 + 424) = 0x800000000LL;
                  *(_QWORD *)(v45 + 528) = v45 + 544;
                  *(_QWORD *)(v45 + 536) = 0x600000000LL;
                }
                v89 = (void *)v45;
              }
              v47 = *(unsigned int *)(v45 + 424);
              LOBYTE(v88) = 1;
              if ( *(unsigned int *)(v45 + 428) < (unsigned __int64)(v47 + 1) )
              {
                sub_25D6060(v45 + 416, v45 + 432, v47 + 1, 12);
                v47 = *(unsigned int *)(v45 + 424);
              }
              v48 = *(_QWORD *)(v45 + 416) + 12 * v47;
              *(_QWORD *)v48 = v46;
              *(_DWORD *)(v48 + 8) = v88;
              ++*(_DWORD *)(v45 + 424);
              if ( (_BYTE)v94 )
              {
                sub_C69E80(v91, &v89, HIBYTE(v94));
                v91 = 0;
                v94 = 0;
              }
              if ( v92 != v93 )
                operator delete(v92, v93[0] + 1LL);
              v49 = v89;
              if ( v89 )
              {
                v50 = v90;
                if ( v90 )
                {
                  if ( (unsigned __int64)v89 < v90 || v90 + 14848 < (unsigned __int64)v89 )
                  {
                    v51 = *((char **)v89 + 66);
                    v52 = &v51[64 * (unsigned __int64)*((unsigned int *)v89 + 134)];
                    if ( v51 != v52 )
                    {
                      do
                      {
                        v52 -= 64;
                        v53 = *((char **)v52 + 3);
                        if ( v53 != v52 + 40 )
                          operator delete(v53, *((_QWORD *)v52 + 5) + 1LL);
                      }
                      while ( v51 != v52 );
                      v51 = (char *)v49[66];
                    }
                    if ( v51 != (char *)(v49 + 68) )
                      free(v51);
                    v54 = (_QWORD *)v49[52];
                    if ( v54 != v49 + 54 )
                      free(v54);
                    v55 = v49 + 50;
                    do
                    {
                      v56 = (_QWORD *)*(v55 - 2);
                      if ( v56 != v55 )
                        operator delete(v56, *v55 + 1LL);
                      v55 -= 4;
                    }
                    while ( v55 != v49 + 10 );
LABEL_69:
                    operator delete(v49, 0x3A0u);
                    goto LABEL_20;
                  }
                  goto LABEL_102;
                }
              }
              goto LABEL_20;
            }
          }
        }
      }
    }
  }
  v57 = sub_A180F0(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 152));
  v58 = sub_8124E0(v57);
  sub_A2CB00(&v89, a1, v58, 2354);
  sub_8356A0((unsigned __int8 **)&v89, (__int64)"__builtin_is_constant_evaluated", 1u);
  v59 = sub_AC7B80(v57);
  v60 = (__int64)v89;
  v61 = v59;
  if ( v89 )
  {
    v62 = *((unsigned int *)v89 + 106);
    v63 = *((unsigned int *)v89 + 107);
    v64 = v62 + 1;
  }
  else
  {
    v72 = v90;
    v73 = *(_DWORD *)(v90 + 14976);
    if ( !v73 )
    {
      v60 = operator new(0x3A0u);
      *(_BYTE *)v60 = 0;
      *(_QWORD *)(v60 + 96) = v60 + 112;
      *(_QWORD *)(v60 + 128) = v60 + 144;
      *(_QWORD *)(v60 + 160) = v60 + 176;
      *(_QWORD *)(v60 + 192) = v60 + 208;
      *(_QWORD *)(v60 + 224) = v60 + 240;
      *(_QWORD *)(v60 + 256) = v60 + 272;
      *(_QWORD *)(v60 + 288) = v60 + 304;
      *(_QWORD *)(v60 + 320) = v60 + 336;
      *(_QWORD *)(v60 + 352) = v60 + 368;
      *(_QWORD *)(v60 + 384) = v60 + 400;
      *(_QWORD *)(v60 + 104) = 0;
      *(_BYTE *)(v60 + 112) = 0;
      *(_QWORD *)(v60 + 136) = 0;
      *(_BYTE *)(v60 + 144) = 0;
      *(_QWORD *)(v60 + 168) = 0;
      *(_BYTE *)(v60 + 176) = 0;
      *(_QWORD *)(v60 + 200) = 0;
      *(_BYTE *)(v60 + 208) = 0;
      *(_QWORD *)(v60 + 232) = 0;
      *(_BYTE *)(v60 + 240) = 0;
      *(_QWORD *)(v60 + 264) = 0;
      *(_BYTE *)(v60 + 272) = 0;
      *(_QWORD *)(v60 + 296) = 0;
      *(_BYTE *)(v60 + 304) = 0;
      *(_QWORD *)(v60 + 328) = 0;
      *(_BYTE *)(v60 + 336) = 0;
      *(_QWORD *)(v60 + 360) = 0;
      *(_BYTE *)(v60 + 368) = 0;
      *(_QWORD *)(v60 + 392) = 0;
      *(_BYTE *)(v60 + 400) = 0;
      *(_QWORD *)(v60 + 416) = v60 + 432;
      v89 = (void *)v60;
      *(_QWORD *)(v60 + 424) = 0x800000000LL;
      *(_QWORD *)(v60 + 528) = v60 + 544;
      v87 = v61;
      *(_QWORD *)(v60 + 536) = 0x600000000LL;
      v62 = 0;
      LOBYTE(v88) = 1;
      goto LABEL_74;
    }
    v74 = (unsigned int)(v73 - 1);
    *(_DWORD *)(v90 + 14976) = v74;
    v60 = *(_QWORD *)(v72 + 8 * v74 + 14848);
    v75 = *(unsigned int *)(v60 + 536);
    *(_BYTE *)v60 = 0;
    v76 = *(_QWORD *)(v60 + 528);
    *(_DWORD *)(v60 + 424) = 0;
    v77 = v76 + (v75 << 6);
    while ( v76 != v77 )
    {
      while ( 1 )
      {
        v77 -= 64;
        v78 = *(void **)(v77 + 24);
        if ( v78 == (void *)(v77 + 40) )
          break;
        operator delete(v78, *(_QWORD *)(v77 + 40) + 1LL);
        if ( v76 == v77 )
          goto LABEL_101;
      }
    }
LABEL_101:
    v62 = *(unsigned int *)(v60 + 424);
    v63 = *(unsigned int *)(v60 + 428);
    *(_DWORD *)(v60 + 536) = 0;
    v89 = (void *)v60;
    v64 = v62 + 1;
  }
  v87 = v61;
  LOBYTE(v88) = 1;
  if ( v63 < v64 )
  {
    sub_25D6060(v60 + 416, v60 + 432, v64, 12);
    v62 = *(unsigned int *)(v60 + 424);
  }
LABEL_74:
  v65 = *(_QWORD *)(v60 + 416) + 12 * v62;
  *(_QWORD *)v65 = v87;
  *(_DWORD *)(v65 + 8) = v88;
  ++*(_DWORD *)(v60 + 424);
  if ( (_BYTE)v94 )
  {
    sub_C69E80(v91, &v89, HIBYTE(v94));
    v91 = 0;
    v94 = 0;
  }
  if ( v92 != v93 )
    operator delete(v92, v93[0] + 1LL);
  v49 = v89;
  if ( v89 )
  {
    v50 = v90;
    if ( v90 )
    {
      if ( (unsigned __int64)v89 < v90 || v90 + 14848 < (unsigned __int64)v89 )
      {
        v66 = *((_QWORD **)v89 + 66);
        v67 = &v66[8 * (unsigned __int64)*((unsigned int *)v89 + 134)];
        if ( v66 != v67 )
        {
          do
          {
            v67 -= 8;
            v68 = (_QWORD *)v67[3];
            if ( v68 != v67 + 5 )
              operator delete(v68, v67[5] + 1LL);
          }
          while ( v66 != v67 );
          v67 = (_QWORD *)v49[66];
        }
        if ( v67 != v49 + 68 )
          free(v67);
        v69 = (_QWORD *)v49[52];
        if ( v69 != v49 + 54 )
          free(v69);
        v70 = v49 + 50;
        do
        {
          v71 = (_QWORD *)*(v70 - 2);
          if ( v70 != v71 )
            operator delete(v71, *v70 + 1LL);
          v70 -= 4;
        }
        while ( v49 + 10 != v70 );
        goto LABEL_69;
      }
LABEL_102:
      v79 = *(unsigned int *)(v50 + 14976);
      *(_DWORD *)(v50 + 14976) = v79 + 1;
      *(_QWORD *)(v50 + 8 * v79 + 14848) = v49;
    }
  }
LABEL_20:
  v22 = a1[23];
  v23 = sub_A1AD60(a1);
  result = (_BYTE *)sub_A1A4E0(v22, 8);
  *result = v23;
  return result;
}

