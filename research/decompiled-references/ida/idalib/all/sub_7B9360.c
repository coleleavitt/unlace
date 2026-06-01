__int64 __fastcall sub_7B9360(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  int v4; // r15d
  __int64 v5; // r13
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  __int64 v12; // rdi
  unsigned __int16 *v13; // rax
  unsigned int v14; // eax

  v4 = a4 & 0x100;
  v5 = 0;
  while ( !*(_QWORD *)(a1 + 8) )
  {
    v9 = a3;
    if ( v4 && unk_2CD46C8 )
      v9 = unk_2CD46C8(a3);
    *(_WORD *)(a1 + 53) = 10;
    v10 = swap64(a2);
    *(_BYTE *)(a1 + 64) = a4;
    *(_QWORD *)(a1 + 56) = v10;
    v11 = *(_WORD *)(a1 + 53);
    if ( (a4 & 0x800) != 0 )
    {
      if ( v11 == 0xFFFF )
        goto LABEL_22;
      *(_BYTE *)(a1 + 65) = v9;
      *(_WORD *)(a1 + 53) = v11 + 1;
    }
    else
    {
      if ( v11 + 8 > 0xFFFF )
LABEL_22:
        abort();
      *(_WORD *)(a1 + 53) = v11 + 8;
      *(_QWORD *)(a1 + 65) = swap64(v9);
    }
LABEL_8:
    v12 = *(_QWORD *)(a1 + 8);
    if ( !v12 )
      goto LABEL_17;
LABEL_9:
    v13 = (unsigned __int16 *)sub_7443D0(v12, (unsigned __int16 *)(a1 + 53));
    if ( !v13 )
      return v5;
LABEL_10:
    ++a3;
    v5 += *(unsigned __int16 *)((char *)v13 + *v13 + 2);
  }
  v14 = a3;
  if ( v4 && unk_2CD46C8 )
    v14 = unk_2CD46C8((unsigned int)a3);
  *(_BYTE *)(a1 + 60) = a4;
  *(_DWORD *)(a1 + 56) = _byteswap_ulong(a2);
  if ( (a4 & 0x800) == 0 )
  {
    *(_DWORD *)(a1 + 61) = _byteswap_ulong(v14);
    *(_WORD *)(a1 + 53) = 10;
    goto LABEL_8;
  }
  v12 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 61) = v14;
  *(_WORD *)(a1 + 53) = 7;
  if ( v12 )
    goto LABEL_9;
LABEL_17:
  v13 = (unsigned __int16 *)sub_7443D0(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 53));
  if ( v13 )
    goto LABEL_10;
  return v5;
}
