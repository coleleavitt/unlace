__int64 __fastcall sub_7B4330(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r13
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  __int64 v8; // r12
  unsigned __int16 *v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  unsigned int v12; // eax

  if ( a2 == -1 )
    return 0;
  v4 = a3;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v12 = a3;
    if ( (a4 & 0x100) != 0 && unk_2CD46C8 )
      v12 = unk_2CD46C8((unsigned int)a3);
    *(_BYTE *)(a1 + 60) = a4;
    *(_DWORD *)(a1 + 56) = _byteswap_ulong(a2);
    if ( (a4 & 0x800) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(a1 + 61) = v12;
      *(_WORD *)(a1 + 53) = 7;
      if ( v8 )
        goto LABEL_10;
      goto LABEL_22;
    }
    *(_DWORD *)(a1 + 61) = _byteswap_ulong(v12);
    *(_WORD *)(a1 + 53) = 10;
  }
  else
  {
    if ( (a4 & 0x100) != 0 && unk_2CD46C8 )
      v4 = unk_2CD46C8(a3);
    *(_WORD *)(a1 + 53) = 10;
    v6 = swap64(a2);
    *(_BYTE *)(a1 + 64) = a4;
    *(_QWORD *)(a1 + 56) = v6;
    v7 = *(_WORD *)(a1 + 53);
    if ( (a4 & 0x800) != 0 )
    {
      if ( v7 != 0xFFFF )
      {
        *(_BYTE *)(a1 + 65) = v4;
        *(_WORD *)(a1 + 53) = v7 + 1;
        goto LABEL_9;
      }
LABEL_31:
      abort();
    }
    if ( v7 + 8 > 0xFFFF )
      goto LABEL_31;
    *(_WORD *)(a1 + 53) = v7 + 8;
    *(_QWORD *)(a1 + 65) = swap64(v4);
  }
LABEL_9:
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
    goto LABEL_10;
LABEL_22:
  v8 = *(_QWORD *)a1;
LABEL_10:
  v9 = (unsigned __int16 *)sub_7443D0(v8, (unsigned __int16 *)(a1 + 53));
  if ( !v9 )
    return -(__int64)((a4 >> 9) & 1);
  v10 = (__int64)v9 + *v9 + 2;
  if ( (a4 & 0x1000) != 0 )
    return *(unsigned __int8 *)(v10 + 2);
  if ( (*(_BYTE *)(v8 + 6016) & 2) != 0 )
    result = *(unsigned int *)(v10 + 2);
  else
    result = *(_QWORD *)(v10 + 2);
  if ( (a4 & 0x200) != 0 )
  {
    if ( unk_2CD46C0 )
      return unk_2CD46C0(result - 1);
  }
  return result;
}
