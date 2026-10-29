__int64 __fastcall sub_7BEA80(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 v5; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int16 v10; // ax
  __int64 v11; // rdi
  unsigned __int16 *v12; // rax
  unsigned __int16 *v13; // rsi
  unsigned int v15; // eax
  __int64 v17; // rsi
  __int64 v18; // rdi

  v17 = *a1;
  v18 = *(_QWORD *)(a2 + 1736);
  if ( v17 == -1 )
    return -1;
  v5 = a4;
  v8 = *(_QWORD *)(a2 + 1736);
  if ( !*(_QWORD *)(v18 + 8) )
  {
    if ( (a5 & 0x100) != 0 && unk_2CD46C8 )
      v5 = unk_2CD46C8(a4);
    *(_WORD *)(v18 + 53) = 10;
    v9 = swap64(v17);
    *(_BYTE *)(v18 + 64) = a5;
    *(_QWORD *)(v18 + 56) = v9;
    v10 = *(_WORD *)(v18 + 53);
    if ( (a5 & 0x800) != 0 )
    {
      if ( v10 != 0xFFFF )
      {
        v11 = *(_QWORD *)(v18 + 8);
        *(_BYTE *)(v8 + 65) = v5;
        *(_WORD *)(v8 + 53) = v10 + 1;
        if ( v11 )
          goto LABEL_12;
LABEL_17:
        v11 = *(_QWORD *)v8;
        goto LABEL_12;
      }
    }
    else if ( v10 + 8 <= 0xFFFF )
    {
      *(_WORD *)(v18 + 53) = v10 + 8;
      *(_QWORD *)(v18 + 65) = swap64(v5);
      goto LABEL_11;
    }
    abort();
  }
  v15 = a4;
  if ( (a5 & 0x100) != 0 && unk_2CD46C8 )
    v15 = unk_2CD46C8((unsigned int)a4);
  *(_BYTE *)(v18 + 60) = a5;
  *(_DWORD *)(v18 + 56) = _byteswap_ulong(v17);
  if ( (a5 & 0x800) != 0 )
  {
    *(_BYTE *)(v18 + 61) = v15;
    *(_WORD *)(v18 + 53) = 7;
  }
  else
  {
    *(_DWORD *)(v18 + 61) = _byteswap_ulong(v15);
    *(_WORD *)(v18 + 53) = 10;
  }
LABEL_11:
  v11 = *(_QWORD *)(v18 + 8);
  if ( !v11 )
    goto LABEL_17;
LABEL_12:
  v12 = (unsigned __int16 *)sub_7443D0(v11, (unsigned __int16 *)(v8 + 53));
  v13 = v12;
  if ( v12 )
    v13 = (unsigned __int16 *)((char *)v12 + *v12 + 2);
  return sub_7B0040(a3, v13, 0xFFFFFFFFFFFFFFFFLL);
}
