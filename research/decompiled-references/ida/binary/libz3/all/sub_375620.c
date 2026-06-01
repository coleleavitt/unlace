void __fastcall sub_375620(_QWORD *a1)
{
  _DWORD *v1; // rbp

  v1 = (_DWORD *)a1[4];
  *a1 = &off_1C4D800;
  if ( v1 )
  {
    if ( v1[12]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v1)(v1);
      sub_186B220(v1);
    }
  }
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x28u);
}

