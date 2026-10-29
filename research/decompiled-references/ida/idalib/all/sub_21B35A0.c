__int64 __fastcall sub_21B35A0(__int64 a1, __int64 a2, __int64 a3)
{
  bool (__fastcall *v3)(__int64); // rax
  bool v4; // al
  __int64 v6; // rbx
  bool (__fastcall *v7)(__int64); // rax
  __int64 v8; // rcx
  __int16 v9; // ax
  __int64 (__fastcall ***v10)(); // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-30h]
  __int64 v13; // [rsp+8h] [rbp-30h]
  __int64 v14[4]; // [rsp+18h] [rbp-20h] BYREF

  v3 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  if ( v3 == sub_21B1110 )
  {
    v4 = *(_DWORD *)(a2 + 8) == 12;
  }
  else
  {
    v12 = a3;
    v4 = v3(a2);
    a3 = v12;
  }
  if ( v4 || _byteswap_ulong(*(_DWORD *)(a3 + 56)) <= 0xFFFE )
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_DWORD *)a1 = _byteswap_ulong(*(_DWORD *)(a3 + 56));
    return a1;
  }
  v6 = *(_QWORD *)(a2 + 64);
  v7 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  if ( v7 != sub_21B1110 )
  {
    v13 = a3;
    v7(a2);
    a3 = v13;
  }
  v8 = v6 + 40LL * (unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL), 8);
  if ( v6 != v8 )
  {
    v9 = -29127 * ((a3 - v6) >> 3) + 1;
    while ( *(_DWORD *)(v6 + 36) != (_DWORD)&loc_800000 || v9 != __ROL2__(*(_WORD *)(v6 + 32), 8) )
    {
      v6 += 40;
      if ( v6 == v8 )
        goto LABEL_16;
    }
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_DWORD *)a1 = _byteswap_ulong(*(_DWORD *)(v6 + 8));
    return a1;
  }
LABEL_16:
  v10 = sub_2195B10();
  sub_2220500(v14, 3, v10);
  v11 = v14[0];
  *(_BYTE *)(a1 + 8) |= 1u;
  *(_QWORD *)a1 = v11;
  return a1;
}
