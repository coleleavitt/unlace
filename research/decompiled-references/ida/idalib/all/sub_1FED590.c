__int64 (__fastcall **__fastcall sub_1FED590(_QWORD *a1))()
{
  bool v1; // zf
  __int64 (__fastcall **result)(); // rax
  __int64 (***v3)(void); // rdi
  __int64 (*v4)(void); // rdx

  v1 = a1[4] == 0;
  *a1 = &off_2BE4B98;
  if ( !v1 )
    std::terminate();
  result = &off_2B287B8;
  *a1 = &off_2B287B8;
  v3 = (__int64 (***)(void))a1[1];
  if ( v3 )
  {
    v4 = **v3;
    if ( (char *)v4 == (char *)sub_1FECAA0 )
      return (__int64 (__fastcall **)())(*v3)[2]();
    else
      return (__int64 (__fastcall **)())v4();
  }
  return result;
}
