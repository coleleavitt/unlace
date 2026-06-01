__int64 __fastcall sub_B3D660(__int64 a1, int a2)
{
  __int64 v2; // r9
  __int64 result; // rax
  unsigned int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // rbx
  unsigned int *v7; // r14
  unsigned int v8; // r13d
  int v9; // r11d
  unsigned int v10; // edx
  __int64 v11; // r12
  __int64 v12; // rbp
  double v13; // xmm2_8
  unsigned int *v14; // r13
  double v15; // xmm1_8
  __int64 v16; // rsi
  unsigned int v17; // edi
  unsigned int *v18; // r10
  double v19; // xmm0_8
  unsigned int v20; // [rsp+0h] [rbp-34h]

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    result = *(unsigned int *)(v2 - 4);
  else
    result = 0;
  if ( a2 < (int)result )
  {
    v4 = *(_DWORD *)(v2 + 4LL * (unsigned int)a2);
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 32);
      v6 = v4;
      v7 = (unsigned int *)(v5 + 4LL * v4);
      v8 = *v7;
      if ( v5 )
        v9 = *(_DWORD *)(v5 - 4);
      else
        v9 = 0;
      v10 = 2 * v4;
      v11 = v8;
      if ( (int)(2 * v4) < v9 )
      {
        v20 = *v7;
        v12 = **(_QWORD **)(a1 + 24);
        v13 = *(double *)(v12 + 8LL * v8);
        while ( 1 )
        {
          result = v10 + 1;
          v18 = (unsigned int *)(v5 + 4LL * v10);
          v16 = *v18;
          v19 = *(double *)(v12 + 8 * v16);
          v17 = *v18;
          if ( (int)result >= v9
            || (v14 = (unsigned int *)(v5 + 4LL * (unsigned int)result), v15 = *(double *)(v12 + 8LL * *v14), v15 <= v19) )
          {
            result = v10;
            v7 = (unsigned int *)(v5 + 4 * v6);
            if ( v19 <= v13 )
            {
LABEL_15:
              v8 = v20;
              goto LABEL_16;
            }
          }
          else
          {
            v16 = *v14;
            v17 = *v14;
            v18 = (unsigned int *)(v5 + 4LL * (unsigned int)result);
            v7 = (unsigned int *)(v5 + 4 * v6);
            if ( v15 <= v13 )
              goto LABEL_15;
          }
          v10 = 2 * result;
          *v7 = v17;
          *(_DWORD *)(v2 + 4 * v16) = v4;
          if ( 2 * (int)result >= v9 )
            break;
          v6 = (unsigned int)result;
          v4 = result;
        }
        v8 = v20;
        v7 = v18;
        v4 = result;
      }
LABEL_16:
      *v7 = v8;
      *(_DWORD *)(v2 + 4 * v11) = v4;
    }
  }
  return result;
}

