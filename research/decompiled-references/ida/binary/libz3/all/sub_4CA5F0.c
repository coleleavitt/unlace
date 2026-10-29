void __fastcall sub_4CA5F0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  void (__fastcall ***v4)(_QWORD); // rbp
  __int64 v5; // rdi

  v2 = (_QWORD *)a1[3];
  *a1 = &off_1C4EDF0;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 == v3 )
      goto LABEL_7;
    do
    {
      v4 = (void (__fastcall ***)(_QWORD))*v2;
      if ( *v2 )
      {
        (**v4)(*v2);
        sub_186B220(v4);
      }
      ++v2;
    }
    while ( v3 != v2 );
    v3 = (_QWORD *)a1[3];
    if ( v3 )
LABEL_7:
      sub_186B220(v3 - 1);
  }
  v5 = a1[1];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  operator delete(a1, 0x20u);
}

