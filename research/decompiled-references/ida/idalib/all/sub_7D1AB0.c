__int64 __fastcall sub_7D1AB0(__int64 a1)
{
  __int64 v1; // rax
  void *v2; // rdi
  void *v3; // rbx

  v1 = sub_7D1970(a1);
  if ( v1 )
  {
    v2 = *(void **)(v1 + 8);
    v3 = (void *)v1;
    if ( v2 )
    {
      *(_QWORD *)(v1 + 16) = 0;
      qfree(v2);
    }
    operator delete(v3, 0x60u);
  }
  return 0;
}
