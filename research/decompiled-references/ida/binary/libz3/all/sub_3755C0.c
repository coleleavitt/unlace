void __fastcall sub_3755C0(_QWORD *a1)
{
  _DWORD *v1; // rbp
  bool v2; // zf

  v1 = (_DWORD *)a1[4];
  *a1 = &off_1C4D800;
  if ( v1 && (v2 = v1[12] == 1, --v1[12], v2) )
  {
    (**(void (__fastcall ***)(_DWORD *))v1)(v1);
    sub_186B220(v1);
    sub_18572D0(a1 + 3);
  }
  else
  {
    sub_18572D0(a1 + 3);
  }
}

