__int64 sub_668C90()
{
  __int64 v0; // rbp
  __int64 v1; // r12
  __int64 i; // rbx
  __int64 v3; // rax
  void *v4; // rdi

  v0 = *(_QWORD *)(qword_2CA1698 + 1584);
  v1 = *(_QWORD *)(v0 + 16);
  if ( v1 )
  {
    for ( i = 0; i != v1; ++i )
    {
      v3 = *(_QWORD *)(v0 + 8) + 24 * i;
      v4 = *(void **)v3;
      if ( *(_QWORD *)v3 )
      {
        *(_QWORD *)(v3 + 8) = 0;
        qfree(v4);
      }
    }
  }
  *(_QWORD *)(v0 + 16) = 0;
  return 0;
}

