__int64 __fastcall sub_F475A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 (*v7)(); // rax
  __int64 v8; // rbp

  sub_993300(a1, a2);
  sub_993300(a1, SHIDWORD(a2));
  sub_993300(a1, a3);
  result = sub_993300(a1, SHIDWORD(a3));
  if ( a4 )
  {
    v7 = *(__int64 (**)())(*(_QWORD *)a4 + 32LL);
    if ( v7 == sub_9DD400 )
      v8 = sub_B4CD20(a4);
    else
      v8 = ((__int64 (__fastcall *)(__int64))v7)(a4);
    sub_993300(a1, v8);
    return sub_993300(a1, SHIDWORD(v8));
  }
  return result;
}

