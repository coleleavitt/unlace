void __fastcall sub_E215D0(__int64 a1)
{
  void **v1; // rax

  v1 = *(void ***)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *v1 )
      free(*v1);
    *(_QWORD *)(a1 + 8) = 0;
  }
}
