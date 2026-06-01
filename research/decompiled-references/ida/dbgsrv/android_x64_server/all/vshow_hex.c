/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vshow_hex
// Address: 0x00000000000B1030

//----- (00000000000B1030) ----------------------------------------------------
unsigned __int64 __fastcall vshow_hex(unsigned __int8 *a1, unsigned __int64 a2, int a3, int a4, int a5, int a6)
{
  unsigned __int64 v6; // r12
  unsigned __int8 *v7; // r14
  unsigned __int64 *v8; // r13
  char *v9; // rbx
  int v10; // r15d
  unsigned __int64 *v11; // r12
  char v12; // r13
  unsigned __int8 v13; // bp
  unsigned __int8 v14; // bp
  unsigned __int8 v15; // bp
  unsigned __int8 v16; // bp
  unsigned __int8 v17; // bp
  unsigned __int8 v18; // bp
  unsigned __int8 v19; // bp
  unsigned __int8 v20; // bp
  unsigned __int8 v21; // bp
  unsigned __int8 v22; // bp
  unsigned __int8 v23; // bp
  unsigned __int8 v24; // bp
  unsigned __int8 v25; // bp
  unsigned __int8 v26; // bp
  unsigned __int8 v27; // bp
  int v28; // r15d
  int v29; // eax
  char *v30; // r12
  char *v31; // rbx
  __int64 v32; // r13
  __int64 i; // r15
  unsigned __int8 v34; // bp
  __int64 v36; // [rsp+8h] [rbp-440h]
  _BYTE v37[1024]; // [rsp+10h] [rbp-438h] BYREF
  unsigned __int64 v38; // [rsp+410h] [rbp-38h] BYREF

  v6 = a2;
  v7 = a1;
  v38 = __readfsqword(0x28u);
  ((void (__fastcall *)(int, int, int, int, int, int))callui)(23, a3, a4, a4, a5, a6);
  if ( a1 )
  {
    if ( a2 )
    {
      v8 = &v38;
      v9 = v37;
      v10 = 0;
      do
      {
        if ( (v10 & 0xF) == 0 )
          v9 += (int)qsnprintf(v9, (char *)v8 - v9, "%04X:", v10);
        v9 += (int)qsnprintf(v9, (char *)v8 - v9, " %02X", v7[v10 % 16]);
        if ( (++v10 & 0xF) == 0 )
        {
          v11 = v8;
          *(_WORD *)v9 = 8736;
          v12 = *v7;
          if ( __strchr_chk((const char *)&dword_115B7C, *v7, 8) )
            v12 = 46;
          v9[2] = v12;
          v13 = v7[1];
          if ( __strchr_chk((const char *)&dword_115B7C, v13, 8) )
            v13 = 46;
          v9[3] = v13;
          v14 = v7[2];
          v8 = v11;
          if ( __strchr_chk((const char *)&dword_115B7C, v14, 8) )
            v14 = 46;
          v9[4] = v14;
          v15 = v7[3];
          v6 = a2;
          if ( __strchr_chk((const char *)&dword_115B7C, v15, 8) )
            v15 = 46;
          v9[5] = v15;
          v16 = v7[4];
          if ( __strchr_chk((const char *)&dword_115B7C, v16, 8) )
            v16 = 46;
          v9[6] = v16;
          v17 = v7[5];
          if ( __strchr_chk((const char *)&dword_115B7C, v17, 8) )
            v17 = 46;
          v9[7] = v17;
          v18 = v7[6];
          if ( __strchr_chk((const char *)&dword_115B7C, v18, 8) )
            v18 = 46;
          v9[8] = v18;
          v19 = v7[7];
          if ( __strchr_chk((const char *)&dword_115B7C, v19, 8) )
            v19 = 46;
          v9[9] = v19;
          v20 = v7[8];
          if ( __strchr_chk((const char *)&dword_115B7C, v20, 8) )
            v20 = 46;
          v9[10] = v20;
          v21 = v7[9];
          if ( __strchr_chk((const char *)&dword_115B7C, v21, 8) )
            v21 = 46;
          v9[11] = v21;
          v22 = v7[10];
          if ( __strchr_chk((const char *)&dword_115B7C, v22, 8) )
            v22 = 46;
          v9[12] = v22;
          v23 = v7[11];
          if ( __strchr_chk((const char *)&dword_115B7C, v23, 8) )
            v23 = 46;
          v9[13] = v23;
          v24 = v7[12];
          if ( __strchr_chk((const char *)&dword_115B7C, v24, 8) )
            v24 = 46;
          v9[14] = v24;
          v25 = v7[13];
          if ( __strchr_chk((const char *)&dword_115B7C, v25, 8) )
            v25 = 46;
          v9[15] = v25;
          v26 = v7[14];
          if ( __strchr_chk((const char *)&dword_115B7C, v26, 8) )
            v26 = 46;
          v9[16] = v26;
          v27 = v7[15];
          if ( __strchr_chk((const char *)&dword_115B7C, v27, 8) )
            v27 = 46;
          v9[17] = v27;
          *((_WORD *)v9 + 9) = 34;
          v9 = v37;
          sub_390A0((int)"%s\n", v37);
          v7 += 16;
        }
      }
      while ( v10 < v6 );
      v28 = v10 % 16;
      if ( v28 )
      {
        v29 = qsnprintf(v9, (char *)v8 - v9, "%*c", 3 * (16 - v28), 32);
        *(_WORD *)&v9[v29] = 8736;
        v30 = &v9[v29 + 2];
        if ( v28 > 0 )
        {
          v31 = &v9[v29];
          v36 = (unsigned int)(v28 - 1);
          v32 = (unsigned int)v28;
          for ( i = 0; i != v32; ++i )
          {
            v34 = v7[i];
            if ( __strchr_chk((const char *)&dword_115B7C, v34, 8) )
              v34 = 46;
            v30[i] = v34;
          }
          v30 = &v31[v36 + 3];
        }
        *(_WORD *)v30 = 34;
        sub_390A0((int)"%s\n", v37);
      }
    }
  }
  else
  {
    sub_390A0((int)"vshow_hex(nullptr)\n");
  }
  return __readfsqword(0x28u);
}
// 33BA0: using guessed type __int64 __strchr_chk(const char *, ...);
// 115B7C: using guessed type int dword_115B7C;
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
