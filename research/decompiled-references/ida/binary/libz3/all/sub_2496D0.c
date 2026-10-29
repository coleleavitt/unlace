void __fastcall sub_2496D0(_QWORD *a1)
{
  _DWORD *v1; // rbp

  v1 = (_DWORD *)a1[3];
  *a1 = &off_1C4C8C0;
  if ( v1 )
  {
    if ( v1[8]-- == 1 )
    {
      sub_ED44E0(v1);
      sub_186B220(v1);
    }
  }
  operator delete(a1, 0x20u);
}

