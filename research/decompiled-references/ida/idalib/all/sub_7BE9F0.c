__int64 __fastcall sub_7BE9F0(__int64 *a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5, __int16 a6)
{
  __int64 v6; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int16 v12; // ax
  __int64 v13; // rdi
  unsigned __int16 *v14; // rax
  _BYTE *v15; // rsi
  unsigned int v17; // eax
  __int64 v19; // rsi
  __int64 v20; // rdi

  v19 = *a1;
  v20 = *(_QWORD *)(a2 + 1736);
  if ( v19 == -1 )
    return -1;
  v6 = a3;
  v10 = *(_QWORD *)(a2 + 1736);
  if ( !*(_QWORD *)(v20 + 8) )
  {
    if ( (a6 & 0x100) != 0 && unk_2CD46C8 )
      v6 = unk_2CD46C8(a3);
    *(_WORD *)(v20 + 53) = 10;
    v11 = swap64(v19);
    *(_BYTE *)(v20 + 64) = a6;
    *(_QWORD *)(v20 + 56) = v11;
    v12 = *(_WORD *)(v20 + 53);
    if ( (a6 & 0x800) != 0 )
    {
      if ( v12 != 0xFFFF )
      {
        v13 = *(_QWORD *)(v20 + 8);
        *(_BYTE *)(v10 + 65) = v6;
        *(_WORD *)(v10 + 53) = v12 + 1;
        if ( v13 )
          goto LABEL_12;
LABEL_17:
        v13 = *(_QWORD *)v10;
        goto LABEL_12;
      }
    }
    else if ( v12 + 8 <= 0xFFFF )
    {
      *(_WORD *)(v20 + 53) = v12 + 8;
      *(_QWORD *)(v20 + 65) = swap64(v6);
      goto LABEL_11;
    }
    abort();
  }
  v17 = a3;
  if ( (a6 & 0x100) != 0 && unk_2CD46C8 )
    v17 = unk_2CD46C8((unsigned int)a3);
  *(_BYTE *)(v20 + 60) = a6;
  *(_DWORD *)(v20 + 56) = _byteswap_ulong(v19);
  if ( (a6 & 0x800) != 0 )
  {
    *(_BYTE *)(v20 + 61) = v17;
    *(_WORD *)(v20 + 53) = 7;
  }
  else
  {
    *(_DWORD *)(v20 + 61) = _byteswap_ulong(v17);
    *(_WORD *)(v20 + 53) = 10;
  }
LABEL_11:
  v13 = *(_QWORD *)(v20 + 8);
  if ( !v13 )
    goto LABEL_17;
LABEL_12:
  v14 = (unsigned __int16 *)sub_7443D0(v13, (unsigned __int16 *)(v10 + 53));
  v15 = v14;
  if ( v14 )
    v15 = (char *)v14 + *v14 + 2;
  return sub_7AFF80(a4, v15, -1, a5);
}
