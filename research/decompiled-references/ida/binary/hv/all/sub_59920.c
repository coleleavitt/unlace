void __fastcall sub_59920(char **a1)
{
  char **v1; // rbp
  __int64 v2; // r15
  char **v3; // r14
  size_t v4; // rbx
  char *v5; // rbx
  void *v6; // r13
  __int64 v7; // r15
  size_t v8; // rbx
  char *v9; // r13
  void *v10; // r12
  __int64 v11; // r14
  size_t v12; // rbx
  char *v13; // r13
  void *v14; // r15
  __int64 v15; // r12
  char *v16; // r14
  size_t v17; // rbx
  char *v18; // rbp
  void *v19; // r13
  char *v20; // rbx
  __int64 v21; // r13
  size_t v22; // rbp
  char *v23; // rbp
  void *v24; // r15
  __int64 v25; // r14
  char *v26; // r12
  size_t v27; // rbp
  void *v28; // rbx
  __int64 v29; // r12
  _QWORD *v30; // r14
  void *v31; // rdi
  char *v32; // rsi
  __int64 v33; // r14
  __int64 i; // r12
  char *v35; // rax
  void *v36; // rdi
  __int64 v37; // rbx
  _QWORD *v38; // r15
  void *v39; // rdi
  char *v40; // rdx
  __int64 v41; // r15
  __int64 j; // rbx
  char *v43; // rax
  void *v44; // rdi
  __int64 v45; // rbx
  _QWORD *v46; // rbp
  void *v47; // rdi
  char *v48; // rdx
  __int64 v49; // rbp
  __int64 k; // rbx
  char *v51; // rax
  void *v52; // rdi
  __int64 v53; // rbx
  _QWORD *v54; // rbp
  void *v55; // rdi
  char *v56; // rdx
  __int64 v57; // rbp
  __int64 m; // rbx
  char *v59; // rax
  void *v60; // rdi
  __int64 v61; // rbp
  _QWORD *v62; // r12
  void *v63; // rdi
  char *v64; // rdx
  __int64 v65; // r12
  __int64 n; // rbp
  char *v67; // rax
  void *v68; // rdi
  char *v69; // rbx
  char *v70; // r12
  void *v71; // rdi
  char *v72; // rdx
  char *v73; // r12
  char *ii; // rbx
  char *v75; // rax
  void *v76; // rdi
  void *v77; // rbx
  char *v78; // [rsp+0h] [rbp-D8h]
  char *v79; // [rsp+8h] [rbp-D0h]
  void *v80; // [rsp+10h] [rbp-C8h]
  char *v81; // [rsp+18h] [rbp-C0h]
  char *v82; // [rsp+28h] [rbp-B0h]
  char *v83; // [rsp+30h] [rbp-A8h]
  char *v84; // [rsp+38h] [rbp-A0h]
  void *v85; // [rsp+48h] [rbp-90h]
  char *v86; // [rsp+50h] [rbp-88h]
  char *v87; // [rsp+60h] [rbp-78h]
  void *v88; // [rsp+68h] [rbp-70h]
  char **v89; // [rsp+70h] [rbp-68h]
  void *v90; // [rsp+80h] [rbp-58h]
  char *v91; // [rsp+88h] [rbp-50h]
  void *v93; // [rsp+98h] [rbp-40h]

  v1 = a1;
  v2 = (__int64)a1[6];
  if ( a1 + 4 != (char **)v2 )
  {
    v3 = a1 + 4;
    while ( 1 )
    {
      v4 = *(_QWORD *)(v2 + 40);
      if ( v4 )
      {
        v6 = (void *)sub_96030(*(_QWORD *)(v2 + 40));
        memcpy(v6, *(const void **)(v2 + 32), v4);
        v5 = *(char **)(v2 + 56);
        if ( !v5 )
          goto LABEL_104;
      }
      else
      {
        v5 = *(char **)(v2 + 56);
        v6 = nullptr;
        if ( !v5 )
          goto LABEL_106;
      }
      if ( *((char **)v5 + 6) == v5 + 32 )
        goto LABEL_92;
      v89 = v3;
      v86 = v5 + 32;
      v90 = v6;
      v91 = v5;
      v7 = *((_QWORD *)v5 + 6);
      do
      {
        v8 = *(_QWORD *)(v7 + 40);
        if ( v8 )
        {
          v10 = (void *)sub_96030(*(_QWORD *)(v7 + 40));
          memcpy(v10, *(const void **)(v7 + 32), v8);
          v9 = *(char **)(v7 + 56);
          if ( !v9 )
            goto LABEL_88;
        }
        else
        {
          v9 = *(char **)(v7 + 56);
          v10 = nullptr;
          if ( !v9 )
            goto LABEL_90;
        }
        v11 = *((_QWORD *)v9 + 6);
        if ( (char *)v11 == v9 + 32 )
          goto LABEL_76;
        v83 = v9 + 32;
        v87 = v9;
        v88 = v10;
        do
        {
          v12 = *(_QWORD *)(v11 + 40);
          if ( v12 )
          {
            v14 = (void *)sub_96030(*(_QWORD *)(v11 + 40));
            memcpy(v14, *(const void **)(v11 + 32), v12);
            v13 = *(char **)(v11 + 56);
            if ( !v13 )
              goto LABEL_72;
          }
          else
          {
            v13 = *(char **)(v11 + 56);
            v14 = nullptr;
            if ( !v13 )
              goto LABEL_74;
          }
          v15 = *((_QWORD *)v13 + 6);
          if ( (char *)v15 == v13 + 32 )
            goto LABEL_60;
          v84 = v13;
          v85 = v14;
          v16 = v13 + 32;
          do
          {
            v17 = *(_QWORD *)(v15 + 40);
            if ( v17 )
            {
              v19 = (void *)sub_96030(*(_QWORD *)(v15 + 40));
              memcpy(v19, *(const void **)(v15 + 32), v17);
              v18 = *(char **)(v15 + 56);
              if ( !v18 )
                goto LABEL_56;
            }
            else
            {
              v18 = *(char **)(v15 + 56);
              v19 = nullptr;
              if ( !v18 )
                goto LABEL_58;
            }
            v20 = v18 + 32;
            if ( *((char **)v18 + 6) == v18 + 32 )
              goto LABEL_44;
            v81 = v16;
            v82 = v18;
            v80 = v19;
            v21 = *((_QWORD *)v18 + 6);
            do
            {
              v22 = *(_QWORD *)(v21 + 40);
              if ( !v22 )
              {
                v23 = *(char **)(v21 + 56);
                v24 = nullptr;
                if ( !v23 )
                  goto LABEL_42;
LABEL_21:
                v25 = *((_QWORD *)v23 + 6);
                v26 = v23 + 32;
                if ( (char *)v25 != v23 + 32 )
                {
                  v78 = v20;
                  v79 = v23;
                  do
                  {
                    v27 = *(_QWORD *)(v25 + 40);
                    if ( v27 )
                    {
                      v77 = (void *)sub_96030(*(_QWORD *)(v25 + 40));
                      memcpy(v77, *(const void **)(v25 + 32), v27);
                      if ( *(_QWORD *)(v25 + 56) )
                      {
                        v93 = *(void **)(v25 + 56);
                        ((void (*)(void))sub_59920)();
                        operator delete(v93, 0x50u);
                      }
                      if ( v77 )
                        j__free(v77);
                    }
                    else
                    {
                      v28 = *(void **)(v25 + 56);
                      if ( v28 )
                      {
                        sub_59920(*(_QWORD *)(v25 + 56));
                        operator delete(v28, 0x50u);
                      }
                    }
                    v25 = std::_Rb_tree_increment();
                  }
                  while ( v26 != (char *)v25 );
                  v20 = v78;
                  v23 = v79;
                }
                v29 = *((_QWORD *)v23 + 5);
                while ( v29 )
                {
                  v30 = (_QWORD *)v29;
                  sub_56ED0(*(_QWORD **)(v29 + 24));
                  v31 = *(void **)(v29 + 32);
                  v29 = *(_QWORD *)(v29 + 16);
                  if ( v31 )
                  {
                    v30[5] = 0;
                    j__free(v31);
                  }
                  operator delete(v30, 0x40u);
                }
                v32 = *(char **)v23;
                if ( *(_QWORD *)v23 )
                {
                  v33 = *((_QWORD *)v23 + 1);
                  if ( v33 )
                  {
                    for ( i = 0; i != v33; ++i )
                    {
                      v35 = &v32[24 * i];
                      v36 = *(void **)v35;
                      if ( *(_QWORD *)v35 )
                      {
                        *((_QWORD *)v35 + 1) = 0;
                        j__free(v36);
                        v32 = *(char **)v23;
                      }
                    }
                  }
                  *((_QWORD *)v23 + 1) = 0;
                  j__free(v32);
                }
                operator delete(v23, 0x50u);
                goto LABEL_40;
              }
              v24 = (void *)sub_96030(*(_QWORD *)(v21 + 40));
              memcpy(v24, *(const void **)(v21 + 32), v22);
              v23 = *(char **)(v21 + 56);
              if ( v23 )
                goto LABEL_21;
LABEL_40:
              if ( v24 )
                j__free(v24);
LABEL_42:
              v21 = std::_Rb_tree_increment();
            }
            while ( v20 != (char *)v21 );
            v19 = v80;
            v16 = v81;
            v18 = v82;
LABEL_44:
            v37 = *((_QWORD *)v18 + 5);
            while ( v37 )
            {
              v38 = (_QWORD *)v37;
              sub_56ED0(*(_QWORD **)(v37 + 24));
              v39 = *(void **)(v37 + 32);
              v37 = *(_QWORD *)(v37 + 16);
              if ( v39 )
              {
                v38[5] = 0;
                j__free(v39);
              }
              operator delete(v38, 0x40u);
            }
            v40 = *(char **)v18;
            if ( *(_QWORD *)v18 )
            {
              v41 = *((_QWORD *)v18 + 1);
              if ( v41 )
              {
                for ( j = 0; j != v41; ++j )
                {
                  v43 = &v40[24 * j];
                  v44 = *(void **)v43;
                  if ( *(_QWORD *)v43 )
                  {
                    *((_QWORD *)v43 + 1) = 0;
                    j__free(v44);
                    v40 = *(char **)v18;
                  }
                }
              }
              *((_QWORD *)v18 + 1) = 0;
              j__free(v40);
            }
            operator delete(v18, 0x50u);
LABEL_56:
            if ( v19 )
              j__free(v19);
LABEL_58:
            v15 = std::_Rb_tree_increment();
          }
          while ( v16 != (char *)v15 );
          v13 = v84;
          v14 = v85;
LABEL_60:
          v45 = *((_QWORD *)v13 + 5);
          while ( v45 )
          {
            v46 = (_QWORD *)v45;
            sub_56ED0(*(_QWORD **)(v45 + 24));
            v47 = *(void **)(v45 + 32);
            v45 = *(_QWORD *)(v45 + 16);
            if ( v47 )
            {
              v46[5] = 0;
              j__free(v47);
            }
            operator delete(v46, 0x40u);
          }
          v48 = *(char **)v13;
          if ( *(_QWORD *)v13 )
          {
            v49 = *((_QWORD *)v13 + 1);
            if ( v49 )
            {
              for ( k = 0; k != v49; ++k )
              {
                v51 = &v48[24 * k];
                v52 = *(void **)v51;
                if ( *(_QWORD *)v51 )
                {
                  *((_QWORD *)v51 + 1) = 0;
                  j__free(v52);
                  v48 = *(char **)v13;
                }
              }
            }
            *((_QWORD *)v13 + 1) = 0;
            j__free(v48);
          }
          operator delete(v13, 0x50u);
LABEL_72:
          if ( v14 )
            j__free(v14);
LABEL_74:
          v11 = std::_Rb_tree_increment();
        }
        while ( v83 != (char *)v11 );
        v9 = v87;
        v10 = v88;
LABEL_76:
        v53 = *((_QWORD *)v9 + 5);
        while ( v53 )
        {
          v54 = (_QWORD *)v53;
          sub_56ED0(*(_QWORD **)(v53 + 24));
          v55 = *(void **)(v53 + 32);
          v53 = *(_QWORD *)(v53 + 16);
          if ( v55 )
          {
            v54[5] = 0;
            j__free(v55);
          }
          operator delete(v54, 0x40u);
        }
        v56 = *(char **)v9;
        if ( *(_QWORD *)v9 )
        {
          v57 = *((_QWORD *)v9 + 1);
          if ( v57 )
          {
            for ( m = 0; m != v57; ++m )
            {
              v59 = &v56[24 * m];
              v60 = *(void **)v59;
              if ( *(_QWORD *)v59 )
              {
                *((_QWORD *)v59 + 1) = 0;
                j__free(v60);
                v56 = *(char **)v9;
              }
            }
          }
          *((_QWORD *)v9 + 1) = 0;
          j__free(v56);
        }
        operator delete(v9, 0x50u);
LABEL_88:
        if ( v10 )
          j__free(v10);
LABEL_90:
        v7 = std::_Rb_tree_increment();
      }
      while ( v86 != (char *)v7 );
      v3 = v89;
      v6 = v90;
      v5 = v91;
LABEL_92:
      v61 = *((_QWORD *)v5 + 5);
      while ( v61 )
      {
        v62 = (_QWORD *)v61;
        sub_56ED0(*(_QWORD **)(v61 + 24));
        v63 = *(void **)(v61 + 32);
        v61 = *(_QWORD *)(v61 + 16);
        if ( v63 )
        {
          v62[5] = 0;
          j__free(v63);
        }
        operator delete(v62, 0x40u);
      }
      v64 = *(char **)v5;
      if ( *(_QWORD *)v5 )
      {
        v65 = *((_QWORD *)v5 + 1);
        if ( v65 )
        {
          for ( n = 0; n != v65; ++n )
          {
            v67 = &v64[24 * n];
            v68 = *(void **)v67;
            if ( *(_QWORD *)v67 )
            {
              *((_QWORD *)v67 + 1) = 0;
              j__free(v68);
              v64 = *(char **)v5;
            }
          }
        }
        *((_QWORD *)v5 + 1) = 0;
        j__free(v64);
      }
      operator delete(v5, 0x50u);
LABEL_104:
      if ( v6 )
        j__free(v6);
LABEL_106:
      v2 = std::_Rb_tree_increment();
      if ( v3 == (char **)v2 )
      {
        v1 = a1;
        break;
      }
    }
  }
  v69 = v1[5];
  while ( v69 )
  {
    v70 = v69;
    sub_56ED0(*((_QWORD **)v69 + 3));
    v71 = *((void **)v69 + 4);
    v69 = *((char **)v69 + 2);
    if ( v71 )
    {
      *((_QWORD *)v70 + 5) = 0;
      j__free(v71);
    }
    operator delete(v70, 0x40u);
  }
  v72 = *v1;
  if ( *v1 )
  {
    v73 = v1[1];
    if ( v73 )
    {
      for ( ii = nullptr; ii != v73; ++ii )
      {
        v75 = &v72[24 * (_QWORD)ii];
        v76 = *(void **)v75;
        if ( *(_QWORD *)v75 )
        {
          *((_QWORD *)v75 + 1) = 0;
          j__free(v76);
          v72 = *v1;
        }
      }
    }
    v1[1] = nullptr;
    j__free(v72);
  }
}

