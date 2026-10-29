/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F1D0
// Address: 0x0045F1D0

//----- (0045F1D0) --------------------------------------------------------
int __stdcall sub_45F1D0(int a1, _WORD *a2)
{
  __int16 v2; // cx
  __int16 v3; // dx
  unsigned int v4; // kr00_4
  __int16 v5; // cx
  int result; // eax
  __int128 v7; // [esp+0h] [ebp-1Ch] BYREF
  int v8; // [esp+10h] [ebp-Ch]
  __int16 v9; // [esp+14h] [ebp-8h]

  v8 = 0;
  v9 = 0;
  v7 = 0;
  if ( a1 >= 0 )
  {
    v2 = 0;
    v3 = 0;
    if ( !a1 )
      goto LABEL_5;
  }
  else
  {
    LOWORD(v7) = -1;
  }
  v4 = abs32(a1);
  WORD2(v7) = HIWORD(v4);
  WORD3(v7) = v4;
  v2 = 16398 - sub_45DE10(&v7);
  v3 = v2;
LABEL_5:
  v5 = v2 | 0x8000;
  if ( !(_WORD)v7 )
    v5 = v3;
  a2[7] = v5;
  a2[6] = WORD3(v7);
  a2[5] = WORD4(v7);
  a2[4] = WORD5(v7);
  a2[3] = WORD6(v7);
  a2[2] = HIWORD(v7);
  a2[1] = v8;
  result = HIWORD(v8);
  *a2 = HIWORD(v8);
  return result;
}
