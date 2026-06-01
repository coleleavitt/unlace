void __fastcall linearray_t_dtr(__int64 a1)
{
  __int64 v2; // r12
  __int64 i; // rbx
  __int64 v4; // rax
  void *v5; // rdi
  void *v6; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v4 = *(_QWORD *)a1 + 24 * i;
      v5 = *(void **)v4;
      if ( *(_QWORD *)v4 )
      {
        *(_QWORD *)(v4 + 8) = 0;
        qfree(v5);
      }
    }
  }
  *(_QWORD *)(a1 + 8) = 0;
  v6 = *(void **)(a1 + 24);
  *(_DWORD *)(a1 + 44) = -1;
  qfree(v6);
}
