__int64 __fastcall sub_747AE0(void *a1)
{
  __int64 v2; // rax
  void *v3; // rdi
  void **v4; // rbx
  void *v5; // rdi
  void *v6; // rdi

  v2 = sub_7A0520();
  if ( v2 )
  {
    v3 = *(void **)(v2 + 48);
    v4 = (void **)v2;
    if ( v3 )
    {
      *(_QWORD *)(v2 + 56) = 0;
      qfree(v3);
    }
    v5 = v4[3];
    if ( v5 )
    {
      v4[4] = nullptr;
      qfree(v5);
    }
    v6 = *v4;
    if ( *v4 )
    {
      v4[1] = nullptr;
      qfree(v6);
    }
    operator delete(v4, 0x50u);
  }
  return destroy_lexer(a1);
}
