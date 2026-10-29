__int64 __fastcall CoinDenseFactorization::preProcess(CoinDenseFactorization *this)
{
  int v1; // esi
  __int64 v2; // r13
  __int64 v3; // r8
  int v4; // eax
  int v5; // ebx
  __int64 result; // rax
  char *v8; // rdi
  int *v9; // r14
  __int64 v10; // rbp
  int v11; // eax
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi
  char *v18; // r10
  __int64 v19; // rdx
  char *v20; // rax
  __int64 v21; // r9
  __int64 v22; // xmm0_8
  __int64 v23; // r9
  char *v24; // rdx
  __int64 v25; // [rsp+8h] [rbp-40h]

  v1 = *((_DWORD *)this + 9);
  v2 = *((_QWORD *)this + 10);
  v3 = *((_QWORD *)this + 9);
  v25 = 8LL * v1 * v1;
  v4 = *((_DWORD *)this + 10);
  v5 = v4 * v1;
  result = (unsigned int)(v4 - 1);
  if ( (int)result >= 0 )
  {
    v8 = *((char **)this + 11);
    v9 = (int *)(v3 + 4LL * (int)result);
    v10 = (__int64)&v9[-(unsigned int)result - 1];
    do
    {
      v5 -= v1;
      memset(v8, 0, 8LL * v1);
      v11 = *v9;
      v12 = v9[1];
      v13 = *((_QWORD *)this + 10);
      v8 = *((char **)this + 11);
      if ( *v9 < v12 )
      {
        v14 = v11;
        v15 = (unsigned int)(v12 - 1 - v11);
        v16 = v11 + 1LL;
        v17 = v16 + v15;
        while ( 1 )
        {
          *(_QWORD *)&v8[8 * *(int *)(v2 + v25 + 4 * v14)] = *(_QWORD *)(v13 + 8 * v14);
          v14 = v16;
          if ( v17 == v16 )
            break;
          ++v16;
        }
      }
      v1 = *((_DWORD *)this + 9);
      result = v5;
      v18 = (char *)(v13 + 8LL * v5);
      if ( v1 && v18 != v8 )
      {
        if ( v1 >> 3 <= 0 )
        {
          v24 = v8;
        }
        else
        {
          v19 = v13 + 8LL * v5;
          v20 = v8;
          v21 = (unsigned int)((v1 >> 3) - 1);
          do
          {
            v22 = *(_QWORD *)v20;
            v20 += 64;
            v19 += 64;
            *(_QWORD *)(v19 - 64) = v22;
            *(_QWORD *)(v19 - 56) = *((_QWORD *)v20 - 7);
            *(_QWORD *)(v19 - 48) = *((_QWORD *)v20 - 6);
            *(_QWORD *)(v19 - 40) = *((_QWORD *)v20 - 5);
            *(_QWORD *)(v19 - 32) = *((_QWORD *)v20 - 4);
            *(_QWORD *)(v19 - 24) = *((_QWORD *)v20 - 3);
            *(_QWORD *)(v19 - 16) = *((_QWORD *)v20 - 2);
            *(_QWORD *)(v19 - 8) = *((_QWORD *)v20 - 1);
          }
          while ( v20 != &v8[64 * v21 + 64] );
          v23 = ((int)v21 + 1LL) << 6;
          v24 = &v8[v23];
          v18 += v23;
        }
        result = (unsigned int)(v1 % 8);
        switch ( v1 % 8 )
        {
          case 1:
            goto LABEL_20;
          case 2:
            goto LABEL_19;
          case 3:
            goto LABEL_18;
          case 4:
            goto LABEL_17;
          case 5:
            goto LABEL_16;
          case 6:
            goto LABEL_15;
          case 7:
            *((_QWORD *)v18 + 6) = *((_QWORD *)v24 + 6);
LABEL_15:
            *((_QWORD *)v18 + 5) = *((_QWORD *)v24 + 5);
LABEL_16:
            *((_QWORD *)v18 + 4) = *((_QWORD *)v24 + 4);
LABEL_17:
            *((_QWORD *)v18 + 3) = *((_QWORD *)v24 + 3);
LABEL_18:
            *((_QWORD *)v18 + 2) = *((_QWORD *)v24 + 2);
LABEL_19:
            *((_QWORD *)v18 + 1) = *((_QWORD *)v24 + 1);
LABEL_20:
            *(_QWORD *)v18 = *(_QWORD *)v24;
            break;
          default:
            break;
        }
      }
      --v9;
    }
    while ( (int *)v10 != v9 );
  }
  return result;
}

