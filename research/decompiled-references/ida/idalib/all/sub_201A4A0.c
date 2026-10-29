void __fastcall sub_201A4A0(void **a1)
{
  void **i; // rbx
  void **v2; // rax

  for ( i = a1 + 40; *i != i + 2; i = v2 )
  {
    operator delete(*i);
    v2 = i - 4;
    if ( i == a1 )
      return;
LABEL_3:
    ;
  }
  v2 = i - 4;
  if ( i != a1 )
    goto LABEL_3;
}
