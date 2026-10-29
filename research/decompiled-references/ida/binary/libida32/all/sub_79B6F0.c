__int64 __fastcall sub_79B6F0(unsigned int *a1, __int64 a2, __int64 a3, unsigned int a4, __int16 a5)
{
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int16 v9; // ax
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // rsi
  unsigned int v14; // esi

  v14 = *a1;
  if ( *a1 == -1 )
    return -1;
  v7 = *(_QWORD *)(a2 + 1544);
  v8 = a4;
  if ( (a5 & 0x100) != 0 && unk_2CAA7A8 )
    v8 = unk_2CAA7A8(a4);
  *(_BYTE *)(v7 + 52) = a5;
  *(_DWORD *)(v7 + 48) = _byteswap_ulong(v14);
  if ( (a5 & 0x800) != 0 )
  {
    *(_BYTE *)(v7 + 53) = v8;
    v9 = 7;
  }
  else
  {
    *(_DWORD *)(v7 + 53) = _byteswap_ulong(v8);
    v9 = 10;
  }
  *(_WORD *)(v7 + 45) = v9;
  v10 = (unsigned __int16 *)sub_723E90(*(_QWORD *)v7, (unsigned __int16 *)(v7 + 45));
  v11 = v10;
  if ( v10 )
    v11 = (unsigned __int16 *)((char *)v10 + *v10 + 2);
  return sub_78F2E0(a3, v11, 0xFFFFFFFFFFFFFFFFLL);
}

