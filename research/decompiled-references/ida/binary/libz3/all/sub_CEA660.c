__int64 (__fastcall **__fastcall sub_CEA660(_QWORD *a1))()
{
  __int64 v1; // rsi
  __int64 (__fastcall **result)(); // rax
  __int64 v4; // rdi
  bool v5; // zf
  __int64 v6; // rsi
  __int64 v7; // rdi

  v1 = a1[4];
  result = &off_1C59AA8;
  *a1 = &off_1C59AA8;
  if ( v1 )
  {
    v4 = a1[5];
    v5 = (*(_DWORD *)(v1 + 8))-- == 1;
    if ( v5 )
      result = (__int64 (__fastcall **)())sub_15D7BC0(v4, v1);
  }
  v6 = a1[2];
  if ( v6 )
  {
    v7 = a1[3];
    v5 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v5 )
      return (__int64 (__fastcall **)())sub_15D7BC0(v7, v6);
  }
  return result;
}

