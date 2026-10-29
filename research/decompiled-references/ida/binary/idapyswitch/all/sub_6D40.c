__int64 sub_6D40()
{
  __int64 v0; // rbp
  void *v2; // rbx

  v0 = qword_1C310;
  sub_11ED0(qword_1C310);
  while ( (_QWORD)xmmword_1C2F8 )
  {
    v2 = *(void **)(qword_1C2F0 + 8 * xmmword_1C2F8 - 8);
    if ( !v2 )
    {
      while ( 1 )
        ;
    }
    sub_6BC0(*(_QWORD *)(qword_1C2F0 + 8 * xmmword_1C2F8 - 8));
    operator delete(v2, 0x1668u);
  }
  return sub_11F20(v0);
}

