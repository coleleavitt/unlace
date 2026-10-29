void __fastcall sub_8F33B0(char **a1, char *a2)
{
  char **v2; // rbp
  char **v3; // r15
  char **v4; // r14
  size_t v5; // rbx
  void **v6; // rbx
  void *v7; // r13
  _QWORD *v8; // r15
  size_t v9; // rbx
  _QWORD *v10; // r13
  void *v11; // r12
  _QWORD *v12; // r14
  size_t v13; // rbx
  _QWORD *v14; // r13
  void *v15; // r15
  _QWORD *v16; // r12
  _QWORD *v17; // r14
  size_t v18; // rbx
  void **v19; // rbp
  void *v20; // r13
  _QWORD *v21; // rbx
  _QWORD *v22; // r13
  size_t v23; // rbp
  _QWORD *v24; // rbp
  void *v25; // r15
  _QWORD *v26; // r14
  _QWORD *v27; // r12
  size_t v28; // rbp
  void *v29; // rbx
  __int64 v30; // r12
  _QWORD *v31; // r14
  void *v32; // rdi
  char *v33; // rsi
  __int64 v34; // r14
  __int64 i; // r12
  char *v36; // rax
  void *v37; // rdi
  _QWORD *v38; // rbx
  _QWORD *v39; // r15
  void *v40; // rdi
  char *v41; // rdx
  void *v42; // r15
  void *j; // rbx
  char *v44; // rax
  void *v45; // rdi
  __int64 v46; // rbx
  _QWORD *v47; // rbp
  void *v48; // rdi
  char *v49; // rdx
  __int64 v50; // rbp
  __int64 k; // rbx
  char *v52; // rax
  void *v53; // rdi
  __int64 v54; // rbx
  _QWORD *v55; // rbp
  void *v56; // rdi
  char *v57; // rdx
  __int64 v58; // rbp
  __int64 m; // rbx
  char *v60; // rax
  void *v61; // rdi
  _QWORD *v62; // rbp
  _QWORD *v63; // r12
  void *v64; // rdi
  char *v65; // rdx
  void *v66; // r12
  void *n; // rbp
  char *v68; // rax
  void *v69; // rdi
  char *v70; // rbx
  char *v71; // r12
  void *v72; // rdi
  char *v73; // rdx
  char *v74; // r12
  char *ii; // rbx
  char *v76; // rax
  void *v77; // rdi
  void *v78; // rax
  void *v79; // rbx
  void *v80; // rax
  void *v81; // rax
  void *v82; // rax
  void *v83; // rax
  void *v84; // rax
  _QWORD *v85; // [rsp+0h] [rbp-D8h]
  _QWORD *v86; // [rsp+8h] [rbp-D0h]
  void *v87; // [rsp+10h] [rbp-C8h]
  _QWORD *v88; // [rsp+18h] [rbp-C0h]
  _QWORD *v89; // [rsp+20h] [rbp-B8h]
  void **v90; // [rsp+28h] [rbp-B0h]
  _QWORD *v91; // [rsp+30h] [rbp-A8h]
  _QWORD *v92; // [rsp+38h] [rbp-A0h]
  _QWORD *v93; // [rsp+40h] [rbp-98h]
  void *v94; // [rsp+48h] [rbp-90h]
  _QWORD *v95; // [rsp+50h] [rbp-88h]
  _QWORD *v96; // [rsp+58h] [rbp-80h]
  _QWORD *v97; // [rsp+60h] [rbp-78h]
  void *v98; // [rsp+68h] [rbp-70h]
  char **v99; // [rsp+70h] [rbp-68h]
  char **v100; // [rsp+78h] [rbp-60h]
  void *v101; // [rsp+80h] [rbp-58h]
  void **v102; // [rsp+88h] [rbp-50h]
  void *v104; // [rsp+98h] [rbp-40h]

  v2 = a1;
  v3 = (char **)a1[6];
  if ( a1 + 4 != v3 )
  {
    v4 = a1 + 4;
    while ( 1 )
    {
      v5 = (size_t)v3[5];
      if ( v5 )
      {
        v84 = (void *)qalloc_or_throw(v3[5]);
        a2 = v3[4];
        v7 = v84;
        memcpy(v84, a2, v5);
        v6 = (void **)v3[7];
        if ( !v6 )
          goto LABEL_104;
      }
      else
      {
        v6 = (void **)v3[7];
        v7 = nullptr;
        if ( !v6 )
          goto LABEL_106;
      }
      if ( v6[6] == v6 + 4 )
        goto LABEL_92;
      v99 = v4;
      v95 = v6 + 4;
      v101 = v7;
      v102 = v6;
      v100 = v3;
      v8 = v6[6];
      do
      {
        v9 = v8[5];
        if ( v9 )
        {
          v83 = (void *)qalloc_or_throw(v8[5]);
          a2 = (char *)v8[4];
          v11 = v83;
          memcpy(v83, a2, v9);
          v10 = (_QWORD *)v8[7];
          if ( !v10 )
            goto LABEL_88;
        }
        else
        {
          v10 = (_QWORD *)v8[7];
          v11 = nullptr;
          if ( !v10 )
            goto LABEL_90;
        }
        v12 = (_QWORD *)v10[6];
        if ( v12 == v10 + 4 )
          goto LABEL_76;
        v96 = v8;
        v91 = v10 + 4;
        v97 = v10;
        v98 = v11;
        do
        {
          v13 = v12[5];
          if ( v13 )
          {
            v82 = (void *)qalloc_or_throw(v12[5]);
            a2 = (char *)v12[4];
            v15 = v82;
            memcpy(v82, a2, v13);
            v14 = (_QWORD *)v12[7];
            if ( !v14 )
              goto LABEL_72;
          }
          else
          {
            v14 = (_QWORD *)v12[7];
            v15 = nullptr;
            if ( !v14 )
              goto LABEL_74;
          }
          v16 = (_QWORD *)v14[6];
          if ( v16 == v14 + 4 )
            goto LABEL_60;
          v92 = v14;
          v94 = v15;
          v93 = v12;
          v17 = v14 + 4;
          do
          {
            v18 = v16[5];
            if ( v18 )
            {
              v81 = (void *)qalloc_or_throw(v16[5]);
              a2 = (char *)v16[4];
              v20 = v81;
              memcpy(v81, a2, v18);
              v19 = (void **)v16[7];
              if ( !v19 )
                goto LABEL_56;
            }
            else
            {
              v19 = (void **)v16[7];
              v20 = nullptr;
              if ( !v19 )
                goto LABEL_58;
            }
            v21 = v19 + 4;
            if ( v19[6] == v19 + 4 )
              goto LABEL_44;
            v88 = v17;
            v89 = v16;
            v90 = v19;
            v87 = v20;
            v22 = v19[6];
            do
            {
              v23 = v22[5];
              if ( !v23 )
              {
                v24 = (_QWORD *)v22[7];
                v25 = nullptr;
                if ( !v24 )
                  goto LABEL_42;
LABEL_21:
                v26 = (_QWORD *)v24[6];
                v27 = v24 + 4;
                if ( v26 != v24 + 4 )
                {
                  v85 = v21;
                  v86 = v24;
                  do
                  {
                    v28 = v26[5];
                    if ( v28 )
                    {
                      v78 = (void *)qalloc_or_throw(v26[5]);
                      a2 = (char *)v26[4];
                      v79 = v78;
                      memcpy(v78, a2, v28);
                      if ( v26[7] )
                      {
                        v104 = (void *)v26[7];
                        ((void (*)(void))sub_8F33B0)();
                        a2 = (char *)&qword_50;
                        operator delete(v104, 0x50u);
                      }
                      if ( v79 )
                        qfree(v79);
                    }
                    else
                    {
                      v29 = (void *)v26[7];
                      if ( v29 )
                      {
                        sub_8F33B0(v26[7]);
                        a2 = (char *)&qword_50;
                        operator delete(v29, 0x50u);
                      }
                    }
                    v26 = (_QWORD *)std::_Rb_tree_increment(v26, a2);
                  }
                  while ( v27 != v26 );
                  v21 = v85;
                  v24 = v86;
                }
                v30 = v24[5];
                while ( v30 )
                {
                  v31 = (_QWORD *)v30;
                  sub_8F0A30(*(_QWORD **)(v30 + 24));
                  v32 = *(void **)(v30 + 32);
                  v30 = *(_QWORD *)(v30 + 16);
                  if ( v32 )
                  {
                    v31[5] = 0;
                    qfree(v32);
                  }
                  operator delete(v31, 0x40u);
                }
                v33 = (char *)*v24;
                if ( *v24 )
                {
                  v34 = v24[1];
                  if ( v34 )
                  {
                    for ( i = 0; i != v34; ++i )
                    {
                      v36 = &v33[24 * i];
                      v37 = *(void **)v36;
                      if ( *(_QWORD *)v36 )
                      {
                        *((_QWORD *)v36 + 1) = 0;
                        qfree(v37);
                        v33 = (char *)*v24;
                      }
                    }
                  }
                  v24[1] = 0;
                  qfree(v33);
                }
                a2 = (char *)&qword_50;
                operator delete(v24, 0x50u);
                goto LABEL_40;
              }
              v80 = (void *)qalloc_or_throw(v22[5]);
              a2 = (char *)v22[4];
              v25 = v80;
              memcpy(v80, a2, v23);
              v24 = (_QWORD *)v22[7];
              if ( v24 )
                goto LABEL_21;
LABEL_40:
              if ( v25 )
                qfree(v25);
LABEL_42:
              v22 = (_QWORD *)std::_Rb_tree_increment(v22, a2);
            }
            while ( v21 != v22 );
            v20 = v87;
            v17 = v88;
            v16 = v89;
            v19 = v90;
LABEL_44:
            v38 = v19[5];
            while ( v38 )
            {
              v39 = v38;
              sub_8F0A30((_QWORD *)v38[3]);
              v40 = (void *)v38[4];
              v38 = (_QWORD *)v38[2];
              if ( v40 )
              {
                v39[5] = 0;
                qfree(v40);
              }
              operator delete(v39, 0x40u);
            }
            v41 = (char *)*v19;
            if ( *v19 )
            {
              v42 = v19[1];
              if ( v42 )
              {
                for ( j = nullptr; j != v42; j = (char *)j + 1 )
                {
                  v44 = &v41[24 * (_QWORD)j];
                  v45 = *(void **)v44;
                  if ( *(_QWORD *)v44 )
                  {
                    *((_QWORD *)v44 + 1) = 0;
                    qfree(v45);
                    v41 = (char *)*v19;
                  }
                }
              }
              v19[1] = nullptr;
              qfree(v41);
            }
            a2 = (char *)&qword_50;
            operator delete(v19, 0x50u);
LABEL_56:
            if ( v20 )
              qfree(v20);
LABEL_58:
            v16 = (_QWORD *)std::_Rb_tree_increment(v16, a2);
          }
          while ( v17 != v16 );
          v14 = v92;
          v12 = v93;
          v15 = v94;
LABEL_60:
          v46 = v14[5];
          while ( v46 )
          {
            v47 = (_QWORD *)v46;
            sub_8F0A30(*(_QWORD **)(v46 + 24));
            v48 = *(void **)(v46 + 32);
            v46 = *(_QWORD *)(v46 + 16);
            if ( v48 )
            {
              v47[5] = 0;
              qfree(v48);
            }
            operator delete(v47, 0x40u);
          }
          v49 = (char *)*v14;
          if ( *v14 )
          {
            v50 = v14[1];
            if ( v50 )
            {
              for ( k = 0; k != v50; ++k )
              {
                v52 = &v49[24 * k];
                v53 = *(void **)v52;
                if ( *(_QWORD *)v52 )
                {
                  *((_QWORD *)v52 + 1) = 0;
                  qfree(v53);
                  v49 = (char *)*v14;
                }
              }
            }
            v14[1] = 0;
            qfree(v49);
          }
          a2 = (char *)&qword_50;
          operator delete(v14, 0x50u);
LABEL_72:
          if ( v15 )
            qfree(v15);
LABEL_74:
          v12 = (_QWORD *)std::_Rb_tree_increment(v12, a2);
        }
        while ( v91 != v12 );
        v8 = v96;
        v10 = v97;
        v11 = v98;
LABEL_76:
        v54 = v10[5];
        while ( v54 )
        {
          v55 = (_QWORD *)v54;
          sub_8F0A30(*(_QWORD **)(v54 + 24));
          v56 = *(void **)(v54 + 32);
          v54 = *(_QWORD *)(v54 + 16);
          if ( v56 )
          {
            v55[5] = 0;
            qfree(v56);
          }
          operator delete(v55, 0x40u);
        }
        v57 = (char *)*v10;
        if ( *v10 )
        {
          v58 = v10[1];
          if ( v58 )
          {
            for ( m = 0; m != v58; ++m )
            {
              v60 = &v57[24 * m];
              v61 = *(void **)v60;
              if ( *(_QWORD *)v60 )
              {
                *((_QWORD *)v60 + 1) = 0;
                qfree(v61);
                v57 = (char *)*v10;
              }
            }
          }
          v10[1] = 0;
          qfree(v57);
        }
        a2 = (char *)&qword_50;
        operator delete(v10, 0x50u);
LABEL_88:
        if ( v11 )
          qfree(v11);
LABEL_90:
        v8 = (_QWORD *)std::_Rb_tree_increment(v8, a2);
      }
      while ( v95 != v8 );
      v4 = v99;
      v3 = v100;
      v7 = v101;
      v6 = v102;
LABEL_92:
      v62 = v6[5];
      while ( v62 )
      {
        v63 = v62;
        sub_8F0A30((_QWORD *)v62[3]);
        v64 = (void *)v62[4];
        v62 = (_QWORD *)v62[2];
        if ( v64 )
        {
          v63[5] = 0;
          qfree(v64);
        }
        operator delete(v63, 0x40u);
      }
      v65 = (char *)*v6;
      if ( *v6 )
      {
        v66 = v6[1];
        if ( v66 )
        {
          for ( n = nullptr; n != v66; n = (char *)n + 1 )
          {
            v68 = &v65[24 * (_QWORD)n];
            v69 = *(void **)v68;
            if ( *(_QWORD *)v68 )
            {
              *((_QWORD *)v68 + 1) = 0;
              qfree(v69);
              v65 = (char *)*v6;
            }
          }
        }
        v6[1] = nullptr;
        qfree(v65);
      }
      a2 = (char *)&qword_50;
      operator delete(v6, 0x50u);
LABEL_104:
      if ( v7 )
        qfree(v7);
LABEL_106:
      v3 = (char **)std::_Rb_tree_increment(v3, a2);
      if ( v4 == v3 )
      {
        v2 = a1;
        break;
      }
    }
  }
  v70 = v2[5];
  while ( v70 )
  {
    v71 = v70;
    sub_8F0A30(*((_QWORD **)v70 + 3));
    v72 = *((void **)v70 + 4);
    v70 = *((char **)v70 + 2);
    if ( v72 )
    {
      *((_QWORD *)v71 + 5) = 0;
      qfree(v72);
    }
    operator delete(v71, 0x40u);
  }
  v73 = *v2;
  if ( *v2 )
  {
    v74 = v2[1];
    if ( v74 )
    {
      for ( ii = nullptr; ii != v74; ++ii )
      {
        v76 = &v73[24 * (_QWORD)ii];
        v77 = *(void **)v76;
        if ( *(_QWORD *)v76 )
        {
          *((_QWORD *)v76 + 1) = 0;
          qfree(v77);
          v73 = *v2;
        }
      }
    }
    v2[1] = nullptr;
    qfree(v73);
  }
}
