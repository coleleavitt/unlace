void __fastcall sub_231210(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi
  bool v5; // zf
  void *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi

  *a1 = &off_1C4C098;
  v2 = a1[40];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[38];
  if ( v3 )
  {
    v4 = a1[39];
    v5 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v4, v3);
  }
  sub_15BA200(a1 + 30);
  sub_157EB20(a1 + 20);
  v6 = (void *)a1[15];
  if ( v6 )
    sub_186B220(v6);
  v7 = a1[12];
  if ( v7 && (v8 = a1[13], v5 = *(_DWORD *)(v7 + 8) == 1, --*(_DWORD *)(v7 + 8), v5) )
  {
    sub_15D7BC0(v8, v7);
    operator delete(a1, 0x148u);
  }
  else
  {
    operator delete(a1, 0x148u);
  }
}

