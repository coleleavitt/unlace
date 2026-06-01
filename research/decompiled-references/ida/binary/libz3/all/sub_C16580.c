__int64 __fastcall sub_C16580(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdi
  bool v5; // zf
  __int64 result; // rax
  void *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi

  v2 = a1[36];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[34];
  if ( v3 )
  {
    v4 = a1[35];
    v5 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v4, v3);
  }
  sub_15BA200(a1 + 26);
  result = sub_157EB20(a1 + 16);
  v7 = (void *)a1[11];
  if ( v7 )
    result = sub_186B220(v7);
  v8 = a1[8];
  if ( v8 )
  {
    v9 = a1[9];
    v5 = (*(_DWORD *)(v8 + 8))-- == 1;
    if ( v5 )
      return sub_15D7BC0(v9, v8);
  }
  return result;
}

