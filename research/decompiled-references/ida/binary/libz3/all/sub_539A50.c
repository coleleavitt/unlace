__int64 *__fastcall sub_539A50(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 *result; // rax

  *a1 = qword_1C66740;
  v2 = a1[2];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[1];
  result = qword_1C66718;
  *a1 = qword_1C66718;
  if ( v3 )
    return (__int64 *)sub_186B220((void *)(v3 - 8));
  return result;
}

