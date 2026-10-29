__int64 __fastcall netnode_charval(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // r12
  __int16 v6; // ax
  unsigned __int16 *v7; // rax

  result = 0;
  if ( a1 != -1 )
  {
    v5 = *(_QWORD *)(qword_2CA1698 + 1544);
    if ( (a3 & 0x100) != 0 && unk_2CAA7A8 )
      a2 = unk_2CAA7A8(a2);
    *(_BYTE *)(v5 + 52) = a3;
    *(_DWORD *)(v5 + 48) = _byteswap_ulong(a1);
    if ( (a3 & 0x800) != 0 )
    {
      *(_BYTE *)(v5 + 53) = a2;
      v6 = 7;
    }
    else
    {
      v6 = 10;
      *(_DWORD *)(v5 + 53) = _byteswap_ulong(a2);
    }
    *(_WORD *)(v5 + 45) = v6;
    v7 = (unsigned __int16 *)sub_723E90(*(_QWORD *)v5, (unsigned __int16 *)(v5 + 45));
    if ( v7 )
      return *((unsigned __int8 *)v7 + *v7 + 4);
    else
      return -((a3 >> 9) & 1);
  }
  return result;
}

