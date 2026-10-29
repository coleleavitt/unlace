__int64 __fastcall sub_2FC750(_QWORD *a1)
{
  void (__fastcall ***v2)(void *); // rbp
  bool v3; // zf
  __int64 v4; // rsi
  __int64 v5; // rdi

  v2 = (void (__fastcall ***)(void *))a1[7];
  *a1 = qword_1C63FB0;
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 2))-- == 1;
    if ( v3 )
    {
      (**v2)(v2);
      sub_186B220(v2);
    }
  }
  v4 = a1[4];
  if ( !v4 )
    return sub_2334C0(a1 + 2);
  v5 = a1[5];
  v3 = (*(_DWORD *)(v4 + 8))-- == 1;
  if ( !v3 )
    return sub_2334C0(a1 + 2);
  sub_15D7BC0(v5, v4);
  return sub_2334C0(a1 + 2);
}

