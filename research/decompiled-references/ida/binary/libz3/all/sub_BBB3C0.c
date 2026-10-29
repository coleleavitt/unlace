_DWORD *__fastcall sub_BBB3C0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // r11
  __int64 v4; // rbx
  _DWORD *v5; // rax
  int v6; // edx
  __int64 v7; // r15
  unsigned int v8; // ecx
  _QWORD *v9; // rbp
  unsigned int v10; // r14d
  unsigned int v11; // r13d
  __int64 v12; // r15
  _DWORD *v13; // r10
  _DWORD *result; // rax
  _DWORD *v15; // rsi
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // r14
  _DWORD *v19; // rsi
  __int64 v20; // rdx
  unsigned int *v21; // rsi
  unsigned int *v22; // r11
  __int64 v23; // rdx
  __int64 v24; // rdx

  v3 = *a2;
  v4 = *a3;
  if ( !*(_WORD *)(*a2 + 4) )
  {
    v5 = *(_DWORD **)(*(_QWORD *)(v3 + 16) + 24LL);
    if ( v5 )
    {
      v6 = *(_DWORD *)(a1 + 1744);
      if ( *v5 == v6 && v5[1] == 2 && !*(_WORD *)(v4 + 4) )
      {
        result = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
        if ( result )
        {
          if ( v6 == *result && result[1] == 2 )
            return result;
        }
      }
    }
  }
  v7 = *(unsigned int *)(a1 + 1104);
  v8 = *(_DWORD *)(v3 + 12);
  v9 = *(_QWORD **)(a1 + 1096);
  v10 = v7 - 1;
  v11 = *(_DWORD *)(a1 + 1104);
  v12 = 8 * v7;
  v13 = &v9[(unsigned __int64)v12 / 8];
  result = (_DWORD *)(8LL * (v10 & v8));
  v15 = (_DWORD *)((char *)result + (_QWORD)v9);
  if ( result != (_DWORD *)v12 )
  {
    for ( result = (_DWORD *)((char *)result + (_QWORD)v9); v13 != result; result += 2 )
    {
      v16 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v16 + 12) == v8 && v3 == v16 )
        {
LABEL_19:
          result = sub_BB04C0(*(_QWORD **)(a1 + 1096), v11, v4);
          if ( !result )
          {
            v21 = (unsigned int *)v4;
            return (_DWORD *)sub_BBB240(a1, v21);
          }
          goto LABEL_11;
        }
      }
      else if ( !v16 )
      {
        goto LABEL_11;
      }
    }
  }
  if ( v9 != (_QWORD *)v15 )
  {
    for ( result = *(_DWORD **)(a1 + 1096); v15 != result; result += 2 )
    {
      v23 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v23 + 12) == v8 && v3 == v23 )
          goto LABEL_19;
      }
      else if ( !v23 )
      {
        break;
      }
    }
  }
LABEL_11:
  v17 = *(_DWORD *)(v4 + 12);
  v18 = 8LL * (v17 & v10);
  v19 = &v9[(unsigned __int64)v18 / 8];
  if ( v12 == v18 )
  {
LABEL_32:
    if ( v9 != (_QWORD *)v19 )
    {
      result = v9;
      while ( 1 )
      {
        v24 = *(_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
        {
          if ( *(_DWORD *)(v24 + 12) == v17 && v4 == v24 )
            goto LABEL_22;
        }
        else if ( !v24 )
        {
          return result;
        }
        result += 2;
        if ( v19 == result )
          return result;
      }
    }
    return result;
  }
  result = &v9[(unsigned __int64)v18 / 8];
  while ( 1 )
  {
    v20 = *(_QWORD *)result;
    if ( *(_QWORD *)result > 1u )
      break;
    if ( !v20 )
      return result;
LABEL_15:
    result += 2;
    if ( v13 == result )
      goto LABEL_32;
  }
  if ( *(_DWORD *)(v20 + 12) != v17 || v4 != v20 )
    goto LABEL_15;
LABEL_22:
  result = sub_BB04C0(v9, v11, v3);
  if ( !result )
  {
    v21 = v22;
    return (_DWORD *)sub_BBB240(a1, v21);
  }
  return result;
}

