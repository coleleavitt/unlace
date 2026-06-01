__int64 (__fastcall **__fastcall sub_1FEDAB0(_QWORD *a1))()
{
  bool v2; // zf
  void (__fastcall *v3)(_QWORD *, _QWORD *, __int64); // rax
  void (***v4)(void); // rdi
  void (*v5)(void); // rdx
  __int64 (***v6)(void); // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 (*v8)(void); // rdx

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
  v6 = (__int64 (***)(void))a1[1];
  result = &off_2B287B8;
  *a1 = &off_2B287B8;
  if ( v6 )
  {
    v8 = **v6;
    if ( (char *)v8 == (char *)sub_1FECAA0 )
      return (__int64 (__fastcall **)())(*v6)[2]();
    else
      return (__int64 (__fastcall **)())v8();
  }
  return result;
}
