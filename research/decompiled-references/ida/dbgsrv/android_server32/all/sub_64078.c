/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64078
// Address: 0x00064078

//----- (00064078) --------------------------------------------------------
int __fastcall sub_64078(
        int a1,
        const char *a2,
        int a3,
        int a4,
        _BYTE *a5,
        unsigned int a6,
        char *a7,
        int a8,
        _DWORD *a9)
{
  const char *v10; // r2
  int v11; // r4
  const char *v12; // r6
  int v13; // r0
  int v14; // r6
  size_t v15; // r0
  size_t v16; // r4
  _BYTE *v17; // r5
  void *v18; // r0
  size_t v19; // r3
  _DWORD *v20; // r6
  const char *v21; // r1
  int v22; // r5
  _BYTE *v23; // r1
  int v24; // r0
  int v25; // r4
  int *v26; // r0
  const char *v27; // r0
  int v28; // r4
  unsigned int v29; // r2
  void *v30; // r0
  const char *v31; // r2
  const char *v33; // [sp+8h] [bp-11F0h]
  int v36; // [sp+20h] [bp-11D8h]
  const char *v37; // [sp+24h] [bp-11D4h]
  char *v39; // [sp+38h] [bp-11C0h] BYREF
  int v40; // [sp+3Ch] [bp-11BCh]
  int v41; // [sp+40h] [bp-11B8h]
  int v42; // [sp+44h] [bp-11B4h] BYREF
  unsigned int v43; // [sp+48h] [bp-11B0h]
  const char *v44; // [sp+4Ch] [bp-11ACh]
  int v45; // [sp+50h] [bp-11A8h]
  int v46; // [sp+54h] [bp-11A4h]
  int v47; // [sp+58h] [bp-11A0h]
  int v48; // [sp+5Ch] [bp-119Ch]
  int v49; // [sp+60h] [bp-1198h]
  _BYTE *v50; // [sp+64h] [bp-1194h]
  int v51; // [sp+68h] [bp-1190h]
  _BYTE v52[4096]; // [sp+6Ch] [bp-118Ch] BYREF
  struct utsname v53; // [sp+106Ch] [bp-18Ch] BYREF

  if ( *a5 && !qisabspath((unsigned __int8 *)a7) )
  {
    qmake_full_path((unsigned int)v52, 4096, a7);
    v10 = v52;
  }
  else
  {
    v10 = a7;
  }
  v11 = 1;
  v37 = a2;
  if ( (a6 & 1) != 0 )
  {
    v14 = a1 + 248;
    if ( !v10 )
    {
LABEL_15:
      *(_DWORD *)(v14 + 4) = 0;
      v17 = (_BYTE *)a1;
      goto LABEL_18;
    }
  }
  else
  {
    if ( *v10 )
    {
      v12 = v10;
      v13 = qfileexist(v10);
      v10 = v12;
      if ( !v13 )
      {
        sub_20D34(a1, "AUTOHIDE NONE\nInput file is missing: %s", v12);
        return -3;
      }
    }
    v14 = a1 + 248;
  }
  v33 = v10;
  v15 = strlen(v10);
  if ( !v15 )
  {
    v11 = 1;
    goto LABEL_15;
  }
  v16 = v15;
  v17 = (_BYTE *)a1;
  if ( *(_DWORD *)(a1 + 256) >= v15 + 1 )
  {
    v18 = *(void **)(a1 + 248);
    v20 = (_DWORD *)(a1 + 248);
    v21 = v33;
    v19 = v16 + 1;
  }
  else
  {
    v18 = qvector_reserve(v14, *(void **)(a1 + 248), v15 + 1, 1u);
    v19 = v16 + 1;
    *(_DWORD *)(a1 + 248) = v18;
    v20 = (_DWORD *)(a1 + 248);
    v21 = v33;
  }
  *(_DWORD *)(a1 + 252) = v19;
  memmove(v18, v21, v16);
  *(_BYTE *)(*v20 + v16) = 0;
  v11 = 1;
LABEL_18:
  v17[389] = a6 & 1;
  if ( qfileexist(v37) )
  {
    if ( !(*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v17 + 24))(v17, a8) )
      v11 = 2;
    if ( (a6 & 8) != 0 )
    {
      sub_20D34((int)v17, "Cannot debug a 64bit process with the 32bit debugger server, sorry\n");
      return -2;
    }
    else
    {
      v36 = v11;
      v42 = 40;
      v22 = 0;
      v49 = 0;
      v51 = 0;
      v44 = v37;
      v45 = a3;
      v46 = -1;
      v47 = -1;
      v48 = -1;
      v23 = a5;
      v24 = (unsigned __int8)*a5;
      v25 = 128;
      v43 = 128;
      if ( !v24 )
        v23 = nullptr;
      v50 = v23;
      if ( uname(&v53) )
      {
        v25 = 128;
      }
      else if ( !strcasecmp(v53.sysname, "VMkernel") )
      {
        v25 = 0;
        v43 = 0;
      }
      v29 = ((a6 >> 3) & 2 | v25) + ((8 * a6) & 0x100) + ((8 * a6) & 0x200);
      if ( (a6 & 0xF0) != 0x10 )
        v43 = ((a6 >> 1) & 0x40 | v29) ^ 2;
      v43 = ((a6 >> 1) & 0x40 | v29) ^ 2 | 0x10;
      if ( (a6 & 4) == 0 )
        sub_1BC48(a1, "Launching as %sbit process\n", "32");
      memset(&v53, 0, 12);
      if ( a4 )
      {
        if ( !*(_BYTE *)(a4 + 12) )
          v43 |= 0x800u;
        sub_6439C((int)&v53, (int *)a4);
        v22 = *(_DWORD *)v53.sysname;
      }
      v49 = v22;
      v40 = 0;
      v39 = nullptr;
      v41 = 0;
      v30 = launch_process((int)&v42, &v39);
      *a9 = v30;
      if ( !v30 )
      {
        if ( v40 )
          v31 = v39;
        else
          v31 = &byte_B3CBE;
        sub_1BC48(a1, "launch_process: %s", v31);
        v36 = -2;
      }
      if ( v39 )
      {
        v40 = 0;
        qfree(v39);
        v41 = 0;
        v39 = nullptr;
      }
      v28 = v36;
      if ( *(_DWORD *)v53.sysname )
      {
        *(_DWORD *)&v53.sysname[4] = 0;
        qfree(*(void **)v53.sysname);
        *(_DWORD *)&v53.sysname[8] = 0;
        *(_DWORD *)v53.sysname = 0;
      }
    }
  }
  else
  {
    v26 = (int *)_errno(0);
    v27 = (const char *)winerr(*v26);
    sub_1BC48((int)v17, "%s: %s\n", v37, v27);
    return -2;
  }
  return v28;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// B3CBE: using guessed type char byte_B3CBE;
