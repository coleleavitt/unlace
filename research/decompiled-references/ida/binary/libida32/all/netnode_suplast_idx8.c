__int64 __fastcall netnode_suplast_idx8(unsigned int a1, unsigned __int8 a2)
{
  unsigned int v2; // eax
  unsigned __int8 v3; // si
  unsigned __int32 v4; // ecx
  __int64 v8; // rdi

  v8 = *(_QWORD *)(qword_2CA1698 + 1544);
  v2 = a1;
  if ( a1 == -1 )
    JUMPOUT(0x794880);
  v3 = a2;
  v4 = _byteswap_ulong(v2 + 1);
  if ( a2 != 0xFF )
  {
    v3 = a2 + 1;
    v4 = _byteswap_ulong(v2);
  }
  *(_DWORD *)(v8 + 48) = v4;
  *(_BYTE *)(v8 + 52) = v3;
  *(_WORD *)(v8 + 45) = 6;
  return sub_7928A0(v8, a2, v2, 0);
}

