__int64 __fastcall sub_374730(_QWORD *a1)
{
  void *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi

  v2 = (void *)a1[7];
  if ( v2 )
    result = sub_186B220(v2);
  v4 = a1[4];
  if ( v4 )
  {
    v5 = a1[5];
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      return sub_15D7BC0(v5, v4);
  }
  return result;
}

