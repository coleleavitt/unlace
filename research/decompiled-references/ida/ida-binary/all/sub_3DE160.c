double __fastcall sub_3DE160(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 *v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rbp
  _QWORD *v12; // rbx
  __int64 *v13; // r15
  __int64 v14; // rdi
  __int64 v15; // r14
  const char *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rbp
  __int64 v22; // rdi
  __int64 v23; // rdi
  double result; // xmm0_8
  __int64 v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rdi
  _QWORD *v28; // [rsp+8h] [rbp-80h]
  _QWORD *v29; // [rsp+8h] [rbp-80h]
  __int64 v30; // [rsp+10h] [rbp-78h]
  _QWORD *v31; // [rsp+18h] [rbp-70h]
  __int64 v32; // [rsp+20h] [rbp-68h]
  _QWORD *v33; // [rsp+28h] [rbp-60h]
  __int64 v34; // [rsp+38h] [rbp-50h]
  __int64 v35; // [rsp+40h] [rbp-48h]
  _QWORD *v36; // [rsp+48h] [rbp-40h]

  v2 = a1;
  v3 = (_QWORD *)a1[4];
  if ( v3 )
  {
    v4 = *v3;
    if ( *v3 )
    {
      if ( v3[1] )
      {
        v32 = v3[1];
        v5 = 0;
        v6 = 0;
        v36 = v2;
        do
        {
          v7 = (__int64 *)(v4 + v5);
          v8 = *(_QWORD **)(v4 + v5 + 32);
          if ( v8 )
          {
            v9 = *v8;
            if ( *v8 )
            {
              if ( v8[1] )
              {
                v33 = v3;
                v10 = 0;
                v11 = 0;
                v34 = v6;
                v28 = v8;
                v30 = v8[1];
                v35 = v5;
                do
                {
                  v12 = (_QWORD *)(v9 + v10);
                  v13 = *(__int64 **)(v9 + v10 + 32);
                  if ( v13 )
                  {
                    v14 = *v13;
                    if ( *v13 )
                    {
                      a2 = (const char *)v13[1];
                      if ( a2 )
                      {
                        v15 = 0;
                        v31 = v12;
                        v16 = nullptr;
                        do
                        {
                          v17 = v15 + v14;
                          ++v16;
                          v15 += 56;
                          sub_3DE160(v17);
                          v14 = *v13;
                        }
                        while ( a2 != v16 );
                        v12 = v31;
                      }
                      v13[1] = 0;
                      qfree(v14, a2);
                    }
                    qfree(v13, a2);
                  }
                  v18 = v12[5];
                  if ( v18 )
                  {
                    clear_tinfo_t(v18 + 40);
                    v19 = *(_QWORD *)(v18 + 16);
                    if ( v19 )
                    {
                      *(_QWORD *)(v18 + 24) = 0;
                      qfree(v19, a2);
                    }
                    cleanup_argloc(v18);
                    qfree(v18, a2);
                  }
                  v20 = *v12;
                  if ( *v12 )
                  {
                    v12[1] = 0;
                    qfree(v20, a2);
                  }
                  v8 = v28;
                  ++v11;
                  v10 += 56;
                  v9 = *v28;
                }
                while ( v30 != v11 );
                v3 = v33;
                v6 = v34;
                v5 = v35;
              }
              v8[1] = 0;
              v29 = v8;
              qfree(v9, a2);
              v8 = v29;
            }
            qfree(v8, a2);
          }
          v21 = v7[5];
          if ( v21 )
          {
            clear_tinfo_t(v21 + 40);
            v22 = *(_QWORD *)(v21 + 16);
            if ( v22 )
            {
              *(_QWORD *)(v21 + 24) = 0;
              qfree(v22, a2);
            }
            cleanup_argloc(v21);
            qfree(v21, a2);
          }
          v23 = *v7;
          if ( *v7 )
          {
            v7[1] = 0;
            qfree(v23, a2);
          }
          v4 = *v3;
          ++v6;
          v5 += 56;
        }
        while ( v32 != v6 );
        v2 = v36;
      }
      v3[1] = 0;
      qfree(v4, a2);
    }
    result = qfree(v3, a2);
  }
  v25 = v2[5];
  if ( v25 )
  {
    clear_tinfo_t(v25 + 40);
    v26 = *(_QWORD *)(v25 + 16);
    if ( v26 )
    {
      *(_QWORD *)(v25 + 24) = 0;
      qfree(v26, a2);
    }
    cleanup_argloc(v25);
    result = qfree(v25, a2);
  }
  v27 = *v2;
  if ( *v2 )
  {
    v2[1] = 0;
    return qfree(v27, a2);
  }
  return result;
}
