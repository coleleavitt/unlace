__int64 __fastcall sub_370A60(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rax
  int v4; // esi
  unsigned int v5; // edx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rsi
  unsigned int v13; // edx
  int v14; // eax
  __int64 v15; // r12
  char *v16; // rax
  char *v17; // r13
  __int64 *v18; // rdi
  __int64 v19; // r14
  __int64 *v20; // rbp
  unsigned int v21; // ecx
  __int64 v22; // r15
  char *v23; // r12
  __int64 v24; // rax
  char *v25; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned int *)(v1 + 8);
  v4 = *(_DWORD *)(v2 + 12);
  v5 = v3 - 1;
  result = 8 * v3;
  v7 = *(_QWORD *)v1 + result;
  v8 = 8LL * (v4 & v5);
  v9 = *(_QWORD *)v1 + v8;
  if ( v8 != result )
  {
    for ( result = *(_QWORD *)v1 + v8; v7 != result; result += 8 )
    {
      v10 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v10 + 12) == v4 && v2 == v10 )
        {
LABEL_17:
          v12 = (_QWORD *)(result + 8);
          if ( v7 == result + 8 )
            v12 = *(_QWORD **)v1;
          v13 = *(_DWORD *)(v1 + 12) - 1;
          if ( *v12 )
          {
            *(_QWORD *)result = 1;
            v14 = *(_DWORD *)(v1 + 16);
            *(_DWORD *)(v1 + 12) = v13;
            result = (unsigned int)(v14 + 1);
            if ( v13 < 0x40 )
              v13 = 64;
            *(_DWORD *)(v1 + 16) = result;
            if ( v13 < (unsigned int)result )
            {
              result = sub_186AF10(v9);
              if ( !(_BYTE)result )
              {
                v15 = *(unsigned int *)(v1 + 8);
                v16 = (char *)sub_186B270(8 * v15);
                v17 = v16;
                if ( (_DWORD)v15 )
                  memset(v16, 0, 8 * v15);
                result = *(unsigned int *)(v1 + 8);
                v18 = *(__int64 **)v1;
                v19 = 8 * result;
                v20 = *(__int64 **)v1;
                v21 = result - 1;
                v22 = *(_QWORD *)v1 + 8 * result;
                v23 = &v17[8 * result];
                if ( *(_QWORD *)v1 != v22 )
                {
                  do
                  {
                    result = *v20;
                    if ( (unsigned __int64)*v20 > 1 )
                    {
                      v24 = 8LL * (*(_DWORD *)(result + 12) & v21);
                      v25 = &v17[v24];
                      if ( v19 == v24 )
                      {
LABEL_36:
                        if ( v17 == v25 )
                        {
LABEL_45:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        result = (__int64)v17;
                        while ( *(_QWORD *)result )
                        {
                          result += 8;
                          if ( v25 == (char *)result )
                            goto LABEL_45;
                        }
                      }
                      else
                      {
                        result = (__int64)&v17[v24];
                        while ( *(_QWORD *)result )
                        {
                          result += 8;
                          if ( v23 == (char *)result )
                            goto LABEL_36;
                        }
                      }
                      *(_QWORD *)result = *v20;
                    }
                    ++v20;
                  }
                  while ( (__int64 *)v22 != v20 );
                  v18 = *(__int64 **)v1;
                }
                if ( v18 )
                  result = sub_186B220(v18);
                *(_QWORD *)v1 = v17;
                *(_DWORD *)(v1 + 16) = 0;
              }
            }
          }
          else
          {
            *(_QWORD *)result = 0;
            *(_DWORD *)(v1 + 12) = v13;
          }
          return result;
        }
      }
      else if ( !v10 )
      {
        return result;
      }
    }
  }
  if ( *(_QWORD *)v1 != v9 )
  {
    for ( result = *(_QWORD *)v1; v9 != result; result += 8 )
    {
      v11 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v11 + 12) == v4 && v2 == v11 )
          goto LABEL_17;
      }
      else if ( !v11 )
      {
        return result;
      }
    }
  }
  return result;
}

