__int64 *__fastcall sub_4CBC50(_QWORD *a1)
{
  __int64 v2; // rdi
  void (__fastcall ***v3)(_QWORD); // rbp
  void (__fastcall ***v4)(_QWORD); // rbp
  __int64 v5; // rdi
  __int64 *result; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  *a1 = &off_1C4EF48;
  v2 = a1[8];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (void (__fastcall ***)(_QWORD))a1[7];
  if ( v3 )
  {
    (**v3)(a1[7]);
    sub_186B220(v3);
  }
  v4 = (void (__fastcall ***)(_QWORD))a1[6];
  if ( v4 )
  {
    (**v4)(a1[6]);
    sub_186B220(v4);
  }
  v5 = a1[5];
  result = qword_1C65E48;
  *a1 = qword_1C65E48;
  if ( v5 )
    result = (__int64 *)sub_186B220((void *)(v5 - 8));
  v7 = a1[4];
  if ( v7 )
    result = (__int64 *)sub_186B220((void *)(v7 - 8));
  v8 = a1[3];
  if ( v8 )
    result = (__int64 *)sub_186B220((void *)(v8 - 8));
  v9 = a1[1];
  if ( v9 )
    return (__int64 *)sub_186B220((void *)(v9 - 8));
  return result;
}

