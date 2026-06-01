void __fastcall sub_E703F0(_QWORD **a1)
{
  _QWORD *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    sub_206AFD0(v1 + 1);
    if ( *v1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 16LL))(*v1);
    operator delete(v1, 0x1F8u);
  }
}
