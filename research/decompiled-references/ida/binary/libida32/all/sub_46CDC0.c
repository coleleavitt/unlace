_DWORD *__fastcall sub_46CDC0(_DWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rsi
  _DWORD *result; // rax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // r8
  unsigned int *v8; // rsi

  v3 = a2 - (_QWORD)a1;
  result = a1;
  v5 = v3 >> 6;
  if ( v3 > 0 )
  {
    v6 = *a3;
    do
    {
      while ( 1 )
      {
        v7 = v5 >> 1;
        v8 = &result[16 * (v5 >> 1)];
        if ( v6 >= *v8 && (*v8 != v6 || v8[1] < a3[1]) )
          break;
        v5 >>= 1;
        if ( v7 <= 0 )
          return result;
      }
      result = v8 + 16;
      v5 = v5 - 1 - v7;
    }
    while ( v5 > 0 );
  }
  return result;
}

