/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19FCC
// Address: 0x00019FCC

//----- (00019FCC) --------------------------------------------------------
int __fastcall sub_19FCC(_DWORD *a1, int a2, char *s2)
{
  _DWORD *v6; // r4
  _DWORD *v7; // r9
  _DWORD *v8; // r6
  int *v9; // r10
  _DWORD *v10; // t1
  bool v11; // zf
  char v12; // r3
  int v13; // r3
  const char *v14; // r0
  int v15; // r3
  int v17[4]; // [sp+Ch] [bp-28h] BYREF
  _DWORD v18[4]; // [sp+1Ch] [bp-18h] BYREF

  v6 = (_DWORD *)a1[16];
  v7 = (_DWORD *)a1[18];
  v8 = (_DWORD *)a1[20];
  v9 = (int *)a1[19];
  while ( v6 != v8 )
  {
    if ( a2 == (v6[4] & 0xFFFFFFF) )
    {
      v11 = a2 == 1;
      if ( a2 != 1 )
        v11 = a2 == 11;
      v12 = !v11;
      if ( a2 == 8 )
        v13 = 0;
      else
        v13 = v12 & 1;
      if ( v13 )
      {
        if ( under_debugger )
          __und(0xFFu);
        sub_78AFC(3295);
      }
      v14 = v6[6] ? (const char *)v6[5] : (const char *)&dword_8DA5C;
      if ( !strcmp(v14, s2) )
      {
        v18[0] = v6;
        v15 = *v9;
        v18[3] = v9;
        v18[1] = v15;
        v18[2] = v15 + 484;
        sub_19BA4(v17, a1 + 14, (int)v18);
        return 1;
      }
    }
    v6 += 11;
    if ( v7 == v6 )
    {
      v10 = (_DWORD *)v9[1];
      ++v9;
      v6 = v10;
      v7 = v10 + 121;
    }
  }
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D5C00: using guessed type char under_debugger;
