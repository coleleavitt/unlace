__int64 __fastcall sub_791FA0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int16 v5; // ax
  unsigned __int16 *v6; // rax
  __int64 v7; // rax
  __int64 result; // rax

  if ( a2 == -1 )
    return 0;
  if ( (a4 & 0x100) != 0 && unk_2CAA7A8 )
    a3 = unk_2CAA7A8(a3);
  *(_BYTE *)(a1 + 52) = a4;
  *(_DWORD *)(a1 + 48) = _byteswap_ulong(a2);
  if ( (a4 & 0x800) != 0 )
  {
    *(_BYTE *)(a1 + 53) = a3;
    v5 = 7;
  }
  else
  {
    v5 = 10;
    *(_DWORD *)(a1 + 53) = _byteswap_ulong(a3);
  }
  *(_WORD *)(a1 + 45) = v5;
  v6 = (unsigned __int16 *)sub_723E90(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 45));
  if ( !v6 )
    return -((a4 >> 9) & 1);
  v7 = (__int64)v6 + *v6 + 2;
  if ( (a4 & 0x1000) != 0 )
    return *(unsigned __int8 *)(v7 + 2);
  result = *(unsigned int *)(v7 + 2);
  if ( (a4 & 0x200) != 0 )
  {
    if ( unk_2CAA7A0 )
      return unk_2CAA7A0((unsigned int)(result - 1));
  }
  return result;
}

