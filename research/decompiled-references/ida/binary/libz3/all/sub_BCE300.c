__int64 (__fastcall **__fastcall sub_BCE300(_QWORD *a1))()
{
  __int64 v1; // rsi
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi

  v1 = a1[1];
  result = &off_1C57DE8;
  *a1 = &off_1C57DE8;
  if ( v1 )
  {
    v3 = a1[2];
    if ( (*(_DWORD *)(v1 + 8))-- == 1 )
      return (__int64 (__fastcall **)())sub_15D7BC0(v3, v1);
  }
  return result;
}

