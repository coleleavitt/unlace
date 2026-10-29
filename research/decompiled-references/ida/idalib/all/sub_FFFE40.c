void __fastcall sub_FFFE40(_QWORD **a1)
{
  _QWORD *v1; // rbx
  void *v2; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (void *)v1[3];
    if ( v2 )
      operator delete(v2);
    sub_223C180(v1);
    operator delete(v1, 0x30u);
  }
}
