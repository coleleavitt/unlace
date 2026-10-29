__int64 (__fastcall **__fastcall sub_249D20(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  void *v3; // rdi
  void *v4; // rdi

  result = &off_1C62200;
  *a1 = &off_1C62200;
  v3 = (void *)a1[6];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220(v3);
  v4 = (void *)a1[3];
  if ( v4 )
    return (__int64 (__fastcall **)())sub_186B220(v4);
  return result;
}

