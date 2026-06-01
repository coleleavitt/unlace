__int64 *__fastcall sub_5A8230(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void (__fastcall ***v4)(_QWORD); // rbp
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 *result; // rax

  *(_QWORD *)a1 = &off_1C52198;
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(void (__fastcall ****)(_QWORD))(a1 + 32);
  if ( v4 )
  {
    (**v4)(*(_QWORD *)(a1 + 32));
    sub_186B220(v4);
  }
  sub_4CFE00(*(void (****)(void))(a1 + 24));
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = qword_1C66768;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *(_QWORD *)(a1 + 8);
  result = qword_1C66718;
  *(_QWORD *)a1 = qword_1C66718;
  if ( v6 )
    return (__int64 *)sub_186B220((void *)(v6 - 8));
  return result;
}

