void *__fastcall sub_3E93A0(_QWORD *a1)
{
  void *result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi

  result = &unk_4D8E10;
  *a1 = &unk_4D8E10;
  v3 = a1[32];
  if ( v3 )
  {
    a1[33] = 0;
    result = (void *)qfree(v3);
  }
  v4 = a1[29];
  if ( v4 )
  {
    a1[30] = 0;
    result = (void *)qfree(v4);
  }
  v5 = a1[22];
  if ( v5 )
  {
    a1[23] = 0;
    result = (void *)qfree(v5);
  }
  v6 = a1[19];
  if ( v6 )
  {
    a1[20] = 0;
    result = (void *)qfree(v6);
  }
  v7 = a1[15];
  if ( v7 )
  {
    a1[16] = 0;
    result = (void *)qfree(v7);
  }
  v8 = a1[12];
  if ( v8 )
  {
    a1[13] = 0;
    result = (void *)qfree(v8);
  }
  v9 = a1[5];
  if ( v9 )
  {
    a1[6] = 0;
    result = (void *)qfree(v9);
  }
  v10 = a1[2];
  if ( v10 )
  {
    a1[3] = 0;
    return (void *)qfree(v10);
  }
  return result;
}
