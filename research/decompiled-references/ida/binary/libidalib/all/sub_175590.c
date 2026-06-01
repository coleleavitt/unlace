__int64 __fastcall sub_175590(_QWORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned int v11; // [rsp+Ch] [rbp-3Ch]

  result = a3 & 0xFFFFFFFD;
  v6 = a1[4];
  v7 = a1[3];
  v11 = a3 & 0xFFFFFFFD;
  v8 = v7 + 16 * v6;
  if ( v8 == v7 )
  {
    if ( v11 == 1 )
      return result;
LABEL_11:
    if ( a1[5] < (unsigned __int64)(v6 + 1) )
    {
      result = qvector_reserve();
      v6 = a1[4];
      a1[3] = result;
      v7 = result;
    }
    v10 = v7 + 16 * v6;
    *(_QWORD *)v10 = 0;
    *(_DWORD *)(v10 + 8) = 0;
    ++a1[4];
LABEL_15:
    *(_QWORD *)v10 = a2;
    *(_DWORD *)(v10 + 8) = a3;
    return result;
  }
  v9 = a1[3];
  while ( 1 )
  {
    v10 = v9;
    result = qthread_equal();
    if ( (_BYTE)result )
      break;
    v9 += 16;
    if ( v8 == v9 )
    {
      if ( v11 == 1 )
        return result;
      goto LABEL_10;
    }
  }
  if ( v11 != 1 )
  {
    if ( !v9 )
    {
LABEL_10:
      v6 = a1[4];
      v7 = a1[3];
      goto LABEL_11;
    }
    goto LABEL_15;
  }
  if ( v9 )
    return (__int64)memmove((void *)v9, (const void *)(v9 + 16), a1[3] + 16LL * a1[4]-- - v9 - 16);
  return result;
}

