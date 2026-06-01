void __fastcall sub_37C6A0(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rbx
  char *v3; // rdi
  __int64 v4; // r15
  __int64 v5; // r14
  char *v6; // r13
  void **v7; // rax
  char *v8; // rdi
  __int64 v9; // r12
  char *v10; // rbp
  char *v11; // rbx
  char **v12; // r15
  char *v13; // rdi
  char *v14; // rsi
  __int64 v15; // r14
  char *v16; // rbx
  char *v17; // rdi
  _QWORD *v18; // r15
  void *v19; // rdi
  void *v20; // rdi
  _QWORD *v21; // rbp
  void *v22; // rdi
  void *v23; // rdi
  _QWORD *v24; // rbx
  void *v25; // rdi
  void *v26; // rdi
  void **v27; // [rsp+8h] [rbp-80h]
  void **v28; // [rsp+8h] [rbp-80h]
  char *v29; // [rsp+10h] [rbp-78h]
  char *v30; // [rsp+18h] [rbp-70h]
  __int64 v31; // [rsp+20h] [rbp-68h]
  _QWORD *v32; // [rsp+28h] [rbp-60h]
  __int64 v33; // [rsp+38h] [rbp-50h]
  __int64 v34; // [rsp+40h] [rbp-48h]
  __int64 v35; // [rsp+48h] [rbp-40h]

  v1 = a1;
  v2 = *(_QWORD **)(a1 + 32);
  if ( v2 )
  {
    v3 = (char *)*v2;
    if ( *v2 )
    {
      if ( v2[1] )
      {
        v31 = v2[1];
        v4 = 0;
        v5 = 0;
        v35 = v1;
        do
        {
          v6 = &v3[v4];
          v7 = *(void ***)&v3[v4 + 32];
          if ( v7 )
          {
            v8 = (char *)*v7;
            if ( *v7 )
            {
              if ( v7[1] )
              {
                v32 = v2;
                v9 = 0;
                v10 = nullptr;
                v33 = v5;
                v27 = v7;
                v29 = (char *)v7[1];
                v34 = v4;
                do
                {
                  v11 = &v8[v9];
                  v12 = *(char ***)&v8[v9 + 32];
                  if ( v12 )
                  {
                    v13 = *v12;
                    if ( *v12 )
                    {
                      v14 = v12[1];
                      if ( v14 )
                      {
                        v15 = 0;
                        v30 = v11;
                        v16 = nullptr;
                        do
                        {
                          v17 = &v13[v15];
                          ++v16;
                          v15 += 56;
                          sub_37C6A0(v17);
                          v13 = *v12;
                        }
                        while ( v14 != v16 );
                        v11 = v30;
                      }
                      v12[1] = nullptr;
                      qfree(v13);
                    }
                    qfree(v12);
                  }
                  v18 = *((_QWORD **)v11 + 5);
                  if ( v18 )
                  {
                    clear_tinfo_t(v18 + 5);
                    v19 = (void *)v18[2];
                    if ( v19 )
                    {
                      v18[3] = 0;
                      qfree(v19);
                    }
                    cleanup_argloc(v18);
                    qfree(v18);
                  }
                  v20 = *(void **)v11;
                  if ( *(_QWORD *)v11 )
                  {
                    *((_QWORD *)v11 + 1) = 0;
                    qfree(v20);
                  }
                  v7 = v27;
                  ++v10;
                  v9 += 56;
                  v8 = (char *)*v27;
                }
                while ( v29 != v10 );
                v2 = v32;
                v5 = v33;
                v4 = v34;
              }
              v7[1] = nullptr;
              v28 = v7;
              qfree(v8);
              v7 = v28;
            }
            qfree(v7);
          }
          v21 = *((_QWORD **)v6 + 5);
          if ( v21 )
          {
            clear_tinfo_t(v21 + 5);
            v22 = (void *)v21[2];
            if ( v22 )
            {
              v21[3] = 0;
              qfree(v22);
            }
            cleanup_argloc(v21);
            qfree(v21);
          }
          v23 = *(void **)v6;
          if ( *(_QWORD *)v6 )
          {
            *((_QWORD *)v6 + 1) = 0;
            qfree(v23);
          }
          v3 = (char *)*v2;
          ++v5;
          v4 += 56;
        }
        while ( v31 != v5 );
        v1 = v35;
      }
      v2[1] = 0;
      qfree(v3);
    }
    qfree(v2);
  }
  v24 = *(_QWORD **)(v1 + 40);
  if ( v24 )
  {
    clear_tinfo_t(v24 + 5);
    v25 = (void *)v24[2];
    if ( v25 )
    {
      v24[3] = 0;
      qfree(v25);
    }
    cleanup_argloc(v24);
    qfree(v24);
  }
  v26 = *(void **)v1;
  if ( *(_QWORD *)v1 )
  {
    *(_QWORD *)(v1 + 8) = 0;
    qfree(v26);
  }
}
