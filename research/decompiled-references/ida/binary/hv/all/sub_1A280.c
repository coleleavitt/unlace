unsigned __int64 __fastcall sub_1A280(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // r15
  __int64 v6; // rbp
  __int64 i; // rbx
  const char *v8; // r12
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r12
  const char *v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  void *v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+8h] [rbp-40h]

  result = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 28LL);
  if ( (_DWORD)result == 4
    || (result = (unsigned int)(result - 10), (unsigned int)result <= 0x3E)
    && (v4 = 0x5000001BE0400043LL, _bittest64(&v4, result)) )
  {
    v5 = a2[1];
    if ( v5 > 1 )
    {
      result = *a2;
      v6 = 1;
      for ( i = *a2 + 24; ; i += 24 )
      {
        if ( *(_QWORD *)(i + 8) )
        {
          v8 = *(const char **)i;
          if ( **(_BYTE **)i == 45 )
          {
            result = (unsigned __int64)strchr(*(const char **)i, 115);
            if ( result )
            {
              result -= (unsigned __int64)v8;
              v9 = result;
              if ( result != -1 )
                break;
            }
          }
        }
        if ( ++v6 == v5 )
          return result;
      }
      *(_BYTE *)(a1 + 211) = 1;
      result = *(_QWORD *)(i + 8);
      if ( result )
      {
        v10 = result - 1;
        if ( v9 < result - 1 )
        {
          v11 = v9 + 1;
          if ( v9 + 1 < v10 )
          {
            v19 = v9;
            v17 = v10 - v11;
            memmove((void *)(*(_QWORD *)i + v9), (const void *)(*(_QWORD *)i + v11), v10 - v11);
            v9 = v17 + v19;
            v11 = v17 + v19 + 1;
          }
          v12 = *(const char **)i;
          if ( *(_QWORD *)(i + 16) < v11 )
          {
            v18 = v9;
            v16 = sub_96080(i, v12, v11, 1);
            v9 = v18;
            *(_QWORD *)i = v16;
            v12 = (const char *)v16;
          }
          *(_QWORD *)(i + 8) = v11;
          v12[v9] = 0;
          result = *(_QWORD *)(i + 8);
        }
        if ( result == 2 )
        {
          v13 = *a2;
          v14 = *a2 + 24 * v6;
          v15 = *(void **)v14;
          if ( *(_QWORD *)v14 )
          {
            *(_QWORD *)(v14 + 8) = 0;
            j__free(v15);
            v13 = *a2;
          }
          return (unsigned __int64)memmove((void *)v14, (const void *)(v14 + 24), v13 + 24 * a2[1]-- - v14 - 24);
        }
      }
    }
  }
  return result;
}

