void __fastcall sub_7DB490(__int64 a1)
{
  void *v1; // rbp

  v1 = *(void **)(a1 + 16);
  if ( v1 )
  {
    sub_7DB220(*(_QWORD *)(a1 + 16));
    operator delete(v1, 0x30u);
  }
  *(_QWORD *)(a1 + 16) = 0;
}

