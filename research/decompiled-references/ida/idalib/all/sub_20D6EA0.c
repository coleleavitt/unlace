__int64 __fastcall sub_20D6EA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _BYTE *v4; // r12
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rdx

  ++*(_DWORD *)(a2 + 40);
  sub_20CFD70(a2);
  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = v2 + 1;
  *(_BYTE *)(v3 + v2) = 40;
  v4 = *(_BYTE **)(a1 + 16);
  v5 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
  if ( v5 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v4 + 64LL))(*(_QWORD *)(a1 + 16), a2);
  else
    v5(a2, *(_QWORD *)(a1 + 16));
  if ( (v4[9] & 0xC0) != 0x40 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
    if ( v6 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v4 + 72LL))(v4, a2);
    else
      v6(a2, (__int64)v4);
  }
  --*(_DWORD *)(a2 + 40);
  sub_20CFD70(a2);
  v7 = *(_QWORD *)(a2 + 16);
  v8 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = v7 + 1;
  *(_BYTE *)(v8 + v7) = 41;
  ++*(_DWORD *)(a2 + 40);
  sub_20CFD70(a2);
  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = v9 + 1;
  *(_BYTE *)(v10 + v9) = 40;
  sub_20D6480((_QWORD *)(a1 + 24), a2);
  --*(_DWORD *)(a2 + 40);
  sub_20CFD70(a2);
  result = *(_QWORD *)(a2 + 16);
  v12 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = result + 1;
  *(_BYTE *)(v12 + result) = 41;
  return result;
}
