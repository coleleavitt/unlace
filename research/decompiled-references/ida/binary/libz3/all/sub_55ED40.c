__int64 (__fastcall **__fastcall sub_55ED40(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  result = &off_1C50DC8;
  *a1 = &off_1C50DC8;
  v3 = a1[2];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v3 - 8));
  v4 = a1[1];
  if ( v4 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v4 - 8));
  return result;
}

