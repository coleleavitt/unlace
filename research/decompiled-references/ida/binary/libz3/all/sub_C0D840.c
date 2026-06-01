__int64 __fastcall sub_C0D840(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v8; // rsi
  void *v9; // rdi
  __int64 v10; // rdx
  int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // rbp
  __int64 v14; // rcx

  result = *(_QWORD *)a2;
  v4 = *(__int64 **)a2;
  v5 = *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8);
  if ( *(_QWORD *)a2 == v5 )
  {
    if ( *(_DWORD *)(a2 + 12) )
      goto LABEL_28;
  }
  else
  {
    while ( (unsigned __int64)*v4 <= 1 )
    {
      v4 += 2;
      if ( (__int64 *)v5 == v4 )
        goto LABEL_33;
    }
    if ( (__int64 *)v5 == v4 )
    {
LABEL_33:
      if ( !*(_DWORD *)(a2 + 12) )
        goto LABEL_15;
      v9 = *(void **)a2;
      v8 = *(unsigned int *)(a2 + 8);
      v10 = result + 16 * v8;
      goto LABEL_17;
    }
    v6 = *v4;
    if ( *v4 )
      goto LABEL_12;
LABEL_7:
    for ( result = (__int64)(v4 + 2); (__int64 *)v5 != v4 + 2; result = (__int64)(v4 + 2) )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)result;
        v4 = (__int64 *)result;
        if ( *(_QWORD *)result > 1u )
          break;
        result += 16;
        if ( v5 == result )
          goto LABEL_14;
      }
      if ( v5 == result )
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
  v9 = *(void **)a2;
  v10 = *(_QWORD *)a2 + 16 * v8;
  if ( *(_QWORD *)a2 != v10 )
  {
LABEL_17:
    v11 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( result == v10 )
          goto LABEL_21;
      }
      result += 16;
      ++v11;
    }
    while ( result != v10 );
LABEL_21:
    if ( (unsigned int)v8 <= 0x10 )
      goto LABEL_28;
    result = (unsigned int)(3 * v8);
    if ( (unsigned int)result >= 4 * v11 )
      goto LABEL_28;
    if ( v9 )
    {
      sub_186B220(v9);
      v12 = *(_DWORD *)(a2 + 8);
      *(_QWORD *)a2 = 0;
      v12 >>= 1;
      *(_DWORD *)(a2 + 8) = v12;
      v13 = v12;
      result = sub_186B270(16LL * v12);
      v14 = result;
      if ( !v12 )
      {
LABEL_27:
        *(_QWORD *)a2 = v14;
        goto LABEL_28;
      }
    }
    else
    {
      *(_QWORD *)a2 = 0;
      *(_DWORD *)(a2 + 8) = (unsigned int)v8 >> 1;
      v13 = (unsigned int)v8 >> 1;
      v14 = sub_186B270(16 * v13);
    }
    result = v14;
    do
    {
      *(_QWORD *)result = 0;
      result += 16;
      *(_DWORD *)(result - 8) = 0;
    }
    while ( result != v14 + 16 * v13 );
    goto LABEL_27;
  }
LABEL_28:
  *(_QWORD *)(a2 + 12) = 0;
  return result;
}

