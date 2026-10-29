void __fastcall sub_287AC0(_QWORD *a1)
{
  _DWORD *v1; // rbp

  v1 = (_DWORD *)a1[3];
  *a1 = &off_1C4CBC8;
  if ( v1 )
  {
    if ( v1[4]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v1)(v1);
      sub_186B220(v1);
    }
  }
  operator delete(a1, 0x28u);
}

