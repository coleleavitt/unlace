__int64 __fastcall sub_79B660(unsigned int *a1, __int64 a2, unsigned int a3, _BYTE *a4, __int64 a5, __int16 a6)
{
  __int64 v9; // rbx
  unsigned int v10; // edi
  __int16 v11; // ax
  unsigned __int16 *v12; // rax
  _BYTE *v13; // rsi
  unsigned int v16; // esi

  v16 = *a1;
  if ( *a1 == -1 )
    return -1;
  v9 = *(_QWORD *)(a2 + 1544);
  v10 = a3;
  if ( (a6 & 0x100) != 0 && unk_2CAA7A8 )
    v10 = unk_2CAA7A8(a3);
  *(_BYTE *)(v9 + 52) = a6;
  *(_DWORD *)(v9 + 48) = _byteswap_ulong(v16);
  if ( (a6 & 0x800) != 0 )
  {
    *(_BYTE *)(v9 + 53) = v10;
    v11 = 7;
  }
  else
  {
    *(_DWORD *)(v9 + 53) = _byteswap_ulong(v10);
    v11 = 10;
  }
  *(_WORD *)(v9 + 45) = v11;
  v12 = (unsigned __int16 *)sub_723E90(*(_QWORD *)v9, (unsigned __int16 *)(v9 + 45));
  v13 = v12;
  if ( v12 )
    v13 = (char *)v12 + *v12 + 2;
  return sub_78F220(a4, v13, -1, a5);
}

