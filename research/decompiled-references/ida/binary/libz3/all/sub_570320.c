__int64 *__fastcall sub_570320(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 *result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi

  *a1 = &off_1C514D0;
  v2 = a1[7];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[5];
  result = qword_1C65EC0;
  *a1 = qword_1C65EC0;
  if ( v3 )
    result = (__int64 *)sub_186B220((void *)(v3 - 8));
  v5 = a1[3];
  if ( v5 )
    result = (__int64 *)sub_186B220((void *)(v5 - 8));
  v6 = a1[2];
  if ( v6 )
    return (__int64 *)sub_186B220((void *)(v6 - 8));
  return result;
}

