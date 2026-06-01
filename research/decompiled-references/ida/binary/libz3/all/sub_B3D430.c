__int64 __fastcall sub_B3D430(__int64 a1, int a2)
{
  __int64 v2; // r13
  __int64 result; // rax
  unsigned int v4; // r11d
  __int64 v5; // r14
  __int64 v6; // r12
  int v7; // ebp
  __int64 v8; // rdx
  int v9; // r8d
  __int64 *v10; // r15
  __int64 v11; // rbx
  double v12; // xmm2_8
  __int64 v13; // rdx
  unsigned int v14; // esi
  unsigned int v15; // r9d
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 i; // rax
  int v21; // edx
  double v22; // xmm0_8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 j; // rax
  int v26; // edi
  double v27; // xmm1_8
  __int64 v28; // r12
  int v29; // edx
  int v30; // ecx
  __int64 v31; // [rsp+0h] [rbp-40h]
  __int64 v32; // [rsp+8h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 )
    result = *(unsigned int *)(v2 - 4);
  else
    result = 0;
  if ( a2 < (int)result )
  {
    v4 = *(_DWORD *)(v2 + 4LL * (unsigned int)a2);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      v6 = v4;
      v7 = (int)v4 >> 1;
      v8 = *(unsigned int *)(v5 + 4LL * v4);
      v9 = *(_DWORD *)(v5 + 4LL * v4);
      if ( (int)v4 >> 1 )
      {
        v10 = *(__int64 **)(a1 + 56);
        v32 = *(unsigned int *)(v5 + 4LL * v4);
        v11 = *v10;
        v31 = **(_QWORD **)(a1 + 48);
        v12 = *(double *)(v31 + 8 * v8);
        while ( 1 )
        {
          v13 = *((unsigned int *)v10 + 2);
          v14 = *(_DWORD *)(v5 + 4LL * (unsigned int)v7);
          v15 = v13 - 1;
          v16 = 24 * v13;
          v17 = v11 + 24 * v13;
          v18 = 24LL * (v9 & (unsigned int)(v13 - 1));
          v19 = v11 + v18;
          if ( v18 != 24 * v13 )
          {
            for ( i = v11 + v18; v17 != i; i += 24 )
            {
              v21 = *(_DWORD *)(i + 4);
              if ( v21 == 2 )
              {
                if ( *(_DWORD *)i == v9 && *(_DWORD *)(i + 8) == v9 )
                {
LABEL_14:
                  v22 = *(double *)(i + 16);
                  goto LABEL_15;
                }
              }
              else if ( !v21 )
              {
                goto LABEL_30;
              }
            }
          }
          if ( v11 != v19 )
          {
            for ( i = v11; v19 != i; i += 24 )
            {
              v29 = *(_DWORD *)(i + 4);
              if ( v29 == 2 )
              {
                if ( *(_DWORD *)i == v9 && *(_DWORD *)(i + 8) == v9 )
                  goto LABEL_14;
              }
              else if ( !v29 )
              {
                break;
              }
            }
          }
LABEL_30:
          v22 = 0.0;
LABEL_15:
          v23 = v14 & v15;
          v24 = v11 + 24 * v23;
          if ( v16 != 24 * v23 )
          {
            for ( j = v11 + 24 * v23; v17 != j; j += 24 )
            {
              v26 = *(_DWORD *)(j + 4);
              if ( v26 == 2 )
              {
                if ( v14 == *(_DWORD *)j && v14 == *(_DWORD *)(j + 8) )
                {
LABEL_22:
                  v27 = *(double *)(j + 16);
                  goto LABEL_23;
                }
              }
              else if ( !v26 )
              {
                goto LABEL_31;
              }
            }
          }
          if ( v11 != v24 )
          {
            for ( j = v11; v24 != j; j += 24 )
            {
              v30 = *(_DWORD *)(j + 4);
              if ( v30 == 2 )
              {
                if ( v14 == *(_DWORD *)j && v14 == *(_DWORD *)(j + 8) )
                  goto LABEL_22;
              }
              else if ( !v30 )
              {
                break;
              }
            }
          }
LABEL_31:
          v27 = 0.0;
LABEL_23:
          result = v14;
          v28 = 4 * v6;
          if ( v22 + v12 <= v27 + *(double *)(v31 + 8LL * v14) )
            break;
          *(_DWORD *)(v5 + v28) = v14;
          *(_DWORD *)(v2 + 4LL * v14) = v4;
          v4 = v7;
          v7 >>= 1;
          if ( !v7 )
          {
            v8 = v32;
            goto LABEL_27;
          }
          v6 = v4;
        }
        v8 = v32;
      }
      else
      {
LABEL_27:
        v28 = 4;
        v4 = 1;
      }
      *(_DWORD *)(v5 + v28) = v9;
      *(_DWORD *)(v2 + 4 * v8) = v4;
    }
  }
  return result;
}

