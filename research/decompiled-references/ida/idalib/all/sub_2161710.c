__int64 __fastcall sub_2161710(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  unsigned __int16 v6; // ax
  __int64 v7; // rdx
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  char v15; // [rsp+8h] [rbp-30h]

  sub_21A2100(&v14);
  v4 = v14;
  sub_A0AE70(&v14);
  if ( !a2[12] )
  {
    v9 = *(_BYTE *)(a3 + 18);
    v7 = *(unsigned int *)(a3 + 12);
    if ( v9 == 2 )
    {
      if ( !(_DWORD)v7 )
        goto LABEL_6;
    }
    else if ( v9 == 105 )
    {
      goto LABEL_6;
    }
LABEL_12:
    if ( (int)v7 <= 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
  if ( !a3 )
    BUG();
  v6 = *(_WORD *)(a3 + 12);
  v5 = *(unsigned __int8 *)(a3 + 16);
  if ( v6 > 0xFEFFu )
  {
    v7 = (unsigned int)(__int16)v6;
    if ( (_BYTE)v5 == 2 )
    {
LABEL_6:
      *(_QWORD *)a1 = v4;
      *(_BYTE *)(a1 + 8) &= ~1u;
      return a1;
    }
    goto LABEL_5;
  }
  v7 = v6;
  if ( (_BYTE)v5 != 2 )
  {
LABEL_5:
    if ( (_BYTE)v5 == 105 )
      goto LABEL_6;
    goto LABEL_12;
  }
  if ( !v6 )
    goto LABEL_6;
LABEL_13:
  sub_215FD50((__int64)&v14, a2, v7, v5);
  v10 = v14;
  if ( (v15 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 8) |= 1u;
    v14 = 0;
    *(_QWORD *)a1 = v10;
  }
  else
  {
    v11 = *(unsigned int *)(v14 + 12) + v4;
    v12 = a2[8];
    if ( v12 )
    {
      v11 += *(unsigned int *)(v12 + 28);
    }
    else
    {
      v13 = a2[9];
      if ( v13 )
        v11 += *(_QWORD *)(v13 + 24);
    }
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = v11;
  }
  sub_21615F0(&v14);
  return a1;
}
