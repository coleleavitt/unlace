/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eltoe64
// Address: 0x000A6AB0

//----- (000A6AB0) --------------------------------------------------------
unsigned int __cdecl eltoe64(__int64 a1, _WORD *a2)
{
  int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int16 v6; // cx
  __int16 v7; // ax
  __int16 v8; // bx
  __int16 v9; // dx
  __int16 v10; // di
  __int16 v12; // [esp+4h] [ebp-38h]
  __int16 v13; // [esp+8h] [ebp-34h]
  __int16 v14; // [esp+Ch] [ebp-30h]
  _WORD v15[9]; // [esp+10h] [ebp-2Ch] BYREF
  int v16; // [esp+22h] [ebp-1Ah]
  unsigned int v17; // [esp+28h] [ebp-14h]

  LOWORD(v2) = a1;
  v17 = __readgsdword(0x14u);
  memset(v15, 0, sizeof(v15));
  v16 = 0;
  if ( a1 < 0 )
  {
    v2 = -(int)a1;
    v5 = (unsigned __int64)-a1 >> 32;
    v15[0] = -1;
    v3 = HIWORD(v5);
    v4 = (unsigned int)-(int)a1 >> 16;
  }
  else
  {
    if ( !a1 )
    {
      v6 = 0;
      v14 = 0;
      v13 = 0;
      v12 = 0;
      v7 = 0;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      goto LABEL_8;
    }
    v3 = HIWORD(HIDWORD(a1));
    v4 = WORD1(a1);
    LOWORD(v5) = WORD2(a1);
  }
  v15[2] = v3;
  v15[3] = v5;
  v15[4] = v4;
  v15[5] = v2;
  v6 = 16430 - sub_A47E0((int)v15);
  v15[1] = v6;
  v14 = v15[3];
  v13 = v15[4];
  v12 = v15[5];
  v7 = v15[6];
  v8 = v15[7];
  v9 = v15[8];
  v10 = v16;
  if ( v15[0] )
    v6 |= 0x8000u;
LABEL_8:
  a2[7] = v6;
  a2[6] = v14;
  a2[5] = v13;
  a2[4] = v12;
  a2[3] = v7;
  a2[2] = v8;
  a2[1] = v9;
  *a2 = v10;
  return __readgsdword(0x14u);
}
