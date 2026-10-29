__int64 __fastcall sub_7DF8E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 (__fastcall *v3)(__int64, __int64); // rcx

  result = a2;
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 240LL);
  if ( v3 != sub_7DF880 )
    return v3(a1, a2);
  return result;
}

