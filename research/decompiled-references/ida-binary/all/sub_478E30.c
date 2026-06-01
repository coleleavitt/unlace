__int64 __fastcall sub_478E30(_QWORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  _QWORD *v8; // rbp
  _QWORD *v9; // r15
  _QWORD *v10; // rbx
  unsigned int v11; // [rsp+Ch] [rbp-3Ch]

  result = a3 & 0xFFFFFFFD;
  v6 = a1[4];
  v7 = a1[3];
  v11 = a3 & 0xFFFFFFFD;
  v8 = (_QWORD *)(v7 + 16 * v6);
  if ( v8 == (_QWORD *)v7 )
  {
    if ( v11 == 1 )
      return result;
LABEL_11:
    if ( a1[5] < (unsigned __int64)(v6 + 1) )
    {
      result = qvector_reserve(a1 + 3, v7, v6 + 1, 16);
      v6 = a1[4];
      a1[3] = result;
      v7 = result;
    }
    v10 = (_QWORD *)(v7 + 16 * v6);
    *v10 = 0;
    *((_DWORD *)v10 + 2) = 0;
    ++a1[4];
LABEL_15:
    *v10 = a2;
    *((_DWORD *)v10 + 2) = a3;
    return result;
  }
  v9 = (_QWORD *)a1[3];
  while ( 1 )
  {
    v10 = v9;
    result = qthread_equal(*v9, a2);
    if ( (_BYTE)result )
      break;
    v9 += 2;
    if ( v8 == v9 )
    {
      if ( v11 == 1 )
        return result;
      goto LABEL_10;
    }
  }
  if ( v11 != 1 )
  {
    if ( !v9 )
    {
LABEL_10:
      v6 = a1[4];
      v7 = a1[3];
      goto LABEL_11;
    }
    goto LABEL_15;
  }
  if ( v9 )
    return (__int64)memmove(v9, v9 + 2, a1[3] + 16LL * a1[4]-- - (_QWORD)v9 - 16);
  return result;
}
