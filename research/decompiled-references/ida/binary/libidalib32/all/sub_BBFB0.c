void __fastcall sub_BBFB0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp

  *a1 = &off_22EDC0;
  if ( a1[7] )
  {
    a1[8] = 0;
    qfree();
  }
  v1 = (_QWORD *)a1[1];
  *a1 = &off_22EDA0;
  v2 = &v1[a1[2]];
  if ( v1 != v2 )
  {
    do
    {
      if ( *v1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
      ++v1;
    }
    while ( v2 != v1 );
    v2 = (_QWORD *)a1[1];
  }
  if ( v2 )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x50u);
}

