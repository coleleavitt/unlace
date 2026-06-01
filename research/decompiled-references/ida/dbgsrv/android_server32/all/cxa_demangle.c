/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_demangle
// Address: 0x000921C0

//----- (000921C0) --------------------------------------------------------
char *_cxa_demangle(const char *lpmangled, char *lpout, size_t *lpoutlen, int *lpstatus)
{
  char *v6; // r5
  int v7; // r1
  unsigned __int8 **v8; // r2
  unsigned __int8 *v9; // r9
  int v10; // r4
  unsigned __int8 *v11; // r0
  int v12; // r1
  unsigned __int8 **v13; // r2
  _DWORD *v14; // r3
  int v15; // r6
  size_t v16; // r6
  int v17; // r6
  char *v18; // r0
  int v20; // [sp+8h] [bp-11E0h]
  char *v21; // [sp+10h] [bp-11D8h] BYREF
  size_t v22; // [sp+14h] [bp-11D4h]
  size_t v23; // [sp+18h] [bp-11D0h]
  int v24; // [sp+1Ch] [bp-11CCh]
  int v25; // [sp+20h] [bp-11C8h]
  unsigned __int8 *v26[2]; // [sp+24h] [bp-11C4h] BYREF
  _DWORD *v27; // [sp+2Ch] [bp-11BCh] BYREF
  __int64 v28; // [sp+30h] [bp-11B8h] BYREF
  _BYTE *v29; // [sp+38h] [bp-11B0h]
  _BYTE *v30; // [sp+3Ch] [bp-11ACh]
  _DWORD *v31; // [sp+40h] [bp-11A8h]
  _BYTE v32[128]; // [sp+44h] [bp-11A4h] BYREF
  _DWORD v33[3]; // [sp+C4h] [bp-1124h] BYREF
  _BYTE v34[128]; // [sp+D0h] [bp-1118h] BYREF
  _DWORD v35[3]; // [sp+150h] [bp-1098h] BYREF
  _BYTE v36[32]; // [sp+15Ch] [bp-108Ch] BYREF
  _DWORD v37[3]; // [sp+17Ch] [bp-106Ch] BYREF
  _BYTE v38[16]; // [sp+188h] [bp-1060h] BYREF
  __int16 v39; // [sp+198h] [bp-1050h] BYREF
  char v40; // [sp+19Ah] [bp-104Eh]
  _DWORD v41[1035]; // [sp+1A0h] [bp-1048h] BYREF

  if ( !lpmangled || (v6 = lpout) != nullptr && !lpoutlen )
  {
    if ( lpstatus )
      *lpstatus = -3;
    return nullptr;
  }
  LODWORD(v28) = lpmangled;
  HIDWORD(v28) = &lpmangled[strlen(lpmangled)];
  v29 = v32;
  v30 = v32;
  v31 = v33;
  v33[0] = v34;
  v33[1] = v34;
  v33[2] = v35;
  v35[0] = v36;
  v35[1] = v36;
  v35[2] = v37;
  v37[0] = v38;
  v37[1] = v38;
  v37[2] = &v39;
  v39 = 1;
  v40 = 0;
  v41[0] = 0;
  v41[1024] = v41;
  v41[1] = 0;
  v24 = -1;
  v25 = -1;
  if ( sub_924C8(&v28, "_Z", (unsigned __int8 *)"") )
  {
    v9 = (unsigned __int8 *)sub_9251C((int)&v28, v7, v8);
    if ( !v9 )
      goto LABEL_30;
    v10 = v28;
    if ( HIDWORD(v28) == (_DWORD)v28 )
      goto LABEL_27;
    if ( *(_BYTE *)v28 != 46 )
    {
LABEL_30:
      v17 = -2;
      goto LABEL_36;
    }
    v20 = HIDWORD(v28);
    v11 = (unsigned __int8 *)sub_93AC6((int)v41, 20);
    *(_DWORD *)v11 = &off_DC68C;
    *((_DWORD *)v11 + 1) = 16843009;
    *((_DWORD *)v11 + 2) = v9;
    *((_DWORD *)v11 + 3) = v10;
    *((_DWORD *)v11 + 4) = v20;
    LODWORD(v28) = HIDWORD(v28);
    goto LABEL_12;
  }
  if ( sub_924C8(&v28, "___Z", (unsigned __int8 *)"") )
  {
    v27 = sub_9251C((int)&v28, v12, v13);
    if ( !v27 || !sub_924C8(&v28, "_block_invoke", (unsigned __int8 *)"") )
    {
LABEL_26:
      v9 = nullptr;
      goto LABEL_27;
    }
    if ( (_DWORD)v28 == HIDWORD(v28) || *(_BYTE *)v28 != 95 )
    {
      v15 = 0;
    }
    else
    {
      v15 = 1;
      LODWORD(v28) = v28 + 1;
    }
    v9 = nullptr;
    sub_92AAC(v26, (unsigned __int8 **)&v28, 0);
    if ( !v15 || v26[0] != v26[1] )
    {
      if ( HIDWORD(v28) == (_DWORD)v28 )
      {
        v11 = (unsigned __int8 *)sub_92B08((int)&v28, (int)"invocation function for block in ", (int *)&v27);
LABEL_12:
        v9 = v11;
        goto LABEL_27;
      }
      goto LABEL_26;
    }
  }
  else
  {
    v9 = sub_92B28(&v28, v12, (int)v13, v14);
    if ( HIDWORD(v28) != (_DWORD)v28 )
      goto LABEL_30;
  }
LABEL_27:
  if ( !v9 )
    goto LABEL_30;
  if ( v6 )
  {
    v16 = *lpoutlen;
LABEL_33:
    v21 = v6;
    v22 = 0;
    v23 = v16;
    sub_923F8(v9, (int)&v21);
    sub_9241E((int)&v21, 0);
    if ( lpoutlen )
      *lpoutlen = v22;
    v6 = v21;
    v17 = 0;
    goto LABEL_36;
  }
  v16 = 1024;
  v18 = (char *)malloc(0x400u);
  if ( v18 )
  {
    v6 = v18;
    goto LABEL_33;
  }
  v6 = nullptr;
  v17 = -1;
LABEL_36:
  if ( lpstatus )
    *lpstatus = v17;
  sub_92438((int)&v28);
  if ( v17 )
    return nullptr;
  return v6;
}
// 92282: variable 'v7' is possibly undefined
// 92282: variable 'v8' is possibly undefined
// 922D0: variable 'v12' is possibly undefined
// 922D0: variable 'v13' is possibly undefined
// 92302: variable 'v14' is possibly undefined
// DC68C: using guessed type _UNKNOWN *off_DC68C;
