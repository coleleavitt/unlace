__int64 __fastcall sub_7BF210(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int16 *v6; // rax
  unsigned __int16 *v7; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdi

  v10 = *a1;
  if ( *a1 == -1 )
    return -1;
  v11 = *(_QWORD *)(a2 + 1736);
  v4 = *(_QWORD *)(v11 + 8);
  if ( v4 )
  {
    *(_BYTE *)(v11 + 60) = 86;
    *(_WORD *)(v11 + 53) = 6;
    *(_DWORD *)(v11 + 56) = _byteswap_ulong(v10);
  }
  else
  {
    *(_WORD *)(v11 + 53) = 10;
    v5 = swap64(v10);
    *(_BYTE *)(v11 + 64) = 86;
    *(_QWORD *)(v11 + 56) = v5;
    v4 = *(_QWORD *)(v11 + 8);
    if ( !v4 )
      v4 = *(_QWORD *)v11;
  }
  v6 = (unsigned __int16 *)sub_7443D0(v4, (unsigned __int16 *)(v11 + 53));
  v7 = v6;
  if ( v6 )
    v7 = (unsigned __int16 *)((char *)v6 + *v6 + 2);
  return sub_7B0040(a3, v7, 0xFFFFFFFFFFFFFFFFLL);
}
