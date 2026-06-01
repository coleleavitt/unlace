__int64 (__fastcall **__fastcall sub_57D650(_QWORD *a1))()
{
  void (__fastcall ***v1)(_QWORD); // rbx
  __int64 (__fastcall **result)(); // rax

  v1 = (void (__fastcall ***)(_QWORD))a1[2];
  result = &off_1C516A0;
  *a1 = &off_1C516A0;
  if ( v1 )
  {
    (**v1)(v1);
    return (__int64 (__fastcall **)())sub_186B220(v1);
  }
  return result;
}

