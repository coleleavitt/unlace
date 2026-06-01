__int64 (__fastcall **__fastcall sub_590370(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  void (__fastcall ***v5)(_QWORD); // rbx

  result = &off_1C51A38;
  *a1 = &off_1C51A38;
  v3 = a1[3];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v3 - 8));
  v4 = a1[2];
  if ( v4 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v4 - 8));
  v5 = (void (__fastcall ***)(_QWORD))a1[1];
  if ( v5 )
  {
    (**v5)(v5);
    return (__int64 (__fastcall **)())sub_186B220(v5);
  }
  return result;
}

