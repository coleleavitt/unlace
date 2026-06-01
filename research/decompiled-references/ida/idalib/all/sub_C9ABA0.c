__int64 __fastcall sub_C9ABA0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 27) & 1) == 0 )
    return sub_A732E0((__int64)a2, a1);
  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return sub_A732E0((__int64)a2, a1);
  v3 = *(_QWORD *)(v2 + 80);
  v4 = sub_A8A2C0(a2);
  v8 = *(_QWORD *)(v4 + 48);
  if ( v8 )
    v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v9 = sub_A7AA70((__int64)a2, v4, 0, v5, v6, v7);
  result = v3;
  if ( v9 == v3 )
    return *(_QWORD *)(a1 + 8);
  return result;
}
