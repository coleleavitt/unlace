_QWORD *__fastcall sub_1EB4570(char *a1)
{
  _QWORD *result; // rax
  unsigned int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rdx
  _QWORD *i; // rdx
  __int64 v7; // rsi
  bool v8; // zf
  __int64 v9; // rdx
  _QWORD *j; // rdx
  unsigned int v11; // eax
  unsigned int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rdx

  result = (_QWORD *)(*(_DWORD *)a1 >> 1);
  if ( *(_DWORD *)a1 >> 1 )
  {
    if ( (*a1 & 1) == 0 )
    {
      v2 = 4 * (_DWORD)result;
      goto LABEL_4;
    }
LABEL_12:
    result = a1 + 8;
    v4 = 8;
    goto LABEL_7;
  }
  if ( !*((_DWORD *)a1 + 1) )
    return result;
  v2 = 0;
  if ( (*a1 & 1) != 0 )
    goto LABEL_12;
LABEL_4:
  v3 = *((unsigned int *)a1 + 4);
  if ( (unsigned int)v3 <= v2 || (unsigned int)v3 <= 0x40 )
  {
    result = *((_QWORD **)a1 + 1);
    v4 = 2 * v3;
LABEL_7:
    for ( i = &result[v4]; result != i; result += 2 )
      *result = -4096;
    *(_QWORD *)a1 &= 1uLL;
    return result;
  }
  if ( !(_DWORD)result )
  {
    v7 = (unsigned int)v3;
LABEL_16:
    operator delete(*((_QWORD *)a1 + 1), 16 * v7, 8);
    *a1 |= 1u;
    goto LABEL_17;
  }
  v11 = (_DWORD)result - 1;
  if ( !v11 )
  {
    v7 = *((unsigned int *)a1 + 4);
    goto LABEL_16;
  }
  _BitScanReverse(&v11, v11);
  v12 = 1 << (33 - (v11 ^ 0x1F));
  if ( v12 - 5 > 0x3A )
  {
    if ( (_DWORD)v3 == v12 )
    {
      v8 = (*(_QWORD *)a1 & 1LL) == 0;
      *(_QWORD *)a1 &= 1uLL;
      if ( v8 )
      {
        result = *((_QWORD **)a1 + 1);
        v20 = 2 * v3;
      }
      else
      {
        result = a1 + 8;
        v20 = 8;
      }
      v21 = &result[v20];
      do
      {
        *result = -4096;
        result += 2;
      }
      while ( v21 != result );
      return result;
    }
    operator delete(*((_QWORD *)a1 + 1), 16 * v3, 8);
    v17 = *a1 | 1;
    *a1 = v17;
    if ( v12 <= 4 )
      goto LABEL_17;
    v18 = 16LL * v12;
  }
  else
  {
    v12 = 64;
    operator delete(*((_QWORD *)a1 + 1), 16 * v3, 8);
    v17 = *a1;
    v18 = 1024;
  }
  *a1 = v17 & 0xFE;
  v19 = sub_22300B0(v18, 8, v13, v14, v15, v16);
  *((_DWORD *)a1 + 4) = v12;
  *((_QWORD *)a1 + 1) = v19;
LABEL_17:
  v8 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v8 )
  {
    result = *((_QWORD **)a1 + 1);
    v9 = 2LL * *((unsigned int *)a1 + 4);
  }
  else
  {
    result = a1 + 8;
    v9 = 8;
  }
  for ( j = &result[v9]; j != result; result += 2 )
    *result = -4096;
  return result;
}
