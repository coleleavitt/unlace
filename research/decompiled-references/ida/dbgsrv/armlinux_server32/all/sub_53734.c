/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_53734
// Address: 0x00053734

//----- (00053734) --------------------------------------------------------
int __fastcall sub_53734(
        int a1,
        const char *a2,
        int a3,
        int *a4,
        _BYTE *a5,
        char a6,
        unsigned __int8 *a7,
        int a8,
        _DWORD *a9)
{
  _BYTE *v11; // r5
  unsigned __int8 *v13; // r6
  size_t v14; // r0
  size_t v15; // r8
  int v16; // r3
  unsigned int v17; // r3
  int v18; // r4
  _BYTE *v19; // r9
  unsigned int v20; // r5
  unsigned int v21; // r2
  size_t v22; // r10
  unsigned int v23; // r5
  unsigned int v24; // r10
  unsigned int v25; // r5
  void *v26; // r0
  int v28; // r0
  unsigned int v29; // r2
  void *v30; // r0
  const char *v31; // r2
  int *v32; // r0
  const char *v33; // r0
  int v35; // [sp+4h] [bp-11F0h]
  int v36; // [sp+8h] [bp-11ECh]
  unsigned int v37; // [sp+8h] [bp-11ECh]
  unsigned int v38; // [sp+Ch] [bp-11E8h]
  unsigned int v39; // [sp+18h] [bp-11DCh]
  __int64 v40; // [sp+24h] [bp-11D0h] BYREF
  unsigned int v41; // [sp+2Ch] [bp-11C8h]
  char *v42; // [sp+30h] [bp-11C4h] BYREF
  int v43; // [sp+34h] [bp-11C0h]
  int v44; // [sp+38h] [bp-11BCh]
  int v45; // [sp+3Ch] [bp-11B8h] BYREF
  int v46; // [sp+40h] [bp-11B4h]
  const char *v47; // [sp+44h] [bp-11B0h]
  int v48; // [sp+48h] [bp-11ACh]
  int v49; // [sp+4Ch] [bp-11A8h]
  int v50; // [sp+50h] [bp-11A4h]
  int v51; // [sp+54h] [bp-11A0h]
  _BYTE *v52; // [sp+58h] [bp-119Ch]
  _BYTE *v53; // [sp+5Ch] [bp-1198h]
  int v54; // [sp+60h] [bp-1194h]
  struct utsname name; // [sp+64h] [bp-1190h] BYREF
  unsigned __int8 v56[4]; // [sp+1ECh] [bp-1008h] BYREF

  v11 = a5;
  v13 = a7;
  if ( !*a5 || sub_76DBC(a7) )
  {
    if ( (a6 & 1) == 0 && *a7 && !sub_7756C((int)a7) )
    {
LABEL_57:
      v36 = -3;
      sub_174C4(a1, "AUTOHIDE NONE\nInput file is missing: %s", (const char *)v13);
      return v36;
    }
    if ( !a7 )
      goto LABEL_6;
  }
  else
  {
    v13 = v56;
    sub_76FF4(v56, 4096, a7);
    if ( (a6 & 1) == 0 && v56[0] && !sub_7756C((int)v56) )
      goto LABEL_57;
  }
  v14 = strlen((const char *)v13);
  v15 = v14;
  if ( v14 )
  {
    v29 = v14 + 1;
    v37 = v29;
    v30 = *(void **)(a1 + 300);
    if ( v29 > *(_DWORD *)(a1 + 308) )
    {
      v30 = sub_78018(a1 + 300, *(void **)(a1 + 300), v29, 1u);
      *(_DWORD *)(a1 + 300) = v30;
    }
    *(_DWORD *)(a1 + 304) = v37;
    memmove(v30, v13, v15);
    *(_BYTE *)(*(_DWORD *)(a1 + 300) + v15) = 0;
    goto LABEL_7;
  }
LABEL_6:
  *(_DWORD *)(a1 + 304) = 0;
LABEL_7:
  *(_BYTE *)(a1 + 453) = a6 & 1;
  if ( !sub_7756C((int)a2) )
  {
    v32 = _errno_location();
    v36 = -2;
    v33 = (const char *)sub_79440(*v32);
    sub_17480(a1, "%s: %s\n", a2, v33);
    return v36;
  }
  if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 24))(a1, a8) )
    v16 = 1;
  else
    v16 = 2;
  v36 = v16;
  if ( (a6 & 8) != 0 )
  {
    sub_174C4(a1, "Cannot debug a 64bit process with the 32bit debugger server, sorry\n");
    return -2;
  }
  if ( !*a5 )
    v11 = nullptr;
  v45 = *(_DWORD *)"(";
  v47 = a2;
  v46 = 128;
  v49 = -1;
  v50 = -1;
  v51 = -1;
  v52 = nullptr;
  v48 = a3;
  v54 = 0;
  v53 = v11;
  if ( uname(&name) )
  {
    v17 = v46;
  }
  else
  {
    v28 = strcasecmp(name.sysname, "VMkernel");
    v17 = v46;
    if ( !v28 )
      v17 = v46 & 0xFFFFFF7F;
  }
  if ( (a6 & 0x10) == 0 )
    v17 |= 2u;
  if ( (a6 & 0x20) != 0 )
    v17 |= 0x100u;
  if ( (a6 & 0x40) != 0 )
    v17 |= 0x200u;
  if ( a6 < 0 )
    v17 |= 0x40u;
  v46 = v17 | 0x10;
  if ( (a6 & 4) == 0 )
    sub_17480(a1, "Launching as %sbit process\n", "32");
  v40 = 0;
  v41 = 0;
  if ( !a4 )
    goto LABEL_68;
  if ( !*((_BYTE *)a4 + 12) )
    v46 |= 0x800u;
  v18 = *a4;
  v35 = *a4 + 12 * a4[1];
  if ( *a4 == v35 )
  {
LABEL_68:
    v19 = nullptr;
    goto LABEL_45;
  }
  v19 = nullptr;
  v20 = 0;
  do
  {
    if ( !strchr(*(const char **)v18, 61) )
      goto LABEL_40;
    v21 = *(_DWORD *)(v18 + 4);
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v21 != 1 )
      {
        if ( v20 )
        {
          v39 = v20 - 1;
          v38 = v20 - 1 + v22;
          v23 = v20 + v22;
          if ( v23 <= v41 )
          {
LABEL_36:
            HIDWORD(v40) = v23;
            v19[v38] = 0;
            memcpy((void *)(v40 + v39), *(const void **)v18, v22);
            v20 = HIDWORD(v40);
            v19 = (_BYTE *)v40;
            goto LABEL_37;
          }
        }
        else
        {
          v38 = v21 - 1;
          v39 = 0;
          v23 = *(_DWORD *)(v18 + 4);
          if ( v21 <= v41 )
            goto LABEL_36;
        }
        v19 = sub_78018((int)&v40, v19, v23, 1u);
        LODWORD(v40) = v19;
        goto LABEL_36;
      }
    }
LABEL_37:
    if ( v20 )
    {
      v24 = v20 - 1;
      v25 = v20 + 1;
      if ( v41 < v25 )
        goto LABEL_62;
    }
    else
    {
      v24 = 0;
      v25 = 2;
      if ( v41 < 2 )
      {
LABEL_62:
        v19 = sub_78018((int)&v40, v19, v25, 1u);
        LODWORD(v40) = v19;
      }
    }
    HIDWORD(v40) = v25;
    v19[v24] = 0;
    *(_BYTE *)(v40 + v24 + 1) = 0;
    v20 = HIDWORD(v40);
    v19 = (_BYTE *)v40;
LABEL_40:
    v18 += 12;
  }
  while ( v35 != v18 );
  if ( v20 > 1 )
  {
    if ( v20 + 1 > v41 )
    {
      v19 = sub_78018((int)&v40, v19, v20 + 1, 1u);
      LODWORD(v40) = v19;
    }
    HIDWORD(v40) = v20 + 1;
    v19[v20 - 1] = 0;
    *(_BYTE *)(v40 + v20) = 0;
    v19 = (_BYTE *)v40;
  }
LABEL_45:
  v42 = nullptr;
  v43 = 0;
  v44 = 0;
  v52 = v19;
  v26 = sub_7A940((int)&v45, &v42);
  *a9 = v26;
  if ( !v26 )
  {
    if ( v43 )
      v31 = v42;
    else
      v31 = (const char *)&dword_8DB98;
    sub_17480(a1, "launch_process: %s", v31);
    v36 = -2;
  }
  if ( v42 )
  {
    v43 = 0;
    sub_77F70(v42);
  }
  if ( (_DWORD)v40 )
  {
    HIDWORD(v40) = 0;
    sub_77F70((void *)v40);
  }
  return v36;
}
// 8DB98: using guessed type int dword_8DB98;
