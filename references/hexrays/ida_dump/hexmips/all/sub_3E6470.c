__int64 __fastcall sub_3E6470(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  *a1 = off_4CCAE0;
  v2 = a1[94];
  if ( v2 )
  {
    a1[95] = 0;
    qfree(v2);
  }
  v3 = a1[41];
  *a1 = off_4CC028;
  if ( v3 )
  {
    a1[42] = 0;
    qfree(v3);
  }
  v4 = a1[38];
  if ( v4 )
  {
    a1[39] = 0;
    qfree(v4);
  }
  v5 = a1[35];
  if ( v5 )
  {
    a1[36] = 0;
    qfree(v5);
  }
  qfree(a1[33]);
  v6 = a1[30];
  if ( v6 )
  {
    a1[31] = 0;
    qfree(v6);
  }
  qfree(a1[28]);
  v7 = a1[25];
  if ( v7 )
  {
    a1[26] = 0;
    qfree(v7);
  }
  qfree(a1[23]);
  v8 = a1[20];
  if ( v8 )
  {
    a1[21] = 0;
    qfree(v8);
  }
  qfree(a1[18]);
  v9 = a1[15];
  if ( v9 )
  {
    a1[16] = 0;
    qfree(v9);
  }
  return qfree(a1[13]);
}
