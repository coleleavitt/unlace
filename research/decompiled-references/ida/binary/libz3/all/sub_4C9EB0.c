__int64 *__fastcall sub_4C9EB0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 *result; // rax

  *a1 = &off_1C4EE90;
  a1[4] = qword_1C65DC8;
  v2 = a1[5];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[3];
  *a1 = qword_1C65E20;
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[1];
  result = qword_1C65DF8;
  *a1 = qword_1C65DF8;
  if ( v4 )
    return (__int64 *)sub_186B220((void *)(v4 - 8));
  return result;
}

