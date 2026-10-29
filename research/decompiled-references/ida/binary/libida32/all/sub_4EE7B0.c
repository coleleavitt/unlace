__int64 __fastcall sub_4EE7B0(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // r12
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v4 = sub_4EF930(v3, *a2);
  v5 = *(_QWORD **)(a1 + 24);
  v6 = v4;
  if ( v4 == *v5 + 16LL * v5[1] )
    return 0xFFFFFFFFLL;
  sub_4EE680((__int64)(v5 + 8), a1, a2);
  result = *(unsigned int *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = result + 1;
  return result;
}

