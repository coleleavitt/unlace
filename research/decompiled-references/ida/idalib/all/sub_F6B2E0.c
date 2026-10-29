__int64 __fastcall sub_F6B2E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // rbp

  sub_9B7040(a1, a2);
  sub_9B7040(a1, SHIDWORD(a2));
  sub_9B7040(a1, a3);
  result = sub_9B7040(a1, SHIDWORD(a3));
  if ( a4 )
  {
    v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a4 + 32LL);
    if ( v7 == sub_A01140 )
      v8 = sub_B70A60(a4);
    else
      v8 = v7(a4);
    sub_9B7040(a1, v8);
    return sub_9B7040(a1, SHIDWORD(v8));
  }
  return result;
}
