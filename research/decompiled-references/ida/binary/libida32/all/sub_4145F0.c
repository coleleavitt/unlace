void __fastcall sub_4145F0(_DWORD *a1)
{
  int v1; // esi

  v1 = a1[39];
  *(_QWORD *)a1 = &off_2AFE368;
  if ( v1 != -1 )
  {
    sub_567180(*((_QWORD *)a1 + 18));
    register_undo_handler((unsigned int)a1[39], sub_416790, 0, 0);
  }
  sub_4143A0((__int64)a1);
  operator delete(a1, 0xA0u);
}

