__int64 (__fastcall **__fastcall sub_4398D0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 (__fastcall ***v2)(_QWORD); // rdi

  result = &off_2B287B8;
  *a1 = &off_2B287B8;
  v2 = (__int64 (__fastcall ***)(_QWORD))a1[1];
  if ( v2 )
    return (__int64 (__fastcall **)())(**v2)(v2);
  return result;
}
