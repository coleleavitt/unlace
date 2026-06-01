/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_32508
// Address: 0x00032508

//----- (00032508) --------------------------------------------------------
unsigned int *__fastcall sub_32508(int a1, int a2, const char *a3)
{
  unsigned int v4; // r2
  unsigned int *v5; // r4
  unsigned __int64 v8; // kr00_8
  char *v9; // r0
  char *s1; // [sp+0h] [bp-14h] BYREF
  int v12; // [sp+4h] [bp-10h]
  int v13; // [sp+8h] [bp-Ch]

  if ( !*(_BYTE *)(a1 + 136) )
    sub_147B8();
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(unsigned int **)(a1 + 16);
  s1 = nullptr;
  v12 = 0;
  v13 = 0;
  v8 = __PAIR64__(v4, (unsigned int)v5);
  if ( !(v4 << 6) )
    return nullptr;
  do
  {
    while ( v5[1] != a2 )
    {
      v5 += 16;
      if ( v5 == (unsigned int *)(v8 + (HIDWORD(v8) << 6)) )
        goto LABEL_10;
    }
    v12 = 0;
    sub_324D4(a1, (int)&s1, v5);
    if ( v12 )
      v9 = s1;
    else
      v9 = (char *)&dword_8DA5C;
    if ( !strcmp(v9, a3) )
      goto LABEL_11;
    v8 = *(_QWORD *)(a1 + 16);
    v5 += 16;
  }
  while ( v5 != (unsigned int *)(v8 + (HIDWORD(v8) << 6)) );
LABEL_10:
  v5 = nullptr;
LABEL_11:
  if ( s1 )
  {
    v12 = 0;
    sub_77E08(s1);
  }
  return v5;
}
// 8DA5C: using guessed type int dword_8DA5C;
