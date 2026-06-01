void __fastcall sub_1FEDFA0(_QWORD *a1)
{
  bool v2; // zf
  void (__fastcall *v3)(_QWORD *, _QWORD *, __int64); // rax
  void (***v4)(void); // rdi
  void (*v5)(void); // rdx
  __int64 (__fastcall ***v6)(__int64); // rdi
  __int64 (__fastcall *v7)(__int64); // rdx

  v2 = a1[4] == 0;
  *a1 = &off_2C712F0;
  if ( !v2 )
    std::thread::join((std::thread *)(a1 + 4));
  v3 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[9];
  if ( v3 )
    v3(a1 + 7, a1 + 7, 3);
  v4 = (void (***)(void))a1[6];
  if ( v4 )
  {
    v5 = **v4;
    if ( (char *)v5 == (char *)sub_1FECAA0 )
      (*v4)[2]();
    else
      v5();
  }
  v2 = a1[4] == 0;
  *a1 = &off_2BE4B98;
  if ( !v2 )
    std::terminate();
  v6 = (__int64 (__fastcall ***)(__int64))a1[1];
  *a1 = &off_2B287B8;
  if ( !v6 )
    goto LABEL_12;
  v7 = **v6;
  if ( v7 == sub_1FECAA0 )
  {
    ((void (*)(void))(*v6)[2])();
LABEL_12:
    operator delete(a1, 0x58u);
    return;
  }
  ((void (*)(void))v7)();
  operator delete(a1, 0x58u);
}
