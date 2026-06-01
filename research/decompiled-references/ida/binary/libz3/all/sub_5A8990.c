__int64 *__fastcall sub_5A8990(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  void (__fastcall ***v9)(_QWORD); // rbp
  __int64 v10; // rdi
  __int64 *result; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi

  *(_QWORD *)a1 = &off_1C52120;
  v2 = *(_QWORD *)(a1 + 112);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  sub_4CFE00(*(void (****)(void))(a1 + 104));
  sub_4CF1F0(*(void (****)(void))(a1 + 96));
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(_QWORD *)(a1 + 48);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *(void (__fastcall ****)(_QWORD))(a1 + 40);
  if ( v9 )
  {
    (**v9)(*(_QWORD *)(a1 + 40));
    sub_186B220(v9);
  }
  sub_568110(*(void (****)(void))(a1 + 32));
  v10 = *(_QWORD *)(a1 + 24);
  result = qword_1C666F0;
  *(_QWORD *)a1 = qword_1C666F0;
  if ( v10 )
    result = (__int64 *)sub_186B220((void *)(v10 - 8));
  v12 = *(_QWORD *)(a1 + 16);
  if ( v12 )
    result = (__int64 *)sub_186B220((void *)(v12 - 8));
  v13 = *(_QWORD *)(a1 + 8);
  if ( v13 )
    return (__int64 *)sub_186B220((void *)(v13 - 8));
  return result;
}

