__int64 (__fastcall **__fastcall sub_4CBB40(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdi
  void (__fastcall ***v7)(_QWORD); // rbp
  void (__fastcall ***v8)(_QWORD); // rbx

  result = &off_1C4F1C8;
  *a1 = &off_1C4F1C8;
  v3 = a1[5];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v3 - 8));
  v4 = a1[3];
  if ( v4 )
  {
    v5 = a1[4];
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      result = (__int64 (__fastcall **)())sub_15D7BC0(v5, v4);
  }
  v7 = (void (__fastcall ***)(_QWORD))a1[2];
  if ( v7 )
  {
    (**v7)(a1[2]);
    result = (__int64 (__fastcall **)())sub_186B220(v7);
  }
  v8 = (void (__fastcall ***)(_QWORD))a1[1];
  if ( v8 )
  {
    (**v8)(v8);
    return (__int64 (__fastcall **)())sub_186B220(v8);
  }
  return result;
}

