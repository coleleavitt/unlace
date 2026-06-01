void __fastcall sub_B7F70(_QWORD *a1)
{
  __int64 v1; // r13
  __int64 v2; // rbp
  __int64 i; // rbx

  if ( *a1 )
  {
    v1 = a1[1];
    if ( v1 )
    {
      v2 = 0;
      for ( i = 0; i != v1; ++i )
      {
        v2 += 60;
        free_debug_event();
      }
    }
    a1[1] = 0;
    qfree();
  }
}

