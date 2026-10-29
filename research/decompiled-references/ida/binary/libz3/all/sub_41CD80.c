__int64 __fastcall sub_41CD80(__int64 *a1)
{
  void (__fastcall ***v2)(void *); // rbp
  bool v3; // zf
  _DWORD *v4; // rdi
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi

  v2 = (void (__fastcall ***)(void *))a1[11];
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 4))-- == 1;
    if ( v3 )
    {
      (**v2)(v2);
      sub_186B220(v2);
    }
  }
  v4 = (_DWORD *)a1[10];
  if ( v4 )
    sub_41CD50(v4);
  sub_2B4F40(a1 + 8);
  sub_2B4F40(a1 + 6);
  result = sub_2334C0(a1 + 4);
  v6 = a1[2];
  if ( v6 )
  {
    v7 = a1[3];
    v3 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v3 )
      return sub_15D7BC0(v7, v6);
  }
  return result;
}

