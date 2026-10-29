/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66FFC
// Address: 0x00066FFC

//----- (00066FFC) --------------------------------------------------------
int __fastcall sub_66FFC(int a1, int a2, __int64 a3)
{
  unsigned int v3; // r6
  int v4; // r7
  int v5; // r5
  unsigned __int64 v6; // r0
  unsigned int v7; // r4
  unsigned int v8; // r7
  unsigned int v9; // r6
  int v10; // r4
  signed int v11; // kr00_4
  int v12; // r0
  signed int v13; // r3
  bool v14; // zf
  int v15; // r2
  int v16; // r0
  signed int v17; // r7
  int v18; // r2
  __int64 v19; // r0
  int (__fastcall *v21)(int, int, _DWORD, _DWORD, char *, int); // [sp+18h] [bp-28h]
  __int64 v23; // [sp+24h] [bp-1Ch]
  int v24; // [sp+28h] [bp-18h]
  int v25; // [sp+2Ch] [bp-14h]
  int (__fastcall *v26)(int, int, int, int, char *, int); // [sp+2Ch] [bp-14h]
  signed int v28; // [sp+34h] [bp-Ch]
  char v29[4]; // [sp+38h] [bp-8h] BYREF

  v3 = HIDWORD(a3);
  v4 = a1;
  v5 = 0;
  LODWORD(v23) = a3;
  if ( (*(int (__fastcall **)(int, int, _DWORD, _DWORD, char *, int))(*(_DWORD *)a1 + 192))(
         a1,
         a2,
         a3 - 1,
         (unsigned __int64)(a3 - 1) >> 32,
         v29,
         1) == 1 )
  {
    v6 = __PAIR64__(v3, v23);
    v7 = v3;
    do
    {
      HIDWORD(v23) = HIDWORD(v6);
      v25 = v6;
      v21 = *(int (__fastcall **)(int, int, _DWORD, _DWORD, char *, int))(*(_DWORD *)v4 + 192);
      BYTE4(v6) = 1;
      if ( __CFSUB__(v7, 0x7FFFFFFF, (_DWORD)v23 == -1) )
        BYTE4(v6) = 0;
      v8 = ((unsigned int)v23 >> 1 >> (BYTE4(v6) ^ 0x1F)) | (v7 << SBYTE4(v6));
      v9 = v7;
      v10 = (_DWORD)v23 << SBYTE4(v6);
      v11 = v23 + v6;
      v3 = (v23 + __PAIR64__(v9, v6)) >> 32;
      v12 = v21(a1, a2, v23 + v6 - 1, (__PAIR64__(v3, (int)v23 + (int)v6) - 1) >> 32, v29, 1);
      v13 = v11;
      v14 = v12 == 1;
      v15 = v25;
      v5 = HIDWORD(v23);
      LODWORD(v23) = v10;
      v7 = v8;
      v4 = a1;
      v6 = __PAIR64__(v3, v11);
    }
    while ( v14 );
  }
  else
  {
    v15 = 0;
    v13 = v23;
  }
  if ( __PAIR64__(v5 + (unsigned int)(v15 == -1), v15 + 1) >= __PAIR64__(v3, v13) )
  {
    LODWORD(v19) = v15;
  }
  else
  {
    do
    {
      v26 = *(int (__fastcall **)(int, int, int, int, char *, int))(*(_DWORD *)v4 + 192);
      v28 = v13;
      v24 = v15;
      v16 = v4;
      v17 = ((unsigned int)(v13 + v15) >> 1) + ((v5 + __CFADD__(v13, v15) + v3) << 31);
      v18 = v26(v16, a2, v17 - 1, (v17 - 1) >> 31, v29, 1);
      HIDWORD(v19) = v17 >> 31;
      if ( v18 != 1 )
        HIDWORD(v19) = v5;
      LODWORD(v19) = v17;
      if ( v18 != 1 )
      {
        LODWORD(v19) = v24;
        v3 = v17 >> 31;
      }
      v13 = v28;
      if ( v18 != 1 )
        v13 = v17;
      v5 = HIDWORD(v19);
      v15 = v19;
      v4 = a1;
    }
    while ( v19 + 1 < __PAIR64__(v3, v13) );
  }
  return v19;
}
