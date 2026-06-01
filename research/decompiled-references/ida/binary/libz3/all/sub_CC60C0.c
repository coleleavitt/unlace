__int64 __fastcall sub_CC60C0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rsi
  bool v8; // zf
  __int64 v9; // rsi
  void *v10; // rdi
  __int64 v11; // rdx
  int v12; // ecx
  unsigned int v13; // ebp
  size_t v14; // rbx
  _OWORD *v15; // rdx
  _OWORD *v16; // rcx
  size_t v17; // rsi

  result = *(_QWORD *)a2;
  v4 = *(__int64 **)a2;
  v5 = *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8);
  if ( *(_QWORD *)a2 == v5 )
  {
    if ( *(_DWORD *)(a2 + 12) )
      goto LABEL_32;
  }
  else
  {
    while ( (unsigned __int64)*v4 <= 1 )
    {
      v4 += 2;
      if ( (__int64 *)v5 == v4 )
        goto LABEL_37;
    }
    if ( (__int64 *)v5 == v4 )
    {
LABEL_37:
      if ( !*(_DWORD *)(a2 + 12) )
        goto LABEL_18;
      v10 = *(void **)a2;
      v9 = *(unsigned int *)(a2 + 8);
      v11 = result + 16 * v9;
      goto LABEL_20;
    }
    v6 = *v4;
    if ( *v4 )
      goto LABEL_15;
    while ( 1 )
    {
      v7 = v4[1];
      if ( v7 )
      {
        v8 = (*(_DWORD *)(v7 + 8))-- == 1;
        if ( v8 )
          sub_15D7BC0(a1, v7);
      }
      result = (__int64)(v4 + 2);
      if ( (__int64 *)v5 == v4 + 2 )
        break;
      while ( 1 )
      {
        v6 = *(_QWORD *)result;
        v4 = (__int64 *)result;
        if ( *(_QWORD *)result > 1u )
          break;
        result += 16;
        if ( v5 == result )
          goto LABEL_17;
      }
      if ( v5 == result )
        break;
LABEL_15:
      v8 = (*(_DWORD *)(v6 + 8))-- == 1;
      if ( v8 )
        sub_15D7BC0(a1, v6);
    }
LABEL_17:
    if ( *(_DWORD *)(a2 + 12) )
      goto LABEL_19;
  }
LABEL_18:
  if ( !*(_DWORD *)(a2 + 16) )
    return result;
LABEL_19:
  result = *(_QWORD *)a2;
  v9 = *(unsigned int *)(a2 + 8);
  v10 = *(void **)a2;
  v11 = *(_QWORD *)a2 + 16 * v9;
  if ( *(_QWORD *)a2 != v11 )
  {
LABEL_20:
    v12 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( result == v11 )
          goto LABEL_24;
      }
      result += 16;
      ++v12;
    }
    while ( result != v11 );
LABEL_24:
    if ( (unsigned int)v9 <= 0x10 )
      goto LABEL_32;
    result = (unsigned int)(3 * v9);
    if ( (unsigned int)result >= 4 * v12 )
      goto LABEL_32;
    if ( v10 )
    {
      sub_186B220(v10);
      v13 = *(_DWORD *)(a2 + 8);
      *(_QWORD *)a2 = 0;
      v13 >>= 1;
      *(_DWORD *)(a2 + 8) = v13;
      v14 = v13;
      result = sub_186B270(v14 * 16);
      v15 = (_OWORD *)result;
      if ( !v13 )
      {
LABEL_31:
        *(_QWORD *)a2 = v15;
        goto LABEL_32;
      }
    }
    else
    {
      v17 = (unsigned int)v9 >> 1;
      *(_QWORD *)a2 = 0;
      *(_DWORD *)(a2 + 8) = v17;
      v14 = v17;
      v15 = (_OWORD *)sub_186B270(16 * v17);
    }
    v16 = &v15[v14];
    result = (__int64)v15;
    if ( ((v14 * 16) & 0x10) == 0 || (result = (__int64)(v15 + 1), *v15 = 0, v16 != v15 + 1) )
    {
      do
      {
        *(_OWORD *)result = 0;
        result += 32;
        *(_OWORD *)(result - 16) = 0;
      }
      while ( v16 != (_OWORD *)result );
    }
    goto LABEL_31;
  }
LABEL_32:
  *(_QWORD *)(a2 + 12) = 0;
  return result;
}

