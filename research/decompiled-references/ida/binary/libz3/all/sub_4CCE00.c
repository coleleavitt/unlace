__int64 *__fastcall sub_4CCE00(_QWORD *a1)
{
  __int64 *result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  result = qword_1C65E98;
  *a1 = qword_1C65E98;
  v3 = a1[2];
  if ( v3 )
    result = (__int64 *)sub_186B220((void *)(v3 - 8));
  v4 = a1[1];
  if ( v4 )
    return (__int64 *)sub_186B220((void *)(v4 - 8));
  return result;
}

