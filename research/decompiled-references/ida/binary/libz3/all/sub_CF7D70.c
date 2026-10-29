void __fastcall sub_CF7D70(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  _DWORD *v6; // rbx

  v2 = a1 + 14;
  *(v2 - 14) = &off_1C59EC8;
  sub_18572D0(v2);
  v3 = (_QWORD *)a1[10];
  if ( v3 )
    sub_CF7980(v3);
  v4 = (void *)a1[7];
  if ( v4 )
    sub_186B220(v4);
  v5 = (void *)a1[4];
  if ( v5 )
    sub_186B220(v5);
  v6 = (_DWORD *)a1[3];
  if ( v6 )
  {
    if ( v6[2]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v6)(v6);
      sub_186B220(v6);
    }
  }
}

