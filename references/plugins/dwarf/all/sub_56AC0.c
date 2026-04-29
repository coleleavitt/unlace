__int64 __fastcall sub_56AC0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rbp
  _QWORD *v7; // r13
  __int64 v8; // r14
  __int64 i; // rbx
  __int64 v10; // rbp
  const char *v11; // rsi
  __int64 v13; // [rsp+8h] [rbp-40h]

  v4 = a1[1];
  v13 = -1;
  if ( a3 )
  {
    v5 = *a1 + 8 * v4;
    v6 = (_QWORD *)*a1;
    if ( *a1 != v5 )
    {
      do
      {
        if ( a3 == *v6 )
          break;
        ++v6;
      }
      while ( (_QWORD *)v5 != v6 );
    }
    v13 = ((__int64)v6 - *a1) >> 3;
  }
  if ( (int)v4 <= 0 )
    return 0;
  v7 = (_QWORD *)*a1;
  v8 = (unsigned int)(v4 - 1);
  for ( i = 0; ; ++i )
  {
    v10 = v7[i];
    if ( *(_QWORD *)(v10 + 320) > 1u )
    {
      v11 = src;
      if ( *(_QWORD *)(a2 + 8) )
        v11 = *(const char **)a2;
      if ( !strcmp(*(const char **)(v10 + 312), v11) && i >= v13 )
        break;
    }
    if ( v8 == i )
      return 0;
  }
  return v10;
}
