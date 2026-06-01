/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A66A0
// Address: 0x000A66A0

//----- (000A66A0) --------------------------------------------------------
int __fastcall sub_A66A0(int *a1, __int64 *a2, signed int a3, char a4)
{
  int *v5; // edx
  __int64 v6; // xmm0_8
  __int16 v7; // si
  __int16 v8; // ax
  unsigned __int16 v9; // ax
  unsigned int v10; // ecx
  int result; // eax
  int v12; // esi
  signed int v13; // esi
  int v14; // edi
  int v15; // ecx
  __int64 v16; // xmm0_8
  int *v18; // [esp+Ch] [ebp-40h]
  _WORD v19[2]; // [esp+12h] [ebp-3Ah] BYREF
  _BYTE v20[18]; // [esp+16h] [ebp-36h]
  __int64 v21; // [esp+28h] [ebp-24h] BYREF
  __int64 v22; // [esp+30h] [ebp-1Ch]
  unsigned int v23; // [esp+38h] [ebp-14h]

  v5 = a1;
  v23 = __readgsdword(0x14u);
  if ( a4 )
  {
    v6 = *a2;
    v22 = a2[1];
    v21 = v6;
    v7 = HIWORD(v22);
    a2 = &v21;
    eadd(dword_107C9C, &v21, &v21, v22 < 0);
    v8 = HIWORD(v22);
    if ( v7 < 0 )
    {
      if ( !HIWORD(v22) )
      {
        v8 = 0;
        v5 = a1;
        goto LABEL_7;
      }
      v8 = HIWORD(v22) ^ 0x8000;
      HIWORD(v22) ^= 0x8000u;
    }
    v5 = a1;
  }
  else
  {
    v8 = *((_WORD *)a2 + 7);
  }
LABEL_7:
  v19[0] = v8 >> 15;
  v9 = v8 & 0x7FFF;
  v19[1] = v9;
  *(_WORD *)v20 = 0;
  *(_WORD *)&v20[2] = *((_WORD *)a2 + 6);
  *(_WORD *)&v20[4] = *((_WORD *)a2 + 5);
  *(_WORD *)&v20[6] = *((_WORD *)a2 + 4);
  *(_WORD *)&v20[8] = *((_WORD *)a2 + 3);
  *(_WORD *)&v20[10] = *((_WORD *)a2 + 2);
  *(_WORD *)&v20[12] = *((_WORD *)a2 + 1);
  *(_WORD *)&v20[14] = *(_WORD *)a2;
  *(_WORD *)&v20[16] = 0;
  v5[1] = 0;
  *v5 = 0;
  v10 = v9;
  result = 1;
  if ( v10 >= 0x3FFF )
  {
    v12 = v10 - 16382;
    result = 5;
    if ( (int)(v10 - 16382) <= a3 )
    {
      v18 = v5;
      if ( v10 < 0x400F )
      {
        eshift((int)v19, v12);
        v14 = *(unsigned __int16 *)v20;
        v15 = 0;
      }
      else
      {
        v13 = v12 & 0xFFFFFFF0;
        eshift((int)v19, v10 - 16382 - v13);
        v14 = *(unsigned __int16 *)v20;
        v15 = 0;
        do
        {
          v16 = *(_QWORD *)&v20[2];
          *(_QWORD *)&v20[8] = *(_QWORD *)&v20[10];
          *(_QWORD *)v20 = v16;
          *(_WORD *)&v20[16] = 0;
          v15 = __PAIR64__(v15, v14) >> 16;
          v14 = (unsigned __int16)v16 | (v14 << 16);
          v13 -= 16;
        }
        while ( v13 > 0 );
      }
      result = 5;
      if ( v19[0] )
      {
        if ( a3 == 64 )
          return result;
        v14 = -v14;
        v15 = (unsigned __int64)-__SPAIR64__(v15, v14) >> 32;
      }
      *v18 = v14;
      v18[1] = v15;
      return 1;
    }
  }
  return result;
}
// 107C9C: using guessed type int dword_107C9C[3];
