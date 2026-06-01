__int64 __fastcall sub_2128FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v7)(__int64, __int64, __int64, __int64, __int64, __int64); // rbp
  __int64 v8; // rax

  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 56LL);
  v8 = sub_2124B50(a5);
  return v7(a1, a2, a3, a4, v8, a6);
}
