void __fastcall sub_45E6B0(__int64 a1, int a2, int a3, __int64 a4)
{
  void (*v4)(); // rax

  if ( !(a2 | a3) )
  {
    v4 = *(void (**)())(*(_QWORD *)a1 + 1128LL);
    if ( v4 != nullsub_189 )
      ((void (__fastcall *)(__int64, _QWORD))v4)(a1, *(_QWORD *)(a4 + 8));
  }
}
