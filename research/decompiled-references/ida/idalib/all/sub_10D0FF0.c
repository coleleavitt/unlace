void __fastcall sub_10D0FF0(__int64 a1)
{
  void *v1; // rbp
  void *v2; // rbp
  void *v3; // rbx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
  {
    sub_223C180(*(_QWORD *)(a1 + 16));
    operator delete(v1, 0x18u);
  }
  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    sub_223C180(*(_QWORD *)(a1 + 8));
    operator delete(v2, 0x18u);
  }
  v3 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    sub_223C180(v3);
    operator delete(v3, 0x18u);
  }
}
