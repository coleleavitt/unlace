__int64 (__fastcall **__fastcall sub_DE88F0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v2; // rdi

  result = &off_1C5AF00;
  *a1 = &off_1C5AF00;
  v2 = a1[2];
  if ( v2 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v2 - 8));
  return result;
}

