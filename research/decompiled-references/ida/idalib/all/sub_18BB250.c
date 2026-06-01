__int64 __fastcall sub_18BB250(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rbp
  __int64 v3; // rax

  v2 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 1336LL);
  v3 = sub_C95340(a2);
  return v2(a1, v3);
}
