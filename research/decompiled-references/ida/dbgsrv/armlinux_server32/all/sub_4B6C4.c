/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B6C4
// Address: 0x0004B6C4

//----- (0004B6C4) --------------------------------------------------------
int __fastcall sub_4B6C4(int *a1, int a2)
{
  int v4; // r4
  int v5; // r7
  int v7; // r3
  char *v8; // r0
  unsigned int v9; // r4
  int v10; // r4

  v4 = sub_77D94(a1, *(FILE **)(a2 + 148));
  if ( v4 > 0 && (unsigned int)a1[1] > 3 )
  {
    v5 = strncmp((const char *)*a1, (const char *)&dword_9D4CC, 3u);
    if ( !v5 && v4 + 2 >= sub_7783C(*(_DWORD *)(a2 + 148)) )
    {
      v7 = a1[1];
      if ( v7 )
      {
        v4 = v7 - 1;
        if ( v7 == 1 )
          return v4;
        v8 = (char *)*a1;
        if ( (unsigned int)v4 > 3 )
        {
          v5 = v7 - 4;
          v9 = v7 - 3;
          memmove(v8, v8 + 3, v7 - 4);
          v8 = (char *)*a1;
        }
        else
        {
          v9 = 1;
        }
        if ( v9 > a1[2] )
        {
          v8 = (char *)sub_78018((int)a1, v8, v9, 1u);
          *a1 = (int)v8;
        }
        a1[1] = v9;
        v8[v5] = 0;
        v10 = a1[1];
        if ( v10 )
          return v10 - 1;
      }
      return 0;
    }
  }
  return v4;
}
// 9D4CC: using guessed type int dword_9D4CC;
