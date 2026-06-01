__int64 __fastcall sub_7795E0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  _QWORD *v5; // rax
  __int64 v7; // [rsp+18h] [rbp-40h] BYREF
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+40h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 29) & 2) == 0 )
    return sub_790FC0(a1 + 40);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 > 7 )
    return sub_790FC0(a1 + 40);
  if ( (_DWORD)v3 )
    return sub_790FC0(a1 + 40);
  v5 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v5 + 16LL) != 47 || (*(_BYTE *)(sub_B14A40(*v5) + 75) & 1) == 0 )
    return sub_790FC0(a1 + 40);
  v7 = *(_QWORD *)(a1 + 48);
  v9 = 257;
  return sub_B2AEC0(&v7, a2, a3, v8, 0);
}

