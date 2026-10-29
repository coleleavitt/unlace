/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140064E90
// Address: 0x0000000140064E90

//----- (0000000140064E90) ----------------------------------------------------
__int64 __fastcall sub_140064E90(unsigned __int64 *a1, __int128 *a2, int a3, char a4)
{
  __int16 v6; // bx
  __int16 v7; // cx
  unsigned __int16 v8; // cx
  __int16 v9; // ax
  __int16 v10; // cx
  int v11; // edx
  int v12; // edi
  unsigned __int64 v13; // rbx
  __int128 v15; // [rsp+20h] [rbp-30h] BYREF
  _WORD v16[2]; // [rsp+30h] [rbp-20h] BYREF
  _WORD v17[10]; // [rsp+34h] [rbp-1Ch] BYREF

  if ( a4 )
  {
    v6 = (unsigned __int16)HIWORD(*((_QWORD *)a2 + 1)) >> 15;
    v15 = *a2;
    sub_140066690((__int16 *)&qword_1400ACB58, &v15, (__int64)&v15, v6);
    v7 = HIWORD(v15);
    if ( (_BYTE)v6 && HIWORD(v15) )
      v7 = HIWORD(v15) ^ 0x8000;
    v16[0] = v7 >> 15;
    v8 = v7 & 0x7FFF;
    v17[1] = WORD6(v15);
    v17[2] = WORD5(v15);
    v17[3] = WORD4(v15);
    v17[4] = WORD3(v15);
    v17[5] = WORD2(v15);
    v17[6] = WORD1(v15);
    v9 = v15;
  }
  else
  {
    v10 = *((_WORD *)a2 + 7);
    v16[0] = v10 >> 15;
    v8 = v10 & 0x7FFF;
    v17[1] = *((_WORD *)a2 + 6);
    v17[2] = *((_WORD *)a2 + 5);
    v17[3] = *((_WORD *)a2 + 4);
    v17[4] = *((_WORD *)a2 + 3);
    v17[5] = *((_WORD *)a2 + 2);
    v17[6] = *((_WORD *)a2 + 1);
    v9 = *(_WORD *)a2;
  }
  v11 = v8 - 16382;
  v17[8] = 0;
  v17[7] = v9;
  v17[0] = 0;
  v16[1] = v8;
  *a1 = 0;
  if ( v11 <= 0 )
    return 1;
  if ( v11 <= a3 )
  {
    if ( v11 <= 16 )
    {
      sub_140067430(v16, v11);
      v13 = v17[0];
    }
    else
    {
      v12 = v11 & 0x7FFFFFF0;
      sub_140067430(v16, v11 - (v11 & 0xFFFFFFF0));
      v13 = v17[0];
      do
      {
        memcpy(v17, &v17[1], 0x10u);
        v12 -= 16;
        v13 = v17[0] | (v13 << 16);
        v17[8] = 0;
      }
      while ( v12 > 0 );
    }
    if ( !v16[0] )
      goto LABEL_17;
    if ( a3 != 64 )
    {
      v13 = -(__int64)v13;
LABEL_17:
      *a1 = v13;
      return 1;
    }
  }
  return 5;
}
// 140064FD1: mask 0xFFFFFFF0 is shortened because edx.4 <= 0x7FFFFFFF
// 1400ACB58: using guessed type __int64 qword_1400ACB58;
