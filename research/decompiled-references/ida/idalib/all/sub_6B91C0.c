__int64 __fastcall sub_6B91C0(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // r13
  bool v4; // dl
  char v5; // r12
  __int64 v6; // rax
  __int64 result; // rax

  v2 = sub_53E2E0((__int64 *)a2);
  v3 = *(_BYTE *)(a2 + 51);
  v4 = 0;
  v5 = v2;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
    v4 = get_tinfo_property(*(_QWORD *)(*(_QWORD *)a2 + 144 * v6 - 80), 287) != 0;
  result = *(_QWORD *)(a2 + 24);
  *(_BYTE *)(a1 + 8) = v4;
  *(_BYTE *)(a1 + 9) = v3;
  *(_QWORD *)a1 = result;
  *(_BYTE *)(a1 + 10) = v5;
  return result;
}
