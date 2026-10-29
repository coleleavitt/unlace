__int64 __fastcall sub_B99920(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v7; // r15
  unsigned int v8; // r12d
  __int64 v9; // rbp
  __int16 v10; // dx
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rbp
  __int16 v16; // cx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdi
  int v20; // r11d
  __int64 v21; // rbx
  __int64 v22; // rbp
  __int16 v23; // cx
  __int64 v24; // rcx
  int v25; // r12d
  __int64 v26; // rdi
  __int64 v27; // r13
  __int64 v28; // rbx
  __int64 v29; // rsi
  __int16 v30; // ax
  int v31; // eax
  __int64 v32; // [rsp+0h] [rbp-70h]
  __int64 v33; // [rsp+8h] [rbp-68h]
  __int64 v34; // [rsp+10h] [rbp-60h]
  __int64 v35; // [rsp+18h] [rbp-58h]
  _BYTE *v36; // [rsp+28h] [rbp-48h]
  unsigned int v37; // [rsp+30h] [rbp-40h]
  int v38; // [rsp+34h] [rbp-3Ch]

  result = 0;
  if ( (*(_BYTE *)(a2 + 30) & 1) == 0 )
  {
    v4 = a2;
    result = *(unsigned int *)(a2 + 24);
    if ( (_DWORD)result )
    {
      v7 = a2 + 8 * result;
      v8 = 0;
      do
      {
        v9 = *(_QWORD *)(v4 + 32);
        v10 = *(_WORD *)(v9 + 4);
        if ( v10 == 1 )
        {
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL * *(unsigned int *)(v9 + 16)) == -1 )
            *a3 = 1;
          else
            ++v8;
        }
        else if ( !v10 && (*(_BYTE *)(v9 + 30) & 1) == 0 )
        {
          v11 = *(unsigned int *)(v9 + 24);
          if ( (_DWORD)v11 )
          {
            v12 = v9 + 8 * v11;
            v13 = 0;
            v14 = *(_QWORD *)(v4 + 32);
            do
            {
              v15 = *(_QWORD *)(v14 + 32);
              v16 = *(_WORD *)(v15 + 4);
              if ( v16 == 1 )
              {
                if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL * *(unsigned int *)(v15 + 16)) == -1 )
                  *a3 = 1;
                else
                  ++v13;
              }
              else if ( !v16 && (*(_BYTE *)(v15 + 30) & 1) == 0 )
              {
                v17 = *(unsigned int *)(v15 + 24);
                if ( (_DWORD)v17 )
                {
                  v37 = v8;
                  v18 = v4;
                  v19 = v15 + 8 * v17;
                  v20 = 0;
                  v21 = *(_QWORD *)(v14 + 32);
                  do
                  {
                    v22 = *(_QWORD *)(v21 + 32);
                    v23 = *(_WORD *)(v22 + 4);
                    if ( v23 == 1 )
                    {
                      if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL * *(unsigned int *)(v22 + 16)) == -1 )
                        *a3 = 1;
                      else
                        ++v20;
                    }
                    else if ( !v23 && (*(_BYTE *)(v22 + 30) & 1) == 0 )
                    {
                      v24 = *(unsigned int *)(v22 + 24);
                      if ( (_DWORD)v24 )
                      {
                        v32 = v12;
                        v25 = 0;
                        v33 = v14;
                        v34 = v19;
                        v26 = a1;
                        v27 = v18;
                        v35 = v21;
                        v28 = v22 + 8 * v24;
                        do
                        {
                          v29 = *(_QWORD *)(v22 + 32);
                          v30 = *(_WORD *)(v29 + 4);
                          if ( v30 == 1 )
                          {
                            if ( *(_DWORD *)(*(_QWORD *)(v26 + 64) + 4LL * *(unsigned int *)(v29 + 16)) == -1 )
                              *a3 = 1;
                            else
                              ++v25;
                          }
                          else if ( !v30 )
                          {
                            v38 = v20;
                            v36 = a3;
                            v31 = sub_B99920(v26, v29, a3);
                            v20 = v38;
                            a3 = v36;
                            v25 += v31;
                          }
                          v22 += 8;
                        }
                        while ( v28 != v22 );
                        v18 = v27;
                        v12 = v32;
                        a1 = v26;
                        v14 = v33;
                        v21 = v35;
                        v19 = v34;
                        v20 += v25;
                      }
                    }
                    v21 += 8;
                  }
                  while ( v19 != v21 );
                  v8 = v37;
                  v4 = v18;
                  v13 += v20;
                }
              }
              v14 += 8;
            }
            while ( v12 != v14 );
            v8 += v13;
          }
        }
        v4 += 8;
      }
      while ( v7 != v4 );
      return v8;
    }
  }
  return result;
}

