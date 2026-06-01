__int64 (__fastcall **__fastcall sub_4FE7C0(_QWORD *a1))()
{
  void (__fastcall ***v1)(_QWORD); // rbx
  __int64 (__fastcall **result)(); // rax

  v1 = (void (__fastcall ***)(_QWORD))a1[1];
  result = &off_1C50158;
  *a1 = &off_1C50158;
  if ( v1 )
  {
    (**v1)(v1);
    return (__int64 (__fastcall **)())sub_186B220(v1);
  }
  return result;
}

