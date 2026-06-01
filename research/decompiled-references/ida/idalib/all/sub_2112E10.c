char __fastcall sub_2112E10(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  _QWORD *v4; // rbx
  bool (__fastcall *v5)(__int64, __int64, __int64); // rbp
  _QWORD *v6; // rax
  _QWORD *v8; // rax
  unsigned __int8 v10; // [rsp+1Ch] [rbp-1Ch]

  v4 = *(_QWORD **)a3;
  v5 = *(bool (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 48LL);
  if ( *(_QWORD *)a3 || (*(_BYTE *)(a3 + 9) & 0x70) != 0x20 || (*(_BYTE *)(a3 + 8) & 0x40) != 0 )
  {
    if ( v5 != sub_2112DA0 )
      return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD, _QWORD))v5)(a1, a2, v4, a4, 0);
  }
  else
  {
    v10 = a4;
    v8 = sub_210D820(*(_QWORD *)(a3 + 24));
    a4 = v10;
    v4 = v8;
    *(_QWORD *)a3 = v8;
    if ( v5 != sub_2112DA0 )
      return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD, _QWORD))v5)(a1, a2, v4, a4, 0);
  }
  v6 = *(_QWORD **)a2;
  if ( !*(_QWORD *)a2 )
  {
    if ( (*(_BYTE *)(a2 + 9) & 0x70) != 0x20 || (*(_BYTE *)(a2 + 8) & 0x40) != 0 )
      BUG();
    v6 = sub_210D820(*(_QWORD *)(a2 + 24));
    *(_QWORD *)a2 = v6;
  }
  return v6[1] == v4[1];
}
