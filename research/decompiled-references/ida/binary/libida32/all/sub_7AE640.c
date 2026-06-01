__int64 sub_7AE640()
{
  __int64 v0; // rax
  void *v1; // rdi
  void *v2; // rbx

  v0 = sub_7AE510();
  if ( v0 )
  {
    v1 = *(void **)(v0 + 8);
    v2 = (void *)v0;
    if ( v1 )
    {
      *(_QWORD *)(v0 + 16) = 0;
      qfree(v1);
    }
    operator delete(v2, 0x58u);
  }
  return 0;
}

