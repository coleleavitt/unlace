__int64 *__fastcall sub_593770(_QWORD *a1)
{
  __int64 *result; // rax
  __int64 v2; // rdi

  *a1 = &off_1C51CC0;
  result = qword_1C67F60;
  a1[4] = qword_1C67F60;
  v2 = a1[6];
  if ( v2 )
    return (__int64 *)sub_186B220((void *)(v2 - 8));
  return result;
}

