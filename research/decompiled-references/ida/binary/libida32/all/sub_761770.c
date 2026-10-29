void __fastcall sub_761770(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 i; // rbx
  __int64 v4; // rax
  void *v5; // rdi

  v1 = a1[1];
  if ( v1 )
  {
    for ( i = 0; i != v1; ++i )
    {
      v4 = *a1 + 24 * i;
      v5 = *(void **)v4;
      if ( *(_QWORD *)v4 )
      {
        *(_QWORD *)(v4 + 8) = 0;
        qfree(v5);
      }
    }
    a1[1] = 0;
  }
}

