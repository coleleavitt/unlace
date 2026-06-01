unsigned __int64 __fastcall sub_782A40(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdi
  void (__fastcall __noreturn *v4)(); // rax

  result = sub_781D20(a1);
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    v4 = *(void (__fastcall __noreturn **)())(*(_QWORD *)v3 + 48LL);
    if ( v4 == sub_782AC0 )
    {
      sub_1872CE0("");
      sub_1873130(114, 57);
    }
    return ((__int64 (__fastcall *)(__int64, __int64))v4)(v3, a2);
  }
  return result;
}

