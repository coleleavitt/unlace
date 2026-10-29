/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A110
// Address: 0x0007A110

//----- (0007A110) --------------------------------------------------------
int sub_7A110(int *a1, char a2, char *a3, ...)
{
  int v5; // r6
  int v6; // r0
  int v7; // r2
  const char *v8; // r5
  int v9; // r7
  const char *v10; // r1
  int v12; // [sp+4h] [bp-1028h]
  int v13; // [sp+8h] [bp-1024h]
  char *v14; // [sp+18h] [bp-1014h] BYREF
  int v15; // [sp+1Ch] [bp-1010h]
  int v16; // [sp+20h] [bp-100Ch]
  va_list v17; // [sp+24h] [bp-1008h]
  char s[4116]; // [sp+28h] [bp-1004h] BYREF
  int vars10; // [sp+103Ch] [bp+10h]
  va_list va; // [sp+1040h] [bp+14h] BYREF

  va_start(va, a3);
  va_copy(v17, va);
  vqmakepath(s, 4096, a3, (char **)va);
  if ( (a2 & 4) == 0 || qisdir(s) )
  {
    sub_1B09C((int)&v14, s);
    v5 = *a1;
    v13 = (int)a1;
    v6 = a1[1];
    v7 = *a1 + 12 * v6;
    if ( 12 * v6 )
    {
      v12 = v5 + 12 * v6;
      v8 = &byte_B3CBE;
      if ( v15 )
        v8 = v14;
      v9 = 12 * v6;
      while ( 1 )
      {
        v10 = &byte_B3CBE;
        if ( *(_DWORD *)(v5 + 4) )
          v10 = *(const char **)v5;
        if ( !strcmp(v8, v10) )
          break;
        v9 -= 12;
        v5 += 12;
        if ( !v9 )
          goto LABEL_14;
      }
      v7 = v12;
    }
    if ( v5 == v7 )
LABEL_14:
      sub_24B4C(v13, (int)&v14);
    if ( v14 )
    {
      v15 = 0;
      qfree(v14);
      v16 = 0;
      v14 = nullptr;
    }
  }
  return vars10;
}
// B3CBE: using guessed type char byte_B3CBE;
