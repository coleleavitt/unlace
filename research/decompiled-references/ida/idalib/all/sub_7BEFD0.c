__int64 __fastcall sub_7BEFD0(__int64 *a1, __int64 a2, _QWORD *a3, __int64 a4, __int16 a5)
{
  __int64 v5; // r14
  __int64 v8; // rax
  unsigned __int16 v9; // ax
  __int64 v10; // rbp
  unsigned __int16 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v15; // eax
  __int64 v17; // rsi
  __int64 v18; // rdi

  v17 = *a1;
  v18 = *(_QWORD *)(a2 + 1736);
  if ( v17 == -1 )
    return 0;
  v5 = a4;
  if ( *(_QWORD *)(v18 + 8) )
  {
    v15 = a4;
    if ( (a5 & 0x100) != 0 && unk_2CD46C8 )
      v15 = unk_2CD46C8((unsigned int)a4);
    *(_BYTE *)(v18 + 60) = a5;
    *(_DWORD *)(v18 + 56) = _byteswap_ulong(v17);
    if ( (a5 & 0x800) != 0 )
    {
      v10 = *(_QWORD *)(v18 + 8);
      *(_BYTE *)(v18 + 61) = v15;
      *(_WORD *)(v18 + 53) = 7;
      if ( v10 )
        goto LABEL_12;
      goto LABEL_21;
    }
    *(_DWORD *)(v18 + 61) = _byteswap_ulong(v15);
    *(_WORD *)(v18 + 53) = 10;
  }
  else
  {
    if ( (a5 & 0x100) != 0 && unk_2CD46C8 )
      v5 = unk_2CD46C8(a4);
    *(_WORD *)(v18 + 53) = 10;
    v8 = swap64(v17);
    *(_BYTE *)(v18 + 64) = a5;
    *(_QWORD *)(v18 + 56) = v8;
    v9 = *(_WORD *)(v18 + 53);
    if ( (a5 & 0x800) != 0 )
    {
      if ( v9 != 0xFFFF )
      {
        *(_BYTE *)(v18 + 65) = v5;
        *(_WORD *)(v18 + 53) = v9 + 1;
        goto LABEL_11;
      }
LABEL_2:
      abort();
    }
    if ( v9 + 8 > 0xFFFF )
      goto LABEL_2;
    *(_WORD *)(v18 + 53) = v9 + 8;
    *(_QWORD *)(v18 + 65) = swap64(v5);
  }
LABEL_11:
  v10 = *(_QWORD *)(v18 + 8);
  if ( v10 )
    goto LABEL_12;
LABEL_21:
  v10 = *(_QWORD *)v18;
LABEL_12:
  v11 = (unsigned __int16 *)sub_7443D0(v10, (unsigned __int16 *)(v18 + 53));
  if ( !v11 )
    return 0;
  v12 = (__int64)v11 + *v11 + 2;
  if ( (*(_BYTE *)(v10 + 6016) & 2) != 0 )
    v13 = *(unsigned int *)(v12 + 2);
  else
    v13 = *(_QWORD *)(v12 + 2);
  *a3 = v13;
  return 1;
}
