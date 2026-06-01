__int64 *__fastcall sub_91D440(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r14
  void *v8; // r12
  void *v9; // r12
  __int64 v10; // rsi
  __int64 *result; // rax
  __int64 *v12; // r14
  __int64 v13; // rdx
  __int64 *v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rdi
  void *v19; // r13
  void *v20; // r13
  __int64 v21; // rsi
  __int64 *v22; // r13
  __int64 *v23; // rbx
  __int64 v24; // rdx
  __int64 *v25; // r12
  __int64 v26; // rdi
  void *v27; // r15
  void *v28; // r15
  _QWORD *v29; // rsi
  __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+18h] [rbp-40h]

  v2 = a1[40];
  if ( v2 )
    *(_DWORD *)(v2 - 4) = a2;
  v3 = a1[49];
  if ( v3 )
  {
    v4 = 72LL * a2;
    v5 = v3 + v4;
    v6 = 72LL * *(unsigned int *)(v3 - 4);
    v7 = v3 + v6;
    if ( v4 != v6 )
    {
      do
      {
        v8 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v5 + 40);
        sub_182CBA0(v8, v5 + 56);
        v9 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v5 + 8);
        v10 = v5 + 24;
        v5 += 72;
        sub_182CBA0(v9, v10);
      }
      while ( v7 != v5 );
      v3 = a1[49];
    }
    *(_DWORD *)(v3 - 4) = a2;
  }
  result = (__int64 *)a1[39];
  if ( result )
  {
    v33 = 8LL * a2;
    v12 = &result[(unsigned __int64)v33 / 8];
    v13 = 8LL * *((unsigned int *)result - 1);
    v14 = &result[(unsigned __int64)v13 / 8];
    if ( v33 != v13 )
    {
      do
      {
        v15 = *v12;
        if ( *v12 )
        {
          v16 = *(unsigned int *)(v15 - 4);
          if ( (_DWORD)v16 )
          {
            v17 = v15 + 80 * v16;
            do
            {
              v18 = *(_QWORD *)(v15 + 72);
              if ( v18 )
                sub_186B220((void *)(v18 - 8));
              v19 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v15 + 40);
              sub_182CBA0(v19, v15 + 56);
              v20 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v15 + 8);
              v21 = v15 + 24;
              v15 += 80;
              sub_182CBA0(v20, v21);
            }
            while ( v17 != v15 );
            v15 = *v12;
          }
          sub_186B220((void *)(v15 - 8));
        }
        ++v12;
      }
      while ( v14 != v12 );
      result = (__int64 *)a1[39];
      v12 = &result[(unsigned __int64)v33 / 8];
    }
    *((_DWORD *)result - 1) = a2;
    if ( result != v12 )
    {
      v22 = result;
      v32 = 80LL * a2;
      do
      {
        result = (__int64 *)*v22;
        if ( *v22 )
        {
          v23 = &result[(unsigned __int64)v32 / 8];
          v24 = 80LL * *((unsigned int *)result - 1);
          v25 = &result[(unsigned __int64)v24 / 8];
          if ( v32 != v24 )
          {
            do
            {
              v26 = v23[9];
              if ( v26 )
                sub_186B220((void *)(v26 - 8));
              v27 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v23 + 5);
              sub_182CBA0(v27, v23 + 7);
              v28 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v23 + 1);
              v29 = v23 + 3;
              v23 += 10;
              sub_182CBA0(v28, v29);
            }
            while ( v25 != v23 );
            result = (__int64 *)*v22;
          }
          *((_DWORD *)result - 1) = a2;
        }
        ++v22;
      }
      while ( v12 != v22 );
    }
  }
  return result;
}

