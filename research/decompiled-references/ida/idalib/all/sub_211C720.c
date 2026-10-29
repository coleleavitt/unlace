void __fastcall sub_211C720(_QWORD **a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void (*v7)(); // r12
  unsigned __int64 v8; // rax

  if ( a2 )
  {
    v7 = (void (*)())(*a1)[73];
    v8 = sub_210EBA0(a2, a1[1], 0, 0, a5, a6);
    if ( v7 != nullsub_1448 )
      ((void (__fastcall *)(_QWORD **, unsigned __int64, _QWORD, _QWORD))v7)(a1, v8, a3, 0);
  }
}
