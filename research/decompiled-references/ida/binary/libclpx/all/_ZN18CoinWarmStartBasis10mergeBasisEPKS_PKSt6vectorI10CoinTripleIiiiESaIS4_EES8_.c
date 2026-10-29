unsigned __int64 __fastcall CoinWarmStartBasis::mergeBasis(__int64 a1, __int64 a2, int **a3, int **a4)
{
  int *v4; // r12
  int *v5; // r15
  unsigned __int64 v6; // r15
  int v7; // r11d
  int v8; // r9d
  int v9; // ebx
  int v10; // r10d
  int v11; // r11d
  __int64 v12; // rcx
  int v13; // eax
  int v14; // r8d
  char v15; // r13
  unsigned __int64 result; // rax
  int *v17; // rbp
  int *v18; // r14
  unsigned __int64 v19; // r14
  int v20; // r10d
  int v21; // r8d
  int v22; // r11d
  int v23; // r9d
  int v24; // r10d
  int v25; // eax
  int v26; // edx
  char v27; // r15
  char v28; // cl
  int v29; // [rsp+Ch] [rbp-34h]

  v29 = *(_DWORD *)(a2 + 12);
  if ( *(int *)(a2 + 8) > 0 )
  {
    if ( a4 )
    {
      v4 = *a4;
      v5 = a4[1];
      if ( *a4 != v5 )
      {
        v6 = (unsigned __int64)v4 + (((char *)v5 - (char *)(v4 + 3)) & 0xFFFFFFFFFFFFFFFCLL) + 12;
        do
        {
          v7 = v4[2];
          v8 = *v4;
          if ( v7 > 0 )
          {
            v9 = v4[1] - v8;
            v10 = 2 * v8;
            v11 = v8 + v7;
            do
            {
              v12 = v8 >> 2;
              v13 = (v9 + v8++) >> 2;
              v14 = *(char *)(*(_QWORD *)(a2 + 24) + v12);
              v15 = (2 * v9 + v10) & 6;
              LOBYTE(v12) = v10 & 6;
              v10 += 2;
              *(_BYTE *)(*(_QWORD *)(a1 + 24) + v13) = (((v14 >> v12) & 3) << v15)
                                                     | *(_BYTE *)(*(_QWORD *)(a1 + 24) + v13) & ~(3 << v15);
            }
            while ( v11 != v8 );
          }
          v4 += 3;
        }
        while ( (int *)v6 != v4 );
      }
    }
  }
  result = (unsigned int)v29;
  if ( v29 > 0 )
  {
    if ( a3 )
    {
      v17 = *a3;
      v18 = a3[1];
      if ( *a3 != v18 )
      {
        result = (unsigned __int64)(v17 + 3);
        v19 = (unsigned __int64)v17 + (((char *)v18 - (char *)(v17 + 3)) & 0xFFFFFFFFFFFFFFFCLL) + 12;
        do
        {
          v20 = v17[2];
          v21 = *v17;
          if ( v20 > 0 )
          {
            v22 = v17[1] - v21;
            v23 = 2 * v21;
            v24 = v21 + v20;
            do
            {
              v25 = v21 + v22;
              v26 = v21++ >> 2;
              v27 = (v23 + 2 * v22) & 6;
              v28 = v23 & 6;
              result = *(_QWORD *)(a1 + 32) + (v25 >> 2);
              v23 += 2;
              *(_BYTE *)result = (((*(char *)(*(_QWORD *)(a2 + 32) + v26) >> v28) & 3) << v27)
                               | *(_BYTE *)result & ~(3 << v27);
            }
            while ( v21 != v24 );
          }
          v17 += 3;
        }
        while ( (int *)v19 != v17 );
      }
    }
  }
  return result;
}

