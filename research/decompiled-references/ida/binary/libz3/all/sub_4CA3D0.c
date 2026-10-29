__int64 (__fastcall **__fastcall sub_4CA3D0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  void (__fastcall ***v4)(_QWORD); // rbp
  void *v5; // rdi
  void (__fastcall ***v6)(_QWORD); // rbx

  result = &off_1C4F270;
  *a1 = &off_1C4F270;
  v3 = a1[5];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v3 - 8));
  v4 = (void (__fastcall ***)(_QWORD))a1[4];
  if ( v4 )
  {
    (**v4)(a1[4]);
    result = (__int64 (__fastcall **)())sub_186B220(v4);
  }
  v5 = (void *)a1[3];
  if ( v5 )
    result = (__int64 (__fastcall **)())sub_4D63E0(v5);
  v6 = (void (__fastcall ***)(_QWORD))a1[1];
  if ( v6 )
  {
    (**v6)(v6);
    return (__int64 (__fastcall **)())sub_186B220(v6);
  }
  return result;
}

