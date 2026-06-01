__int64 __fastcall netnode_charval(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // r14
  __int64 v4; // r13
  int v6; // edx
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int16 v9; // ax
  __int64 v10; // rdi
  unsigned __int16 *v11; // rax
  unsigned int v13; // eax

  if ( a1 == -1 )
    return 0;
  v3 = a3;
  v4 = a2;
  v6 = a3 & 0x100;
  v7 = *(_QWORD *)(qword_2CCB598 + 1736);
  if ( *(_QWORD *)(v7 + 8) )
  {
    v13 = a2;
    if ( v6 && unk_2CD46C8 )
      v13 = unk_2CD46C8((unsigned int)a2);
    *(_BYTE *)(v7 + 60) = v3;
    *(_DWORD *)(v7 + 56) = _byteswap_ulong(a1);
    if ( (a3 & 0x800) != 0 )
    {
      v10 = *(_QWORD *)(v7 + 8);
      *(_BYTE *)(v7 + 61) = v13;
      *(_WORD *)(v7 + 53) = 7;
      if ( v10 )
        goto LABEL_10;
      goto LABEL_17;
    }
    *(_DWORD *)(v7 + 61) = _byteswap_ulong(v13);
    *(_WORD *)(v7 + 53) = 10;
  }
  else
  {
    if ( v6 && unk_2CD46C8 )
      v4 = unk_2CD46C8(a2);
    *(_WORD *)(v7 + 53) = 10;
    v8 = swap64(a1);
    *(_BYTE *)(v7 + 64) = v3;
    *(_QWORD *)(v7 + 56) = v8;
    v9 = *(_WORD *)(v7 + 53);
    if ( (a3 & 0x800) != 0 )
    {
      if ( v9 != 0xFFFF )
      {
        *(_BYTE *)(v7 + 65) = v4;
        *(_WORD *)(v7 + 53) = v9 + 1;
        goto LABEL_9;
      }
LABEL_23:
      abort();
    }
    if ( v9 + 8 > 0xFFFF )
      goto LABEL_23;
    *(_WORD *)(v7 + 53) = v9 + 8;
    *(_QWORD *)(v7 + 65) = swap64(v4);
  }
LABEL_9:
  v10 = *(_QWORD *)(v7 + 8);
  if ( v10 )
    goto LABEL_10;
LABEL_17:
  v10 = *(_QWORD *)v7;
LABEL_10:
  v11 = (unsigned __int16 *)sub_7443D0(v10, (unsigned __int16 *)(v7 + 53));
  if ( v11 )
    return *((unsigned __int8 *)v11 + *v11 + 4);
  else
    return -((a3 >> 9) & 1);
}
