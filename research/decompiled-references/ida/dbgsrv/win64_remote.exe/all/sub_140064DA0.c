/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064DA0
// Address: 0x0000000140064DA0

//----- (0000000140064DA0) ----------------------------------------------------
__int64 __fastcall sub_140064DA0(__int64 a1, _WORD *a2)
{
  __int16 v2; // ax
  __int16 v4; // cx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]
  __int16 v8; // [rsp+34h] [rbp-14h]

  v2 = 0;
  v7 = 0;
  v8 = 0;
  v6 = 0;
  if ( a1 < 0 )
  {
    a1 = -a1;
    LOWORD(v6) = -1;
LABEL_4:
    WORD5(v6) = a1;
    WORD2(v6) = HIWORD(a1);
    WORD3(v6) = WORD2(a1);
    WORD4(v6) = WORD1(a1);
    v4 = 16430 - sub_1400656A0(&v6);
    v2 = v4;
    goto LABEL_6;
  }
  if ( a1 )
    goto LABEL_4;
  v4 = WORD1(v6);
LABEL_6:
  if ( (_WORD)v6 )
    a2[7] = v2 | 0x8000;
  else
    a2[7] = v4;
  a2[6] = WORD3(v6);
  a2[5] = WORD4(v6);
  a2[4] = WORD5(v6);
  a2[3] = WORD6(v6);
  a2[2] = HIWORD(v6);
  a2[1] = v7;
  result = HIWORD(v7);
  *a2 = HIWORD(v7);
  return result;
}
