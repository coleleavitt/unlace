__int64 __fastcall sub_450DA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = sub_18183E0(a2, "SPACER arith kernel failed", *(unsigned int *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a2);
  return result;
}

