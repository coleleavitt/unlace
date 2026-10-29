__int64 sub_AC140()
{
  const void *v0; // rbx
  __int64 v1; // rbp
  __int64 i; // rbx
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v9; // [rsp+10h] [rbp-58h]
  __int64 v10; // [rsp+18h] [rbp-50h]
  _QWORD v11[8]; // [rsp+28h] [rbp-40h] BYREF

  v11[4] = __readfsqword(0x28u);
  sub_A53E0((__int64)v8);
  v0 = (const void *)sub_9DC30(1u, (__int64)"*.txt", (__int64)"Select file name to save trace information");
  if ( v0 )
  {
    if ( v8[0] )
    {
      qfclose();
      v8[0] = 0;
    }
    sub_9C440((__int64)v11, v0);
    v8[0] = fopenA();
    if ( v8[0] )
    {
      v1 = 16 * ((qword_251F98 == 0) + ((qword_251F98 - qword_251F78) >> 3) - 1)
         + ((qword_251F70 - qword_251F60) >> 5)
         + ((qword_251F80 - qword_251F88) >> 5);
      if ( v1 == -1 )
        goto LABEL_21;
      for ( i = 0; ; ++i )
      {
        sub_ABE40((__int64)v8, i);
        if ( v1 == i )
          break;
      }
      if ( v8[0] )
      {
LABEL_21:
        qfclose();
        v8[0] = 0;
      }
      else
      {
        v8[0] = 0;
      }
    }
  }
  if ( v11[0] )
  {
    v11[1] = 0;
    qfree();
  }
  v3 = v9;
  if ( v9 )
  {
    v4 = v10;
    if ( v10 )
    {
      v5 = 0;
      do
      {
        v6 = (_QWORD *)(v3 + 24 * v5);
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
          v3 = v9;
        }
        ++v5;
      }
      while ( v4 != v5 );
    }
    v10 = 0;
    qfree();
  }
  return 1;
}

