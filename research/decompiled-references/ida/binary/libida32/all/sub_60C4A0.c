void __fastcall sub_60C4A0(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v2; // rdi
  void *v3; // rdi

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    v2 = (void *)v1[5];
    if ( v2 )
    {
      v1[6] = 0;
      qfree(v2);
    }
    v3 = (void *)v1[2];
    if ( v3 )
    {
      v1[3] = 0;
      qfree(v3);
    }
    operator delete(v1, 0x48u);
  }
}

