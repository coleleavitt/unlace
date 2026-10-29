__int64 __fastcall sub_21B19C0(__int64 a1, _DWORD *a2, __int64 a3)
{
  bool (__fastcall *v3)(__int64); // rax
  bool v4; // al
  unsigned int v5; // eax
  unsigned __int64 v7; // rax
  __int64 v8; // [rsp+8h] [rbp-10h]

  v3 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  if ( v3 == sub_21B1110 )
  {
    v4 = a2[2] == 12;
  }
  else
  {
    v8 = a3;
    v4 = v3((__int64)a2);
    a3 = v8;
  }
  if ( v4 )
  {
    v7 = *(_QWORD *)a3;
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = _byteswap_uint64(v7);
  }
  else
  {
    v5 = *(_DWORD *)(a3 + 8);
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = _byteswap_ulong(v5);
  }
  return a1;
}
