__int64 __fastcall sub_2D2100(_QWORD **a1)
{
  _QWORD *v1; // r12
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  void (__fastcall ***v6)(_QWORD); // rbx
  void *v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // r13
  void (__fastcall ***v10)(_QWORD); // rbp
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (void *)v1[631];
    if ( v2 )
      sub_186B220(v2);
    v3 = (void *)v1[628];
    if ( v3 )
      sub_186B220(v3);
    v4 = v1[626];
    if ( v4 )
      sub_186B220((void *)(v4 - 8));
    v5 = v1[625];
    if ( v5 )
      sub_186B220((void *)(v5 - 8));
    sub_11ECBE0(v1 + 542);
    sub_11C05E0(v1 + 9);
    v6 = (void (__fastcall ***)(_QWORD))v1[7];
    if ( v6 )
    {
      (**v6)(v1[7]);
      sub_186B220(v6);
    }
    v7 = (void *)v1[4];
    if ( v7 )
      sub_186B220(v7);
    v8 = (_QWORD *)v1[3];
    if ( v8 )
    {
      v9 = &v8[*((unsigned int *)v8 - 1)];
      if ( v8 == v9 )
        goto LABEL_20;
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
      v9 = (_QWORD *)v1[3];
      if ( v9 )
      {
LABEL_20:
        *((_DWORD *)v9 - 1) = 0;
        sub_186B220(v9 - 1);
      }
    }
    sub_18572D0(v1 + 1);
    return sub_186B220(v1);
  }
  return result;
}

