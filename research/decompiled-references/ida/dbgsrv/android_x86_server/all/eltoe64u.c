/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eltoe64u
// Address: 0x000A6C00

//----- (000A6C00) --------------------------------------------------------
unsigned int __cdecl eltoe64u(__int64 a1, _WORD *a2)
{
  __int16 v2; // cx
  __int16 v3; // dx
  __int16 v4; // di
  __int16 v5; // ax
  __int16 v7; // [esp+0h] [ebp-3Ch]
  __int16 v8; // [esp+4h] [ebp-38h]
  __int16 v9; // [esp+8h] [ebp-34h]
  __int16 v10; // [esp+Ch] [ebp-30h]
  _WORD v11[9]; // [esp+10h] [ebp-2Ch] BYREF
  int v12; // [esp+22h] [ebp-1Ah]
  unsigned int v13; // [esp+28h] [ebp-14h]

  v13 = __readgsdword(0x14u);
  memset(v11, 0, sizeof(v11));
  v12 = 0;
  if ( a1 )
  {
    v11[2] = HIWORD(a1);
    v11[3] = WORD2(a1);
    v11[4] = WORD1(a1);
    v11[5] = a1;
    v2 = 16430 - sub_A47E0((int)v11);
    v11[1] = v2;
    v10 = v11[3];
    v9 = v11[4];
    v8 = v11[5];
    v7 = v11[6];
    v3 = v11[7];
    v4 = v11[8];
    v5 = v12;
    if ( v11[0] )
      v2 |= 0x8000u;
  }
  else
  {
    v2 = 0;
    v10 = 0;
    v9 = 0;
    v8 = 0;
    v7 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
  }
  a2[7] = v2;
  a2[6] = v10;
  a2[5] = v9;
  a2[4] = v8;
  a2[3] = v7;
  a2[2] = v3;
  a2[1] = v4;
  *a2 = v5;
  return __readgsdword(0x14u);
}
