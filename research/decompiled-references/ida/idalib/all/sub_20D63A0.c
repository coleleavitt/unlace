__int64 __fastcall sub_20D63A0(__int64 a1, __int64 a2)
{
  int v3; // r12d
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx

  sub_20D1ED0((_QWORD *)a2, *(_QWORD *)(a1 + 16), *(const void **)(a1 + 24));
  v3 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 40) = 0;
  sub_20D1ED0((_QWORD *)a2, 1u, "<");
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
  if ( v5 == sub_20CEB40 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 64LL))(v4, a2);
  else
    v5(a2, *(_QWORD *)(a1 + 32));
  sub_20D1ED0((_QWORD *)a2, 1u, ">");
  *(_DWORD *)(a2 + 40) = v3 + 1;
  sub_20CFD70(a2);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = v6 + 1;
  *(_BYTE *)(v7 + v6) = 40;
  sub_20D5A60(*(_BYTE **)(a1 + 40), a2, 0x13u, 0);
  --*(_DWORD *)(a2 + 40);
  sub_20CFD70(a2);
  result = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = result + 1;
  *(_BYTE *)(v9 + result) = 41;
  return result;
}
