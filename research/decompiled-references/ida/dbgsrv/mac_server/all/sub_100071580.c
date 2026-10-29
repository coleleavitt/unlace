/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100071580
// Address: 0x0000000100071580

//----- (0000000100071580) ----------------------------------------------------
char __fastcall sub_100071580(unsigned int a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // esi
  unsigned int v4; // eax
  unsigned int v5; // r9d
  unsigned int v6; // r10d
  _DWORD *v7; // r8
  int v8; // edi
  int v9; // eax

  if ( a1 < 0x80 )
    return *((_DWORD *)qword_1000909C0 + a1);
  LOBYTE(v1) = 0;
  if ( a1 > 0x10FFFF )
    return v1;
  v2 = 3200;
  v3 = 0;
  while ( 1 )
  {
    if ( v2 >= 3201 )
      goto LABEL_26;
    v4 = (v3 + v2) / 2;
    if ( v4 < 0xC80 )
      break;
    v5 = *((_DWORD *)&qword_100097F10 + 3 * (int)v4);
LABEL_15:
    if ( v5 < a1 )
      v3 = v4 + 1;
    else
      v2 = v4 - 1;
    LOBYTE(v1) = 0;
    if ( v3 > v2 || v3 >= 3200 )
      return v1;
  }
  v6 = 1114112;
  if ( ((v3 + v2) & 0xFFFFFFFE) != 0x18FE )
    v6 = *((_DWORD *)&qword_100097F10 + 3 * v4 + 3);
  if ( v6 > a1 )
    v7 = (_DWORD *)&qword_100097F10 + 3 * v4;
  else
    v7 = nullptr;
  v5 = *((_DWORD *)&qword_100097F10 + 3 * v4);
  if ( v5 > a1 || !v7 )
    goto LABEL_15;
  v8 = a1 - *v7;
  v9 = 0;
  if ( !v7[2] )
    v9 = v8;
  a1 = v7[1] + v9;
  if ( a1 < 0x1D52 )
    return *((_DWORD *)qword_1000909C0 + a1);
  if ( under_debugger == 1 )
    goto LABEL_27;
  interr(0x5EFu);
LABEL_26:
  if ( under_debugger == 1 )
LABEL_27:
    BUG();
  interr(0x5F0u);
  LOBYTE(v1) = is_cp_graphical(0x5F0u);
  return v1;
}
// 1000909C0: using guessed type __int64 qword_1000909C0[630];
// 100097F10: using guessed type __int64 qword_100097F10;
// 1000AE23D: using guessed type char under_debugger;
