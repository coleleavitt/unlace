__int64 __fastcall sub_A72220(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  void *v10; // rdi
  int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // rbp
  void *v14; // rcx

  result = *(_QWORD *)a2;
  v4 = *(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8);
  v5 = *(__int64 **)a2;
  if ( *(_QWORD *)a2 == v4 )
  {
    if ( *(_DWORD *)(a2 + 12) )
      goto LABEL_27;
  }
  else
  {
    while ( (unsigned __int64)*v5 <= 1 )
    {
      if ( (__int64 *)v4 == ++v5 )
        goto LABEL_32;
    }
    if ( (__int64 *)v4 == v5 )
    {
LABEL_32:
      if ( !*(_DWORD *)(a2 + 12) )
        goto LABEL_15;
      v10 = *(void **)a2;
      v8 = *(unsigned int *)(a2 + 8);
      v9 = result + 8 * v8;
      goto LABEL_17;
    }
    v6 = *v5;
    if ( *v5 )
      goto LABEL_12;
LABEL_7:
    for ( result = (__int64)(v5 + 1); (__int64 *)v4 != v5 + 1; result = (__int64)(v5 + 1) )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)result;
        v5 = (__int64 *)result;
        if ( *(_QWORD *)result > 1u )
          break;
        result += 8;
        if ( v4 == result )
          goto LABEL_14;
      }
      if ( v4 == result )
        break;
LABEL_12:
      if ( (*(_DWORD *)(v6 + 8))-- != 1 )
        goto LABEL_7;
      sub_15D7BC0(a1, v6);
    }
LABEL_14:
    if ( *(_DWORD *)(a2 + 12) )
      goto LABEL_16;
  }
LABEL_15:
  if ( !*(_DWORD *)(a2 + 16) )
    return result;
LABEL_16:
  result = *(_QWORD *)a2;
  v8 = *(unsigned int *)(a2 + 8);
  v9 = *(_QWORD *)a2 + 8 * v8;
  v10 = *(void **)a2;
  if ( *(_QWORD *)a2 != v9 )
  {
LABEL_17:
    v11 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 8;
        if ( result == v9 )
          goto LABEL_21;
      }
      result += 8;
      ++v11;
    }
    while ( result != v9 );
LABEL_21:
    if ( (unsigned int)v8 <= 0x10 )
      goto LABEL_27;
    result = (unsigned int)(3 * v8);
    if ( (unsigned int)result >= 4 * v11 )
      goto LABEL_27;
    if ( v10 )
    {
      sub_186B220(v10);
      v12 = *(_DWORD *)(a2 + 8);
      *(_QWORD *)a2 = 0;
      v12 >>= 1;
      *(_DWORD *)(a2 + 8) = v12;
      v13 = v12;
      result = sub_186B270(8LL * v12);
      v14 = (void *)result;
      if ( !v12 )
      {
LABEL_26:
        *(_QWORD *)a2 = v14;
        goto LABEL_27;
      }
    }
    else
    {
      *(_QWORD *)a2 = 0;
      *(_DWORD *)(a2 + 8) = (unsigned int)v8 >> 1;
      v13 = (unsigned int)v8 >> 1;
      v14 = (void *)sub_186B270(8 * v13);
    }
    result = (__int64)memset(v14, 0, 8 * v13);
    v14 = (void *)result;
    goto LABEL_26;
  }
LABEL_27:
  *(_QWORD *)(a2 + 12) = 0;
  return result;
}

