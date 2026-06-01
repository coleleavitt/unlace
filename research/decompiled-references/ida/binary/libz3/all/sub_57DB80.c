void __fastcall sub_57DB80(void *a1)
{
  _QWORD *v2; // rbx
  _QWORD *i; // r13
  void (__fastcall ***v4)(_QWORD); // rbp
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi

  v2 = *((_QWORD **)a1 + 5);
  *(_QWORD *)a1 = &off_1C51600;
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
  sub_4D6410((__int64 ***)a1 + 6);
  v5 = *((_QWORD *)a1 + 10);
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *((_QWORD *)a1 + 9);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *((_QWORD *)a1 + 8);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *((_QWORD *)a1 + 7);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *((_QWORD *)a1 + 6);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *((_QWORD *)a1 + 5);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *((_QWORD *)a1 + 3);
  *(_QWORD *)a1 = qword_1C666F0;
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = *((_QWORD *)a1 + 2);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = *((_QWORD *)a1 + 1);
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  operator delete(a1, 0x58u);
}

