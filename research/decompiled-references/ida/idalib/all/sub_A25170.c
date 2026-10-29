_QWORD *__fastcall sub_A25170(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rsi
  __int64 v4; // r12
  _QWORD *v6; // rbp
  volatile signed __int32 *v7; // r13
  volatile signed __int32 *v8; // rdi
  __int64 v10; // r13
  volatile signed __int32 *v11; // rdi

  v3 = a2 - (_QWORD)a1;
  v4 = v3 >> 4;
  if ( v3 <= 0 )
    return a3;
  v6 = a1;
  if ( &_pthread_key_create )
  {
    do
    {
      v7 = (volatile signed __int32 *)v6[1];
      v8 = (volatile signed __int32 *)a3[1];
      *a3 = *v6;
      if ( v7 != v8 )
      {
        if ( v7 )
        {
          _InterlockedAdd(v7 + 2, 1u);
          v8 = (volatile signed __int32 *)a3[1];
        }
        if ( v8 )
          sub_4343A0(v8);
        a3[1] = v7;
      }
      v6 += 2;
      a3 += 2;
      --v4;
    }
    while ( v4 );
    return a3;
  }
  do
  {
    v10 = v6[1];
    v11 = (volatile signed __int32 *)a3[1];
    *a3 = *v6;
    if ( (volatile signed __int32 *)v10 != v11 )
    {
      if ( v10 )
        ++*(_DWORD *)(v10 + 8);
      if ( v11 )
        sub_4343A0(v11);
      a3[1] = v10;
    }
    v6 += 2;
    a3 += 2;
    --v4;
  }
  while ( v4 );
  return a3;
}
