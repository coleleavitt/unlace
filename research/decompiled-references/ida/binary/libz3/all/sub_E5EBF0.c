__int64 __fastcall sub_E5EBF0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  __int64 result; // rax

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 144LL);
  if ( !a2 )
    return v3(a1, 0);
  ++*(_DWORD *)(a2 + 8);
  result = v3(a1, a2);
  if ( (*(_DWORD *)(a2 + 8))-- == 1 )
    return sub_15D7BC0(v2, a2);
  return result;
}

