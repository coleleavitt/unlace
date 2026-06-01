__int64 (__fastcall **__fastcall sub_566430(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  void (__fastcall ***v2)(_QWORD); // rbp
  void (__fastcall ***v3)(_QWORD); // rbx

  result = &off_1C51250;
  v2 = (void (__fastcall ***)(_QWORD))a1[2];
  *a1 = &off_1C51250;
  if ( v2 )
  {
    (**v2)(v2);
    result = (__int64 (__fastcall **)())sub_186B220(v2);
  }
  v3 = (void (__fastcall ***)(_QWORD))a1[1];
  if ( v3 )
  {
    (**v3)(v3);
    return (__int64 (__fastcall **)())sub_186B220(v3);
  }
  return result;
}

