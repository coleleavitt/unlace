__int64 (__fastcall **__fastcall sub_4639E0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  void *v3; // rdi
  void *v4; // rdi

  result = &off_1C62200;
  a1[1] = &off_1C62200;
  v3 = (void *)a1[7];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220(v3);
  v4 = (void *)a1[4];
  if ( v4 )
    result = (__int64 (__fastcall **)())sub_186B220(v4);
  if ( *a1 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(*a1 - 8LL));
  return result;
}

