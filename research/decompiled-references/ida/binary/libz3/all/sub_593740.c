__int64 *__fastcall sub_593740(_QWORD *a1)
{
  __int64 *result; // rax
  __int64 v2; // rdi

  result = qword_1C67F60;
  *a1 = qword_1C67F60;
  v2 = a1[2];
  if ( v2 )
    return (__int64 *)sub_186B220((void *)(v2 - 8));
  return result;
}

