unsigned __int64 __fastcall sub_13D1B40(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  unsigned __int64 v9; // rax
  __int16 v10; // dx
  unsigned __int8 *v11; // rsi
  unsigned __int64 result; // rax
  int v13; // esi
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int *v17; // rax
  unsigned int *v18; // rdx
  _BYTE v20[25]; // [rsp+1Fh] [rbp-19h] BYREF

  v9 = *(unsigned __int16 *)(a1 + 16);
  if ( (_WORD)v9 == 6 )
    goto LABEL_4;
  v10 = (v9 - 7) & 0xFFFD;
  if ( (*(_BYTE *)(a1 + 18) & 0x40) != 0 )
  {
    if ( !v10 )
      goto LABEL_4;
LABEL_8:
    if ( (unsigned __int16)(v9 - 10) <= 1u )
      goto LABEL_4;
    goto LABEL_9;
  }
  if ( !v10 )
    goto LABEL_4;
  if ( (unsigned __int16)v9 <= 0x13u )
  {
    v15 = 1047810;
    if ( !_bittest64(&v15, v9) )
    {
      v16 = *(_QWORD *)(a1 + 8);
      if ( v16 )
        goto LABEL_19;
    }
    goto LABEL_8;
  }
  v16 = *(_QWORD *)(a1 + 8);
  if ( v16 )
  {
LABEL_19:
    v17 = *(unsigned int **)(v16 + 16);
    v18 = v17 + 4;
    result = *v17;
    *a2 = (__int64)v18;
    return result;
  }
LABEL_9:
  if ( (unsigned __int16)(v9 - 12) > 7u && (_WORD)v9 != 8 )
  {
LABEL_11:
    v13 = *(_DWORD *)a1;
    v20[0] = 0;
    v11 = (unsigned __int8 *)sub_1021A70(a3, v13, v20);
    v14 = v20[0];
    if ( a5 )
      *a5 = v20[0];
    if ( v14 )
    {
      *a2 = (__int64)&byte_22F0C30;
      return 0;
    }
    goto LABEL_5;
  }
LABEL_4:
  v11 = *(unsigned __int8 **)(a1 + 8);
  if ( !v11 )
    goto LABEL_11;
LABEL_5:
  if ( (*(_BYTE *)(a1 + 18) & 8) != 0 )
    return sub_13D19E0(a1, v11, a4, *a2);
  *a2 = (__int64)v11;
  return *(unsigned int *)(a1 + 4);
}
