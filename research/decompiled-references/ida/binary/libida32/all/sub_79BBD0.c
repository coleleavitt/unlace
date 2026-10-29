__int64 __fastcall sub_79BBD0(unsigned int *a1, __int64 a2, _DWORD *a3, unsigned int a4, __int16 a5)
{
  __int16 v7; // ax
  unsigned __int16 *v8; // rax
  unsigned int v11; // esi
  __int64 v12; // rdi

  v11 = *a1;
  v12 = *(_QWORD *)(a2 + 1544);
  if ( v11 == -1 )
    return 0;
  if ( (a5 & 0x100) != 0 && unk_2CAA7A8 )
    a4 = unk_2CAA7A8(a4);
  *(_BYTE *)(v12 + 52) = a5;
  *(_DWORD *)(v12 + 48) = _byteswap_ulong(v11);
  if ( (a5 & 0x800) != 0 )
  {
    *(_BYTE *)(v12 + 53) = a4;
    v7 = 7;
  }
  else
  {
    *(_DWORD *)(v12 + 53) = _byteswap_ulong(a4);
    v7 = 10;
  }
  *(_WORD *)(v12 + 45) = v7;
  v8 = (unsigned __int16 *)sub_723E90(*(_QWORD *)v12, (unsigned __int16 *)(v12 + 45));
  if ( !v8 )
    return 0;
  *a3 = *(_DWORD *)((char *)v8 + *v8 + 4);
  return 1;
}

