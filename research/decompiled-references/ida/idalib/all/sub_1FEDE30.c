__int64 (__fastcall **__fastcall sub_1FEDE30(_QWORD *a1))()
{
  void (__fastcall *v2)(_QWORD *, _QWORD *, __int64); // rax
  void (***v3)(void); // rdi
  void (*v4)(void); // rdx
  __int64 (***v5)(void); // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 (*v7)(void); // rdx

  a1[2] = &off_2C71320;
  v2 = (void (__fastcall *)(_QWORD *, _QWORD *, __int64))a1[9];
  if ( v2 )
    v2(a1 + 7, a1 + 7, 3);
  v3 = (void (***)(void))a1[6];
  if ( v3 )
  {
    v4 = **v3;
    if ( (char *)v4 == (char *)sub_1FECAA0 )
      (*v3)[2]();
    else
      v4();
  }
  v5 = (__int64 (***)(void))a1[3];
  result = &off_2B287B8;
  a1[2] = &off_2B287B8;
  if ( v5 )
  {
    v7 = **v5;
    if ( (char *)v7 == (char *)sub_1FECAA0 )
      return (__int64 (__fastcall **)())(*v5)[2]();
    else
      return (__int64 (__fastcall **)())v7();
  }
  return result;
}
