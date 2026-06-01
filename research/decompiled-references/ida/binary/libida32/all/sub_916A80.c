signed __int64 __fastcall sub_916A80(char *a1, _QWORD *a2, unsigned __int64 a3, char *a4, _QWORD *a5)
{
  char *v5; // r9
  unsigned __int64 v6; // r11
  char *v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // r10
  __int64 v10; // rbp
  signed __int64 result; // rax
  char *v14; // rdi
  unsigned __int64 v15; // r9
  signed __int64 v18; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // r10
  __int64 v23; // rsi
  __int64 v24; // r8

  v5 = &a1[a4 - (char *)a2];
  if ( a3 < (unsigned __int64)v5 )
    v5 = (char *)a3;
  v6 = (unsigned __int64)(v5 - 7);
  if ( a1 >= v5 - 7 )
  {
    v8 = a2;
    v7 = a1;
  }
  else
  {
    if ( *a2 != *(_QWORD *)a1 )
    {
      _RAX = *(_QWORD *)a1 ^ *a2;
      __asm { tzcnt   rax, rax }
      result = (unsigned int)_RAX >> 3;
      goto LABEL_22;
    }
    v7 = a1 + 8;
    v8 = a2 + 1;
    if ( v6 > (unsigned __int64)(a1 + 8) )
    {
      v9 = a2[1];
      v10 = *((_QWORD *)a1 + 1);
      if ( v9 != v10 )
      {
LABEL_7:
        _R10 = v10 ^ v9;
        __asm { tzcnt   r9, r10 }
        result = &v7[(unsigned int)_R9 >> 3] - a1;
        if ( a4 == (char *)a2 + result )
          goto LABEL_8;
        return result;
      }
      while ( 1 )
      {
        v7 += 8;
        ++v8;
        if ( v6 <= (unsigned __int64)v7 )
          break;
        v9 = *v8;
        v10 = *(_QWORD *)v7;
        if ( *v8 != *(_QWORD *)v7 )
          goto LABEL_7;
      }
    }
  }
  if ( v7 < v5 - 3 && *(_DWORD *)v8 == *(_DWORD *)v7 )
  {
    v7 += 4;
    v8 = (__int64 *)((char *)v8 + 4);
  }
  if ( v7 < v5 - 1 && *(_WORD *)v8 == *(_WORD *)v7 )
  {
    v7 += 2;
    v8 = (__int64 *)((char *)v8 + 2);
  }
  if ( v5 > v7 )
    v7 += *(_BYTE *)v8 == (unsigned __int8)*v7;
  result = v7 - a1;
LABEL_22:
  if ( a4 == (char *)a2 + result )
  {
LABEL_8:
    v14 = &a1[result];
    v15 = a3 - 7;
    if ( (unsigned __int64)v14 >= a3 - 7 )
    {
      v21 = v14;
    }
    else
    {
      if ( *a5 != *(_QWORD *)v14 )
      {
        _RCX = *(_QWORD *)v14 ^ *a5;
        __asm { tzcnt   rcx, rcx }
        v18 = (unsigned int)_RCX >> 3;
LABEL_11:
        result += v18;
        return result;
      }
      v21 = v14 + 8;
      v22 = a5 + 1;
      if ( v15 > (unsigned __int64)(v14 + 8) )
      {
        v23 = a5[1];
        v24 = *((_QWORD *)v14 + 1);
        if ( v23 != v24 )
        {
LABEL_40:
          _RSI = v24 ^ v23;
          __asm { tzcnt   rsi, rsi }
          v18 = (char *)v21 + ((unsigned int)_RSI >> 3) - v14;
          goto LABEL_11;
        }
        while ( 1 )
        {
          ++v21;
          ++v22;
          if ( v15 <= (unsigned __int64)v21 )
            break;
          v23 = *v22;
          v24 = *v21;
          if ( *v22 != *v21 )
            goto LABEL_40;
        }
      }
      a5 = v22;
    }
    if ( (unsigned __int64)v21 < a3 - 3 && *(_DWORD *)a5 == *(_DWORD *)v21 )
    {
      v21 = (_QWORD *)((char *)v21 + 4);
      a5 = (_QWORD *)((char *)a5 + 4);
    }
    if ( (unsigned __int64)v21 < a3 - 1 && *(_WORD *)a5 == *(_WORD *)v21 )
    {
      v21 = (_QWORD *)((char *)v21 + 2);
      a5 = (_QWORD *)((char *)a5 + 2);
    }
    if ( a3 > (unsigned __int64)v21 )
      v21 = (_QWORD *)((char *)v21 + (*(_BYTE *)a5 == *(_BYTE *)v21));
    v18 = (char *)v21 - v14;
    goto LABEL_11;
  }
  return result;
}

