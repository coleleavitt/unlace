/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415218
// Address: 0x0000000000415218

//----- (0000000000415218) ----------------------------------------------------
__int64 __fastcall sub_415218(__int64 a1, __int64 *a2)
{
  unsigned __int64 v4; // x0
  __int64 v5; // x1
  const char *v6; // x23
  int v7; // w0
  void *v8; // x0
  unsigned int v9; // w19
  const char *v10; // x0
  const char *v11; // x21
  size_t v12; // x0
  size_t v13; // x23
  __int64 v14; // x0
  const char *v15; // x2
  const char *v16; // x3
  char *v17; // x23
  unsigned __int64 *v18; // x0
  const char **v19; // x21
  unsigned __int64 v20; // x0
  double v21; // d0
  const char *v22; // x3
  const char *v23; // x4
  char *v24; // x1
  __off64_t v25; // x0
  double v26; // d0
  const char *v27; // x2
  char *v28; // x22
  __int64 i; // x21
  const char *v30; // x23
  unsigned __int8 *v32; // x2
  unsigned __int64 v33; // x1
  void *v34; // x23
  unsigned __int64 v35; // x0
  size_t v36; // x0
  size_t v37; // x25
  unsigned __int64 v38; // x24
  void *v39; // x0
  unsigned __int64 v40; // x26
  void *v41; // x0
  void *dest; // [xsp+58h] [xbp-1048h] BYREF
  unsigned __int64 v43; // [xsp+60h] [xbp-1040h]
  unsigned __int64 v44; // [xsp+68h] [xbp-1038h]
  __int64 (**v45)(); // [xsp+70h] [xbp-1030h] BYREF
  int v46; // [xsp+78h] [xbp-1028h]
  void *ptr; // [xsp+80h] [xbp-1020h]
  unsigned __int64 v48; // [xsp+88h] [xbp-1018h]
  unsigned __int64 v49; // [xsp+90h] [xbp-1010h]
  char v50[4096]; // [xsp+98h] [xbp-1008h] BYREF

  if ( *(_QWORD *)(a1 + 1696) )
    return 1;
  dest = nullptr;
  v43 = 0;
  v4 = *(_QWORD *)(a1 + 2128);
  v44 = 0;
  if ( v4 <= 1 )
  {
    v5 = *(_QWORD *)(a1 + 2152);
    v45 = &off_519A88;
    v46 = 2;
    ptr = nullptr;
    v48 = 0;
    v49 = 0;
    if ( v5 )
      v6 = *(const char **)(a1 + 2144);
    else
      v6 = (const char *)&qword_4B2D48;
    v7 = sub_42E470(v6, &v45, 0);
    if ( !v7 )
    {
      if ( !*(_BYTE *)(a1 + 1712) )
      {
        *(_BYTE *)(a1 + 1712) = 1;
        sub_40AB98(
          a1,
          (__int64)"AUTOHIDE DATABASE\n"
                   "%s:\n"
                   "Could not find the elf interpreter name,\n"
                   "shared object events will not be reported",
          v6);
      }
      goto LABEL_8;
    }
    if ( v7 != 2 )
    {
      sub_40AB98(a1, (__int64)"%s: could not read symbols on remote computer", v6);
LABEL_8:
      v45 = &off_519A88;
      if ( ptr )
      {
        v48 = 0;
        j__free(ptr);
      }
      goto LABEL_10;
    }
    v32 = (unsigned __int8 *)ptr;
    if ( !v48 )
      v32 = (unsigned __int8 *)&qword_4B2D48;
    sub_48F988((unsigned __int64)v50, 4096, v32);
    v34 = dest;
    v33 = v43;
    dest = ptr;
    v43 = v48;
    v35 = v44;
    v44 = v49;
    ptr = v34;
    v48 = v33;
    v49 = v35;
    v36 = strlen(v50);
    v37 = v36;
    if ( v36 )
    {
      v40 = v36 + 1;
      v41 = *(void **)(a1 + 2120);
      if ( v40 > *(_QWORD *)(a1 + 2136) )
      {
        v41 = sub_491288(a1 + 2120, *(void **)(a1 + 2120), v40, 1u);
        *(_QWORD *)(a1 + 2120) = v41;
      }
      *(_QWORD *)(a1 + 2128) = v40;
      memmove(v41, v50, v37);
      *(_BYTE *)(*(_QWORD *)(a1 + 2120) + v37) = 0;
      v34 = ptr;
    }
    else
    {
      *(_QWORD *)(a1 + 2128) = 0;
    }
    v45 = &off_519A88;
    if ( v34 )
    {
      v48 = 0;
      j__free(v34);
    }
    goto LABEL_57;
  }
  v10 = sub_48F420(*(_BYTE **)(a1 + 2120));
  v11 = v10;
  if ( v10 )
  {
    v12 = strlen(v10);
    v13 = v12;
    if ( v12 )
    {
      v38 = v12 + 1;
      v39 = dest;
      if ( v38 > v44 )
      {
        v39 = sub_491288((__int64)&dest, dest, v38, 1u);
        dest = v39;
      }
      v43 = v38;
      memmove(v39, v11, v13);
      *((_BYTE *)dest + v13) = 0;
LABEL_57:
      if ( *(_QWORD *)(a1 + 2128) )
        v15 = *(const char **)(a1 + 2120);
      else
        v15 = (const char *)&qword_4B2D48;
      v16 = (const char *)&qword_4B2D48;
      if ( v43 )
        v16 = (const char *)dest;
      goto LABEL_17;
    }
  }
  v14 = *(_QWORD *)(a1 + 2128);
  v43 = 0;
  if ( v14 )
    v15 = *(const char **)(a1 + 2120);
  else
    v15 = (const char *)&qword_4B2D48;
  v16 = (const char *)&qword_4B2D48;
LABEL_17:
  sub_45CDF8(a1, (__int64)"INTERP: %s, SONAME: %s\n", v15, v16);
  if ( *(_QWORD *)(a1 + 2128) )
    v17 = *(char **)(a1 + 2120);
  else
    v17 = (char *)&qword_4B2D48;
  v18 = (unsigned __int64 *)sub_408388(a2, v17);
  v19 = (const char **)v18;
  if ( !v18 )
  {
    sub_40AB98(a1, (__int64)"%s: could not find in process memory", v17);
    goto LABEL_10;
  }
  v20 = sub_40C780(a1, a2, v18);
  if ( *(_QWORD *)(a1 + 2128) )
    v22 = *(const char **)(a1 + 2120);
  else
    v22 = (const char *)&qword_4B2D48;
  v23 = (const char *)&qword_4B2D48;
  if ( v43 )
    v23 = (const char *)dest;
  sub_414B68(a1, *v19, v20, v22, v23, v21);
  v24 = (char *)&qword_4B2D48;
  if ( v43 )
    v24 = (char *)dest;
  if ( *(_QWORD *)(a1 + 1856) )
    sub_40E368((_QWORD *)a1, v24);
  v25 = sub_40B588((_QWORD *)a1, "_r_debug");
  if ( v25 != -1
    && !*(_BYTE *)(a1 + 2053)
    && *(_DWORD *)(a1 + 2044) != -1
    && (unsigned int)sub_412600(a1, 0xFFFFFFFF, v25, &v45, 40, 0) == 40
    && ptr
    && !(unsigned __int8)sub_412B30(a1, a1 + 1696, (__off64_t)ptr) )
  {
    sub_45CDF8(a1, (__int64)"%a: could not set shlib bpt\n", v26);
  }
  v27 = *(const char **)(a1 + 1696);
  if ( v27 )
  {
LABEL_39:
    sub_45CDF8(a1, (__int64)"%a: added shlib bpt (%s)\n", v26, v27);
    v8 = dest;
    v9 = 1;
    if ( dest )
      goto LABEL_11;
    return v9;
  }
  v28 = "r_debug_state";
  for ( i = 0; ; v28 = off_519B50[i] )
  {
    v30 = (const char *)sub_40B588((_QWORD *)a1, v28);
    if ( (unsigned __int64)(v30 - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      break;
    if ( ++i == 6 )
      goto LABEL_38;
LABEL_34:
    ;
  }
  if ( !(unsigned __int8)sub_412B30(a1, a1 + 1696, (__off64_t)v30) )
  {
    sub_45CDF8(a1, (__int64)"%a: could not set shlib bpt (name=%s)\n", v26, v30);
    if ( ++i != 6 )
      goto LABEL_34;
  }
LABEL_38:
  v27 = *(const char **)(a1 + 1696);
  if ( v27 )
    goto LABEL_39;
LABEL_10:
  v8 = dest;
  v9 = 0;
  if ( dest )
  {
LABEL_11:
    v43 = 0;
    j__free(v8);
  }
  return v9;
}
// 415218: could not find valid save-restore pair for x21
// 415218: could not find valid save-restore pair for x23
// 415394: variable 'v21' is possibly undefined
// 415468: variable 'v26' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 519A88: using guessed type __int64 (__fastcall *)();
// 519B50: using guessed type char *off_519B50[5];
