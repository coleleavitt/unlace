/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_get_token
// Address: 0x0000000000085D18

//----- (0000000000085D18) ----------------------------------------------------
__int64 __fastcall lex_get_token(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 i; // x22
  __int64 v9; // x8
  __int64 v10; // x0
  int v11; // w9
  unsigned int v12; // w0
  int v14; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v15; // [xsp+8h] [xbp-48h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_BYTE *)(a1 + 320) )
    goto LABEL_6;
  while ( 1 )
  {
    v6 = sub_7F1F4(a1, &v14);
    if ( v14 )
      break;
    v7 = *(_QWORD *)(a1 + 64);
    for ( i = v6; v7; v7 = *(_QWORD *)(a1 + 64) )
    {
      v9 = v7 - 1;
      v10 = *(_QWORD *)(a1 + 56) + 56 * v9;
      *(_QWORD *)a1 = *(_QWORD *)(v10 + 24);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v10 + 32);
      v11 = *(_DWORD *)(v10 + 48);
      *(_QWORD *)(a1 + 64) = v9;
      *(_DWORD *)(a1 + 80) = v11;
      sub_39570(v10);
    }
    *(_QWORD *)a1 = i;
    *(_QWORD *)(a1 + 8) = i;
    *(_BYTE *)(a1 + 320) = 1;
LABEL_6:
    v12 = sub_810F0((__int64 *)a1, a2, 0, a3);
    if ( !v12 )
    {
      if ( *(_QWORD *)(a1 + 64) )
        v12 = sub_81F70((__int128 *)a1, (char **)a2);
    }
    v14 = v12;
    if ( v12 )
      return set_qerrno(v12);
    if ( *(_WORD *)(a2 + 24) == 1 )
    {
      *(_BYTE *)(a1 + 320) = 0;
    }
    else if ( *(_BYTE *)(a1 + 320) )
    {
      return 0;
    }
  }
  if ( v14 == 34 )
  {
LABEL_17:
    *(_WORD *)(a2 + 24) = 1;
    return 0;
  }
  if ( v14 == -1 )
  {
    v14 = 34;
    goto LABEL_17;
  }
  v12 = v14;
  return set_qerrno(v12);
}
