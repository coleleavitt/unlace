__int64 __fastcall sub_210480(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 result; // rax
  int v7; // ebx
  double *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // rbp
  double v13; // xmm1_8
  int v14; // r9d
  int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rdi
  double v19; // xmm0_8

  v3 = *(_QWORD *)(a1 + 80);
  v4 = *(int *)(a1 + 336);
  v5 = 4 * v4;
  result = *(int *)(v3 + 4 * v4);
  if ( (int)result < a3 )
  {
    LODWORD(v4) = a3 - result + v4;
    v5 = 4LL * (int)v4;
    result = *(int *)(v3 + v5);
  }
  v7 = *(_DWORD *)(a1 + 304) - v4;
  if ( v7 > 0 )
  {
    v8 = (double *)(a2 + 8 * result);
    if ( *v8 == 0.0 )
    {
      result = 1;
      while ( 1 )
      {
        v9 = (int)result;
        if ( (unsigned int)(v7 - 1) + 1LL == result )
          break;
        if ( v8[result++] != 0.0 )
          goto LABEL_10;
      }
    }
    else
    {
      v9 = 0;
LABEL_10:
      v10 = *(_QWORD *)(a1 + 176);
      v11 = *(_QWORD *)(a1 + 168);
      v12 = *(_QWORD *)(a1 + 48) + v5;
      do
      {
        v13 = v8[v9];
        if ( v13 != 0.0 )
        {
          v14 = *(_DWORD *)(v12 + 4 * v9 + 4);
          v15 = *(_DWORD *)(v12 + 4 * v9);
          if ( v14 < v15 )
          {
            v16 = v15;
            result = v15 - 1LL;
            v17 = result - (unsigned int)(v15 - 1 - v14);
            while ( 1 )
            {
              v18 = *(int *)(v11 + 4 * v16);
              v19 = *(double *)(v10 + 8 * v16);
              v16 = result;
              *(double *)(a2 + 8 * v18) = v19 * v13 + *(double *)(a2 + 8 * v18);
              if ( result == v17 )
                break;
              --result;
            }
          }
        }
        ++v9;
      }
      while ( v7 > (int)v9 );
    }
  }
  return result;
}

