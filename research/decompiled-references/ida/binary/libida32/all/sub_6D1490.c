void __fastcall sub_6D1490(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rbp

  v1 = (_QWORD *)a1[1];
  *a1 = &off_2B0DD80;
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
    qfree(v2);
  }
  operator delete(a1, 0x28u);
}

