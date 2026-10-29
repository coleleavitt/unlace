/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F0D0
// Address: 0x0045F0D0

//----- (0045F0D0) --------------------------------------------------------
int __stdcall sub_45F0D0(__int64 a1, _WORD *a2)
{
  int v2; // ecx
  int v3; // edx
  __int16 v4; // di
  __int16 v5; // bx
  __int16 v6; // cx
  int result; // eax
  __int128 v8; // [esp+0h] [ebp-1Ch] BYREF
  int v9; // [esp+10h] [ebp-Ch]
  __int16 v10; // [esp+14h] [ebp-8h]

  v2 = HIDWORD(a1);
  v3 = a1;
  v9 = 0;
  v10 = 0;
  v8 = 0;
  if ( a1 >= 0 )
  {
    v4 = 0;
    v5 = 0;
    if ( !a1 )
      goto LABEL_5;
  }
  else
  {
    v3 = -(int)a1;
    LOWORD(v8) = -1;
    v2 = (unsigned __int64)-a1 >> 32;
  }
  WORD2(v8) = HIWORD(v2);
  WORD3(v8) = v2;
  WORD4(v8) = HIWORD(v3);
  WORD5(v8) = v3;
  v4 = 16430 - sub_45DE10(&v8);
  v5 = v4;
LABEL_5:
  v6 = v4 | 0x8000;
  if ( !(_WORD)v8 )
    v6 = v5;
  a2[7] = v6;
  a2[6] = WORD3(v8);
  a2[5] = WORD4(v8);
  a2[4] = WORD5(v8);
  a2[3] = WORD6(v8);
  a2[2] = HIWORD(v8);
  a2[1] = v9;
  result = HIWORD(v9);
  *a2 = HIWORD(v9);
  return result;
}
