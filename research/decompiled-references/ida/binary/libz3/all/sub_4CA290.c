__int64 *__fastcall sub_4CA290(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void (__fastcall ***v4)(_QWORD); // rbp
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 *result; // rax

  *a1 = &off_1C4F2A8;
  v2 = a1[9];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[8];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (void (__fastcall ***)(_QWORD))a1[6];
  if ( v4 )
  {
    (**v4)(a1[6]);
    sub_186B220(v4);
  }
  v5 = a1[3];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[1];
  result = qword_1C65DF8;
  *a1 = qword_1C65DF8;
  if ( v6 )
    return (__int64 *)sub_186B220((void *)(v6 - 8));
  return result;
}

