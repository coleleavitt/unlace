__int64 __fastcall sub_643660(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rbp
  void **v5; // r13
  __int64 v6; // rsi
  void *v7; // rdi
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int v10; // ebp
  size_t v11; // rbx
  _OWORD *v12; // rdx
  _OWORD *v13; // rcx
  size_t v14; // rsi

  result = *(_QWORD *)a1;
  v3 = *(_QWORD **)a1;
  v4 = *(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 == v4 )
  {
    if ( *(_DWORD *)(a1 + 12) )
      goto LABEL_30;
  }
  else
  {
    while ( *v3 <= 1u )
    {
      v3 += 2;
      if ( (_QWORD *)v4 == v3 )
        goto LABEL_35;
    }
    if ( (_QWORD *)v4 == v3 )
    {
LABEL_35:
      if ( !*(_DWORD *)(a1 + 12) )
        goto LABEL_16;
      v7 = *(void **)a1;
      v6 = *(unsigned int *)(a1 + 8);
      v8 = result + 16 * v6;
      goto LABEL_18;
    }
    do
    {
      v5 = (void **)v3[1];
      if ( v5 )
      {
        if ( *v5 )
          sub_186B220(*v5);
        sub_186B220(v5);
      }
      result = (__int64)(v3 + 2);
      if ( (_QWORD *)v4 == v3 + 2 )
        break;
      while ( 1 )
      {
        v3 = (_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
          break;
        result += 16;
        if ( v4 == result )
          goto LABEL_15;
      }
    }
    while ( v4 != result );
LABEL_15:
    if ( *(_DWORD *)(a1 + 12) )
      goto LABEL_17;
  }
LABEL_16:
  if ( !*(_DWORD *)(a1 + 16) )
    return result;
LABEL_17:
  result = *(_QWORD *)a1;
  v6 = *(unsigned int *)(a1 + 8);
  v7 = *(void **)a1;
  v8 = *(_QWORD *)a1 + 16 * v6;
  if ( *(_QWORD *)a1 != v8 )
  {
LABEL_18:
    v9 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( result == v8 )
          goto LABEL_22;
      }
      result += 16;
      ++v9;
    }
    while ( result != v8 );
LABEL_22:
    if ( (unsigned int)v6 <= 0x10 )
      goto LABEL_30;
    result = (unsigned int)(3 * v6);
    if ( (unsigned int)result >= 4 * v9 )
      goto LABEL_30;
    if ( v7 )
    {
      sub_186B220(v7);
      v10 = *(_DWORD *)(a1 + 8);
      *(_QWORD *)a1 = 0;
      v10 >>= 1;
      *(_DWORD *)(a1 + 8) = v10;
      v11 = v10;
      result = sub_186B270(v11 * 16);
      v12 = (_OWORD *)result;
      if ( !v10 )
      {
LABEL_29:
        *(_QWORD *)a1 = v12;
        goto LABEL_30;
      }
    }
    else
    {
      v14 = (unsigned int)v6 >> 1;
      *(_QWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = v14;
      v11 = v14;
      v12 = (_OWORD *)sub_186B270(16 * v14);
    }
    v13 = &v12[v11];
    result = (__int64)v12;
    if ( ((v11 * 16) & 0x10) == 0 || (result = (__int64)(v12 + 1), *v12 = 0, v13 != v12 + 1) )
    {
      do
      {
        *(_OWORD *)result = 0;
        result += 32;
        *(_OWORD *)(result - 16) = 0;
      }
      while ( v13 != (_OWORD *)result );
    }
    goto LABEL_29;
  }
LABEL_30:
  *(_QWORD *)(a1 + 12) = 0;
  return result;
}

