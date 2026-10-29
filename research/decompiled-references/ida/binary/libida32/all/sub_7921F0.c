unsigned __int64 __fastcall sub_7921F0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        signed __int64 a5,
        __int16 a6)
{
  unsigned int v10; // edi
  __int16 v11; // ax
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // rsi

  if ( a2 == -1 )
    return -1;
  v10 = a3;
  if ( (a6 & 0x100) != 0 && unk_2CAA7A8 )
    v10 = unk_2CAA7A8(a3);
  *(_BYTE *)(a1 + 52) = a6;
  *(_DWORD *)(a1 + 48) = _byteswap_ulong(a2);
  if ( (a6 & 0x800) != 0 )
  {
    *(_BYTE *)(a1 + 53) = v10;
    v11 = 7;
  }
  else
  {
    *(_DWORD *)(a1 + 53) = _byteswap_ulong(v10);
    v11 = 10;
  }
  *(_WORD *)(a1 + 45) = v11;
  v12 = (unsigned __int16 *)sub_723E90(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 45));
  v13 = v12;
  if ( v12 )
    v13 = (unsigned __int16 *)((char *)v12 + *v12 + 2);
  return sub_78F1B0(a4, v13, a5);
}

