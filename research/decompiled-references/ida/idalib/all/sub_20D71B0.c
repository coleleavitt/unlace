__int64 __fastcall sub_20D71B0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r12
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx

  if ( *(_BYTE *)(a1 + 40) )
  {
    ++*(_DWORD *)(a2 + 40);
    sub_20CFD70(a2);
    v10 = *(_QWORD *)(a2 + 16);
    v11 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = v10 + 1;
    *(_BYTE *)(v11 + v10) = 40;
  }
  v2 = *(_BYTE **)(a1 + 16);
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL);
  if ( v3 == sub_20CEB40 )
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v2 + 64LL))(*(_QWORD *)(a1 + 16), a2);
  else
    v3(a2, *(_QWORD *)(a1 + 16));
  if ( (v2[9] & 0xC0) != 0x40 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL);
    if ( v4 == sub_20CEB60 )
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v2 + 72LL))(v2, a2);
    else
      v4(a2, (__int64)v2);
  }
  v5 = *(_DWORD *)(a2 + 40);
  if ( *(_BYTE *)(a1 + 40) )
  {
    *(_DWORD *)(a2 + 40) = v5 - 1;
    sub_20CFD70(a2);
    v12 = *(_QWORD *)(a2 + 16);
    v13 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 16) = v12 + 1;
    *(_BYTE *)(v13 + v12) = 41;
    v5 = *(_DWORD *)(a2 + 40);
  }
  *(_DWORD *)(a2 + 40) = v5 + 1;
  sub_20CFD70(a2);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = v6 + 1;
  *(_BYTE *)(v7 + v6) = 40;
  sub_20D6480((_QWORD *)(a1 + 24), a2);
  --*(_DWORD *)(a2 + 40);
  sub_20CFD70(a2);
  result = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 16) = result + 1;
  *(_BYTE *)(v9 + result) = 41;
  return result;
}
