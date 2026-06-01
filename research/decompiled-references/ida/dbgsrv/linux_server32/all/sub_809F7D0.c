/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809F7D0
// Address: 0x0809F7D0

//----- (0809F7D0) --------------------------------------------------------
int __cdecl sub_809F7D0(int a1, int a2, int a3, int *a4, _BYTE *a5, char a6, char *a7, int a8, _DWORD *a9)
{
  const char *v9; // esi
  size_t v10; // eax
  size_t v11; // edi
  int (__cdecl *v12)(int, int); // eax
  char *v13; // eax
  int *v14; // eax
  int *v15; // esi
  int v16; // edi
  unsigned __int8 v17; // al
  int v18; // eax
  bool v19; // zf
  int v20; // esi
  int v21; // eax
  int v22; // eax
  int v23; // esi
  unsigned int v24; // edi
  unsigned int v25; // edx
  size_t v26; // ecx
  unsigned int v27; // edx
  void *v28; // eax
  int v30; // edx
  int v31; // eax
  unsigned int v32; // edx
  unsigned int v33; // edx
  void *v34; // eax
  int *v35; // eax
  int *v36; // eax
  void *v37; // eax
  size_t v38; // [esp+18h] [ebp-1224h]
  unsigned int v39; // [esp+1Ch] [ebp-1220h]
  size_t v40; // [esp+28h] [ebp-1214h]
  unsigned int v41; // [esp+28h] [ebp-1214h]
  int v42; // [esp+2Ch] [ebp-1210h]
  unsigned int v43; // [esp+2Ch] [ebp-1210h]
  int v44; // [esp+34h] [ebp-1208h]
  _BYTE *v45; // [esp+38h] [ebp-1204h]
  _BYTE *v46; // [esp+48h] [ebp-11F4h] BYREF
  unsigned int v47; // [esp+4Ch] [ebp-11F0h]
  unsigned int v48; // [esp+50h] [ebp-11ECh]
  char *v49; // [esp+58h] [ebp-11E4h] BYREF
  int v50; // [esp+5Ch] [ebp-11E0h]
  int v51; // [esp+60h] [ebp-11DCh]
  int v52; // [esp+68h] [ebp-11D4h] BYREF
  int v53; // [esp+6Ch] [ebp-11D0h]
  int v54; // [esp+70h] [ebp-11CCh]
  int v55; // [esp+74h] [ebp-11C8h]
  int v56; // [esp+78h] [ebp-11C4h]
  int v57; // [esp+7Ch] [ebp-11C0h]
  int v58; // [esp+80h] [ebp-11BCh]
  _BYTE *v59; // [esp+84h] [ebp-11B8h]
  int v60; // [esp+88h] [ebp-11B4h]
  int v61; // [esp+8Ch] [ebp-11B0h]
  struct utsname v62; // [esp+96h] [ebp-11A6h] BYREF
  _BYTE v63[4096]; // [esp+21Ch] [ebp-1020h] BYREF
  unsigned int v64; // [esp+121Ch] [ebp-20h]

  v9 = a7;
  v64 = __readgsdword(0x14u);
  if ( !*a5 || (unsigned __int8)sub_80CE7D0(a7) )
  {
    if ( (a6 & 1) == 0 && *a7 && !(unsigned __int8)sub_80CED40((int)a7) )
    {
LABEL_69:
      sub_8058E50(a1, "AUTOHIDE NONE\nInput file is missing: %s", v9);
      v42 = -3;
      goto LABEL_52;
    }
    if ( !a7 )
      goto LABEL_6;
  }
  else
  {
    v9 = v63;
    sub_80CE860(v63, 4096, a7);
    if ( (a6 & 1) == 0 && v63[0] && !(unsigned __int8)sub_80CED40((int)v63) )
      goto LABEL_69;
  }
  v10 = strlen(v9);
  v11 = v10;
  if ( !v10 )
  {
LABEL_6:
    *(_UNKNOWN **)((char *)&off_811D124 + a1 - 135385076) = nullptr;
    goto LABEL_7;
  }
  v33 = v10 + 1;
  v34 = *(void **)(a1 + 300);
  if ( *(_DWORD *)(a1 + 308) < v33 )
  {
    v43 = v33;
    v34 = sub_80CF920(a1 + 300, v34, v33, 1u);
    v33 = v43;
    *(_DWORD *)(a1 + 300) = v34;
  }
  *(_DWORD *)(a1 + 304) = v33;
  memmove(v34, v9, v11);
  *(_BYTE *)(*(_DWORD *)(a1 + 300) + v11) = 0;
LABEL_7:
  *(_BYTE *)(a1 + 453) = a6;
  *(_BYTE *)(a1 + 453) &= 1u;
  if ( !(unsigned __int8)sub_80CED40(a2) )
  {
    v36 = __errno_location();
    v37 = sub_80D0500(*v36);
    sub_8058E20(a1, (char *)&qword_811CFF4 - 273646, a2, v37);
LABEL_78:
    v42 = -2;
    goto LABEL_52;
  }
  v12 = *(int (__cdecl **)(int, int))(*(_DWORD *)a1 + 24);
  if ( (char *)v12 != (char *)((char *)&qword_811CFF4 - 522436) )
  {
    v17 = v12(a1, a8);
    goto LABEL_14;
  }
  v42 = 1;
  if ( a8 )
  {
    v13 = (char *)&qword_811CFF4 - 258076;
    if ( *(_DWORD *)(a1 + 304) )
      v13 = *(char **)(a1 + 300);
    v14 = sub_80CD4D0((int)v13, 0);
    v42 = 2;
    v15 = v14;
    if ( v14 )
    {
      v16 = sub_80C45E0(v14);
      sub_80CD620(v15);
      v17 = a8 == v16;
LABEL_14:
      v42 = 2 - v17;
    }
  }
  v18 = a6 & 8;
  if ( (a6 & 8) != 0 )
  {
    sub_8058E50(a1, "Cannot debug a 64bit process with the 32bit debugger server, sorry\n");
    goto LABEL_78;
  }
  v56 = -1;
  v19 = *a5 == 0;
  v54 = a2;
  if ( !v19 )
    v18 = (int)a5;
  v57 = -1;
  v52 = 40;
  v58 = -1;
  v59 = nullptr;
  v61 = 0;
  v55 = a3;
  v60 = v18;
  v20 = 128;
  if ( !uname(&v62) )
  {
    v30 = strcasecmp(v62.sysname, (const char *)&qword_811CFF4 - 277602);
    v31 = 128;
    if ( !v30 )
    {
      LOBYTE(v31) = 0;
      v20 = v31;
    }
  }
  if ( (a6 & 0x10) == 0 )
    v20 |= 2u;
  v21 = v20;
  if ( (a6 & 0x20) != 0 )
  {
    BYTE1(v21) = BYTE1(v20) | 1;
    v20 = v21;
  }
  v22 = v20;
  if ( (a6 & 0x40) != 0 )
  {
    BYTE1(v22) = BYTE1(v20) | 2;
    v20 = v22;
  }
  if ( a6 < 0 )
    v20 |= 0x40u;
  v53 = v20 | 0x10;
  if ( (a6 & 4) == 0 )
    sub_8058E20(a1, (char *)&qword_811CFF4 - 277593, (char *)&qword_811CFF4 - 278034);
  v46 = nullptr;
  v47 = 0;
  v48 = 0;
  if ( !a4 )
    goto LABEL_70;
  if ( !*((_BYTE *)a4 + 12) )
    v53 |= 0x800u;
  v23 = *a4;
  v44 = *a4 + 12 * a4[1];
  if ( *a4 == v44 )
  {
LABEL_70:
    v45 = nullptr;
    goto LABEL_47;
  }
  v24 = 0;
  v45 = nullptr;
  do
  {
    if ( !strchr(*(const char **)v23, 61) )
      goto LABEL_45;
    v25 = *(_DWORD *)(v23 + 4);
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v25 != 1 )
      {
        v40 = v25 - 1;
        if ( v24 )
        {
          --v24;
          v40 = v26 + v24;
          v25 += v24;
          if ( v48 >= v25 )
            goto LABEL_39;
        }
        else if ( v48 >= v25 )
        {
LABEL_39:
          v47 = v25;
          v45[v40] = 0;
          memcpy(&v46[v24], *(const void **)v23, v26);
          v24 = v47;
          v45 = v46;
          goto LABEL_40;
        }
        v38 = v26;
        v39 = v25;
        v45 = sub_80CF920((int)&v46, v45, v25, 1u);
        v26 = v38;
        v46 = v45;
        v25 = v39;
        goto LABEL_39;
      }
    }
LABEL_40:
    v27 = 2;
    if ( v24 )
      v27 = v24-- + 1;
    if ( v48 < v27 )
    {
      v41 = v27;
      v45 = sub_80CF920((int)&v46, v45, v27, 1u);
      v27 = v41;
      v46 = v45;
    }
    v47 = v27;
    v45[v24] = 0;
    v46[v24 + 1] = 0;
    v24 = v47;
    v45 = v46;
LABEL_45:
    v23 += 12;
  }
  while ( v44 != v23 );
  if ( v24 > 1 )
  {
    v32 = v24 - 1;
    if ( v48 < v24 + 1 )
    {
      v45 = sub_80CF920((int)&v46, v45, v24 + 1, 1u);
      v32 = v24 - 1;
      v46 = v45;
    }
    v47 = v24 + 1;
    v45[v32] = 0;
    v46[v24] = 0;
    v45 = v46;
  }
LABEL_47:
  v49 = nullptr;
  v50 = 0;
  v59 = v45;
  v51 = 0;
  v28 = sub_80D2140((int)&v52, &v49);
  *a9 = v28;
  if ( !v28 )
  {
    v35 = &dword_80DDFD8;
    if ( v50 )
      v35 = (int *)v49;
    sub_8058E20(a1, "launch_process: %s", v35);
    v42 = -2;
  }
  if ( v49 )
  {
    v50 = 0;
    sub_80CF780(v49);
  }
  if ( v46 )
  {
    v47 = 0;
    sub_80CF780(v46);
  }
LABEL_52:
  if ( v64 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v42;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D124: using guessed type _UNKNOWN *off_811D124;
