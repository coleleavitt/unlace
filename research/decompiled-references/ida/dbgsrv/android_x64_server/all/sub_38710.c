/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38710
// Address: 0x0000000000038710

//----- (0000000000038710) ----------------------------------------------------
void __fastcall sub_38710(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r13
  int **v3; // r15
  __int64 v4; // rbp
  int *v5; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // rbp
  unsigned __int64 v8; // r12
  void *v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  int *v13; // rbx
  int **v14; // r12
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r13
  __int64 v17; // rbp
  void *v18; // rdi
  _QWORD *v19; // r14
  __int64 v20; // [rsp+10h] [rbp-48h]
  __int64 v21; // [rsp+10h] [rbp-48h]
  __int64 v22; // [rsp+18h] [rbp-40h]
  __int64 v23; // [rsp+20h] [rbp-38h]

  if ( a2 )
  {
    v2 = a2;
    sub_38710(a1, *a2);
    sub_38710(a1, a2[1]);
    v3 = (int **)a2[5];
    if ( v3 )
    {
      v4 = a2[6];
      if ( v4 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = (unsigned __int64)v3[1];
          if ( v6 )
          {
            v20 = a2[6];
            v7 = 0;
            v8 = 1;
            if ( *v5 < -1 )
              goto LABEL_12;
LABEL_9:
            v9 = *(void **)&v5[v7 + 2];
            if ( v9 )
            {
              *(_QWORD *)&v5[v7 + 4] = 0;
              qfree(v9);
              *(_QWORD *)&v5[v7 + 2] = 0;
              *(_QWORD *)&v5[v7 + 6] = 0;
            }
            v5[v7] = -2;
LABEL_12:
            while ( v8 < v6 )
            {
              v5 = *v3;
              v7 += 8;
              ++v8;
              if ( (*v3)[v7] >= -1 )
                goto LABEL_9;
            }
            v5 = *v3;
            v4 = v20;
          }
          v3[1] = nullptr;
          qfree(v5);
          *v3 = nullptr;
          v3[2] = nullptr;
        }
        if ( v4 != 1 )
        {
          v10 = 1;
          v21 = v4;
          do
          {
            v11 = v2[5];
            v12 = 48 * v10;
            v13 = *(int **)(v11 + 48 * v10);
            if ( v13 )
            {
              v14 = (int **)(v11 + v12);
              v23 = v2[5];
              v22 = 48 * v10;
              v15 = *(_QWORD *)(v11 + v12 + 8);
              if ( v15 )
              {
                v16 = 1;
                v17 = 0;
                if ( *v13 < -1 )
                  goto LABEL_25;
LABEL_22:
                v18 = *(void **)&v13[v17 + 2];
                if ( v18 )
                {
                  *(_QWORD *)&v13[v17 + 4] = 0;
                  qfree(v18);
                  *(_QWORD *)&v13[v17 + 2] = 0;
                  *(_QWORD *)&v13[v17 + 6] = 0;
                }
                v13[v17] = -2;
LABEL_25:
                while ( v16 < v15 )
                {
                  v13 = *v14;
                  v17 += 8;
                  ++v16;
                  if ( (*v14)[v17] >= -1 )
                    goto LABEL_22;
                }
                v13 = *v14;
                v19 = a2;
              }
              else
              {
                v19 = v2;
              }
              *(_QWORD *)(v23 + v22 + 8) = 0;
              qfree(v13);
              *v14 = nullptr;
              *(_QWORD *)(v23 + v22 + 16) = 0;
              v2 = v19;
              v4 = v21;
            }
            ++v10;
          }
          while ( v10 != v4 );
        }
        v3 = (int **)v2[5];
      }
      v2[6] = 0;
      qfree(v3);
    }
    operator delete(v2);
  }
}
