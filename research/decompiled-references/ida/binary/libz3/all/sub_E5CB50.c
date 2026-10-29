void __fastcall sub_E5CB50(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  _DWORD *v4; // rbp

  *a1 = &off_1C5CF18;
  v2 = a1[6];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[5];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  sub_18572D0(a1 + 4);
  v4 = (_DWORD *)a1[3];
  if ( v4 )
  {
    if ( v4[12]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v4)(v4);
      sub_186B220(v4);
    }
  }
  operator delete(a1, 0x38u);
}

