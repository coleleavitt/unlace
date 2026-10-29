__int64 *__fastcall sub_4FE940(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD); // rbp
  __int64 v3; // rdi
  __int64 *result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi

  v2 = (void (__fastcall ***)(_QWORD))a1[5];
  *a1 = &off_1C500B8;
  if ( v2 )
  {
    (**v2)(v2);
    sub_186B220(v2);
  }
  v3 = a1[4];
  result = qword_1C66908;
  *a1 = qword_1C66908;
  if ( v3 )
    result = (__int64 *)sub_186B220((void *)(v3 - 8));
  v5 = a1[3];
  if ( v5 )
    result = (__int64 *)sub_186B220((void *)(v5 - 8));
  v6 = a1[2];
  if ( v6 )
    result = (__int64 *)sub_186B220((void *)(v6 - 8));
  v7 = a1[1];
  if ( v7 )
    return (__int64 *)sub_186B220((void *)(v7 - 8));
  return result;
}

