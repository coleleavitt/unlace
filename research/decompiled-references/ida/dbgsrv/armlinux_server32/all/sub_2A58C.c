/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2A58C
// Address: 0x0002A58C

//----- (0002A58C) --------------------------------------------------------
int __fastcall sub_2A58C(int a1)
{
  unsigned int v2; // r8
  int v3; // r3
  int v4; // r0
  unsigned __int16 v5; // r1
  int v6; // r5
  int v7; // r6
  unsigned __int16 v8; // r2
  int result; // r0
  int v10; // r3

  v2 = *(unsigned __int16 *)(a1 + 406);
  v3 = 0;
  v4 = 3;
  v5 = __rev16(v2);
  while ( 1 )
  {
    v6 = v3++;
    v7 = BYTE2(dword_9A15C[v6]);
    if ( *(unsigned __int8 *)(a1 + 480) != v7 )
      break;
    if ( v4 == v2 && (unsigned __int16)(*(_WORD *)(a1 + 404) - 2) <= 1u )
      goto LABEL_7;
LABEL_13:
    if ( v3 == 3 )
      return 1;
    v4 = LOWORD(dword_9A15C[v6 + 1]);
  }
  if ( v4 != v5 )
    goto LABEL_13;
  v8 = __rev16(*(unsigned __int16 *)(a1 + 404));
  if ( (unsigned int)v8 - 2 > 1 )
    goto LABEL_13;
  *(_WORD *)(a1 + 406) = v4;
  *(_WORD *)(a1 + 404) = v8;
  result = (*(int (__fastcall **)(int, int, _DWORD))(a1 + 384))(a1, 3, *(unsigned __int8 *)(a1 + 393));
  if ( !result )
    return result;
  *(_BYTE *)(a1 + 480) = v7;
LABEL_7:
  v10 = HIBYTE(dword_9A15C[v6]);
  *(_BYTE *)(a1 + 482) = v10;
  if ( !v10 )
    *(_BYTE *)(a1 + 481) = 0;
  return 1;
}
// 9A15C: using guessed type int dword_9A15C[3];
