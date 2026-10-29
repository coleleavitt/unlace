__int64 *__fastcall sub_4FE890(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD); // rbp
  __int64 v3; // rdi
  __int64 *result; // rax

  v2 = (void (__fastcall ***)(_QWORD))a1[2];
  *a1 = &off_1C500E0;
  if ( v2 )
  {
    (**v2)(v2);
    sub_186B220(v2);
  }
  v3 = a1[1];
  result = qword_1C66718;
  *a1 = qword_1C66718;
  if ( v3 )
    return (__int64 *)sub_186B220((void *)(v3 - 8));
  return result;
}

