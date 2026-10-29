__int64 __fastcall sub_C0DA60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r13
  __int64 *v7; // rbx
  __int64 v8; // rsi
  __int64 v10; // rsi
  void *v11; // rdi
  __int64 v12; // rdx
  int v13; // ecx
  unsigned int v14; // r12d
  size_t v15; // rbx
  _OWORD *v16; // rdx
  _OWORD *v17; // rcx
  size_t v18; // rsi

  result = *(_QWORD *)a3;
  v6 = *(_QWORD *)a3 + 16LL * *(unsigned int *)(a3 + 8);
  v7 = *(__int64 **)a3;
  if ( *(_QWORD *)a3 == v6 )
  {
    if ( *(_DWORD *)(a3 + 12) )
      goto LABEL_29;
  }
  else
  {
    while ( (unsigned __int64)*v7 <= 1 )
    {
      v7 += 2;
      if ( (__int64 *)v6 == v7 )
        goto LABEL_34;
    }
    if ( (__int64 *)v6 == v7 )
    {
LABEL_34:
      if ( !*(_DWORD *)(a3 + 12) )
        goto LABEL_15;
      v11 = *(void **)a3;
      v10 = *(unsigned int *)(a3 + 8);
      v12 = result + 16 * v10;
      goto LABEL_17;
    }
    v8 = *v7;
    if ( *v7 )
      goto LABEL_12;
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 80LL))(a2, v7[1]);
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
          goto LABEL_14;
      }
      if ( v6 == result )
        break;
LABEL_12:
      if ( (*(_DWORD *)(v8 + 8))-- == 1 )
        sub_15D7BC0(a1, v8);
    }
LABEL_14:
    if ( *(_DWORD *)(a3 + 12) )
      goto LABEL_16;
  }
LABEL_15:
  if ( !*(_DWORD *)(a3 + 16) )
    return result;
LABEL_16:
  result = *(_QWORD *)a3;
  v10 = *(unsigned int *)(a3 + 8);
  v11 = *(void **)a3;
  v12 = *(_QWORD *)a3 + 16 * v10;
  if ( *(_QWORD *)a3 != v12 )
  {
LABEL_17:
    v13 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( result == v12 )
          goto LABEL_21;
      }
      result += 16;
      ++v13;
    }
    while ( result != v12 );
LABEL_21:
    if ( (unsigned int)v10 <= 0x10 )
      goto LABEL_29;
    result = (unsigned int)(3 * v10);
    if ( (unsigned int)result >= 4 * v13 )
      goto LABEL_29;
    if ( v11 )
    {
      sub_186B220(v11);
      v14 = *(_DWORD *)(a3 + 8);
      *(_QWORD *)a3 = 0;
      v14 >>= 1;
      *(_DWORD *)(a3 + 8) = v14;
      v15 = v14;
      result = sub_186B270(v15 * 16);
      v16 = (_OWORD *)result;
      if ( !v14 )
      {
LABEL_28:
        *(_QWORD *)a3 = v16;
        goto LABEL_29;
      }
    }
    else
    {
      v18 = (unsigned int)v10 >> 1;
      *(_QWORD *)a3 = 0;
      *(_DWORD *)(a3 + 8) = v18;
      v15 = v18;
      v16 = (_OWORD *)sub_186B270(16 * v18);
    }
    v17 = &v16[v15];
    result = (__int64)v16;
    if ( ((v15 * 16) & 0x10) == 0 || (result = (__int64)(v16 + 1), *v16 = 0, v17 != v16 + 1) )
    {
      do
      {
        *(_OWORD *)result = 0;
        result += 32;
        *(_OWORD *)(result - 16) = 0;
      }
      while ( v17 != (_OWORD *)result );
    }
    goto LABEL_28;
  }
LABEL_29:
  *(_QWORD *)(a3 + 12) = 0;
  return result;
}

