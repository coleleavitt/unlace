/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70BD4
// Address: 0x00070BD4

//----- (00070BD4) --------------------------------------------------------
int __fastcall sub_70BD4(unsigned int a1)
{
  unsigned int v1; // r0
  int v2; // r1
  int v3; // r6
  int v4; // r4
  unsigned int v5; // r1
  unsigned int v6; // r2
  int v7; // r7
  unsigned int v8; // r3
  int *v9; // r5
  int v10; // r1
  unsigned int v12; // r1

  if ( a1 <= 0x7F )
  {
    v1 = a1;
    return (HIWORD(dword_B4634[v1]) << 16) + LOWORD(dword_B4634[v1]);
  }
  v2 = 0;
  if ( HIWORD(a1) <= 0x10u )
  {
    v3 = 0;
    v4 = 3200;
    while ( 1 )
    {
      if ( v4 > 3200 )
      {
        if ( !under_debugger )
          interr(1520);
        goto LABEL_34;
      }
      v5 = (v3 + v4) / 2;
      if ( v5 > 0xC7F )
        break;
      v7 = v5 + 1;
      v8 = 1114112;
      if ( v5 + 1 < 0xC80 )
        v8 = dword_BBB7C[3 * v7];
      v6 = dword_BBB7C[3 * v5];
      v9 = &dword_BBB7C[3 * v5];
      if ( v8 <= a1 )
        v9 = nullptr;
      if ( v6 > a1 )
      {
        if ( v6 < a1 )
          goto LABEL_18;
LABEL_17:
        v7 = v3;
        goto LABEL_18;
      }
      if ( v9 )
      {
        v12 = v9[1];
        if ( !v9[2] )
          v12 = v12 + a1 - *v9;
        if ( v12 < 0x1D52 )
        {
          v1 = v12;
          return (HIWORD(dword_B4634[v1]) << 16) + LOWORD(dword_B4634[v1]);
        }
        if ( !under_debugger )
          interr(1519);
LABEL_34:
        __debugbreak();
      }
      if ( v6 >= a1 )
        goto LABEL_17;
LABEL_18:
      v10 = v5 - 1;
      if ( v6 >= a1 )
        v4 = v10;
      v2 = 0;
      if ( v7 <= v4 )
      {
        v3 = v7;
        if ( v7 < 3200 )
          continue;
      }
      return v2;
    }
    v6 = dword_BBB7C[3 * v5];
    v7 = v5 + 1;
    if ( v6 < a1 )
      goto LABEL_18;
    goto LABEL_17;
  }
  return v2;
}
// B4634: using guessed type int dword_B4634[157];
// BBB7C: using guessed type int dword_BBB7C[3];
// E0550: using guessed type char under_debugger;
