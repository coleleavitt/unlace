__int64 (__fastcall **__fastcall sub_918300(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  void *v4; // rdi

  result = &off_1C55BE8;
  *a1 = &off_1C55BE8;
  v3 = a1[6];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v3 - 8));
  v4 = (void *)a1[3];
  if ( v4 )
    return (__int64 (__fastcall **)())sub_186B220(v4);
  return result;
}

