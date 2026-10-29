__int64 __fastcall sub_21B1A40(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  bool (__fastcall *v3)(__int64); // rax
  bool v4; // al
  unsigned __int64 v5; // rax

  v2 = *(_QWORD *)(a2 + 56);
  if ( v2 )
  {
    v3 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
    if ( v3 == sub_21B1110 )
    {
      v4 = *(_DWORD *)(a2 + 8) == 12;
    }
    else
    {
      v4 = v3(a2);
      v2 = *(_QWORD *)(a2 + 56);
    }
    if ( v4 )
      v5 = _byteswap_uint64(*(_QWORD *)(v2 + 80));
    else
      v5 = _byteswap_ulong(*(_DWORD *)(v2 + 16));
    *(_QWORD *)a1 = v5;
    *(_BYTE *)(a1 + 8) &= ~1u;
    return a1;
  }
  else
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = 0;
    return a1;
  }
}
