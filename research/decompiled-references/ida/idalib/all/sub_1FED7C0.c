void __fastcall sub_1FED7C0(_QWORD *a1)
{
  bool v1; // zf
  __int64 (__fastcall ***v3)(__int64); // rdi
  __int64 (__fastcall *v4)(__int64); // rdx

  v1 = a1[4] == 0;
  *a1 = &off_2BE4B98;
  if ( !v1 )
    std::terminate();
  *a1 = &off_2B287B8;
  v3 = (__int64 (__fastcall ***)(__int64))a1[1];
  if ( !v3 )
    goto LABEL_5;
  v4 = **v3;
  if ( v4 == sub_1FECAA0 )
  {
    ((void (*)(void))(*v3)[2])();
LABEL_5:
    operator delete(a1, 0x30u);
    return;
  }
  ((void (*)(void))v4)();
  operator delete(a1, 0x30u);
}
