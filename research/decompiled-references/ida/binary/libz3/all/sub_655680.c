void __fastcall sub_655680(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf

  *a1 = &off_1C52AA8;
  v2 = a1[9];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (void *)a1[6];
  if ( v3 )
    sub_186B220(v3);
  v4 = a1[2];
  *a1 = qword_1C68C08;
  if ( v4 && (v5 = a1[3], v6 = *(_DWORD *)(v4 + 8) == 1, --*(_DWORD *)(v4 + 8), v6) )
  {
    sub_15D7BC0(v5, v4);
    operator delete(a1, 0x50u);
  }
  else
  {
    operator delete(a1, 0x50u);
  }
}

