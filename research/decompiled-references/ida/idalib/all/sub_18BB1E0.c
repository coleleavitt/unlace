__int64 __fastcall sub_18BB1E0(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64, __int64); // rbp
  __int64 v3; // rax

  v2 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 96LL);
  v3 = sub_C94CC0(a2);
  return v2(a1, v3);
}
