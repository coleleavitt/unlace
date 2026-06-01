void __fastcall sub_4CB280(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // r12
  void (__fastcall ***v3)(_QWORD); // rbp

  v1 = (_QWORD *)a1[1];
  *a1 = &off_1C4ED90;
  if ( v1 )
  {
    v2 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 == v2 )
      goto LABEL_7;
    do
    {
      v3 = (void (__fastcall ***)(_QWORD))*v1;
      if ( *v1 )
      {
        (**v3)(*v1);
        sub_186B220(v3);
      }
      ++v1;
    }
    while ( v2 != v1 );
    v2 = (_QWORD *)a1[1];
    if ( v2 )
LABEL_7:
      sub_186B220(v2 - 1);
  }
  operator delete(a1, 0x10u);
}

