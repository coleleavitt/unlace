void __fastcall sub_19CD600(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  void *v5; // rdi
  void *v6; // rdi

  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_19CD600(a1, *(_QWORD *)(v3 + 24));
      v4 = *(_QWORD *)(v3 + 16);
      if ( *(_DWORD *)(v3 + 40) > 0x40u )
      {
        v5 = *(void **)(v3 + 32);
        if ( v5 )
          operator delete[](v5);
      }
      v6 = (void *)v3;
      v3 = v4;
      operator delete(v6);
    }
    while ( v4 );
  }
}
