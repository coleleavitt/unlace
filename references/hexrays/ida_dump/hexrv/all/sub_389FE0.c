_DWORD *__fastcall sub_389FE0(_QWORD *a1, _DWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // rdi
  _DWORD *v6; // rsi
  __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // rcx
  _DWORD *v10; // rax
  _DWORD *result; // rax

  v3 = a1[18];
  if ( !v3 )
  {
    sub_389CA0(a1);
    v3 = a1[18];
  }
  v4 = 4 * v3;
  v5 = (_DWORD *)a1[17];
  v6 = &v5[v4];
  v7 = (v4 * 4) >> 4;
  if ( v4 > 0 )
  {
    v8 = a2[1];
    do
    {
      while ( 1 )
      {
        v9 = v7 >> 1;
        v10 = &v5[4 * (v7 >> 1)];
        if ( v10[1] < v8 || v10[1] <= v8 && *v10 < *a2 )
          break;
        v7 >>= 1;
        if ( v9 <= 0 )
          goto LABEL_10;
      }
      v5 = v10 + 4;
      v7 = v7 - 1 - v9;
    }
    while ( v7 > 0 );
  }
LABEL_10:
  result = nullptr;
  if ( v6 != v5 && *v5 == *a2 && v5[1] == a2[1] )
    return v5 + 2;
  return result;
}
