__int64 (__fastcall **__fastcall sub_9561F0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  void *v2; // rbp
  void (__fastcall ***v3)(_QWORD); // rbp
  void (__fastcall ***v4)(_QWORD); // rbp
  void (__fastcall ***v5)(_QWORD); // rbx

  result = &off_1C55E60;
  v2 = (void *)a1[7];
  *a1 = &off_1C55E60;
  if ( v2 )
  {
    sub_ADEC40(v2);
    result = (__int64 (__fastcall **)())sub_186B220(v2);
  }
  v3 = (void (__fastcall ***)(_QWORD))a1[6];
  if ( v3 )
  {
    (**v3)(a1[6]);
    result = (__int64 (__fastcall **)())sub_186B220(v3);
  }
  v4 = (void (__fastcall ***)(_QWORD))a1[5];
  if ( v4 )
  {
    (**v4)(a1[5]);
    result = (__int64 (__fastcall **)())sub_186B220(v4);
  }
  v5 = (void (__fastcall ***)(_QWORD))a1[4];
  if ( v5 )
  {
    (**v5)(v5);
    return (__int64 (__fastcall **)())sub_186B220(v5);
  }
  return result;
}

