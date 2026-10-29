__int64 __fastcall netnode_qsupstr(unsigned int a1, __int64 a2, unsigned int a3, __int16 a4)
{
  __int16 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rbx
  unsigned int v7; // edi
  unsigned __int16 *v8; // rax
  unsigned __int16 *v9; // rsi

  if ( a1 == -1 )
    JUMPOUT(0x7923F8);
  v4 = a4;
  v5 = a2;
  v6 = *(_QWORD *)(qword_2CA1698 + 1544);
  v7 = a3;
  if ( (a4 & 0x100) != 0 && unk_2CAA7A8 )
    v7 = unk_2CAA7A8(a3);
  *(_BYTE *)(v6 + 52) = v4;
  *(_DWORD *)(v6 + 48) = _byteswap_ulong(a1);
  if ( (v4 & 0x800) != 0 )
    JUMPOUT(0x7923E8);
  *(_DWORD *)(v6 + 53) = _byteswap_ulong(v7);
  *(_WORD *)(v6 + 45) = 10;
  v8 = (unsigned __int16 *)sub_723E90(*(_QWORD *)v6, (unsigned __int16 *)(v6 + 45));
  v9 = v8;
  if ( v8 )
    v9 = (unsigned __int16 *)((char *)v8 + *v8 + 2);
  return sub_78F2E0(v5, v9, 0xFFFFFFFFFFFFFFFFLL);
}

