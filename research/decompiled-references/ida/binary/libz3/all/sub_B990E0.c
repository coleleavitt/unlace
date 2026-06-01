__int64 __fastcall sub_B990E0(__int64 a1)
{
  __int64 v1; // r9
  unsigned int *v2; // rbx
  __int64 v3; // r10
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // edx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  _QWORD *v13; // rsi
  unsigned int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // r12
  void *v17; // rax
  unsigned __int64 v18; // r13
  __int64 *v19; // rdi
  __int64 v20; // r14
  __int64 *v21; // rbp
  unsigned int v22; // ecx
  __int64 *v23; // r15
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  unsigned __int64 v26; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(unsigned int **)(a1 + 8);
  v3 = *(unsigned __int64 *)((char *)&stru_18278.r_offset + (_QWORD)v2);
  v4 = *(unsigned int *)(*(_QWORD *)v1 + 12LL);
  v5 = v2[24736];
  v6 = v5 - 1;
  result = 8 * v5;
  v8 = v3 + result;
  v9 = 8LL * ((unsigned int)v4 & v6);
  v10 = v3 + v9;
  if ( v9 != result )
  {
    for ( result = v3 + v9; v8 != result; result += 8 )
    {
      v11 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(*(_QWORD *)v11 + 12LL) == (_DWORD)v4 && v1 == v11 )
        {
LABEL_17:
          v13 = (_QWORD *)(result + 8);
          if ( v8 == result + 8 )
            v13 = *(_QWORD **)((char *)&stru_18278.r_offset + (_QWORD)v2);
          v14 = v2[24737] - 1;
          if ( *v13 )
          {
            *(_QWORD *)result = 1;
            v15 = v2[24738];
            v2[24737] = v14;
            result = v15 + 1;
            if ( v14 < 0x40 )
              v14 = 64;
            v2[24738] = result;
            if ( v14 < (unsigned int)result )
            {
              result = sub_186AF10(v4);
              if ( !(_BYTE)result )
              {
                v16 = v2[24736];
                v17 = (void *)sub_186B270(8 * v16);
                v18 = (unsigned __int64)v17;
                if ( (_DWORD)v16 )
                  memset(v17, 0, 8 * v16);
                result = v2[24736];
                v19 = *(__int64 **)((char *)&stru_18278.r_offset + (_QWORD)v2);
                v20 = 8 * result;
                v21 = v19;
                v22 = result - 1;
                v23 = &v19[result];
                v24 = v18 + 8 * result;
                if ( v19 != v23 )
                {
                  do
                  {
                    result = *v21;
                    if ( (unsigned __int64)*v21 > 1 )
                    {
                      v25 = 8LL * (*(_DWORD *)(*(_QWORD *)result + 12LL) & v22);
                      v26 = v18 + v25;
                      if ( v20 == v25 )
                      {
LABEL_36:
                        if ( v18 == v26 )
                        {
LABEL_45:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        result = v18;
                        while ( *(_QWORD *)result )
                        {
                          result += 8;
                          if ( v26 == result )
                            goto LABEL_45;
                        }
                      }
                      else
                      {
                        result = v18 + v25;
                        while ( *(_QWORD *)result )
                        {
                          result += 8;
                          if ( v24 == result )
                            goto LABEL_36;
                        }
                      }
                      *(_QWORD *)result = *v21;
                    }
                    ++v21;
                  }
                  while ( v23 != v21 );
                  v19 = *(__int64 **)((char *)&stru_18278.r_offset + (_QWORD)v2);
                }
                if ( v19 )
                  result = sub_186B220(v19);
                *(unsigned __int64 *)((char *)&stru_18278.r_offset + (_QWORD)v2) = v18;
                v2[24738] = 0;
              }
            }
          }
          else
          {
            *(_QWORD *)result = 0;
            v2[24737] = v14;
          }
          return result;
        }
      }
      else if ( !v11 )
      {
        return result;
      }
    }
  }
  if ( v3 != v10 )
  {
    for ( result = *(unsigned __int64 *)((char *)&stru_18278.r_offset + (_QWORD)v2); v10 != result; result += 8 )
    {
      v12 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(*(_QWORD *)v12 + 12LL) == (_DWORD)v4 && v1 == v12 )
          goto LABEL_17;
      }
      else if ( !v12 )
      {
        return result;
      }
    }
  }
  return result;
}

