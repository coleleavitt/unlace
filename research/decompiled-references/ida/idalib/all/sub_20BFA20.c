void __fastcall sub_20BFA20(_QWORD *a1)
{
  void **v1; // rbx

  v1 = (void **)a1[1];
  *a1 = &unk_2C72650;
  if ( v1 )
  {
    if ( *v1 )
      operator delete(*v1);
    operator delete(v1, 0x20u);
  }
}
