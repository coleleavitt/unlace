bool __fastcall sub_1BE56A0(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 (__fastcall *v6)(__int64); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  if ( (char *)v2 == (char *)sub_A01140 )
  {
    v3 = sub_B70A60(a1);
    v4 = a2;
    v5 = v3;
    v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
    if ( v6 == sub_A01140 )
      return v5 == sub_B70A60(v4);
  }
  else
  {
    v4 = a2;
    v5 = v2();
    v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
    if ( v6 == sub_A01140 )
      return v5 == sub_B70A60(v4);
  }
  return v5 == v6(v4);
}
