/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vshow_hex
// Address: 0x0009CDD0

//----- (0009CDD0) --------------------------------------------------------
unsigned int __cdecl vshow_hex(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v2; // edi
  int v3; // eax
  int *v4; // ecx
  int v5; // edi
  int v6; // esi
  char v7; // cl
  int v8; // esi
  char v9; // cl
  unsigned __int8 v10; // si
  char v11; // cl
  unsigned __int8 v12; // si
  char v13; // cl
  unsigned __int8 v14; // si
  char v15; // cl
  unsigned __int8 v16; // si
  char v17; // cl
  unsigned __int8 v18; // si
  char v19; // cl
  unsigned __int8 v20; // si
  char v21; // cl
  unsigned __int8 v22; // si
  char v23; // cl
  unsigned __int8 v24; // si
  char v25; // cl
  unsigned __int8 v26; // si
  char v27; // cl
  unsigned __int8 v28; // si
  char v29; // cl
  unsigned __int8 v30; // si
  char v31; // cl
  unsigned __int8 v32; // si
  char v33; // cl
  unsigned __int8 v34; // si
  char v35; // cl
  char v36; // cl
  int v37; // esi
  unsigned int v38; // eax
  char *v39; // edx
  int v40; // edi
  char v41; // al
  char *v42; // edx
  int *v44; // [esp+Ch] [ebp-430h]
  int *v45; // [esp+Ch] [ebp-430h]
  char *v46; // [esp+Ch] [ebp-430h]
  unsigned __int8 *v47; // [esp+14h] [ebp-428h]
  unsigned __int8 *v48; // [esp+14h] [ebp-428h]
  int v49; // [esp+18h] [ebp-424h]
  char *v50; // [esp+18h] [ebp-424h]
  int v51; // [esp+1Ch] [ebp-420h]
  int v52; // [esp+1Ch] [ebp-420h]
  int v53; // [esp+20h] [ebp-41Ch]
  int v54[256]; // [esp+28h] [ebp-414h] BYREF
  _DWORD v55[5]; // [esp+428h] [ebp-14h] BYREF

  v2 = a1;
  v55[0] = __readgsdword(0x14u);
  callui((int)v54);
  if ( !a1 )
  {
LABEL_67:
    sub_1C900();
    return __readgsdword(0x14u);
  }
  if ( a2 )
  {
    v3 = 0;
    v4 = v54;
    do
    {
      v47 = v2;
      if ( (v3 & 0xF) == 0 )
      {
        v5 = v3;
        v4 = (int *)((char *)v4 + qsnprintf(v4, (char *)v55 - (char *)v4, "%04X:", v3));
        v3 = v5;
      }
      v6 = v3;
      v4 = (int *)((char *)v4 + qsnprintf(v4, (char *)v55 - (char *)v4, " %02X", v47[v3 % 16]));
      v3 = v6 + 1;
      if ( (((_BYTE)v6 + 1) & 0xF) != 0 )
      {
        v2 = v47;
      }
      else
      {
        v49 = v6 + 1;
        v44 = v4;
        *(_WORD *)v4 = 8736;
        v51 = *v47;
        if ( __strchr_chk(dword_107550, v51, 8) )
          v7 = 46;
        else
          v7 = v51;
        *((_BYTE *)v44 + 2) = v7;
        v8 = v47[1];
        if ( __strchr_chk(dword_107550, v8, 8) )
          v9 = 46;
        else
          v9 = v8;
        *((_BYTE *)v44 + 3) = v9;
        v10 = v47[2];
        if ( __strchr_chk(dword_107550, v10, 8) )
          v11 = 46;
        else
          v11 = v10;
        *((_BYTE *)v44 + 4) = v11;
        v12 = v47[3];
        if ( __strchr_chk(dword_107550, v12, 8) )
          v13 = 46;
        else
          v13 = v12;
        *((_BYTE *)v44 + 5) = v13;
        v14 = v47[4];
        if ( __strchr_chk(dword_107550, v14, 8) )
          v15 = 46;
        else
          v15 = v14;
        *((_BYTE *)v44 + 6) = v15;
        v16 = v47[5];
        if ( __strchr_chk(dword_107550, v16, 8) )
          v17 = 46;
        else
          v17 = v16;
        *((_BYTE *)v44 + 7) = v17;
        v18 = v47[6];
        if ( __strchr_chk(dword_107550, v18, 8) )
          v19 = 46;
        else
          v19 = v18;
        *((_BYTE *)v44 + 8) = v19;
        v20 = v47[7];
        if ( __strchr_chk(dword_107550, v20, 8) )
          v21 = 46;
        else
          v21 = v20;
        *((_BYTE *)v44 + 9) = v21;
        v22 = v47[8];
        if ( __strchr_chk(dword_107550, v22, 8) )
          v23 = 46;
        else
          v23 = v22;
        *((_BYTE *)v44 + 10) = v23;
        v24 = v47[9];
        if ( __strchr_chk(dword_107550, v24, 8) )
          v25 = 46;
        else
          v25 = v24;
        *((_BYTE *)v44 + 11) = v25;
        v26 = v47[10];
        if ( __strchr_chk(dword_107550, v26, 8) )
          v27 = 46;
        else
          v27 = v26;
        *((_BYTE *)v44 + 12) = v27;
        v28 = v47[11];
        if ( __strchr_chk(dword_107550, v28, 8) )
          v29 = 46;
        else
          v29 = v28;
        *((_BYTE *)v44 + 13) = v29;
        v30 = v47[12];
        if ( __strchr_chk(dword_107550, v30, 8) )
          v31 = 46;
        else
          v31 = v30;
        *((_BYTE *)v44 + 14) = v31;
        v32 = v47[13];
        if ( __strchr_chk(dword_107550, v32, 8) )
          v33 = 46;
        else
          v33 = v32;
        *((_BYTE *)v44 + 15) = v33;
        v34 = v47[14];
        if ( __strchr_chk(dword_107550, v34, 8) )
          v35 = 46;
        else
          v35 = v34;
        *((_BYTE *)v44 + 16) = v35;
        v52 = v47[15];
        if ( __strchr_chk(dword_107550, v52, 8) )
          v36 = 46;
        else
          v36 = v52;
        *((_BYTE *)v44 + 17) = v36;
        *((_WORD *)v44 + 9) = 34;
        sub_1C900();
        v2 = v47 + 16;
        v4 = v54;
        v3 = v49;
      }
    }
    while ( a2 != v3 );
    v37 = a2 % 16;
    if ( a2 % 16 )
    {
      v45 = v4;
      v38 = qsnprintf(v4, (char *)v55 - (char *)v4, "%*c", 3 * (16 - v37));
      *(_WORD *)((char *)v45 + v38) = 8736;
      v39 = (char *)v45 + v38 + 2;
      if ( v37 > 0 )
      {
        v48 = v2;
        v46 = (char *)v45 + v38;
        v40 = 0;
        v50 = v39;
        do
        {
          v53 = v48[v40];
          if ( __strchr_chk(dword_107550, v53, 8) )
          {
            v41 = 46;
            v42 = v50;
          }
          else
          {
            v42 = v50;
            v41 = v53;
          }
          v42[v40++] = v41;
        }
        while ( v37 != v40 );
        v39 = &v46[v37 + 2];
      }
      *(_WORD *)v39 = 34;
      goto LABEL_67;
    }
  }
  return __readgsdword(0x14u);
}
// 17C00: using guessed type int __cdecl __strchr_chk(_DWORD, _DWORD, _DWORD);
// 107550: using guessed type int dword_107550[68];
// 13BC20: using guessed type int (__stdcall *callui)(int);
