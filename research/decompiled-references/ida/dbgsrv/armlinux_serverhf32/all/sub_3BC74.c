/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BC74
// Address: 0x0003BC74

//----- (0003BC74) --------------------------------------------------------
int __fastcall sub_3BC74(_DWORD *a1)
{
  int v2; // r7
  int v3; // r3
  __int64 v4; // r2
  _DWORD *v5; // r1
  _DWORD *v6; // r5
  int v8; // r3
  const char *v9; // r1
  void *ptr; // [sp+4h] [bp-8h]

  v2 = sub_3B2A4((int)a1);
  if ( v2 )
    return v2;
  v3 = *(_DWORD *)(a1[26] + 24);
  if ( !v3 )
  {
    HIDWORD(v4) = a1[49];
    v5 = *(_DWORD **)(a1[48] + 4 * (HIDWORD(v4) + 0x3FFFFFFF));
LABEL_12:
    if ( HIDWORD(v4) )
    {
      v8 = HIDWORD(v4) - 1;
      a1[49] = v8;
      if ( !v5 )
        goto LABEL_15;
      goto LABEL_14;
    }
    if ( v5 )
    {
LABEL_14:
      ptr = v5;
      sub_3AFA4(v5);
      sub_8121C(ptr);
      v8 = a1[49];
LABEL_15:
      if ( v8 )
      {
        if ( under_debugger )
          __und(0xFFu);
        sub_78AFC(270);
      }
    }
    return v2;
  }
  while ( 1 )
  {
    v6 = *(_DWORD **)(*(_DWORD *)(a1[16] + 40) + 4 * v3);
    if ( sub_42798(v6, (int)(v6 + 8)) != 0x7FFFFFFF )
      return sub_3BAAC((int)a1, 0, 0);
    v4 = *((_QWORD *)a1 + 24);
    v5 = *(_DWORD **)(v4 + 4 * (HIDWORD(v4) + 0x3FFFFFFF));
    if ( (int)v5[3] > 0 )
      break;
    if ( !v6[6] )
      goto LABEL_12;
    v3 = *(_DWORD *)(a1[26] + 24);
  }
  if ( v6[9] )
    v9 = (const char *)v6[8];
  else
    v9 = (const char *)&dword_8DA5C;
  sub_70A98(0, v9);
  return sub_70A2C(56);
}
// 8DA5C: using guessed type int dword_8DA5C;
// D5C00: using guessed type char under_debugger;
