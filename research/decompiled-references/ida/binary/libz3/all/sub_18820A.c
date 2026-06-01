void __fastcall sub_18820A(_QWORD *a1)
{
  _QWORD *i; // rax

  if ( a1 )
  {
    for ( i = a1; i != &a1[*((unsigned int *)a1 - 1)]; ++i )
    {
      if ( *i )
        std::terminate();
    }
    sub_186B220(a1 - 1);
  }
}

