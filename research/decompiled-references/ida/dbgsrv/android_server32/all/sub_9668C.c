/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9668C
// Address: 0x0009668C

//----- (0009668C) --------------------------------------------------------
int __fastcall sub_9668C(int a1, int a2)
{
  __int64 v3; // kr00_8
  double *v4; // r0
  int v5; // r2
  double *v6; // r3
  int v7; // r4
  int v8; // r5
  int v9; // r4
  char v10; // r6
  double *i; // r1
  char v12; // r2
  int v13; // r0
  double v15; // [sp+8h] [bp-48h] BYREF
  char v16[36]; // [sp+10h] [bp-40h] BYREF
  int v17; // [sp+34h] [bp-1Ch]

  v3 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)(HIDWORD(v3) + 1 - v3) >= 0x11 )
  {
    v4 = &v15;
    v5 = 0;
    v6 = &v15;
    while ( v5 != 16 )
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
      v6 = (double *)((char *)v6 + 1);
    }
    for ( i = (double *)((char *)&v15 + 7); v4 < i; i = (double *)((char *)i - 1) )
    {
      v12 = *(_BYTE *)v4;
      *(_BYTE *)v4 = *(_BYTE *)i;
      v4 = (double *)((char *)v4 + 1);
      *(_BYTE *)i = v12;
    }
    memset(v16, 0, 0x20u);
    v13 = snprintf(v16, 0x20u, "%a", v15);
    sub_93B8C(a2, v16, &v16[v13]);
  }
  return _stack_chk_guard - v17;
}
