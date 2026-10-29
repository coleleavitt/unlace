__int64 (__fastcall **__fastcall sub_BE4540(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v2; // rdi

  result = &off_1C57F30;
  *a1 = &off_1C57F30;
  v2 = a1[6];
  if ( v2 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v2 - 8));
  return result;
}

