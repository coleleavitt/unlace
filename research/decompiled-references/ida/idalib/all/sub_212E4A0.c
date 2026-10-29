__int64 __fastcall sub_212E4A0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // eax
  char *v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // r12
  _QWORD *v9; // rax
  int v10; // eax
  char *v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r13
  void *v17; // rdi
  void *v18; // rdi
  _QWORD *v19; // r12
  _QWORD *v20; // r14
  _QWORD *v21; // rbp
  _QWORD *v22; // r13
  void **v23; // rdx
  void **v24; // r15
  void *v25; // rdi
  _QWORD *v26; // r15
  __int64 v27; // rsi
  __int64 v28; // rcx
  void *v29; // rdi
  void **v30; // r15
  void **v31; // r14
  _QWORD *v32; // r14
  _QWORD *v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rax
  void *v36; // rdi
  void **v37; // r14
  void **v38; // rbp
  _QWORD *v39; // r15
  _QWORD *v40; // rbp
  __int64 v41; // rax
  __int64 v42; // r14
  void *v43; // rdi
  void *v44; // rdi
  void **v45; // rbp
  unsigned __int64 v46; // r12
  void *v47; // rdi
  void *v48; // rdi
  char *v49; // rdi
  int v50; // eax
  __int64 v51; // rbp
  __int64 v52; // r12
  _QWORD *v53; // rax
  void *v54; // rdi
  __int64 v55; // rdi
  void **v57; // r12
  _QWORD *v58; // r15
  _QWORD *v59; // r12
  __int64 v60; // rax
  __int64 v61; // r14
  void *v62; // rdi
  void **v63; // r14
  _QWORD *v64; // [rsp+0h] [rbp-78h]
  _QWORD *v65; // [rsp+8h] [rbp-70h]
  __int64 v66; // [rsp+8h] [rbp-70h]
  __int64 v67; // [rsp+8h] [rbp-70h]
  unsigned __int64 v68; // [rsp+10h] [rbp-68h]
  __int64 v69; // [rsp+10h] [rbp-68h]
  void **v70; // [rsp+18h] [rbp-60h]
  _QWORD *v71; // [rsp+18h] [rbp-60h]
  __int64 v72; // [rsp+18h] [rbp-60h]
  __int64 v73; // [rsp+20h] [rbp-58h]
  __int64 v74; // [rsp+28h] [rbp-50h]
  __int64 v75; // [rsp+38h] [rbp-40h]

  *(_QWORD *)a1 = &off_2BE92B8;
  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 264LL) = 0;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(v2 + 48) = *(_QWORD *)(a1 + 248);
  v4 = *(_DWORD *)(a1 + 900);
  *(_QWORD *)(v2 + 56) = v3;
  if ( v4 )
  {
    v5 = *(_DWORD *)(a1 + 896);
    v6 = *(char **)(a1 + 888);
    if ( v5 )
    {
      v7 = 0;
      v8 = 8LL * (unsigned int)(v5 - 1) + 8;
      do
      {
        v9 = *(_QWORD **)&v6[v7];
        if ( v9 != (_QWORD *)-8LL && v9 )
        {
          operator delete(*(_QWORD *)&v6[v7], *v9 + 17LL, 8);
          v6 = *(char **)(a1 + 888);
        }
        v7 += 8;
      }
      while ( v8 != v7 );
    }
  }
  else
  {
    v6 = *(char **)(a1 + 888);
  }
  free(v6);
  if ( *(_DWORD *)(a1 + 876) )
  {
    v10 = *(_DWORD *)(a1 + 872);
    v11 = *(char **)(a1 + 864);
    if ( v10 )
    {
      v12 = 0;
      v13 = 8LL * (unsigned int)(v10 - 1) + 8;
      do
      {
        v14 = *(_QWORD **)&v11[v12];
        if ( v14 != (_QWORD *)-8LL && v14 )
        {
          operator delete(*(_QWORD *)&v11[v12], *v14 + 17LL, 8);
          v11 = *(char **)(a1 + 864);
        }
        v12 += 8;
      }
      while ( v13 != v12 );
    }
  }
  else
  {
    v11 = *(char **)(a1 + 864);
  }
  free(v11);
  v15 = *(_QWORD *)(a1 + 824);
  if ( v15 )
  {
    do
    {
      sub_9ED9D0(a1 + 808, *(_QWORD **)(v15 + 24));
      v16 = *(_QWORD *)(v15 + 16);
      operator delete((void *)v15);
      v15 = v16;
    }
    while ( v16 );
  }
  v17 = *(void **)(a1 + 760);
  if ( v17 != (void *)(a1 + 776) )
    free(v17);
  v18 = *(void **)(a1 + 520);
  if ( v18 != (void *)(a1 + 536) )
    free(v18);
  v19 = *(_QWORD **)(a1 + 440);
  v64 = *(_QWORD **)(a1 + 432);
  v20 = (_QWORD *)(*(_QWORD *)(a1 + 424) + 8LL);
  v21 = *(_QWORD **)(a1 + 400);
  v65 = *(_QWORD **)(a1 + 416);
  v68 = *(_QWORD *)(a1 + 456);
  v74 = *(_QWORD *)(a1 + 424);
  if ( v68 > (unsigned __int64)v20 )
  {
LABEL_22:
    while ( 2 )
    {
      v22 = (_QWORD *)*v20;
      v73 = *v20 + 440LL;
      do
      {
        while ( 1 )
        {
          v23 = (void **)v22[8];
          v24 = (void **)v22[7];
          if ( v23 != v24 )
          {
            do
            {
              while ( 1 )
              {
                v25 = *v24;
                if ( *v24 == v24 + 2 )
                  break;
                v70 = v23;
                v24 += 4;
                operator delete(v25);
                v23 = v70;
                if ( v70 == v24 )
                  goto LABEL_26;
              }
              v24 += 4;
            }
            while ( v23 != v24 );
LABEL_26:
            v24 = (void **)v22[7];
          }
          if ( v24 )
            operator delete(v24);
          v26 = (_QWORD *)v22[4];
          v71 = (_QWORD *)v22[5];
          if ( v71 != v26 )
          {
            do
            {
              while ( 1 )
              {
                v27 = v26[3];
                v28 = v26[2];
                if ( v27 != v28 )
                {
                  do
                  {
                    if ( *(_DWORD *)(v28 + 32) > 0x40u )
                    {
                      v29 = *(void **)(v28 + 24);
                      if ( v29 )
                      {
                        v75 = v28;
                        operator delete[](v29);
                        v28 = v75;
                      }
                    }
                    v28 += 40;
                  }
                  while ( v27 != v28 );
                  v28 = v26[2];
                }
                if ( !v28 )
                  break;
                v26 += 6;
                operator delete((void *)v28);
                if ( v71 == v26 )
                  goto LABEL_38;
              }
              v26 += 6;
            }
            while ( v71 != v26 );
LABEL_38:
            v26 = (_QWORD *)v22[4];
          }
          if ( !v26 )
            break;
          v22 += 11;
          operator delete(v26);
          if ( v22 == (_QWORD *)v73 )
          {
            if ( v68 > (unsigned __int64)++v20 )
              goto LABEL_22;
            goto LABEL_42;
          }
        }
        v22 += 11;
      }
      while ( v22 != (_QWORD *)v73 );
      if ( v68 > (unsigned __int64)++v20 )
        continue;
      break;
    }
  }
LABEL_42:
  if ( v68 == v74 )
  {
    while ( v64 != v21 )
    {
      v63 = (void **)v21[8];
      v57 = (void **)v21[7];
      if ( v63 != v57 )
      {
        do
        {
          while ( *v57 == v57 + 2 )
          {
            v57 += 4;
            if ( v63 == v57 )
              goto LABEL_101;
          }
          operator delete(*v57);
          v57 += 4;
        }
        while ( v63 != v57 );
LABEL_101:
        v57 = (void **)v21[7];
      }
      if ( v57 )
        operator delete(v57);
      v58 = (_QWORD *)v21[5];
      v59 = (_QWORD *)v21[4];
      if ( v58 != v59 )
      {
        do
        {
          while ( 1 )
          {
            v60 = v59[3];
            v61 = v59[2];
            if ( v60 != v61 )
            {
              do
              {
                if ( *(_DWORD *)(v61 + 32) > 0x40u )
                {
                  v62 = *(void **)(v61 + 24);
                  if ( v62 )
                  {
                    v67 = v60;
                    operator delete[](v62);
                    v60 = v67;
                  }
                }
                v61 += 40;
              }
              while ( v60 != v61 );
              v61 = v59[2];
            }
            if ( !v61 )
              break;
            v59 += 6;
            operator delete((void *)v61);
            if ( v58 == v59 )
              goto LABEL_113;
          }
          v59 += 6;
        }
        while ( v58 != v59 );
LABEL_113:
        v59 = (_QWORD *)v21[4];
      }
      if ( v59 )
        operator delete(v59);
      v21 += 11;
    }
  }
  else
  {
    for ( ; v65 != v21; v21 += 11 )
    {
      while ( 1 )
      {
        v30 = (void **)v21[8];
        v31 = (void **)v21[7];
        if ( v30 != v31 )
        {
          do
          {
            while ( *v31 != v31 + 2 )
            {
              operator delete(*v31);
              v31 += 4;
              if ( v30 == v31 )
                goto LABEL_47;
            }
            v31 += 4;
          }
          while ( v30 != v31 );
LABEL_47:
          v31 = (void **)v21[7];
        }
        if ( v31 )
          operator delete(v31);
        v32 = (_QWORD *)v21[5];
        v33 = (_QWORD *)v21[4];
        if ( v32 != v33 )
        {
          do
          {
            while ( 1 )
            {
              v34 = v33[3];
              v35 = v33[2];
              if ( v34 != v35 )
              {
                do
                {
                  if ( *(_DWORD *)(v35 + 32) > 0x40u )
                  {
                    v36 = *(void **)(v35 + 24);
                    if ( v36 )
                    {
                      v72 = v35;
                      v69 = v34;
                      operator delete[](v36);
                      v35 = v72;
                      v34 = v69;
                    }
                  }
                  v35 += 40;
                }
                while ( v34 != v35 );
                v35 = v33[2];
              }
              if ( !v35 )
                break;
              v33 += 6;
              operator delete((void *)v35);
              if ( v32 == v33 )
                goto LABEL_59;
            }
            v33 += 6;
          }
          while ( v32 != v33 );
LABEL_59:
          v33 = (_QWORD *)v21[4];
        }
        if ( !v33 )
          break;
        v21 += 11;
        operator delete(v33);
        if ( v65 == v21 )
          goto LABEL_62;
      }
    }
LABEL_62:
    while ( v64 != v19 )
    {
      while ( 1 )
      {
        v37 = (void **)v19[8];
        v38 = (void **)v19[7];
        if ( v37 != v38 )
        {
          do
          {
            while ( *v38 != v38 + 2 )
            {
              operator delete(*v38);
              v38 += 4;
              if ( v38 == v37 )
                goto LABEL_66;
            }
            v38 += 4;
          }
          while ( v37 != v38 );
LABEL_66:
          v38 = (void **)v19[7];
        }
        if ( v38 )
          operator delete(v38);
        v39 = (_QWORD *)v19[5];
        v40 = (_QWORD *)v19[4];
        if ( v39 != v40 )
        {
          do
          {
            while ( 1 )
            {
              v41 = v40[3];
              v42 = v40[2];
              if ( v41 != v42 )
              {
                do
                {
                  if ( *(_DWORD *)(v42 + 32) > 0x40u )
                  {
                    v43 = *(void **)(v42 + 24);
                    if ( v43 )
                    {
                      v66 = v41;
                      operator delete[](v43);
                      v41 = v66;
                    }
                  }
                  v42 += 40;
                }
                while ( v41 != v42 );
                v42 = v40[2];
              }
              if ( !v42 )
                break;
              v40 += 6;
              operator delete((void *)v42);
              if ( v40 == v39 )
                goto LABEL_78;
            }
            v40 += 6;
          }
          while ( v39 != v40 );
LABEL_78:
          v40 = (_QWORD *)v19[4];
        }
        if ( !v40 )
          break;
        v19 += 11;
        operator delete(v40);
        if ( v64 == v19 )
          goto LABEL_81;
      }
      v19 += 11;
    }
  }
LABEL_81:
  v44 = *(void **)(a1 + 384);
  if ( v44 )
  {
    v45 = *(void ***)(a1 + 424);
    v46 = *(_QWORD *)(a1 + 456) + 8LL;
    if ( v46 > (unsigned __int64)v45 )
    {
      do
      {
        v47 = *v45++;
        operator delete(v47);
      }
      while ( v46 > (unsigned __int64)v45 );
      v44 = *(void **)(a1 + 384);
    }
    operator delete(v44);
  }
  v48 = *(void **)(a1 + 360);
  if ( v48 )
    operator delete(v48);
  v49 = *(char **)(a1 + 336);
  if ( *(_DWORD *)(a1 + 348) )
  {
    v50 = *(_DWORD *)(a1 + 344);
    if ( v50 )
    {
      v51 = 0;
      v52 = 8LL * (unsigned int)(v50 - 1) + 8;
      do
      {
        v53 = *(_QWORD **)&v49[v51];
        if ( v53 != (_QWORD *)-8LL && v53 )
        {
          operator delete(*(_QWORD *)&v49[v51], *v53 + 25LL, 8);
          v49 = *(char **)(a1 + 336);
        }
        v51 += 8;
      }
      while ( v51 != v52 );
    }
  }
  free(v49);
  v54 = *(void **)(a1 + 312);
  if ( v54 )
    operator delete(v54);
  v55 = *(_QWORD *)(a1 + 264);
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 8LL))(v55);
  return sub_2153AD0(a1);
}
