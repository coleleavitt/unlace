void __fastcall sub_E469D0(_QWORD *a1)
{
  _DWORD *v1; // rbp

  v1 = (_DWORD *)a1[1];
  *a1 = &off_1C5CDC8;
  if ( v1 )
  {
    if ( v1[2]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v1)(v1);
      sub_186B220(v1);
    }
  }
  operator delete(a1, 0x10u);
}

