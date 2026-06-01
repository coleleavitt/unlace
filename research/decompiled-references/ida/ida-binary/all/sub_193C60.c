__int64 __fastcall sub_193C60(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi

  v6 = a1[12];
  if ( v6 )
  {
    a1[13] = 0;
    result = qfree(v6, a2, a3, a4, a5);
  }
  v8 = a1[5];
  if ( v8 )
  {
    result = qfree(v8, a2, a3, a4, a5);
    a1[5] = 0;
  }
  v9 = a1[6];
  if ( v9 )
  {
    a1[7] = 0;
    result = qfree(v9, a2, a3, a4, a5);
    a1[6] = 0;
    a1[8] = 0;
  }
  v10 = a1[9];
  if ( v10 )
  {
    a1[10] = 0;
    result = qfree(v10, a2, a3, a4, a5);
  }
  v11 = a1[6];
  if ( v11 )
  {
    a1[7] = 0;
    result = qfree(v11, a2, a3, a4, a5);
  }
  v12 = a1[5];
  if ( v12 )
    return qfree(v12, a2, a3, a4, a5);
  return result;
}
