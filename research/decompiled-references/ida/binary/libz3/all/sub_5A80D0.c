__int64 __fastcall sub_5A80D0(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD); // rbp
  void (__fastcall ***v3)(_QWORD); // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi

  v2 = *(void (__fastcall ****)(_QWORD))(a1 + 48);
  *(_QWORD *)a1 = &off_1C52358;
  if ( v2 )
  {
    (**v2)(v2);
    sub_186B220(v2);
  }
  v3 = *(void (__fastcall ****)(_QWORD))(a1 + 40);
  if ( v3 )
  {
    (**v3)(*(_QWORD *)(a1 + 40));
    sub_186B220(v3);
  }
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  return sub_4CFE00(*(void (****)(void))(a1 + 8));
}

