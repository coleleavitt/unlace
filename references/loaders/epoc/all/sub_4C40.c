_UNKNOWN **__fastcall sub_4C40(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 i; // r12
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi
  _UNKNOWN **result; // rax

  *a1 = off_129E8;
  v2 = a1[15];
  if ( v2 )
  {
    v3 = a1[16];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = (__int64 *)(v2 + v4);
        v7 = *(_QWORD *)(v2 + v4 + 24);
        if ( v7 )
        {
          v6[4] = 0;
          qfree(v7);
        }
        v8 = *v6;
        if ( *v6 )
        {
          v6[1] = 0;
          qfree(v8);
        }
        v2 = a1[15];
        v4 += 56;
      }
    }
    a1[16] = 0;
    qfree(v2);
  }
  v9 = a1[12];
  if ( v9 )
  {
    a1[13] = 0;
    qfree(v9);
  }
  v10 = a1[6];
  while ( v10 )
  {
    v11 = (_QWORD *)v10;
    sub_4980(*(_QWORD **)(v10 + 24));
    v12 = *(_QWORD *)(v10 + 40);
    v10 = *(_QWORD *)(v10 + 16);
    if ( v12 )
    {
      v11[6] = 0;
      qfree(v12);
    }
    operator delete(v11, 0x40u);
  }
  v13 = a1[1];
  result = &off_12D18;
  *a1 = &off_12D18;
  if ( v13 )
  {
    a1[2] = 0;
    return (_UNKNOWN **)qfree(v13);
  }
  return result;
}
