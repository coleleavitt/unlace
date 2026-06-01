unsigned __int64 __fastcall sub_91D1D0(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r15
  void *v8; // r12
  __int64 v9; // rsi
  unsigned __int64 result; // rax
  __int64 v11; // rdx
  __int64 *v12; // r12
  __int64 *v13; // r15
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rdi
  void *v18; // r14
  __int64 v19; // rsi
  __int64 *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // rdi
  void *v26; // r15
  __int64 v27; // rsi
  void *v28; // r15
  __int64 v29; // rsi
  __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+18h] [rbp-40h]

  v2 = a1[32];
  if ( v2 )
    *(_DWORD *)(v2 - 4) = a2;
  v3 = a1[41];
  if ( v3 )
  {
    v4 = 40LL * a2;
    v5 = v3 + v4;
    v6 = 40LL * *(unsigned int *)(v3 - 4);
    v7 = v3 + v6;
    if ( v4 != v6 )
    {
      do
      {
        v8 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v5 + 8);
        v9 = v5 + 24;
        v5 += 40;
        sub_182CBA0(v8, v9);
      }
      while ( v7 != v5 );
      v3 = a1[41];
    }
    *(_DWORD *)(v3 - 4) = a2;
  }
  result = a1[31];
  if ( result )
  {
    v11 = 8LL * *(unsigned int *)(result - 4);
    v33 = 8LL * a2;
    v12 = (__int64 *)(result + v33);
    v13 = (__int64 *)(result + v11);
    if ( v33 != v11 )
    {
      do
      {
        v14 = *v12;
        if ( *v12 )
        {
          v15 = *(unsigned int *)(v14 - 4);
          if ( (_DWORD)v15 )
          {
            v16 = v14 + 48 * v15;
            do
            {
              v17 = *(_QWORD *)(v14 + 40);
              if ( v17 )
                sub_186B220((void *)(v17 - 8));
              v18 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v14 + 8);
              v19 = v14 + 24;
              v14 += 48;
              sub_182CBA0(v18, v19);
            }
            while ( v16 != v14 );
            v14 = *v12;
          }
          sub_186B220((void *)(v14 - 8));
        }
        ++v12;
      }
      while ( v13 != v12 );
      result = a1[31];
      v12 = (__int64 *)(result + v33);
    }
    *(_DWORD *)(result - 4) = a2;
    if ( (__int64 *)result != v12 )
    {
      v20 = (__int64 *)result;
      v32 = 48LL * a2;
      do
      {
        v21 = *v20;
        if ( *v20 )
        {
          v22 = v21 + v32;
          v23 = 48LL * *(unsigned int *)(v21 - 4);
          v24 = v21 + v23;
          if ( v32 != v23 )
          {
            do
            {
              while ( 1 )
              {
                v25 = *(_QWORD *)(v22 + 40);
                if ( !v25 )
                  break;
                sub_186B220((void *)(v25 - 8));
                v26 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v22 + 8);
                v27 = v22 + 24;
                v22 += 48;
                sub_182CBA0(v26, v27);
                if ( v22 == v24 )
                  goto LABEL_26;
              }
              v28 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v22 + 8);
              v29 = v22 + 24;
              v22 += 48;
              sub_182CBA0(v28, v29);
            }
            while ( v24 != v22 );
LABEL_26:
            v21 = *v20;
          }
          result = a2;
          *(_DWORD *)(v21 - 4) = a2;
        }
        ++v20;
      }
      while ( v12 != v20 );
    }
  }
  return result;
}

