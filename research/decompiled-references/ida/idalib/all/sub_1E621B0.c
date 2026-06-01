void __fastcall sub_1E621B0(char *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  char *v6; // r10
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // rax
  char *v10; // rbx
  _QWORD *v11; // rbp
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // r14
  __int64 v15; // r13
  char *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdi
  char *v22; // rcx
  char *v23; // [rsp+8h] [rbp-50h]
  __int64 v24; // [rsp+10h] [rbp-48h]

  if ( a5 )
  {
    v5 = a4;
    if ( a4 )
    {
      v6 = a1;
      v7 = a5;
      if ( a5 + a4 == 2 )
      {
        v16 = a1;
        v11 = (_QWORD *)a2;
LABEL_13:
        v17 = *(_QWORD *)v16;
        if ( *(_QWORD *)v16 > *v11 )
        {
          *(_QWORD *)v16 = *v11;
          v18 = v11[1];
          *v11 = v17;
          v19 = *((_QWORD *)v16 + 1);
          *((_QWORD *)v16 + 1) = v18;
          v11[1] = v19;
        }
      }
      else
      {
        while ( 1 )
        {
          if ( v7 >= v5 )
          {
            v15 = v7 / 2;
            v20 = (__int64)(a2 - (_QWORD)v6) >> 4;
            v11 = (_QWORD *)(a2 + 16 * (v7 / 2));
            if ( (__int64)(a2 - (_QWORD)v6) <= 0 )
            {
              v10 = v6;
              v14 = 16 * (v7 / 2);
              v8 = 0;
            }
            else
            {
              v10 = v6;
              do
              {
                while ( 1 )
                {
                  v21 = v20 >> 1;
                  v22 = &v10[16 * (v20 >> 1)];
                  if ( *(_QWORD *)v22 > *v11 )
                    break;
                  v10 = v22 + 16;
                  v20 = v20 - v21 - 1;
                  if ( v20 <= 0 )
                  {
                    v14 = 16 * (v7 / 2);
                    v8 = (v10 - v6) >> 4;
                    goto LABEL_10;
                  }
                }
                v20 >>= 1;
              }
              while ( v21 );
              v14 = 16 * (v7 / 2);
              v8 = (v10 - v6) >> 4;
            }
          }
          else
          {
            v8 = v5 / 2;
            v9 = (__int64)(a3 - a2) >> 4;
            v10 = &v6[16 * (v5 / 2)];
            if ( (__int64)(a3 - a2) <= 0 )
            {
              v11 = (_QWORD *)a2;
            }
            else
            {
              v11 = (_QWORD *)a2;
              do
              {
                while ( 1 )
                {
                  v12 = v9 >> 1;
                  v13 = &v11[2 * (v9 >> 1)];
                  if ( *v13 >= *(_QWORD *)v10 )
                    break;
                  v11 = v13 + 2;
                  v9 = v9 - v12 - 1;
                  if ( v9 <= 0 )
                    goto LABEL_9;
                }
                v9 >>= 1;
              }
              while ( v12 );
            }
LABEL_9:
            v14 = (__int64)v11 - a2;
            v15 = (__int64)((__int64)v11 - a2) >> 4;
          }
LABEL_10:
          v24 = v7;
          v16 = &v10[v14];
          v23 = v6;
          sub_1E5DF40((unsigned __int64)v10, a2, (__int64)v11);
          sub_1E621B0(v23, v10, v16, v8, v15);
          v7 = v24 - v15;
          v5 -= v8;
          if ( !v5 || !v7 )
            break;
          a2 = (unsigned __int64)v11;
          v6 = v16;
          if ( v7 + v5 == 2 )
            goto LABEL_13;
        }
      }
    }
  }
}
