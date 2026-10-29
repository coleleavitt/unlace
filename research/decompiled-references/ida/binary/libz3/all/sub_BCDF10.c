__int64 (__fastcall **__fastcall sub_BCDF10(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  result = &off_1C57EB0;
  *a1 = &off_1C57EB0;
  v3 = a1[6];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v3 - 8));
  v4 = a1[5];
  if ( v4 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v4 - 8));
  v5 = a1[4];
  if ( v5 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v5 - 8));
  return result;
}

