__int64 (__fastcall **__fastcall sub_6B03F0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdi

  result = &off_1C62200;
  a1[3] = &off_1C62200;
  v3 = (void *)a1[9];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220(v3);
  v4 = (void *)a1[6];
  if ( v4 )
    result = (__int64 (__fastcall **)())sub_186B220(v4);
  v5 = a1[2];
  if ( v5 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v5 - 8));
  return result;
}

