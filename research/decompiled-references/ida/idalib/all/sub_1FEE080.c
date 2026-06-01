void __fastcall sub_1FEE080(_QWORD *a1)
{
  void (__fastcall *v2)(_QWORD *, _QWORD *, __int64); // rax
  void (***v3)(void); // rdi
  void (*v4)(void); // rdx
  __int64 (__fastcall ***v5)(__int64); // rdi
  __int64 (__fastcall *v6)(__int64); // rdx

  *a1 = &off_2C71320;
  v2 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[7];
  if ( v2 )
    v2(a1 + 5, a1 + 5, 3);
  v3 = (void (***)(void))a1[4];
  if ( v3 )
  {
    v4 = **v3;
    if ( (char *)v4 == (char *)sub_1FECAA0 )
      (*v3)[2]();
    else
      v4();
  }
  v5 = (__int64 (__fastcall ***)(__int64))a1[1];
  *a1 = &off_2B287B8;
  if ( !v5 )
    goto LABEL_9;
  v6 = **v5;
  if ( v6 == sub_1FECAA0 )
  {
    ((void (*)(void))(*v5)[2])();
LABEL_9:
    operator delete(a1, 0x48u);
    return;
  }
  ((void (*)(void))v6)();
  operator delete(a1, 0x48u);
}
