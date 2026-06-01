__int64 (__fastcall **__fastcall sub_590880(_QWORD *a1))()
{
  __int64 v1; // rsi
  __int64 (__fastcall **result)(); // rax
  __int64 v4; // rdi
  void (__fastcall ***v6)(_QWORD); // rbx

  v1 = a1[2];
  result = &off_1C51978;
  *a1 = &off_1C51978;
  if ( v1 )
  {
    v4 = a1[3];
    if ( (*(_DWORD *)(v1 + 8))-- == 1 )
      result = (__int64 (__fastcall **)())sub_15D7BC0(v4, v1);
  }
  v6 = (void (__fastcall ***)(_QWORD))a1[1];
  if ( v6 )
  {
    (**v6)(v6);
    return (__int64 (__fastcall **)())sub_186B220(v6);
  }
  return result;
}

