/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5DA88
// Address: 0x0005DA88

//----- (0005DA88) --------------------------------------------------------
int __fastcall sub_5DA88(
        int (__fastcall ***a1)(_DWORD, void **, int, int *, char **, void **),
        int a2,
        _DWORD *a3,
        unsigned int *a4,
        char *a5,
        int a6,
        char a7)
{
  int v7; // r0
  char *v8; // r3
  const char *v9; // r1
  const char *v10; // r1
  char *v11; // r9
  _DWORD *v12; // r8
  _DWORD *v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r3
  void *v16; // r0
  int v17; // r8
  bool v19; // cc
  bool v20; // zf
  int v21; // r8
  int v22; // r9
  int v23; // r3
  void *v24; // r1
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r0
  int v32; // [sp+20h] [bp-10h]
  void *v34; // [sp+30h] [bp+0h] BYREF
  __int64 v35; // [sp+34h] [bp+4h]
  void *v36; // [sp+3Ch] [bp+Ch] BYREF
  int v37; // [sp+40h] [bp+10h]
  int v38; // [sp+44h] [bp+14h]
  void *v39; // [sp+48h] [bp+18h] BYREF
  int v40; // [sp+4Ch] [bp+1Ch]
  int v41; // [sp+50h] [bp+20h]
  void *v42; // [sp+54h] [bp+24h] BYREF
  int v43; // [sp+58h] [bp+28h]
  unsigned int v44; // [sp+5Ch] [bp+2Ch]
  int v45[13]; // [sp+60h] [bp+30h] BYREF
  int v46; // [sp+94h] [bp+64h]
  int v47; // [sp+98h] [bp+68h]
  int v48; // [sp+9Ch] [bp+6Ch]
  int v49; // [sp+A0h] [bp+70h]
  int v50; // [sp+A4h] [bp+74h]
  int v51; // [sp+A8h] [bp+78h]
  __int64 v52; // [sp+B0h] [bp+80h]
  __int64 v53; // [sp+B8h] [bp+88h]
  char v54; // [sp+C0h] [bp+90h]
  char v55; // [sp+C1h] [bp+91h]
  int v56; // [sp+C4h] [bp+94h]
  int v57; // [sp+C8h] [bp+98h]
  __int64 v58; // [sp+D0h] [bp+A0h]
  int v59; // [sp+D8h] [bp+A8h]
  int v60; // [sp+DCh] [bp+ACh]
  int v61; // [sp+E0h] [bp+B0h]
  int v62; // [sp+ECh] [bp+BCh]
  int v63; // [sp+F0h] [bp+C0h]
  int v64; // [sp+F4h] [bp+C4h]
  int v65; // [sp+F8h] [bp+C8h]
  int v66; // [sp+FCh] [bp+CCh]
  int v67; // [sp+100h] [bp+D0h]
  char *v68; // [sp+108h] [bp+D8h] BYREF
  int v69; // [sp+10Ch] [bp+DCh]
  int v70; // [sp+110h] [bp+E0h]
  int v71; // [sp+114h] [bp+E4h]
  char v72; // [sp+118h] [bp+E8h]
  char v73; // [sp+119h] [bp+E9h]
  _DWORD v74[1282]; // [sp+11Ch] [bp+ECh] BYREF
  char vars14; // [sp+1540h] [bp+1510h] BYREF

  v35 = 0;
  v34 = nullptr;
  v68 = nullptr;
  v69 = 0;
  v70 = 0;
  v72 = 0;
  v73 = 0;
  v71 = -1;
  memset(v74, 0, sizeof(v74));
  sub_5A968((int)&v68, a5);
  v7 = sub_59544((int)a5);
  v71 = v7;
  if ( v7 != 25 )
    v8 = &vars14;
  v72 = a7;
  if ( v7 != 25 )
    v74[0] = *((_DWORD *)v8 + 5);
  if ( !sub_5D80C((int *)&v68) )
  {
    sub_581D8((_BYTE *)(a2 + 100), "Couldn't retrieve file information.\n");
    v15 = HIDWORD(v35);
    v14 = v35;
    v16 = v34;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(a2 + 96) )
  {
    if ( v69 )
      v9 = v68;
    else
      v9 = (const char *)&dword_8DA5C;
    sub_1700C((int)"dwarf_file_action_t::with_dwarf_file() binary file found at %s\n", v9);
  }
  v37 = 0;
  v36 = nullptr;
  v38 = 0;
  v39 = nullptr;
  v40 = 0;
  v41 = 0;
  if ( !sub_5D9CC((int)&dword_D3B34, (int)&v39, (int)&v68, (int)&v36) )
  {
LABEL_21:
    if ( v39 )
    {
      v40 = 0;
      sub_77E08(v39);
    }
    if ( v36 )
    {
      v37 = 0;
      sub_77E08(v36);
    }
    v15 = HIDWORD(v35);
    v14 = v35;
    v16 = v34;
    if ( (_DWORD)v35 )
    {
      *a4 = v35;
      if ( v15 <= v14 )
      {
LABEL_27:
        v17 = 0;
        v35 = 0;
        v34 = nullptr;
        *a3 = v16;
        goto LABEL_28;
      }
LABEL_38:
      v20 = v14 == 0;
      if ( v14 )
        v20 = v16 == nullptr;
      if ( !v20 )
      {
        v16 = sub_77E0C(v16, v14);
        if ( !v16 )
          v16 = v34;
      }
      goto LABEL_27;
    }
LABEL_34:
    if ( !v15 )
    {
      v16 = sub_77EB0((int)&v34, v16, 1u, 1u);
      v14 = v35;
      v34 = v16;
    }
    *((_BYTE *)v16 + v14) = 0;
    v16 = v34;
    v14 = v35 + 1;
    v19 = HIDWORD(v35) > (unsigned int)(v35 + 1);
    LODWORD(v35) = v14;
    *a4 = v14;
    if ( !v19 )
      goto LABEL_27;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(a2 + 96) )
  {
    if ( v40 )
      v10 = (const char *)v39;
    else
      v10 = (const char *)&dword_8DA5C;
    sub_1700C((int)"dwarf_file_action_t::with_dwarf_file() DWARF file found at %s\n", v10);
  }
  v58 = -1;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v54 = 0;
  v55 = 0;
  v45[0] = 0;
  v52 = 0;
  v53 = 0;
  v56 = -1;
  v57 = -1;
  sub_58BB0(v45);
  if ( v40 )
    v11 = (char *)v39;
  else
    v11 = (char *)&dword_8DA5C;
  v12 = sub_805CC(0x14u);
  v12[1] = 1;
  *v12 = &off_CFF34;
  v13 = sub_5AB40(v12 + 2, v11);
  v45[0] = (int)v12;
  if ( v71 != 11 )
  {
    ((void (__fastcall *)(_DWORD *))dword_579B4[0])(v13);
    sub_58C78(v45);
    if ( v39 )
    {
      v40 = 0;
      sub_77E08(v39);
    }
    if ( v36 )
    {
      v37 = 0;
      sub_77E08(v36);
    }
    if ( v68 )
    {
      v69 = 0;
      sub_77E08(v68);
    }
    v28 = (int)v34;
    if ( v34 )
    {
      LODWORD(v35) = 0;
      sub_77E08(v34);
    }
    sub_7FD28(v28, v25, v26, v27);
  }
  v45[1] = (int)sub_579D4;
  v45[2] = (int)sub_577C8;
  v45[3] = (int)sub_577D8;
  v45[4] = (int)sub_57BC0;
  v45[5] = (int)sub_577E8;
  v45[6] = (int)sub_577F0;
  v45[7] = (int)sub_5B1E8;
  v45[8] = (int)sub_57BD0;
  v45[9] = dword_CFEEC[0];
  v45[10] = dword_CFEEC[1];
  v45[11] = (int)sub_5AD78;
  v45[12] = (int)sub_577C4;
  if ( !sub_5AD78((int)v45) )
  {
    sub_581D8((_BYTE *)(a2 + 100), "Couldn't initialize DWARF loading.\n");
LABEL_20:
    sub_58C78(v45);
    goto LABEL_21;
  }
  sub_57A6C((int)v45);
  v43 = 0;
  v32 = v47;
  v42 = nullptr;
  v44 = 0;
  if ( v47 > 0 )
  {
    v21 = 0;
    v22 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(v46 + v21 + 16) )
      {
        if ( strncmp(*(const char **)(v46 + v21 + 12), ".debug_", 7u) )
          goto LABEL_49;
LABEL_52:
        v23 = v43;
        v24 = v42;
        if ( v43 + 1 > v44 )
        {
          v24 = sub_77EB0((int)&v42, v42, v43 + 1, 4u);
          v23 = v43;
          v42 = v24;
        }
        *((_DWORD *)v24 + v23) = v22++;
        v21 += 104;
        ++v43;
        if ( v22 == v32 )
          break;
      }
      else
      {
        if ( !strncmp((const char *)&dword_8DA5C, ".debug_", 7u) )
          goto LABEL_52;
LABEL_49:
        ++v22;
        v21 += 104;
        if ( v22 == v32 )
          break;
      }
    }
  }
  v17 = (**a1)(a1, &v34, a2, v45, &v68, &v42);
  if ( !v17 )
  {
    if ( v42 )
    {
      v43 = 0;
      sub_77E08(v42);
    }
    goto LABEL_20;
  }
  if ( v42 )
  {
    v43 = 0;
    sub_77E08(v42);
  }
  sub_58C78(v45);
  if ( v39 )
  {
    v40 = 0;
    sub_77E08(v39);
  }
  if ( v36 )
  {
    v37 = 0;
    sub_77E08(v36);
  }
LABEL_28:
  if ( v68 )
  {
    v69 = 0;
    sub_77E08(v68);
  }
  if ( v34 )
  {
    LODWORD(v35) = 0;
    sub_77E08(v34);
  }
  return v17;
}
// 5DD0C: conditional instruction was optimized away because %var_14F8.4==0
// 5DB22: variable 'v8' is possibly undefined
// 5DEB4: variable 'v28' is possibly undefined
// 5DEB4: variable 'v25' is possibly undefined
// 5DEB4: variable 'v26' is possibly undefined
// 5DEB4: variable 'v27' is possibly undefined
// 579B4: using guessed type int dword_579B4[8];
// 8DA5C: using guessed type int dword_8DA5C;
// CFEEC: using guessed type int dword_CFEEC[2];
// CFF34: using guessed type _UNKNOWN *off_CFF34;
// D3B34: using guessed type int dword_D3B34;
