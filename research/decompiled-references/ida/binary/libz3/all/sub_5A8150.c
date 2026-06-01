__int64 __fastcall sub_5A8150(__int64 a1)
{
  void (__fastcall ***v1)(_QWORD); // rbp
  void (__fastcall ***v2)(_QWORD); // rbp
  __int64 result; // rax
  void (__fastcall ***v4)(_QWORD); // rbp
  void (__fastcall ***v5)(_QWORD); // rbp
  void (__fastcall ***v6)(_QWORD); // rbp
  void (__fastcall ***v7)(_QWORD); // rbp
  __int64 v8; // rdi

  v1 = *(void (__fastcall ****)(_QWORD))(a1 + 72);
  *(_QWORD *)a1 = &off_1C52210;
  if ( v1 )
  {
    (**v1)(v1);
    sub_186B220(v1);
  }
  v2 = *(void (__fastcall ****)(_QWORD))(a1 + 64);
  if ( v2 )
  {
    (**v2)(*(_QWORD *)(a1 + 64));
    sub_186B220(v2);
  }
  result = sub_4CFE00(*(void (****)(void))(a1 + 56));
  v4 = *(void (__fastcall ****)(_QWORD))(a1 + 48);
  if ( v4 )
  {
    (**v4)(*(_QWORD *)(a1 + 48));
    result = sub_186B220(v4);
  }
  v5 = *(void (__fastcall ****)(_QWORD))(a1 + 40);
  if ( v5 )
  {
    (**v5)(*(_QWORD *)(a1 + 40));
    result = sub_186B220(v5);
  }
  v6 = *(void (__fastcall ****)(_QWORD))(a1 + 32);
  if ( v6 )
  {
    (**v6)(*(_QWORD *)(a1 + 32));
    result = sub_186B220(v6);
  }
  v7 = *(void (__fastcall ****)(_QWORD))(a1 + 24);
  if ( v7 )
  {
    (**v7)(*(_QWORD *)(a1 + 24));
    result = sub_186B220(v7);
  }
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
    return sub_186B220((void *)(v8 - 8));
  return result;
}

