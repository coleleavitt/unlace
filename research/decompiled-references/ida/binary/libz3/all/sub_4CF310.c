void __fastcall sub_4CF310(__int64 a1)
{
  __int64 v2; // rdi
  void (__fastcall ***v3)(_QWORD); // rbp

  *(_QWORD *)a1 = &off_1C4ED68;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *(void (__fastcall ****)(_QWORD))(a1 + 16);
  if ( v3 )
  {
    (**v3)(*(_QWORD *)(a1 + 16));
    sub_186B220(v3);
  }
  sub_4CF1F0(*(void (****)(void))(a1 + 8));
}

