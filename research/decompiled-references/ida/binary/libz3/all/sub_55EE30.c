__int64 *__fastcall sub_55EE30(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 *result; // rax

  *a1 = qword_1C65E70;
  v2 = a1[3];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[1];
  result = qword_1C65DF8;
  *a1 = qword_1C65DF8;
  if ( v3 )
    return (__int64 *)sub_186B220((void *)(v3 - 8));
  return result;
}

