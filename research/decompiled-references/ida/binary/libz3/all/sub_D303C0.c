__int64 __fastcall sub_D303C0(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  const void *v13; // rsi
  __int64 v14; // rdx
  void *v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // [rsp+Ch] [rbp-3Ch]

  v4 = 24LL * a4;
  v5 = a3 + v4;
  v17 = a4 - 1;
  result = 3LL * a2;
  v7 = a1 + 24LL * a2;
  if ( a1 != v7 )
  {
    v8 = a1;
    do
    {
      while ( 1 )
      {
        result = *(_QWORD *)v8;
        if ( *(_QWORD *)v8 > 1u )
        {
          v10 = 24LL * (*(_DWORD *)(result + 12) & v17);
          v11 = a3 + v10;
          if ( v4 == v10 )
          {
LABEL_16:
            if ( a3 == v11 )
            {
LABEL_21:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v12 = a3;
            while ( *(_QWORD *)v12 )
            {
              v12 += 24;
              if ( v11 == v12 )
                goto LABEL_21;
            }
          }
          else
          {
            v12 = a3 + v10;
            while ( *(_QWORD *)v12 )
            {
              v12 += 24;
              if ( v5 == v12 )
                goto LABEL_16;
            }
          }
          *(_QWORD *)v12 = result;
          v13 = *(const void **)(v8 + 16);
          result = *(unsigned int *)(v8 + 8);
          *(_DWORD *)(v12 + 8) = result;
          if ( v13 )
            break;
        }
        v8 += 24;
        if ( v7 == v8 )
          return result;
      }
      v14 = *(unsigned int *)(v8 + 12);
      v15 = *(void **)(v12 + 16);
      if ( *(_DWORD *)(v12 + 12) < (unsigned int)v14 )
      {
        if ( v15 )
        {
          sub_186B220(v15);
          v14 = *(unsigned int *)(v8 + 12);
        }
        v16 = sub_186B270(4 * v14);
        v14 = *(unsigned int *)(v8 + 12);
        *(_QWORD *)(v12 + 16) = v16;
        v13 = *(const void **)(v8 + 16);
        v15 = (void *)v16;
        *(_DWORD *)(v12 + 12) = v14;
      }
      v8 += 24;
      result = (__int64)memcpy(v15, v13, 4 * v14);
    }
    while ( v7 != v8 );
  }
  return result;
}

