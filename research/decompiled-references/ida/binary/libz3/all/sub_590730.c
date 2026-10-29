__int64 (__fastcall **__fastcall sub_590730(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  void (__fastcall ***v2)(_QWORD); // rbp
  __int64 v3; // rdi

  result = &off_1C51940;
  v2 = (void (__fastcall ***)(_QWORD))a1[2];
  *a1 = &off_1C51940;
  if ( v2 )
  {
    (**v2)(v2);
    result = (__int64 (__fastcall **)())sub_186B220(v2);
  }
  v3 = a1[1];
  if ( v3 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v3 - 8));
  return result;
}

