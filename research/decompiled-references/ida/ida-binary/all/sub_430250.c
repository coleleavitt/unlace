double __fastcall sub_430250(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  double result; // xmm0_8
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi

  v3 = a1[27];
  if ( v3 )
  {
    a1[28] = 0;
    result = qfree(v3, a2);
  }
  v5 = a1[24];
  if ( v5 )
  {
    a1[25] = 0;
    result = qfree(v5, a2);
  }
  v6 = a1[21];
  if ( v6 )
  {
    a1[22] = 0;
    result = qfree(v6, a2);
  }
  v7 = a1[18];
  if ( v7 )
  {
    a1[19] = 0;
    result = qfree(v7, a2);
  }
  v8 = a1[15];
  if ( v8 )
  {
    a1[16] = 0;
    result = qfree(v8, a2);
  }
  v9 = a1[12];
  if ( v9 )
  {
    a1[13] = 0;
    result = qfree(v9, a2);
  }
  v10 = a1[9];
  if ( v10 )
  {
    a1[10] = 0;
    result = qfree(v10, a2);
  }
  v11 = a1[6];
  if ( v11 )
  {
    a1[7] = 0;
    result = qfree(v11, a2);
  }
  v12 = a1[3];
  if ( v12 )
  {
    a1[4] = 0;
    result = qfree(v12, a2);
  }
  v13 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree(v13, a2);
  }
  return result;
}
