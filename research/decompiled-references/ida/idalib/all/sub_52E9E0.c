void __fastcall sub_52E9E0(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r12
  _QWORD *v4; // rbp
  void *v5; // rdi
  void *v6; // rdi

  v2 = *(_DWORD *)(a1 + 16) - 1;
  if ( v2 >= 0 )
  {
    v3 = 8LL * (unsigned int)v2;
    do
    {
      v4 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + v3);
      v5 = (void *)v4[2];
      if ( v5 )
        qfree(v5);
      if ( v4 )
        operator delete(v4, 0x28u);
      --v2;
      v3 -= 8;
    }
    while ( v2 != -1 );
  }
  v6 = *(void **)(a1 + 8);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 24) = 0;
  }
}
