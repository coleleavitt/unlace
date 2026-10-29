__int64 __fastcall sub_B3E280(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rsi
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // r14
  __int64 v10; // r8
  int *v11; // r13
  int v12; // ecx
  int v13; // r11d
  __int64 v14; // r10
  int v15; // r12d
  unsigned int v16; // r9d
  __int64 v17; // rbp
  __int64 v18; // rbx
  double v19; // xmm0_8
  unsigned int v20; // ecx
  __int64 v21; // rbp
  double v22; // xmm2_8
  unsigned int *v23; // r13
  __int64 v24; // r15
  double v25; // xmm0_8
  __int64 v26; // r9
  int v27; // r12d
  unsigned int *v28; // rbx
  unsigned int v29; // edx
  double v30; // xmm1_8
  __int64 v31; // r8
  unsigned int v32; // edx
  int v33; // [rsp+0h] [rbp-34h]

  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
    result = *(unsigned int *)(v3 - 4);
  else
    result = 0;
  if ( a2 < (int)result )
  {
    v5 = (_DWORD *)(v3 + 4LL * (unsigned int)a2);
    result = (unsigned int)*v5;
    if ( (_DWORD)result )
    {
      v6 = *(_QWORD *)(a1 + 32);
      if ( v6 )
      {
        v7 = *(_DWORD *)(v6 - 4);
        v8 = v7 - 1;
      }
      else
      {
        v8 = -1;
        v7 = 0;
      }
      if ( (_DWORD)result == v8 )
      {
        *v5 = 0;
        --*(_DWORD *)(v6 - 4);
      }
      else
      {
        v9 = *(unsigned int *)(v6 + 4LL * (unsigned int)(v7 - 1));
        v10 = (unsigned int)result;
        v11 = (int *)(v6 + 4LL * (unsigned int)result);
        *v11 = v9;
        *(_DWORD *)(v3 + 4 * v9) = result;
        *v5 = 0;
        v12 = (int)result >> 1;
        v13 = *(_DWORD *)(v6 - 4) - 1;
        *(_DWORD *)(v6 - 4) = v13;
        v14 = (unsigned int)*v11;
        v15 = *v11;
        if ( (int)result >> 1
          && (v16 = *(_DWORD *)(v6 + 4LL * (unsigned int)v12),
              v17 = **(_QWORD **)(a1 + 24),
              v18 = v16,
              v19 = *(double *)(v17 + 8LL * v16),
              *(double *)(v17 + 8 * v9) > v19) )
        {
          v30 = *(double *)(v17 + 8 * v14);
          while ( 1 )
          {
            v31 = 4 * v10;
            if ( v30 <= v19 )
              break;
            *(_DWORD *)(v6 + v31) = v16;
            v32 = v12 >> 1;
            *(_DWORD *)(v3 + 4 * v18) = result;
            if ( !(v12 >> 1) )
            {
              v31 = 4;
              result = 1;
              break;
            }
            v10 = (unsigned int)v12;
            v12 >>= 1;
            v18 = *(unsigned int *)(v6 + 4LL * v32);
            result = v10;
            v19 = *(double *)(v17 + 8 * v18);
            v16 = *(_DWORD *)(v6 + 4LL * v32);
          }
          *(_DWORD *)(v6 + v31) = v15;
          *(_DWORD *)(v3 + 4 * v14) = result;
        }
        else
        {
          v20 = 2 * result;
          if ( 2 * (int)result < v13 )
          {
            v33 = *v11;
            v21 = **(_QWORD **)(a1 + 24);
            v22 = *(double *)(v21 + 8 * v14);
            while ( 1 )
            {
              v29 = v20 + 1;
              v28 = (unsigned int *)(v6 + 4LL * v20);
              v26 = *v28;
              v25 = *(double *)(v21 + 8 * v26);
              v27 = *v28;
              if ( v13 <= (int)(v20 + 1)
                || (v23 = (unsigned int *)(v6 + 4LL * v29), v24 = *v23, *(double *)(v21 + 8 * v24) <= v25) )
              {
                v29 = v20;
              }
              else
              {
                v25 = *(double *)(v21 + 8 * v24);
                v26 = *v23;
                v27 = *v23;
                v28 = (unsigned int *)(v6 + 4LL * v29);
              }
              v11 = (int *)(v6 + 4 * v10);
              if ( v25 <= v22 )
              {
                v15 = v33;
                goto LABEL_23;
              }
              v20 = 2 * v29;
              *v11 = v27;
              *(_DWORD *)(v3 + 4 * v26) = result;
              if ( v13 <= (int)(2 * v29) )
                break;
              v10 = v29;
              result = v29;
            }
            v15 = v33;
            v11 = (int *)v28;
            result = v29;
          }
LABEL_23:
          *v11 = v15;
          *(_DWORD *)(v3 + 4 * v14) = result;
        }
      }
    }
  }
  return result;
}

