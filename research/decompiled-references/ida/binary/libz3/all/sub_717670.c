void __fastcall sub_717670(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  bool v4; // zf
  _DWORD *v5; // rbp

  v2 = a1[3];
  if ( v2 )
  {
    v3 = a1[4];
    v4 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v4 )
      sub_15D7BC0(v3, v2);
  }
  v5 = (_DWORD *)a1[2];
  if ( v5 && (v4 = v5[12] == 1, --v5[12], v4) )
  {
    (**(void (__fastcall ***)(_DWORD *))v5)(v5);
    sub_186B220(v5);
    sub_18572D0(a1 + 1);
  }
  else
  {
    sub_18572D0(a1 + 1);
  }
}

