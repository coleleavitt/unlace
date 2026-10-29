void __fastcall sub_9C1E0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  _QWORD *v4; // rax

  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  v1 = a1[2];
  if ( v1 )
  {
    v2 = a1[3];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 24 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = a1[2];
        }
      }
    }
    a1[3] = 0;
    qfree();
  }
}

