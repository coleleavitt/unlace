void __fastcall sub_10AD2B0(__int64 a1, __int64 a2)
{
  void *v2; // rbp
  void *v3; // rbp
  void *v4; // rbx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    sub_2218440(*(_QWORD *)(a1 + 16), a2);
    a2 = 24;
    operator delete(v2, 0x18u);
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    sub_2218440(*(_QWORD *)(a1 + 8), a2);
    a2 = 24;
    operator delete(v3, 0x18u);
  }
  v4 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    sub_2218440(v4, a2);
    operator delete(v4, 0x18u);
  }
}

