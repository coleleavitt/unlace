__int64 *__fastcall sub_4CA320(_QWORD *a1)
{
  __int64 *result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  result = qword_1C65DA0;
  *a1 = qword_1C65DA0;
  v3 = a1[4];
  if ( v3 )
    result = (__int64 *)sub_186B220((void *)(v3 - 8));
  v4 = a1[3];
  if ( v4 )
    result = (__int64 *)sub_186B220((void *)(v4 - 8));
  v5 = a1[1];
  if ( v5 )
    return (__int64 *)sub_186B220((void *)(v5 - 8));
  return result;
}

