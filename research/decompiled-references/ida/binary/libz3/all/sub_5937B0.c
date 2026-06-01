__int64 *__fastcall sub_5937B0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdi
  __int64 *result; // rax

  *a1 = &off_1C68120;
  v2 = a1[9];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[8];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (void *)a1[6];
  if ( v4 )
    sub_186B220(v4);
  v5 = a1[2];
  result = qword_1C67518;
  *a1 = qword_1C67518;
  if ( v5 )
    return (__int64 *)sub_186B220((void *)(v5 - 8));
  return result;
}

