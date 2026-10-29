__int64 __fastcall sub_5A84F0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  void (__fastcall ***v6)(_QWORD); // rbp
  void (__fastcall ***v7)(_QWORD); // rbp
  void (__fastcall ***v8)(_QWORD); // rbp
  void (__fastcall ***v9)(_QWORD); // rbp
  void (__fastcall ***v10)(_QWORD); // rbp
  __int64 result; // rax
  void (__fastcall ***v12)(_QWORD); // rbp
  __int64 v13; // rdi
  __int64 v14; // rdi

  *(_QWORD *)a1 = &off_1C52330;
  v2 = *(_QWORD *)(a1 + 128);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *(void (__fastcall ****)(_QWORD))(a1 + 88);
  if ( v6 )
  {
    (**v6)(*(_QWORD *)(a1 + 88));
    sub_186B220(v6);
  }
  sub_4CFE00(*(void (****)(void))(a1 + 80));
  v7 = *(void (__fastcall ****)(_QWORD))(a1 + 72);
  if ( v7 )
  {
    (**v7)(*(_QWORD *)(a1 + 72));
    sub_186B220(v7);
  }
  v8 = *(void (__fastcall ****)(_QWORD))(a1 + 64);
  if ( v8 )
  {
    (**v8)(*(_QWORD *)(a1 + 64));
    sub_186B220(v8);
  }
  v9 = *(void (__fastcall ****)(_QWORD))(a1 + 56);
  if ( v9 )
  {
    (**v9)(*(_QWORD *)(a1 + 56));
    sub_186B220(v9);
  }
  sub_568110(*(void (****)(void))(a1 + 48));
  v10 = *(void (__fastcall ****)(_QWORD))(a1 + 40);
  if ( v10 )
  {
    (**v10)(*(_QWORD *)(a1 + 40));
    sub_186B220(v10);
  }
  result = sub_568110(*(void (****)(void))(a1 + 32));
  v12 = *(void (__fastcall ****)(_QWORD))(a1 + 24);
  if ( v12 )
  {
    (**v12)(*(_QWORD *)(a1 + 24));
    result = sub_186B220(v12);
  }
  v13 = *(_QWORD *)(a1 + 16);
  if ( v13 )
    result = sub_186B220((void *)(v13 - 8));
  v14 = *(_QWORD *)(a1 + 8);
  if ( v14 )
    return sub_186B220((void *)(v14 - 8));
  return result;
}

