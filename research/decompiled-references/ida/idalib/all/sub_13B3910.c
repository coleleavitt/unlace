__int64 __fastcall sub_13B3910(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
  if ( !result )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 56LL))(*(_QWORD *)(a1 + 48));
  v4 = *(_QWORD *)(a1 + 80);
  if ( !v4 || v4 == result )
  {
    *(_QWORD *)(a1 + 80) = result;
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 56LL))(*(_QWORD *)(a1 + 48));
  }
  return result;
}
