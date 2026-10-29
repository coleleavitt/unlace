__int64 __fastcall sub_79BE10(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 *v4; // rax
  unsigned __int16 *v5; // rsi
  unsigned int v8; // esi
  __int64 v9; // rdi

  v8 = *a1;
  v9 = *(_QWORD *)(a2 + 1544);
  if ( v8 == -1 )
    return -1;
  *(_DWORD *)(v9 + 48) = _byteswap_ulong(v8);
  *(_WORD *)(v9 + 45) = 6;
  *(_BYTE *)(v9 + 52) = 86;
  v4 = (unsigned __int16 *)sub_723E90(*(_QWORD *)v9, (unsigned __int16 *)(v9 + 45));
  v5 = v4;
  if ( v4 )
    v5 = (unsigned __int16 *)((char *)v4 + *v4 + 2);
  return sub_78F2E0(a3, v5, 0xFFFFFFFFFFFFFFFFLL);
}

