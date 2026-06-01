bool __fastcall sub_B6B7F0(_QWORD *a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax

  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v2 == sub_A01140 )
    return *a1 != sub_B70A60(a2);
  else
    return *a1 != v2(a2);
}
