/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: frame_state_for
// Address: 0x00000000000EF2E0

//----- (00000000000EF2E0) ----------------------------------------------------
__int64 __fastcall _frame_state_for(__int64 a1, __int64 a2)
{
  int v4; // w0
  __int64 v5; // x1
  __int64 *v6; // x0
  _BYTE *v7; // x2
  _QWORD *v8; // x1
  int v9; // w3
  _QWORD s[120]; // [xsp+30h] [xbp+30h] BYREF
  char v12[8]; // [xsp+3F0h] [xbp+3F0h] BYREF
  __int64 v13; // [xsp+3F8h] [xbp+3F8h] BYREF
  __int64 v14; // [xsp+A18h] [xbp+A18h] BYREF
  __int64 v15; // [xsp+A20h] [xbp+A20h]
  int v16; // [xsp+A30h] [xbp+A30h]
  __int64 v17; // [xsp+A58h] [xbp+A58h]
  __int64 v18; // [xsp+A68h] [xbp+A68h]

  memset(s, 0, sizeof(s));
  s[99] = a1 + 1;
  s[104] = 0x4000000000000000LL;
  v4 = sub_EE428(s, v12);
  v5 = 0;
  if ( !v4 && v16 != 2 )
  {
    v6 = &v13;
    v7 = (_BYTE *)(a2 + 820);
    v8 = (_QWORD *)(a2 + 32);
    do
    {
      v9 = *(unsigned __int8 *)v6;
      *v7 = v9;
      if ( v9 == 1 || v9 == 2 )
        *v8 = *(v6 - 1);
      else
        *v8 = 0;
      v6 += 2;
      ++v7;
      ++v8;
    }
    while ( v6 != &v14 );
    v5 = a2;
    *(_QWORD *)(a2 + 16) = v14;
    *(_WORD *)(a2 + 816) = v15;
    *(_WORD *)(a2 + 818) = v17;
    *(_QWORD *)(a2 + 24) = s[106];
    *(_QWORD *)(a2 + 8) = v18;
  }
  return v5;
}
