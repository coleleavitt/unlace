__int64 (__fastcall **__fastcall sub_2A6030(_QWORD *a1))()
{
  void (__fastcall ***v1)(_QWORD); // rbx
  __int64 (__fastcall **result)(); // rax

  v1 = (void (__fastcall ***)(_QWORD))a1[3];
  result = &off_1C4CC08;
  *a1 = &off_1C4CC08;
  if ( v1 )
  {
    (**v1)(v1);
    return (__int64 (__fastcall **)())sub_186B220(v1);
  }
  return result;
}

