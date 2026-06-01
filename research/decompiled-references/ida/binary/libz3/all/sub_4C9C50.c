__int64 (__fastcall **__fastcall sub_4C9C50(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v2; // rdi

  result = &off_1C4F000;
  *a1 = &off_1C4F000;
  v2 = a1[1];
  if ( v2 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v2 - 8));
  return result;
}

