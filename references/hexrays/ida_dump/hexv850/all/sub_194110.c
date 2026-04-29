__int64 __fastcall sub_194110(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 i; // rbx
  _QWORD *v8; // r12
  __int64 v9; // rdi

  *a1 = &unk_4BED48;
  v2 = a1[11];
  if ( v2 )
  {
    a1[12] = 0;
    qfree(v2);
  }
  qfree(a1[9]);
  v3 = a1[6];
  if ( v3 )
  {
    a1[7] = 0;
    qfree(v3);
  }
  result = qfree(a1[4]);
  v5 = a1[1];
  if ( v5 )
  {
    v6 = a1[2];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (_QWORD *)(v5 + 40 * i);
        v9 = v8[2];
        if ( v9 )
        {
          v8[3] = 0;
          qfree(v9);
        }
        qfree(*v8);
        v5 = a1[1];
      }
    }
    a1[2] = 0;
    return qfree(v5);
  }
  return result;
}
