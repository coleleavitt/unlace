_QWORD *__fastcall sub_20A0EF0(__int64 a1)
{
  _QWORD *result; // rax
  unsigned int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rdx
  _QWORD *i; // rdx
  unsigned int v7; // eax
  unsigned int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rdx
  _QWORD *j; // rdx
  __int64 v19; // rdx
  _QWORD *v20; // rdx

  result = (_QWORD *)(*(_DWORD *)a1 >> 1);
  if ( *(_DWORD *)a1 >> 1 )
  {
    if ( (*(_BYTE *)a1 & 1) == 0 )
    {
      v2 = 4 * (_DWORD)result;
      goto LABEL_4;
    }
LABEL_12:
    result = (_QWORD *)(a1 + 8);
    v4 = 12;
    goto LABEL_7;
  }
  if ( !*(_DWORD *)(a1 + 4) )
    return result;
  v2 = 0;
  if ( (*(_BYTE *)a1 & 1) != 0 )
    goto LABEL_12;
LABEL_4:
  v3 = *(unsigned int *)(a1 + 16);
  if ( (unsigned int)v3 <= v2 || (unsigned int)v3 <= 0x40 )
  {
    result = *(_QWORD **)(a1 + 8);
    v4 = 3 * v3;
LABEL_7:
    for ( i = &result[v4]; result != i; result += 3 )
      *result = -4096;
    *(_QWORD *)a1 &= 1uLL;
    return result;
  }
  if ( (_DWORD)result && (v7 = (_DWORD)result - 1) != 0 )
  {
    _BitScanReverse(&v7, v7);
    v8 = 1 << (33 - (v7 ^ 0x1F));
    if ( v8 - 5 <= 0x3A )
    {
      sub_20A0EC0(a1);
      v8 = 64;
      v14 = 1536;
      v12 = *(_BYTE *)a1;
    }
    else
    {
      if ( (_DWORD)v3 == v8 )
      {
        v16 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        if ( v16 )
        {
          result = *(_QWORD **)(a1 + 8);
          v19 = 3 * v3;
        }
        else
        {
          result = (_QWORD *)(a1 + 8);
          v19 = 12;
        }
        v20 = &result[v19];
        do
        {
          *result = -4096;
          result += 3;
        }
        while ( v20 != result );
        return result;
      }
      sub_20A0EC0(a1);
      v12 = *(_BYTE *)a1 | 1;
      *(_BYTE *)a1 = v12;
      if ( v8 <= 4 )
        goto LABEL_22;
      v13 = v8;
      v14 = 24LL * v8;
    }
    *(_BYTE *)a1 = v12 & 0xFE;
    v15 = sub_22300B0(v14, 8, v13, v9, v10, v11);
    *(_DWORD *)(a1 + 16) = v8;
    *(_QWORD *)(a1 + 8) = v15;
  }
  else
  {
    sub_20A0EC0(a1);
    *(_BYTE *)a1 |= 1u;
  }
LABEL_22:
  v16 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v16 )
  {
    result = *(_QWORD **)(a1 + 8);
    v17 = 3LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    result = (_QWORD *)(a1 + 8);
    v17 = 12;
  }
  for ( j = &result[v17]; j != result; result += 3 )
    *result = -4096;
  return result;
}
