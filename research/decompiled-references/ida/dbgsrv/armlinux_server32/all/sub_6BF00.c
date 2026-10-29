/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BF00
// Address: 0x0006BF00

//----- (0006BF00) --------------------------------------------------------
int __fastcall sub_6BF00(char *a1, int a2, int a3, int a4)
{
  int result; // r0
  int v7; // r4
  char *v8; // r5
  int v9; // r6
  char *v10; // r1
  bool v11; // nf
  int v12; // r3
  char *v13; // r0
  int v14; // r3
  int v15; // r7
  int v16; // r3
  int v17; // r0
  char v18[1024]; // [sp+1Ch] [bp-408h] BYREF
  _DWORD v19[2]; // [sp+41Ch] [bp-8h] BYREF

  result = callui(23, a3, a4);
  if ( !a1 )
    return sub_171B0((int)"vshow_hex(nullptr)\n");
  v7 = 0;
  v8 = v18;
  while ( a2 != v7 )
  {
    while ( 1 )
    {
      v9 = v7 & 0xF;
      v10 = (char *)((char *)v19 - v8);
      if ( (v7 & 0xF) == 0 )
      {
        v8 += sub_7EBB4(v8, (int)v10, "%04X:", v7);
        v10 = (char *)((char *)v19 - v8);
      }
      v11 = -v7 < 0;
      v12 = -v7++ & 0xF;
      if ( !v11 )
        v9 = -v12;
      result = sub_7EBB4(v8, (int)v10, " %02X", (unsigned __int8)a1[v9]);
      v8 += result;
      if ( v7 << 28 )
        break;
      v13 = a1;
      a1 += 16;
      sub_6BEB0(v13, 16, v8);
      result = sub_171B0((int)"%s\n", v18);
      v8 = v18;
      if ( a2 == v7 )
        goto LABEL_10;
    }
  }
LABEL_10:
  v14 = -a2;
  v11 = -a2 < 0;
  v15 = a2 & 0xF;
  v16 = v14 & 0xF;
  if ( !v11 )
    v15 = -v16;
  if ( v15 )
  {
    v17 = sub_7EBB4(v8, (char *)v19 - v8, "%*c", -3 * v15 + 48, 32);
    sub_6BEB0(a1, v15, &v8[v17]);
    return sub_171B0((int)"%s\n", v18);
  }
  return result;
}
// D4944: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
