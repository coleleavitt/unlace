void __fastcall sub_B3E040(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  int v4; // eax
  int *v5; // rcx
  int v6; // eax
  __int64 v7; // rsi
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r14
  __int64 v11; // r8
  int *v12; // r13
  int v13; // ecx
  int v14; // r11d
  __int64 v15; // r10
  int v16; // r12d
  unsigned int v17; // r9d
  __int64 v18; // rbp
  __int64 v19; // rbx
  double v20; // xmm0_8
  unsigned int v21; // ecx
  __int64 v22; // rbp
  double v23; // xmm2_8
  unsigned int *v24; // r13
  __int64 v25; // r15
  double v26; // xmm0_8
  __int64 v27; // r9
  int v28; // r12d
  unsigned int *v29; // rbx
  unsigned int v30; // edx
  double v31; // xmm1_8
  __int64 v32; // r8
  unsigned int v33; // edx
  int v34; // [rsp+0h] [rbp-34h]

  if ( a2 >= *(_DWORD *)(a1 + 44) )
  {
    v3 = *(_QWORD *)(a1 + 64);
    v4 = v3 ? *(_DWORD *)(v3 - 4) : 0;
    if ( (int)a2 < v4 )
    {
      v5 = (int *)(v3 + 4LL * a2);
      v6 = *v5;
      if ( *v5 )
      {
        v7 = *(_QWORD *)(a1 + 56);
        if ( v7 )
        {
          v8 = *(_DWORD *)(v7 - 4);
          v9 = v8 - 1;
        }
        else
        {
          v9 = -1;
          v8 = 0;
        }
        if ( v6 == v9 )
        {
          *v5 = 0;
          --*(_DWORD *)(v7 - 4);
        }
        else
        {
          v10 = *(unsigned int *)(v7 + 4LL * (unsigned int)(v8 - 1));
          v11 = (unsigned int)v6;
          v12 = (int *)(v7 + 4LL * (unsigned int)v6);
          *v12 = v10;
          *(_DWORD *)(v3 + 4 * v10) = v6;
          *v5 = 0;
          v13 = v6 >> 1;
          v14 = *(_DWORD *)(v7 - 4) - 1;
          *(_DWORD *)(v7 - 4) = v14;
          v15 = (unsigned int)*v12;
          v16 = *v12;
          if ( v6 >> 1
            && (v17 = *(_DWORD *)(v7 + 4LL * (unsigned int)v13),
                v18 = **(_QWORD **)(a1 + 48),
                v19 = v17,
                v20 = *(double *)(v18 + 8LL * v17),
                *(double *)(v18 + 8 * v10) > v20) )
          {
            v31 = *(double *)(v18 + 8 * v15);
            while ( 1 )
            {
              v32 = 4 * v11;
              if ( v31 <= v20 )
                break;
              *(_DWORD *)(v7 + v32) = v17;
              v33 = v13 >> 1;
              *(_DWORD *)(v3 + 4 * v19) = v6;
              if ( !(v13 >> 1) )
              {
                v32 = 4;
                v6 = 1;
                break;
              }
              v11 = (unsigned int)v13;
              v13 >>= 1;
              v19 = *(unsigned int *)(v7 + 4LL * v33);
              v6 = v11;
              v20 = *(double *)(v18 + 8 * v19);
              v17 = *(_DWORD *)(v7 + 4LL * v33);
            }
            *(_DWORD *)(v7 + v32) = v16;
            *(_DWORD *)(v3 + 4 * v15) = v6;
          }
          else
          {
            v21 = 2 * v6;
            if ( 2 * v6 < v14 )
            {
              v34 = *v12;
              v22 = **(_QWORD **)(a1 + 48);
              v23 = *(double *)(v22 + 8 * v15);
              while ( 1 )
              {
                v30 = v21 + 1;
                v29 = (unsigned int *)(v7 + 4LL * v21);
                v27 = *v29;
                v26 = *(double *)(v22 + 8 * v27);
                v28 = *v29;
                if ( v14 <= (int)(v21 + 1)
                  || (v24 = (unsigned int *)(v7 + 4LL * v30), v25 = *v24, *(double *)(v22 + 8 * v25) <= v26) )
                {
                  v30 = v21;
                }
                else
                {
                  v26 = *(double *)(v22 + 8 * v25);
                  v27 = *v24;
                  v28 = *v24;
                  v29 = (unsigned int *)(v7 + 4LL * v30);
                }
                v12 = (int *)(v7 + 4 * v11);
                if ( v26 <= v23 )
                {
                  v16 = v34;
                  goto LABEL_23;
                }
                v21 = 2 * v30;
                *v12 = v28;
                *(_DWORD *)(v3 + 4 * v27) = v6;
                if ( v14 <= (int)(2 * v30) )
                  break;
                v11 = v30;
                v6 = v30;
              }
              v16 = v34;
              v12 = (int *)v29;
              v6 = v30;
            }
LABEL_23:
            *v12 = v16;
            *(_DWORD *)(v3 + 4 * v15) = v6;
          }
        }
      }
    }
  }
}

