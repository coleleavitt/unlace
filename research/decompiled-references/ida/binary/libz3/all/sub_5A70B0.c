__int64 (__fastcall **__fastcall sub_5A70B0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  void (__fastcall ***v6)(_QWORD); // rbp
  void (__fastcall ***v7)(_QWORD); // rbx

  result = &off_1C52298;
  v3 = a1[4];
  *a1 = &off_1C52298;
  if ( v3 )
  {
    v4 = a1[5];
    if ( (*(_DWORD *)(v3 + 8))-- == 1 )
      result = (__int64 (__fastcall **)())sub_15D7BC0(v4, v3);
  }
  v6 = (void (__fastcall ***)(_QWORD))a1[2];
  if ( v6 )
  {
    (**v6)(a1[2]);
    result = (__int64 (__fastcall **)())sub_186B220(v6);
  }
  v7 = (void (__fastcall ***)(_QWORD))a1[1];
  if ( v7 )
  {
    (**v7)(v7);
    return (__int64 (__fastcall **)())sub_186B220(v7);
  }
  return result;
}

