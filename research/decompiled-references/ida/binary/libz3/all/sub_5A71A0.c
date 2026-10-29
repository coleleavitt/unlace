__int64 (__fastcall **__fastcall sub_5A71A0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  void (__fastcall ***v3)(_QWORD); // rbp
  void (__fastcall ***v4)(_QWORD); // rbp
  void (__fastcall ***v5)(_QWORD); // rbp
  __int64 v6; // rdi
  __int64 v7; // rdi

  result = &off_1C52260;
  v3 = (void (__fastcall ***)(_QWORD))a1[5];
  *a1 = &off_1C52260;
  if ( v3 )
  {
    (**v3)(v3);
    result = (__int64 (__fastcall **)())sub_186B220(v3);
  }
  v4 = (void (__fastcall ***)(_QWORD))a1[4];
  if ( v4 )
  {
    (**v4)(a1[4]);
    result = (__int64 (__fastcall **)())sub_186B220(v4);
  }
  v5 = (void (__fastcall ***)(_QWORD))a1[3];
  if ( v5 )
  {
    (**v5)(a1[3]);
    result = (__int64 (__fastcall **)())sub_186B220(v5);
  }
  v6 = a1[2];
  if ( v6 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v6 - 8));
  v7 = a1[1];
  if ( v7 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v7 - 8));
  return result;
}

