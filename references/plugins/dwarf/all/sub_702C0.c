void __fastcall sub_702C0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax

  *a1 = off_C8C38;
  a1[1] = 0;
  a1[2] = 0;
  v2 = a1[3];
  if ( v2 )
  {
    v3 = a1[4];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = 5 * i;
        cleanup_argloc(v2 + 8 * v5);
        v2 = a1[3];
      }
    }
    a1[4] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x40u);
}
