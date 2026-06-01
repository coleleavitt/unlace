__int64 __fastcall sub_4D0400(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 v4; // rax

  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL);
  if ( v2 == sub_4D0080 )
    return sub_4C3050(a1 + 64, a2);
  v4 = ((__int64 (*)(void))v2)();
  return sub_4C3050(v4, a2);
}

