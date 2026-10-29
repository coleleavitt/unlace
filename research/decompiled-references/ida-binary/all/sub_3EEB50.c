void __fastcall sub_3EEB50(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD *, _QWORD *, __int64); // rax
  void (__fastcall *v2)(_QWORD *, _QWORD *, __int64); // rax

  v1 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[10];
  if ( v1 )
    v1(a1 + 8, a1 + 8, 3);
  v2 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[6];
  if ( v2 )
    v2(a1 + 4, a1 + 4, 3);
}
