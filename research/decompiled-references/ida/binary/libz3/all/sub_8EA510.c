unsigned __int64 __fastcall sub_8EA510(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  unsigned __int64 result; // rax
  _DWORD *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r10
  _DWORD *v9; // rsi
  __int64 v10; // r9
  _DWORD *v11; // rdi
  int v12; // edx
  _DWORD *i; // rax
  int v14; // edx
  int v15; // edx
  _DWORD *v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // edx
  int v21; // eax

  v2 = *(_QWORD *)(a1 + 9400);
  v4 = a2 >> 5;
  if ( v2 && (unsigned int)v4 < *(_DWORD *)(v2 - 4) )
    *(_DWORD *)(v2 + 4 * v4) &= __ROL4__(-2, a2);
  result = *(unsigned int *)(a1 + 9424);
  v6 = *(_DWORD **)(a1 + 9416);
  v7 = a2 & ((_DWORD)result - 1);
  v8 = 24 * result;
  v9 = &v6[6 * result];
  v10 = 24 * v7;
  v11 = &v6[6 * v7];
  if ( 24 * v7 != 24 * result )
  {
    result = (unsigned __int64)&v6[6 * v7];
    do
    {
      v12 = *(_DWORD *)(result + 4);
      if ( v12 == 2 )
      {
        if ( a2 == *(_DWORD *)result && a2 == *(_DWORD *)(result + 8) )
        {
          i = v11;
          goto LABEL_23;
        }
      }
      else if ( !v12 )
      {
        return result;
      }
      result += 24LL;
    }
    while ( v9 != (_DWORD *)result );
  }
  if ( v6 == v11 )
    return result;
  result = (unsigned __int64)v6;
  while ( 1 )
  {
    v14 = *(_DWORD *)(result + 4);
    if ( v14 != 2 )
    {
      if ( !v14 )
        return result;
      goto LABEL_15;
    }
    if ( a2 == *(_DWORD *)result && a2 == *(_DWORD *)(result + 8) )
      break;
LABEL_15:
    result += 24LL;
    if ( v11 == (_DWORD *)result )
      return result;
  }
  i = v11;
  if ( v10 == v8 )
  {
LABEL_41:
    if ( v6 != v11 )
    {
      for ( i = v6; v11 != i; i += 6 )
      {
        v20 = i[1];
        if ( v20 == 2 )
        {
          if ( a2 == *i && a2 == i[2] )
            goto LABEL_26;
        }
        else if ( !v20 )
        {
          break;
        }
      }
    }
LABEL_57:
    BUG();
  }
LABEL_23:
  while ( 2 )
  {
    v15 = i[1];
    if ( v15 != 2 )
    {
      if ( !v15 )
        goto LABEL_57;
LABEL_22:
      i += 6;
      if ( v9 == i )
        goto LABEL_41;
      continue;
    }
    break;
  }
  if ( a2 != *i || a2 != i[2] )
    goto LABEL_22;
LABEL_26:
  result = *((_QWORD *)i + 2);
  if ( !result )
    return result;
  result = *(unsigned int *)(result - 4);
  if ( !(_DWORD)result )
    return result;
  if ( v10 == v8 )
  {
LABEL_49:
    if ( v6 != v11 )
    {
      while ( 1 )
      {
        v21 = v6[1];
        if ( v21 == 2 )
        {
          if ( a2 == *v6 && a2 == v6[2] )
          {
            v16 = v6;
            goto LABEL_35;
          }
        }
        else if ( !v21 )
        {
          goto LABEL_57;
        }
        v6 += 6;
        if ( v11 == v6 )
          goto LABEL_57;
      }
    }
    goto LABEL_57;
  }
  v16 = v11;
  while ( 2 )
  {
    v17 = v16[1];
    if ( v17 != 2 )
    {
      if ( !v17 )
        goto LABEL_57;
LABEL_31:
      v16 += 6;
      if ( v9 == v16 )
        goto LABEL_49;
      continue;
    }
    break;
  }
  if ( a2 != *v16 || a2 != v16[2] )
    goto LABEL_31;
LABEL_35:
  v18 = 0x7FFFFFFF8LL;
  result = *((_QWORD *)v16 + 2);
  if ( result )
    v18 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
  v19 = *(_QWORD *)(result + v18);
  if ( v19 )
  {
    sub_186B220((void *)(v19 - 8));
    result = *((_QWORD *)v16 + 2);
  }
  --*(_DWORD *)(result - 4);
  return result;
}

