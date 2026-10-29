void __fastcall sub_E1B7F0(_QWORD *a1)
{
  _DWORD *v1; // rbp

  v1 = (_DWORD *)a1[4];
  *a1 = &off_1C5CAC0;
  if ( v1[2]-- == 1 )
  {
    (**(void (__fastcall ***)(_DWORD *))v1)(v1);
    sub_186B220(v1);
  }
  operator delete(a1, 0x30u);
}

