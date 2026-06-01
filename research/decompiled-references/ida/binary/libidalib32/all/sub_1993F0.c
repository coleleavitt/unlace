void __fastcall sub_1993F0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  _QWORD *v4; // rax

  v1 = a1[1];
  *a1 = off_235018;
  if ( v1 )
  {
    v2 = a1[2];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 24 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = a1[1];
        }
      }
    }
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x20u);
}

