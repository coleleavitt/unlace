__int64 *__fastcall sub_59BD70(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD); // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 *result; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi

  v2 = (void (__fastcall ***)(_QWORD))a1[8];
  *a1 = &off_1C51E90;
  if ( v2 )
  {
    (**v2)(v2);
    sub_186B220(v2);
  }
  v3 = a1[7];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[6];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[5];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[3];
  result = qword_1C666F0;
  *a1 = qword_1C666F0;
  if ( v6 )
    result = (__int64 *)sub_186B220((void *)(v6 - 8));
  v8 = a1[2];
  if ( v8 )
    result = (__int64 *)sub_186B220((void *)(v8 - 8));
  v9 = a1[1];
  if ( v9 )
    return (__int64 *)sub_186B220((void *)(v9 - 8));
  return result;
}

