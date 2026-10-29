__int64 (__fastcall **__fastcall sub_505D90(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rdi

  result = &off_1C503D0;
  *a1 = &off_1C503D0;
  v3 = a1[8];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v3 - 8));
  v4 = a1[3];
  if ( v4 )
  {
    v5 = a1[4];
    v6 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v6 )
      result = (__int64 (__fastcall **)())sub_15D7BC0(v5, v4);
  }
  v7 = a1[1];
  if ( v7 )
  {
    v8 = a1[2];
    v6 = (*(_DWORD *)(v7 + 8))-- == 1;
    if ( v6 )
      return (__int64 (__fastcall **)())sub_15D7BC0(v8, v7);
  }
  return result;
}

