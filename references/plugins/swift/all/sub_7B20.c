void __fastcall sub_7B20(void *a1)
{
  void *v1; // rdi

  if ( xmmword_287F8 )
  {
    operator delete(xmmword_287F8, xmmword_28808 - (_QWORD)xmmword_287F8);
    v1 = *((void **)&xmmword_287C0 + 1);
    if ( *((_QWORD *)&xmmword_287C0 + 1) )
LABEL_3:
      operator delete(v1, *((_QWORD *)&xmmword_287D0 + 1) - *((_QWORD *)&xmmword_287C0 + 1));
  }
  else
  {
    v1 = *((void **)&xmmword_287C0 + 1);
    if ( *((_QWORD *)&xmmword_287C0 + 1) )
      goto LABEL_3;
  }
}
