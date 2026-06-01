__int64 __fastcall netnode_supprev_idx8(unsigned int a1, unsigned __int8 a2, __int16 a3)
{
  __int16 v3; // bx
  unsigned int v5; // edx
  __int64 v8; // rdi

  v5 = a2;
  HIBYTE(a3) |= 8u;
  v8 = *(_QWORD *)(qword_2CA1698 + 1544);
  if ( a1 == -1 )
    JUMPOUT(0x794900);
  v3 = a3;
  if ( (a3 & 0x100) != 0 && unk_2CAA7A8 )
    v5 = unk_2CAA7A8(v5);
  *(_BYTE *)(v8 + 52) = v3;
  *(_DWORD *)(v8 + 48) = _byteswap_ulong(a1);
  if ( (v3 & 0x800) != 0 )
    JUMPOUT(0x7948F0);
  *(_DWORD *)(v8 + 53) = _byteswap_ulong(v5);
  *(_WORD *)(v8 + 45) = 10;
  return sub_7928A0(v8, v3, a1, 0);
}

