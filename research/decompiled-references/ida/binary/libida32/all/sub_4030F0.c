__int64 __fastcall sub_4030F0(__int64 *a1, __int64 *a2, const char *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v7; // r12
  unsigned __int64 v8; // r15
  const char *v9; // rdi
  unsigned __int64 v10; // rbx
  const void *v12; // r12
  void *v13; // rax
  const char *v14; // rbp
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-40h]

  if ( !a3 )
    return -1;
  v4 = a1[1];
  v5 = *a1;
  v17 = *a1;
  v7 = *a1 + 56 * v4;
  if ( !(56 * v4) )
    return -1;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v5 + 8);
    v9 = haystack;
    if ( v8 )
      v9 = *(const char **)v5;
    if ( !strcmp(v9, a3) )
      break;
    v5 += 56;
    if ( v5 == v7 )
      return -1;
  }
  if ( a2 )
  {
    if ( (__int64 *)v5 != a2 )
    {
      if ( v8 > 1 )
      {
        v14 = *(const char **)v5;
        v15 = (void *)*a2;
        if ( a2[2] < v8 )
        {
          v16 = qvector_reserve(a2, *a2, v8, 1);
          *a2 = v16;
          v15 = (void *)v16;
        }
        a2[1] = v8;
        memmove(v15, v14, v8 - 1);
        *(_BYTE *)(*a2 + v8 - 1) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    if ( a2 + 3 != (__int64 *)(v5 + 24) )
    {
      v10 = *(_QWORD *)(v5 + 32);
      if ( v10 > 1 )
      {
        v12 = *(const void **)(v5 + 24);
        v13 = (void *)a2[3];
        if ( a2[5] < v10 )
        {
          v13 = (void *)qvector_reserve(a2 + 3, a2[3], *(_QWORD *)(v5 + 32), 1);
          a2[3] = (__int64)v13;
        }
        a2[4] = v10;
        memmove(v13, v12, v10 - 1);
        *(_BYTE *)(a2[3] + v10 - 1) = 0;
      }
      else
      {
        a2[4] = 0;
      }
    }
    a2[6] = *(_QWORD *)(v5 + 48);
    v17 = *a1;
  }
  return 0x6DB6DB6DB6DB6DB7LL * ((v5 - v17) >> 3);
}

