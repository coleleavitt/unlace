void __fastcall sub_72A830(_QWORD *a1)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(_QWORD *, _QWORD *, __int64); // rax

  *a1 = off_2B38410;
  v2 = a1[8];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  a1[1] = &off_2B383D8;
  v3 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[6];
  if ( v3 )
    v3(a1 + 4, a1 + 4, 3);
  operator delete(a1, 0x50u);
}
