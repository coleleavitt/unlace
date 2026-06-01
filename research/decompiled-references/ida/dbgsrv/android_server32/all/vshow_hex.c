/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vshow_hex
// Address: 0x00071808

//----- (00071808) --------------------------------------------------------
int __fastcall vshow_hex(unsigned __int8 *a1, int a2, int a3, int a4)
{
  unsigned __int8 *v5; // r5
  int v6; // r1
  char *v7; // r6
  int v8; // r4
  int v9; // r2
  int v10; // r7
  unsigned __int8 v11; // r7
  unsigned __int8 v12; // r7
  unsigned __int8 v13; // r7
  unsigned __int8 v14; // r7
  unsigned __int8 v15; // r7
  unsigned __int8 v16; // r7
  unsigned __int8 v17; // r7
  unsigned __int8 v18; // r7
  unsigned __int8 v19; // r7
  unsigned __int8 v20; // r7
  unsigned __int8 v21; // r7
  unsigned __int8 v22; // r7
  unsigned __int8 v23; // r7
  unsigned __int8 v24; // r7
  unsigned __int8 v25; // r7
  void *v26; // r0
  int v27; // r7
  unsigned int v28; // r0
  char *v29; // r0
  char *v30; // r6
  unsigned __int8 *v31; // r4
  int v32; // r5
  char *v34; // [sp+28h] [bp-418h]
  int v36; // [sp+30h] [bp-410h]
  int v37; // [sp+38h] [bp-408h]
  char v38[1024]; // [sp+3Ch] [bp-404h] BYREF
  int v39; // [sp+43Ch] [bp-4h] BYREF

  callui(23, a3, a4);
  if ( a1 )
  {
    if ( a2 )
    {
      v5 = a1;
      v6 = 0;
      v7 = v38;
      do
      {
        while ( 1 )
        {
          v8 = v6;
          if ( !(v6 << 28) )
            v7 += qsnprintf(v7, (char *)&v39 - v7, "%04X:");
          v7 += qsnprintf(v7, (char *)&v39 - v7, " %02X");
          v6 = v8 + 1;
          if ( !((v8 + 1) << 28) )
            break;
          v9 = a2;
          if ( a2 == v6 )
            goto LABEL_43;
        }
        v7[1] = 34;
        *v7 = 32;
        v10 = *v5;
        if ( memchr(byte_C6225, v10, 8u) )
          LOBYTE(v10) = 46;
        v7[2] = v10;
        v11 = v5[1];
        if ( memchr(byte_C6225, v11, 8u) )
          v11 = 46;
        v7[3] = v11;
        v12 = v5[2];
        if ( memchr(byte_C6225, v12, 8u) )
          v12 = 46;
        v7[4] = v12;
        v13 = v5[3];
        if ( memchr(byte_C6225, v13, 8u) )
          v13 = 46;
        v7[5] = v13;
        v14 = v5[4];
        if ( memchr(byte_C6225, v14, 8u) )
          v14 = 46;
        v7[6] = v14;
        v15 = v5[5];
        if ( memchr(byte_C6225, v15, 8u) )
          v15 = 46;
        v7[7] = v15;
        v16 = v5[6];
        if ( memchr(byte_C6225, v16, 8u) )
          v16 = 46;
        v7[8] = v16;
        v17 = v5[7];
        if ( memchr(byte_C6225, v17, 8u) )
          v17 = 46;
        v7[9] = v17;
        v18 = v5[8];
        if ( memchr(byte_C6225, v18, 8u) )
          v18 = 46;
        v7[10] = v18;
        v19 = v5[9];
        if ( memchr(byte_C6225, v19, 8u) )
          v19 = 46;
        v7[11] = v19;
        v20 = v5[10];
        if ( memchr(byte_C6225, v20, 8u) )
          v20 = 46;
        v7[12] = v20;
        v21 = v5[11];
        if ( memchr(byte_C6225, v21, 8u) )
          v21 = 46;
        v7[13] = v21;
        v22 = v5[12];
        if ( memchr(byte_C6225, v22, 8u) )
          v22 = 46;
        v7[14] = v22;
        v23 = v5[13];
        if ( memchr(byte_C6225, v23, 8u) )
          v23 = 46;
        v7[15] = v23;
        v24 = v5[14];
        if ( memchr(byte_C6225, v24, 8u) )
          v24 = 46;
        v7[16] = v24;
        v25 = v5[15];
        v26 = memchr(byte_C6225, v25, 8u);
        *((_WORD *)v7 + 9) = 34;
        if ( v26 )
          v25 = 46;
        v7[17] = v25;
        v7 = v38;
        sub_1BBA0((int)"%s\n", v38);
        v5 += 16;
        v9 = a2;
        v6 = v8 + 1;
      }
      while ( a2 != v8 + 1 );
LABEL_43:
      v27 = v9 % 16;
      if ( v9 != ((v9 + ((unsigned int)(v9 >> 31) >> 28)) & 0xFFFFFFF0) )
      {
        v28 = qsnprintf(v7, (char *)&v39 - v7, "%*c");
        v7[v28] = 32;
        v29 = &v7[v28];
        v29[1] = 34;
        v30 = v29 + 2;
        if ( v27 >= 1 )
        {
          v34 = v29;
          v36 = v27;
          do
          {
            v31 = v5;
            v32 = *v5;
            if ( memchr(byte_C6225, v32, 8u) )
              LOBYTE(v32) = 46;
            *v30 = v32;
            v5 = v31 + 1;
            --v27;
            ++v30;
          }
          while ( v27 );
          v30 = &v34[v36 + 2];
        }
        v30[1] = 0;
        *v30 = 34;
        sub_1BBA0((int)"%s\n", v38);
      }
    }
  }
  else
  {
    sub_1BBA0((int)"vshow_hex(nullptr)\n");
  }
  return _stack_chk_guard - v37;
}
// 71AD8: variable 'v37' is possibly undefined
// DE268: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
