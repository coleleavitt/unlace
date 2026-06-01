__int64 __fastcall sub_76E360(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r13
  __int64 *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rsi
  bool v10; // zf
  __int64 v11; // rsi
  void *v12; // rdi
  __int64 v13; // rdx
  int v14; // ecx
  unsigned int v15; // ebp
  size_t v16; // rbx
  _OWORD *v17; // rdx
  _OWORD *v18; // rcx
  size_t v19; // rsi

  result = *(_QWORD *)a3;
  v6 = *(_QWORD *)a3 + 16LL * *(unsigned int *)(a3 + 8);
  v7 = *(__int64 **)a3;
  if ( *(_QWORD *)a3 == v6 )
  {
    if ( *(_DWORD *)(a3 + 12) )
      goto LABEL_32;
  }
  else
  {
    while ( (unsigned __int64)*v7 <= 1 )
    {
      v7 += 2;
      if ( (__int64 *)v6 == v7 )
        goto LABEL_37;
    }
    if ( (__int64 *)v6 == v7 )
    {
LABEL_37:
      if ( !*(_DWORD *)(a3 + 12) )
        goto LABEL_18;
      v12 = *(void **)a3;
      v11 = *(unsigned int *)(a3 + 8);
      v13 = result + 16 * v11;
      goto LABEL_20;
    }
    v8 = *v7;
    if ( *v7 )
      goto LABEL_15;
    while ( 1 )
    {
      v9 = v7[1];
      if ( v9 )
      {
        v10 = (*(_DWORD *)(v9 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(a2, v9);
      }
      result = (__int64)(v7 + 2);
      if ( (__int64 *)v6 == v7 + 2 )
        break;
      while ( 1 )
      {
        v8 = *(_QWORD *)result;
        v7 = (__int64 *)result;
        if ( *(_QWORD *)result > 1u )
          break;
        result += 16;
        if ( v6 == result )
          goto LABEL_17;
      }
      if ( v6 == result )
        break;
LABEL_15:
      v10 = (*(_DWORD *)(v8 + 8))-- == 1;
      if ( v10 )
        sub_15D7BC0(a1, v8);
    }
LABEL_17:
    if ( *(_DWORD *)(a3 + 12) )
      goto LABEL_19;
  }
LABEL_18:
  if ( !*(_DWORD *)(a3 + 16) )
    return result;
LABEL_19:
  result = *(_QWORD *)a3;
  v11 = *(unsigned int *)(a3 + 8);
  v12 = *(void **)a3;
  v13 = *(_QWORD *)a3 + 16 * v11;
  if ( *(_QWORD *)a3 != v13 )
  {
LABEL_20:
    v14 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( result == v13 )
          goto LABEL_24;
      }
      result += 16;
      ++v14;
    }
    while ( result != v13 );
LABEL_24:
    if ( (unsigned int)v11 <= 0x10 )
      goto LABEL_32;
    result = (unsigned int)(3 * v11);
    if ( (unsigned int)result >= 4 * v14 )
      goto LABEL_32;
    if ( v12 )
    {
      sub_186B220(v12);
      v15 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)a3 = 0;
      v15 >>= 1;
      *(_DWORD *)(a3 + 8) = v15;
      v16 = v15;
      result = sub_186B270(v16 * 16);
      v17 = (_OWORD *)result;
      if ( !v15 )
      {
LABEL_31:
        *(_QWORD *)a3 = v17;
        goto LABEL_32;
      }
    }
    else
    {
      v19 = (unsigned int)v11 >> 1;
      *(_QWORD *)a3 = 0;
      *(_DWORD *)(a3 + 8) = v19;
      v16 = v19;
      v17 = (_OWORD *)sub_186B270(16 * v19);
    }
    v18 = &v17[v16];
    result = (__int64)v17;
    if ( ((v16 * 16) & 0x10) == 0 || (result = (__int64)(v17 + 1), *v17 = 0, v18 != v17 + 1) )
    {
      do
      {
        *(_OWORD *)result = 0;
        result += 32;
        *(_OWORD *)(result - 16) = 0;
      }
      while ( v18 != (_OWORD *)result );
    }
    goto LABEL_31;
  }
LABEL_32:
  *(_QWORD *)(a3 + 12) = 0;
  return result;
}

