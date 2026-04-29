__int64 __fastcall sub_8F80(__int64 *a1)
{
  unsigned __int64 v1; // rcx
  __int64 result; // rax
  int v3; // ebp
  __int64 v4; // rbx
  __int64 *v5; // rsi
  unsigned __int64 v6; // rdx
  int v7; // r14d
  __int64 v8; // r12
  int v9; // r15d
  __int64 *v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // ebp
  int v14; // esi
  __int64 *v15; // rax
  unsigned __int64 v16; // rdx
  int v17; // r14d
  int v18; // ebp
  __int64 v19; // r13
  __int64 *v20; // rax
  int v21; // r15d
  __int64 v22; // r12
  unsigned __int64 v23; // rbx
  int v24; // ebp
  int v25; // eax
  int v26; // r15d
  unsigned __int64 v27; // [rsp+0h] [rbp-90h]
  int v28; // [rsp+Ch] [rbp-84h]
  __int64 v29; // [rsp+10h] [rbp-80h]
  unsigned __int64 v30; // [rsp+18h] [rbp-78h]
  int v31; // [rsp+20h] [rbp-70h]
  __int64 v32; // [rsp+28h] [rbp-68h]
  int v33; // [rsp+30h] [rbp-60h]
  int v34; // [rsp+34h] [rbp-5Ch]
  unsigned __int64 v35; // [rsp+38h] [rbp-58h]
  __int64 v36; // [rsp+40h] [rbp-50h]
  unsigned __int64 v37; // [rsp+48h] [rbp-48h]
  int v38; // [rsp+50h] [rbp-40h]
  int v39; // [rsp+54h] [rbp-3Ch]

  v1 = a1[1];
  if ( !v1 )
    return 0;
  result = 0;
  v3 = 0;
  v4 = *a1;
  do
  {
    if ( *(_BYTE *)v4 )
    {
      result = (unsigned int)(result + 1);
    }
    else
    {
      v5 = *(__int64 **)(v4 + 8);
      v6 = v5[1];
      if ( v6 )
      {
        v38 = v3;
        v7 = 0;
        v8 = *v5;
        v36 = v4;
        v9 = 0;
        v37 = v1;
        v39 = result;
        do
        {
          if ( *(_BYTE *)v8 )
          {
            ++v9;
          }
          else
          {
            v10 = *(__int64 **)(v8 + 8);
            v11 = v10[1];
            if ( v11 )
            {
              v33 = v7;
              v12 = *v10;
              v13 = 0;
              v32 = v8;
              v14 = 0;
              v34 = v9;
              v35 = v6;
              do
              {
                if ( *(_BYTE *)v12 )
                {
                  ++v14;
                }
                else
                {
                  v15 = *(__int64 **)(v12 + 8);
                  v16 = v15[1];
                  if ( v16 )
                  {
                    v29 = v12;
                    v17 = 0;
                    v30 = v11;
                    v31 = v13;
                    v18 = 0;
                    v19 = *v15;
                    do
                    {
                      if ( *(_BYTE *)v19 )
                      {
                        ++v17;
                      }
                      else
                      {
                        v20 = *(__int64 **)(v19 + 8);
                        if ( v20[1] )
                        {
                          v27 = v16;
                          v21 = 0;
                          v22 = *v20;
                          v23 = v20[1];
                          v28 = v18;
                          v24 = 0;
                          do
                          {
                            v25 = 1;
                            if ( !*(_BYTE *)v22 )
                              v25 = sub_8F80(*(_QWORD *)(v22 + 8));
                            ++v21;
                            v24 += v25;
                            v22 += 40;
                          }
                          while ( v21 < v23 );
                          v26 = v24;
                          v16 = v27;
                          v18 = v28;
                          v17 += v26;
                        }
                      }
                      ++v18;
                      v19 += 40;
                    }
                    while ( v18 < v16 );
                    v12 = v29;
                    v13 = v31;
                    v11 = v30;
                    v14 += v17;
                  }
                }
                ++v13;
                v12 += 40;
              }
              while ( v13 < v11 );
              v7 = v33;
              v8 = v32;
              v6 = v35;
              v9 = v14 + v34;
            }
          }
          ++v7;
          v8 += 40;
        }
        while ( v7 < v6 );
        v3 = v38;
        v4 = v36;
        v1 = v37;
        result = (unsigned int)(v9 + v39);
      }
    }
    ++v3;
    v4 += 40;
  }
  while ( v3 < v1 );
  return result;
}
