__int64 *__fastcall sub_539B70(_QWORD *a1)
{
  __int64 *result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  result = qword_1C666F0;
  *a1 = qword_1C666F0;
  v3 = a1[3];
  if ( v3 )
    result = (__int64 *)sub_186B220((void *)(v3 - 8));
  v4 = a1[2];
  if ( v4 )
    result = (__int64 *)sub_186B220((void *)(v4 - 8));
  v5 = a1[1];
  if ( v5 )
    return (__int64 *)sub_186B220((void *)(v5 - 8));
  return result;
}

