void __fastcall sub_FDC100(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // rbx
  void *v3; // rdi

  v2 = *a1;
  if ( *a1 )
  {
    v3 = (void *)v2[3];
    if ( v3 )
      operator delete(v3);
    sub_2218440(v2, a2);
    operator delete(v2, 0x30u);
  }
}

