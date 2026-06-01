/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: unpack_xleb128
// Address: 0x000000010007B5C0

//----- (000000010007B5C0) ----------------------------------------------------
char __fastcall unpack_xleb128(__int64 *a1, _QWORD *a2, char a3, char **a4, unsigned __int64 a5)
{
  char *v6; // r11
  int v7; // r9d
  __int64 v8; // rbx
  int v9; // r10d
  char v10; // r14
  __int64 v11; // r15
  int v12; // ecx
  bool v13; // cc
  __int64 v15; // r8
  __int64 v16; // rbx
  char *v17; // rdx

  v6 = *a4;
  v7 = 7;
  v8 = 0;
  v9 = (int)a2;
  while ( 1 )
  {
    if ( (unsigned __int64)v6 >= a5 )
      return 0;
    v10 = *v6;
    v11 = *v6 & 0x7F;
    if ( v9 <= 6 )
    {
      v12 = (255 << v9) & 0x3F;
      if ( v10 < 0 )
        v12 = 255 << v9;
      if ( !a3 )
        v12 = 255 << v9;
      if ( ((unsigned int)v11 & v12) != 0 )
        return 0;
    }
    v8 |= v11 << ((unsigned __int8)v7 - 7);
    if ( v10 >= 0 )
      break;
    ++v6;
    v9 -= 7;
    v13 = v7 < (int)a2;
    v7 += 7;
    if ( !v13 )
      return 0;
  }
  if ( !a1 )
    goto LABEL_23;
  v15 = -1LL << v7;
  if ( (unsigned __int8)v10 < 0x40u )
    v15 = 0;
  if ( !a3 )
    v15 = 0;
  v16 = v15 | v8;
  switch ( (_DWORD)a2 )
  {
    case 0x40:
      *a1 = v16;
      goto LABEL_23;
    case 0x20:
      *(_DWORD *)a1 = v16;
      goto LABEL_23;
    case 0x10:
      *(_WORD *)a1 = v16;
LABEL_23:
      *a4 = v6 + 1;
      return 1;
  }
  if ( under_debugger == 1 )
    BUG();
  interr(0x4A3u);
  return sub_10007B6B0(1187, a2, v17);
}
// 10007B6AA: variable 'v17' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
