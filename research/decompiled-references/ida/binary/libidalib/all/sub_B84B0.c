void __fastcall sub_B84B0(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 i; // rbx

  if ( *a1 )
  {
    v1 = a1[1];
    if ( v1 )
    {
      for ( i = 0; i != v1; ++i )
        free_debug_event();
    }
    a1[1] = 0;
    qfree();
  }
}

