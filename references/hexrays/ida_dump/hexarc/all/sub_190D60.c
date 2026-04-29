__int64 __fastcall sub_190D60(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 i; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi

  v2 = a1[8];
  *a1 = &off_4AAAC8;
  if ( v2 )
  {
    v3 = a1[9];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = *(_QWORD *)(v2 + v4);
        if ( v6 )
        {
          *(_QWORD *)(v2 + v4 + 8) = 0;
          qfree(v6);
          v2 = a1[8];
        }
        v4 += 56;
      }
    }
    a1[9] = 0;
    qfree(v2);
  }
  v7 = a1[4];
  *a1 = &unk_4B7D20;
  if ( v7 )
  {
    a1[5] = 0;
    qfree(v7);
  }
  return qfree(a1[2]);
}
