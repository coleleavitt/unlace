/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_965CC
// Address: 0x000965CC

//----- (000965CC) --------------------------------------------------------
int __fastcall sub_965CC(int a1, int a2)
{
  __int64 v3; // kr00_8
  float *v4; // r0
  int v5; // r2
  float *v6; // r3
  int v7; // r4
  int v8; // r5
  int v9; // r4
  char v10; // r6
  float *i; // r1
  char v12; // r2
  int v13; // r0
  float v15; // [sp+Ch] [bp-3Ch] BYREF
  char v16[28]; // [sp+10h] [bp-38h] BYREF
  int v17; // [sp+2Ch] [bp-1Ch]

  v3 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)(HIDWORD(v3) + 1 - v3) >= 9 )
  {
    v4 = &v15;
    v5 = 0;
    v6 = &v15;
    while ( v5 != 8 )
    {
      v7 = v3 + v5;
      v8 = *(unsigned __int8 *)(v3 + v5);
      v5 += 2;
      v9 = *(unsigned __int8 *)(v7 + 1);
      if ( (unsigned int)(v8 - 48) >= 0xA )
        LOBYTE(v8) = v8 + 9;
      v10 = -87;
      if ( (unsigned int)(v9 - 48) < 0xA )
        v10 = -48;
      *(_BYTE *)v6 = v10 + v9 + 16 * v8;
      v6 = (float *)((char *)v6 + 1);
    }
    for ( i = (float *)((char *)&v15 + 3); v4 < i; i = (float *)((char *)i - 1) )
    {
      v12 = *(_BYTE *)v4;
      *(_BYTE *)v4 = *(_BYTE *)i;
      v4 = (float *)((char *)v4 + 1);
      *(_BYTE *)i = v12;
    }
    memset(v16, 0, 0x18u);
    v13 = snprintf(v16, 0x18u, "%af", v15);
    sub_93B8C(a2, v16, &v16[v13]);
  }
  return _stack_chk_guard - v17;
}
