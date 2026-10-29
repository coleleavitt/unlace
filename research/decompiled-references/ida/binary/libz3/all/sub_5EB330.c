__int64 (__fastcall **__fastcall sub_5EB330(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  void *v5; // rdi
  __int64 v6; // rdi

  result = &off_1C526C8;
  *a1 = &off_1C526C8;
  v3 = a1[11];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v3 - 8));
  v4 = a1[10];
  if ( v4 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v4 - 8));
  v5 = (void *)a1[7];
  if ( v5 )
    result = (__int64 (__fastcall **)())sub_186B220(v5);
  v6 = a1[6];
  if ( v6 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v6 - 8));
  return result;
}

