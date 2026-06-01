__int64 __fastcall sub_B3C560(_QWORD *a1, int a2)
{
  __int64 v2; // r9
  __int64 result; // rax
  __int64 v4; // r10
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // rbp
  int v8; // ebx
  __int64 *v9; // rsi
  __int64 v10; // r11
  double v11; // xmm0_8
  __int64 v12; // rcx
  __int64 v13; // rsi

  v2 = a1[5];
  if ( v2 )
    result = *(unsigned int *)(v2 - 4);
  else
    result = 0;
  if ( a2 < (int)result )
  {
    result = *(unsigned int *)(v2 + 4LL * (unsigned int)a2);
    if ( (_DWORD)result )
    {
      v4 = a1[4];
      v5 = (unsigned int)result;
      v6 = (int)result >> 1;
      v7 = *(unsigned int *)(v4 + 4LL * (unsigned int)result);
      v8 = *(_DWORD *)(v4 + 4LL * (unsigned int)result);
      if ( (int)result >> 1 )
      {
        v9 = (__int64 *)a1[3];
        v10 = *v9;
        v11 = *(double *)(*v9 + 8 * v7);
        while ( 1 )
        {
          v12 = 4 * v5;
          v13 = *(unsigned int *)(v4 + 4LL * (unsigned int)v6);
          if ( v11 <= *(double *)(v10 + 8 * v13) )
            break;
          *(_DWORD *)(v4 + v12) = v13;
          *(_DWORD *)(v2 + 4 * v13) = result;
          result = (unsigned int)v6;
          v6 >>= 1;
          if ( !v6 )
            goto LABEL_13;
          v5 = (unsigned int)result;
        }
        *(_DWORD *)(v4 + v12) = v8;
        *(_DWORD *)(v2 + 4 * v7) = result;
      }
      else
      {
LABEL_13:
        *(_DWORD *)(v4 + 4) = v8;
        *(_DWORD *)(v2 + 4 * v7) = 1;
        return 1;
      }
    }
  }
  return result;
}

