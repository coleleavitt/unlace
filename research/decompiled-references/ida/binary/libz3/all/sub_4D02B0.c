unsigned __int64 __fastcall sub_4D02B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v5; // rax

  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL);
  if ( v3 == sub_4D0080 )
    return sub_4C4560(a1 + 64, a2, a3);
  v5 = ((__int64 (*)(void))v3)();
  return sub_4C4560(v5, a2, a3);
}

