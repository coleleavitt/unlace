void __fastcall sub_57D1C0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *i; // r12
  void (__fastcall ***v4)(_QWORD); // rbp
  __int64 v5; // rdi
  __int64 v6; // rdi

  v2 = (_QWORD *)a1[1];
  *a1 = &off_1C51700;
  if ( v2 )
  {
    for ( i = &v2[*((unsigned int *)v2 - 1)]; i != v2; ++v2 )
    {
      v4 = (void (__fastcall ***)(_QWORD))*v2;
      if ( *v2 )
      {
        (**v4)(*v2);
        sub_186B220(v4);
      }
    }
  }
  v5 = a1[2];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[1];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  operator delete(a1, 0x18u);
}

