__int64 __fastcall sub_21B1B60(__int64 a1, __int64 a2)
{
  bool (__fastcall *v2)(__int64); // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // ecx
  char v7; // al
  __int64 v8; // rax
  int v9; // ecx

  v2 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
  if ( v2 == sub_21B1110 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(a1 + 8) != 12 )
    {
      v4 = 0;
      v5 = _byteswap_ulong(*(_DWORD *)(v3 + 12));
      if ( v5 >= 0 )
        v4 = 18LL * (unsigned int)v5;
      return *(_QWORD *)(a1 + 72) + v4;
    }
    return *(_QWORD *)(a1 + 72) + 18LL * _byteswap_ulong(*(_DWORD *)(v3 + 20));
  }
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v2)(a1, a2, a1);
  v3 = *(_QWORD *)(a1 + 48);
  if ( v7 )
    return *(_QWORD *)(a1 + 72) + 18LL * _byteswap_ulong(*(_DWORD *)(v3 + 20));
  v8 = 0;
  v9 = _byteswap_ulong(*(_DWORD *)(v3 + 12));
  if ( v9 >= 0 )
    v8 = 18LL * (unsigned int)v9;
  return *(_QWORD *)(a1 + 72) + v8;
}
