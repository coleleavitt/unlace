void __fastcall sub_7D3F00(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  void (__fastcall ***v6)(_QWORD); // rbx
  void *v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // r13
  void (__fastcall ***v10)(_QWORD); // rbp

  v2 = (void *)a1[631];
  if ( v2 )
    sub_186B220(v2);
  v3 = (void *)a1[628];
  if ( v3 )
    sub_186B220(v3);
  v4 = a1[626];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[625];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  sub_11ECBE0(a1 + 542);
  sub_11C05E0(a1 + 9);
  v6 = (void (__fastcall ***)(_QWORD))a1[7];
  if ( v6 )
  {
    (**v6)(a1[7]);
    sub_186B220(v6);
  }
  v7 = (void *)a1[4];
  if ( v7 )
    sub_186B220(v7);
  v8 = (_QWORD *)a1[3];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 == v9 )
      goto LABEL_19;
    do
    {
      v10 = (void (__fastcall ***)(_QWORD))*v8;
      if ( *v8 )
      {
        (**v10)(*v8);
        sub_186B220(v10);
      }
      ++v8;
    }
    while ( v9 != v8 );
    v9 = (_QWORD *)a1[3];
    if ( v9 )
    {
LABEL_19:
      *((_DWORD *)v9 - 1) = 0;
      sub_186B220(v9 - 1);
    }
  }
  sub_18572D0(a1 + 1);
}

