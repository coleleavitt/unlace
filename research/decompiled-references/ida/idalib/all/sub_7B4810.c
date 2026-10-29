unsigned __int64 __fastcall sub_7B4810(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        signed __int64 a5,
        __int16 a6,
        char a7)
{
  __int64 v7; // r15
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  __int64 v14; // rdi
  unsigned __int16 *v15; // rax
  unsigned __int16 *v16; // rsi
  unsigned int v18; // eax

  if ( a2 == -1 )
    return -1;
  v7 = a3;
  if ( a7 && *(_QWORD *)(a1 + 8) )
  {
    v18 = a3;
    if ( (a6 & 0x100) != 0 && unk_2CD46C8 )
      v18 = unk_2CD46C8((unsigned int)a3);
    *(_BYTE *)(a1 + 60) = a6;
    *(_DWORD *)(a1 + 56) = _byteswap_ulong(a2);
    if ( (a6 & 0x800) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a1 + 61) = v18;
      *(_WORD *)(a1 + 53) = 7;
      if ( v14 )
        goto LABEL_11;
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 61) = _byteswap_ulong(v18);
      *(_WORD *)(a1 + 53) = 10;
      if ( v14 )
        goto LABEL_11;
    }
    goto LABEL_10;
  }
  if ( (a6 & 0x100) != 0 && unk_2CD46C8 )
    v7 = unk_2CD46C8(a3);
  *(_WORD *)(a1 + 53) = 10;
  v12 = swap64(a2);
  *(_BYTE *)(a1 + 64) = a6;
  *(_QWORD *)(a1 + 56) = v12;
  v13 = *(_WORD *)(a1 + 53);
  if ( (a6 & 0x800) != 0 )
  {
    if ( v13 != 0xFFFF )
    {
      *(_BYTE *)(a1 + 65) = v7;
      *(_WORD *)(a1 + 53) = v13 + 1;
      if ( !a7 )
        goto LABEL_10;
LABEL_16:
      v14 = *(_QWORD *)(a1 + 8);
      if ( v14 )
        goto LABEL_11;
      goto LABEL_10;
    }
LABEL_27:
    abort();
  }
  if ( v13 + 8 > 0xFFFF )
    goto LABEL_27;
  *(_WORD *)(a1 + 53) = v13 + 8;
  *(_QWORD *)(a1 + 65) = swap64(v7);
  if ( a7 )
    goto LABEL_16;
LABEL_10:
  v14 = *(_QWORD *)a1;
LABEL_11:
  v15 = (unsigned __int16 *)sub_7443D0(v14, (unsigned __int16 *)(a1 + 53));
  v16 = v15;
  if ( v15 )
    v16 = (unsigned __int16 *)((char *)v15 + *v15 + 2);
  return sub_7AFF00(a4, v16, a5);
}
