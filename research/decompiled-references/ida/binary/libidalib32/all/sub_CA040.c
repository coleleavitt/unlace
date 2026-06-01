__int64 __fastcall sub_CA040(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // r13
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  size_t v10; // r15
  __int64 v11; // r14
  size_t v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rbp
  unsigned __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rsi
  unsigned __int64 v18; // rbp
  size_t v19; // r15
  __int64 v20; // r14
  size_t v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // [rsp+8h] [rbp-40h]
  size_t v26; // [rsp+8h] [rbp-40h]

  result = a2[1];
  v3 = *a2;
  v4 = *a2 + 48 * result;
  if ( v4 != *a2 )
  {
    do
    {
      v8 = a1[1];
      if ( v8 )
      {
        v5 = v8 + 1;
        v6 = a1[1];
        v7 = *a1;
        --v8;
        if ( a1[2] < v5 )
          goto LABEL_23;
      }
      else
      {
        v7 = *a1;
        v5 = 2;
        v6 = 1;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_23:
          result = qvector_reserve();
          *a1 = result;
          v7 = result;
        }
      }
      a1[1] = v5;
      *(_BYTE *)(v7 + v6) = 0;
      *(_BYTE *)(*a1 + v8) = 59;
      v9 = *(_QWORD *)(v3 + 8);
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v9 != 1 )
        {
          v11 = a1[1];
          v12 = v9 - 1;
          if ( v11 )
          {
            --v11;
            v12 = v10 + v11;
            v9 += v11;
          }
          v13 = *a1;
          if ( a1[2] < v9 )
          {
            v25 = v12;
            v23 = qvector_reserve();
            v12 = v25;
            *a1 = v23;
            v13 = v23;
          }
          a1[1] = v9;
          *(_BYTE *)(v13 + v12) = 0;
          result = (__int64)memcpy((void *)(v11 + *a1), *(const void **)v3, v10);
        }
      }
      v14 = a1[1];
      if ( v14 )
      {
        v15 = v14 + 1;
        v16 = a1[1];
        v17 = *a1;
        --v14;
        if ( a1[2] >= v15 )
          goto LABEL_13;
      }
      else
      {
        v17 = *a1;
        v15 = 2;
        v16 = 1;
        if ( (unsigned __int64)a1[2] >= 2 )
          goto LABEL_13;
      }
      result = qvector_reserve();
      *a1 = result;
      v17 = result;
LABEL_13:
      a1[1] = v15;
      *(_BYTE *)(v17 + v16) = 0;
      *(_BYTE *)(*a1 + v14) = 59;
      v18 = *(_QWORD *)(v3 + 32);
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v18 != 1 )
        {
          v20 = a1[1];
          v21 = v18 - 1;
          if ( v20 )
          {
            --v20;
            v21 = v19 + v20;
            v18 += v20;
          }
          v22 = *a1;
          if ( a1[2] < v18 )
          {
            v26 = v21;
            v24 = qvector_reserve();
            v21 = v26;
            *a1 = v24;
            v22 = v24;
          }
          a1[1] = v18;
          *(_BYTE *)(v22 + v21) = 0;
          result = (__int64)memcpy((void *)(v20 + *a1), *(const void **)(v3 + 24), v19);
        }
      }
      v3 += 48;
    }
    while ( v4 != v3 );
  }
  return result;
}

