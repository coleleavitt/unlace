void __fastcall sub_21CA340(__int64 a1)
{
  __int64 v2; // rbp
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  _QWORD *v6; // r14
  _QWORD *v7; // r12
  _QWORD *v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // r12
  __int64 *v17; // r13
  __int64 i; // rax
  __int64 v19; // rsi
  unsigned int v20; // ecx
  __int64 v21; // rdi
  __int64 *v22; // r12
  __int64 *v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  void *v28; // rdi
  __int64 v29; // r12
  _QWORD *v30; // r13
  _QWORD *v31; // rbp
  _QWORD *v32; // rdi
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  void *v36; // rdi
  _QWORD *v37; // rbp
  void *v38; // rdi
  _QWORD *v39; // rbp
  void *v40; // rdi
  __int64 v41; // rdi
  _QWORD *v42; // r13
  void (__fastcall *v43)(_QWORD *); // rax
  _QWORD *v44; // r15
  __int64 v45; // rbp
  char *v46; // r14
  char *v47; // r12
  void **v48; // rdi
  void **v49; // rcx
  void **v50; // rax
  void *v51; // rdi
  __int64 v52; // rdi
  __int64 v53; // rdi
  void **v54; // r12
  void **v55; // rbp
  _DWORD *v56; // rdi
  void *v57; // rdi
  __int64 v58; // [rsp+8h] [rbp-B0h]
  void **v59; // [rsp+10h] [rbp-A8h]
  void **v60; // [rsp+18h] [rbp-A0h]
  __int64 v61; // [rsp+20h] [rbp-98h] BYREF
  __int64 *v62; // [rsp+28h] [rbp-90h] BYREF
  __int64 v63; // [rsp+30h] [rbp-88h] BYREF
  __int64 *v64; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v65[2]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int8 v66; // [rsp+50h] [rbp-68h]
  _QWORD v67[2]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int8 v68; // [rsp+70h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 464);
  *(_QWORD *)a1 = &off_2BE9B38;
  if ( v2 )
  {
    v3 = *(void **)(v2 + 272);
    if ( v3 != (void *)(v2 + 288) )
      free(v3);
    operator delete(*(_QWORD *)(v2 + 248), 16LL * *(unsigned int *)(v2 + 264), 8);
    v4 = *(void **)(v2 + 232);
    if ( (void *)(v2 + 248) != v4 )
      free(v4);
    operator delete(*(_QWORD *)(v2 + 208), 8LL * *(unsigned int *)(v2 + 224), 8);
    v5 = *(void **)(v2 + 192);
    if ( (void *)(v2 + 208) != v5 )
      free(v5);
    operator delete(*(_QWORD *)(v2 + 168), 24LL * *(unsigned int *)(v2 + 184), 8);
    v6 = *(_QWORD **)(v2 + 152);
    v7 = &v6[8 * (unsigned __int64)*(unsigned int *)(v2 + 160)];
    if ( v6 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 8;
          v8 = (_QWORD *)v7[6];
          if ( v8 == v7 + 8 )
            break;
          free(v8);
          if ( v6 == v7 )
            goto LABEL_11;
        }
      }
      while ( v6 != v7 );
LABEL_11:
      v7 = *(_QWORD **)(v2 + 152);
    }
    if ( (_QWORD *)(v2 + 168) != v7 )
      free(v7);
    v9 = *(_QWORD *)(v2 + 128);
    v10 = *(unsigned int *)(v2 + 144);
    v11 = 32 * v10;
    if ( (_DWORD)v10 )
    {
      v66 = 0;
      v12 = v9 + v11;
      v13 = 0;
      v65[0] = -1;
      v65[1] = 0;
      v67[0] = -2;
      v67[1] = 0;
      v68 = 0;
      while ( 1 )
      {
        v14 = *(unsigned __int8 *)(v9 + 16);
        if ( (_BYTE)v14 == 0xFF )
          break;
        if ( (_BYTE)v13 == 0xFF || (_BYTE)v14 != (_BYTE)v13 )
          goto LABEL_16;
        v15 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v13])((__int64)&v64, v9);
        v62 = &v61;
        v61 = v15;
        if ( v66 == 0xFF )
LABEL_126:
          abort();
        if ( !((bool (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v66])((_QWORD ***)&v62, v65) )
        {
          v14 = *(unsigned __int8 *)(v9 + 16);
LABEL_16:
          if ( (_BYTE)v14 != 0xFF && v68 != 0xFF && (_BYTE)v14 == v68 )
          {
            v63 = ((__int64 (__fastcall *)(__int64, __int64))funcs_21C1200[v14])((__int64)&v64, v9);
            v64 = &v63;
            if ( v68 == 0xFF )
              goto LABEL_126;
            ((void (__fastcall *)(_QWORD ***, _QWORD *))funcs_21C1224[v68])((_QWORD ***)&v64, v67);
          }
        }
LABEL_21:
        v9 += 32;
        if ( v12 == v9 )
        {
          v9 = *(_QWORD *)(v2 + 128);
          v11 = 32LL * *(unsigned int *)(v2 + 144);
          goto LABEL_30;
        }
        v13 = v66;
      }
      if ( (_BYTE)v13 == 0xFF )
        goto LABEL_21;
      goto LABEL_16;
    }
LABEL_30:
    operator delete(v9, v11, 8);
    operator delete(*(_QWORD *)(v2 + 104), 16LL * *(unsigned int *)(v2 + 120), 8);
    v16 = *(__int64 **)(v2 + 16);
    v17 = &v16[*(unsigned int *)(v2 + 24)];
    if ( v16 != v17 )
    {
      for ( i = *(_QWORD *)(v2 + 16); ; i = *(_QWORD *)(v2 + 16) )
      {
        v19 = 0x40000000000LL;
        v20 = (unsigned int)(((__int64)v16 - i) >> 3) >> 7;
        if ( v20 <= 0x1D )
          v19 = 4096LL << v20;
        v21 = *v16++;
        operator delete(v21, v19, 16);
        if ( v17 == v16 )
          break;
      }
    }
    v22 = *(__int64 **)(v2 + 64);
    v23 = &v22[2 * *(unsigned int *)(v2 + 72)];
    if ( v22 != v23 )
    {
      do
      {
        v24 = v22[1];
        v25 = *v22;
        v22 += 2;
        operator delete(v25, v24, 16);
      }
      while ( v23 != v22 );
      v23 = *(__int64 **)(v2 + 64);
    }
    if ( v23 != (__int64 *)(v2 + 80) )
      free(v23);
    v26 = *(void **)(v2 + 16);
    if ( v26 != (void *)(v2 + 32) )
      free(v26);
    operator delete((void *)v2, 0x120u);
  }
  v27 = *(void **)(a1 + 432);
  if ( v27 )
    operator delete(v27, 0x30u);
  v28 = *(void **)(a1 + 424);
  if ( v28 )
    operator delete(v28, 0x30u);
  v29 = *(_QWORD *)(a1 + 416);
  if ( v29 )
  {
    v30 = *(_QWORD **)(v29 + 464);
    v31 = &v30[4 * *(unsigned int *)(v29 + 472)];
    if ( v30 != v31 )
    {
      do
      {
        while ( 1 )
        {
          v31 -= 4;
          v32 = (_QWORD *)v31[1];
          if ( v32 == v31 + 3 )
            break;
          free(v32);
          if ( v30 == v31 )
            goto LABEL_52;
        }
      }
      while ( v30 != v31 );
LABEL_52:
      v31 = *(_QWORD **)(v29 + 464);
    }
    if ( v31 != (_QWORD *)(v29 + 480) )
      free(v31);
    v33 = *(void **)(v29 + 280);
    if ( v33 != (void *)(v29 + 296) )
      free(v33);
    v34 = *(void **)(v29 + 40);
    if ( v34 != (void *)(v29 + 56) )
      free(v34);
    operator delete((void *)v29, 0x208u);
  }
  v35 = *(void **)(a1 + 176);
  if ( v35 != (void *)(a1 + 192) )
    free(v35);
  v36 = *(void **)(a1 + 168);
  if ( v36 )
    operator delete(v36, 0x30u);
  v37 = *(_QWORD **)(a1 + 152);
  if ( v37 )
  {
    v38 = (void *)v37[1];
    if ( v38 )
      operator delete(v38);
    operator delete(v37, 0x58u);
  }
  v39 = *(_QWORD **)(a1 + 144);
  if ( v39 )
  {
    v40 = (void *)v39[1];
    if ( v40 )
      operator delete(v40);
    operator delete(v39, 0x58u);
  }
  v41 = *(_QWORD *)(a1 + 136);
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8LL))(v41);
  v42 = *(_QWORD **)(a1 + 128);
  if ( v42 )
  {
    v43 = *(void (__fastcall **)(_QWORD *))(*v42 + 8LL);
    if ( v43 == sub_21CA1D0 )
    {
      v44 = (_QWORD *)v42[1];
      *v42 = &off_2C74D60;
      if ( v44 )
      {
        v45 = v44[4];
        v58 = v44[5];
        if ( v58 != v45 )
        {
          do
          {
            while ( 1 )
            {
              v46 = *(char **)(v45 + 48);
              if ( v46 )
              {
                v47 = v46 + 72;
                do
                {
                  while ( 1 )
                  {
                    v47 -= 24;
                    v48 = *(void ***)v47;
                    v49 = *((void ***)v47 + 1);
                    v50 = *(void ***)v47;
                    if ( v49 != *(void ***)v47 )
                    {
                      do
                      {
                        while ( *v50 )
                        {
                          v60 = v50;
                          v59 = v49;
                          operator delete(*v50);
                          v49 = v59;
                          v50 = v60 + 3;
                          if ( v59 == v60 + 3 )
                            goto LABEL_83;
                        }
                        v50 += 3;
                      }
                      while ( v49 != v50 );
LABEL_83:
                      v48 = *(void ***)v47;
                    }
                    if ( !v48 )
                      break;
                    operator delete(v48);
                    if ( v46 == v47 )
                      goto LABEL_86;
                  }
                }
                while ( v46 != v47 );
LABEL_86:
                operator delete(v46, 0x48u);
              }
              v51 = *(void **)(v45 + 24);
              if ( v51 )
                operator delete(v51);
              if ( !*(_QWORD *)v45 )
                break;
              operator delete(*(void **)v45);
              v45 += 80;
              if ( v58 == v45 )
                goto LABEL_91;
            }
            v45 += 80;
          }
          while ( v58 != v45 );
LABEL_91:
          v45 = v44[4];
        }
        if ( v45 )
          operator delete((void *)v45);
        operator delete(v44, 0x50u);
      }
      operator delete(v42, 0x38u);
    }
    else
    {
      v43(*(_QWORD **)(a1 + 128));
    }
  }
  v52 = *(_QWORD *)(a1 + 120);
  if ( v52 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 8LL))(v52);
  v53 = *(_QWORD *)(a1 + 112);
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
  v54 = *(void ***)(a1 + 56);
  v55 = &v54[4 * *(unsigned int *)(a1 + 64)];
  *(_QWORD *)a1 = &unk_2C74CC0;
  if ( v54 != v55 )
  {
    do
    {
      while ( 1 )
      {
        v55 -= 4;
        if ( !*v55 )
          break;
        operator delete(*v55);
        if ( v54 == v55 )
          goto LABEL_103;
      }
    }
    while ( v54 != v55 );
LABEL_103:
    v55 = *(void ***)(a1 + 56);
  }
  if ( v55 != (void **)(a1 + 72) )
    free(v55);
  v56 = *(_DWORD **)(a1 + 48);
  if ( v56 )
    sub_21C9860(v56);
  v57 = *(void **)(a1 + 16);
  if ( v57 != (void *)(a1 + 32) )
    operator delete(v57);
}
