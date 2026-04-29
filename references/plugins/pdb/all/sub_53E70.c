void __fastcall sub_53E70(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = v1[1];
    if ( v2 )
    {
      v1[2] = 0;
      qfree(v2);
    }
    operator delete(v1, 0x20u);
  }
}
