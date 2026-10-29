__int64 __fastcall sub_536910(_QWORD *a1, int a2)
{
  __int64 result; // rax
  _QWORD *v3; // r15
  int *v4; // rbx
  int *i; // r14
  int *v6; // rbp
  int *v7; // r13
  int *v8; // rbx
  int *v9; // rcx
  int *v10; // rbp
  int *v11; // r12
  int *v12; // r13
  int *v13; // r12
  __int64 v14; // rdx
  int *v15; // rbx
  __int64 v16; // rdx
  int *v17; // rdx
  __int64 v18; // rax
  int *v19; // r14
  int *v20; // rax
  _QWORD *v21; // r13
  int *v22; // r15
  int *v23; // rdx
  __int64 v24; // rsi
  int *v25; // r14
  __int64 v26; // rsi
  int *v27; // rcx
  _QWORD *v28; // rbp
  int *v29; // r12
  __int64 v30; // rdx
  int *v31; // r14
  __int64 v32; // rdx
  int *v33; // rbx
  __int64 v34; // rax
  unsigned int *v35; // r13
  unsigned int *v36; // r12
  __int64 v37; // rsi
  int *v38; // [rsp+0h] [rbp-A0h]
  int *v39; // [rsp+8h] [rbp-98h]
  int *v40; // [rsp+10h] [rbp-90h]
  int *v41; // [rsp+18h] [rbp-88h]
  int *v42; // [rsp+20h] [rbp-80h]
  int *v43; // [rsp+28h] [rbp-78h]
  __int64 v44; // [rsp+30h] [rbp-70h]
  int *v45; // [rsp+38h] [rbp-68h]
  int *v46; // [rsp+40h] [rbp-60h]
  int *v47; // [rsp+48h] [rbp-58h]
  int *v48; // [rsp+50h] [rbp-50h]
  int *v49; // [rsp+58h] [rbp-48h]
  int *v50; // [rsp+60h] [rbp-40h]

  result = *a1 + 40LL * a2;
  if ( !*(_BYTE *)(result + 32) )
  {
    v3 = a1;
    *(_BYTE *)(result + 32) = 1;
    v4 = *(int **)result;
    result = *(_QWORD *)(result + 8);
    for ( i = &v4[result]; v4 != i; ++v4 )
    {
      result = *v3 + 40LL * *v4;
      if ( !*(_BYTE *)(result + 32) )
      {
        v6 = *(int **)result;
        *(_BYTE *)(result + 32) = 1;
        result = *(_QWORD *)(result + 8);
        v7 = &v6[result];
        if ( v6 != v7 )
        {
          v49 = v4;
          v50 = i;
          do
          {
            result = *v3 + 40LL * *v6;
            if ( !*(_BYTE *)(result + 32) )
            {
              v8 = *(int **)result;
              *(_BYTE *)(result + 32) = 1;
              result = *(_QWORD *)(result + 8);
              if ( v8 != &v8[result] )
              {
                v47 = v7;
                v9 = v8;
                v48 = v6;
                v10 = &v8[result];
                do
                {
                  result = *v3 + 40LL * *v9;
                  if ( !*(_BYTE *)(result + 32) )
                  {
                    v11 = *(int **)result;
                    *(_BYTE *)(result + 32) = 1;
                    result = *(_QWORD *)(result + 8);
                    if ( v11 != &v11[result] )
                    {
                      v46 = v9;
                      v12 = v11;
                      result = (__int64)&v11[result];
                      v13 = v10;
                      do
                      {
                        v14 = *v3 + 40LL * *v12;
                        if ( !*(_BYTE *)(v14 + 32) )
                        {
                          v15 = *(int **)v14;
                          *(_BYTE *)(v14 + 32) = 1;
                          v16 = *(_QWORD *)(v14 + 8);
                          if ( v15 != &v15[v16] )
                          {
                            v44 = result;
                            v17 = &v15[v16];
                            v45 = v12;
                            do
                            {
                              v18 = *v3 + 40LL * *v15;
                              if ( !*(_BYTE *)(v18 + 32) )
                              {
                                v19 = *(int **)v18;
                                *(_BYTE *)(v18 + 32) = 1;
                                v20 = &v19[*(_QWORD *)(v18 + 8)];
                                if ( v19 != v20 )
                                {
                                  v43 = v15;
                                  v21 = v3;
                                  v22 = v13;
                                  v42 = v17;
                                  v23 = v19;
                                  do
                                  {
                                    v24 = *v21 + 40LL * *v23;
                                    if ( !*(_BYTE *)(v24 + 32) )
                                    {
                                      v25 = *(int **)v24;
                                      *(_BYTE *)(v24 + 32) = 1;
                                      v26 = *(_QWORD *)(v24 + 8);
                                      if ( v25 != &v25[v26] )
                                      {
                                        v40 = v20;
                                        v27 = &v25[v26];
                                        v28 = v21;
                                        v29 = v25;
                                        v41 = v23;
                                        do
                                        {
                                          v30 = *v28 + 40LL * *v29;
                                          if ( !*(_BYTE *)(v30 + 32) )
                                          {
                                            v31 = *(int **)v30;
                                            *(_BYTE *)(v30 + 32) = 1;
                                            v32 = *(_QWORD *)(v30 + 8);
                                            if ( v31 != &v31[v32] )
                                            {
                                              v38 = v27;
                                              v33 = &v31[v32];
                                              v39 = v29;
                                              do
                                              {
                                                v34 = *v28 + 40LL * *v31;
                                                if ( !*(_BYTE *)(v34 + 32) )
                                                {
                                                  v35 = *(unsigned int **)v34;
                                                  *(_BYTE *)(v34 + 32) = 1;
                                                  v36 = &v35[*(_QWORD *)(v34 + 8)];
                                                  while ( v36 != v35 )
                                                  {
                                                    v37 = *v35++;
                                                    sub_536910(v28, v37);
                                                  }
                                                }
                                                ++v31;
                                              }
                                              while ( v33 != v31 );
                                              v27 = v38;
                                              v29 = v39;
                                            }
                                          }
                                          ++v29;
                                        }
                                        while ( v27 != v29 );
                                        v20 = v40;
                                        v23 = v41;
                                        v21 = v28;
                                      }
                                    }
                                    ++v23;
                                  }
                                  while ( v20 != v23 );
                                  v17 = v42;
                                  v15 = v43;
                                  v13 = v22;
                                  v3 = v21;
                                }
                              }
                              ++v15;
                            }
                            while ( v17 != v15 );
                            result = v44;
                            v12 = v45;
                          }
                        }
                        ++v12;
                      }
                      while ( (int *)result != v12 );
                      v9 = v46;
                      v10 = v13;
                    }
                  }
                  ++v9;
                }
                while ( v10 != v9 );
                v7 = v47;
                v6 = v48;
              }
            }
            ++v6;
          }
          while ( v7 != v6 );
          v4 = v49;
          i = v50;
        }
      }
    }
  }
  return result;
}
