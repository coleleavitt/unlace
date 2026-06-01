__int64 __fastcall sub_7B8E20(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, __int64 a5, __int16 a6)
{
  int v7; // r13d
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int16 v12; // ax
  __int64 v13; // rdi
  unsigned int v14; // eax

  v7 = a6 & 0x100;
  v9 = a3 + a5 - 1;
  while ( !*(_QWORD *)(a1 + 8) )
  {
    v10 = v9;
    if ( v7 && unk_2CD46C8 )
      v10 = unk_2CD46C8(v9);
    *(_WORD *)(a1 + 53) = 10;
    v11 = swap64(a2);
    *(_BYTE *)(a1 + 64) = a6;
    *(_QWORD *)(a1 + 56) = v11;
    v12 = *(_WORD *)(a1 + 53);
    if ( (a6 & 0x800) != 0 )
    {
      if ( v12 == 0xFFFF )
        goto LABEL_22;
      *(_BYTE *)(a1 + 65) = v10;
      *(_WORD *)(a1 + 53) = v12 + 1;
    }
    else
    {
      if ( v12 + 8 > 0xFFFF )
LABEL_22:
        abort();
      *(_WORD *)(a1 + 53) = v12 + 8;
      *(_QWORD *)(a1 + 65) = swap64(v10);
    }
LABEL_8:
    v13 = *(_QWORD *)(a1 + 8);
    if ( !v13 )
      goto LABEL_17;
LABEL_9:
    if ( !sub_7443D0(v13, (unsigned __int16 *)(a1 + 53)) )
      return sub_7B8440(a1, a2, a3, a4, v9 - a3, a6);
LABEL_10:
    ++v9;
  }
  v14 = v9;
  if ( v7 && unk_2CD46C8 )
    v14 = unk_2CD46C8((unsigned int)v9);
  *(_BYTE *)(a1 + 60) = a6;
  *(_DWORD *)(a1 + 56) = _byteswap_ulong(a2);
  if ( (a6 & 0x800) == 0 )
  {
    *(_DWORD *)(a1 + 61) = _byteswap_ulong(v14);
    *(_WORD *)(a1 + 53) = 10;
    goto LABEL_8;
  }
  v13 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 61) = v14;
  *(_WORD *)(a1 + 53) = 7;
  if ( v13 )
    goto LABEL_9;
LABEL_17:
  if ( sub_7443D0(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 53)) )
    goto LABEL_10;
  return sub_7B8440(a1, a2, a3, a4, v9 - a3, a6);
}
