__int64 __fastcall sub_445140(__int64 a1, void *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  int *v6; // r14
  __int64 v7; // rax
  __int64 v8; // r12
  int v9; // r9d
  _DWORD *v10; // rdi
  int v11; // ebp
  int v12; // ebx
  int v13; // ebp
  const char *v14; // r13
  __int64 v15; // r12
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int i; // ebp
  int *v20; // rax
  int *v21; // rbx
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // r12
  int v26; // r8d
  int v27; // r9d
  int *v28; // rdi
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // ebx
  int v33; // r9d
  const char *v34; // rax
  int *v35; // rax
  _DWORD *v36; // rdi
  int *v37; // rbx
  int v38; // eax
  __int64 v39; // rdx
  int v40; // esi
  __int64 v41; // r9
  __int64 v42; // rbx
  void *v43; // rsi
  int v44; // esi
  int v45; // ecx
  unsigned __int8 *v46; // rdx
  __int64 v47; // rax
  unsigned __int8 v48; // al
  unsigned __int8 v49; // al
  const char *v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 (__fastcall *v54)(int, int, int, int, int, int, int, __int64, __int64, __int64); // rcx
  __int64 v55; // [rsp+10h] [rbp-3B8h]
  int *v56; // [rsp+18h] [rbp-3B0h]
  __int64 v57; // [rsp+20h] [rbp-3A8h]
  int v59; // [rsp+34h] [rbp-394h] BYREF
  const char **v60; // [rsp+38h] [rbp-390h] BYREF
  int *v61; // [rsp+40h] [rbp-388h] BYREF
  _DWORD *v62; // [rsp+48h] [rbp-380h] BYREF
  int v63; // [rsp+54h] [rbp-374h] BYREF
  __int64 v64; // [rsp+58h] [rbp-370h] BYREF
  int v65; // [rsp+60h] [rbp-368h] BYREF
  char v66[16]; // [rsp+64h] [rbp-364h] BYREF
  char v67[36]; // [rsp+74h] [rbp-354h] BYREF
  __int64 v68; // [rsp+98h] [rbp-330h]
  _QWORD v69[28]; // [rsp+A0h] [rbp-328h] BYREF
  _QWORD v70[5]; // [rsp+180h] [rbp-248h] BYREF
  int v71; // [rsp+1A8h] [rbp-220h]
  char dest[16]; // [rsp+1B0h] [rbp-218h] BYREF
  char src[16]; // [rsp+1C0h] [rbp-208h] BYREF
  void *v74; // [rsp+1D0h] [rbp-1F8h] BYREF
  int v75; // [rsp+1D8h] [rbp-1F0h]
  _QWORD v76[29]; // [rsp+2B0h] [rbp-118h] BYREF

  sub_4AE1A0(&qword_65A598);
  if ( !a2 )
  {
    ++*(_DWORD *)(qword_65A5A8 + 56);
    sub_4AE230(&qword_65A598);
    return qword_65A5A8;
  }
  v3 = qword_65A580(qword_65A540, a2);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 24);
    ++*(_DWORD *)(v4 + 56);
    sub_4AE230(&qword_65A598);
    return v4;
  }
  sub_4AE230(&qword_65A598);
  v57 = 0;
  v6 = (int *)sub_48DF10(a2, 0xFFFFFFFF);
  v61 = (int *)sub_47B2A0(v6);
  v7 = sub_443EA0();
  v56 = (int *)sub_47B2A0(v7);
  v8 = sub_49FED0(qword_65A500);
  v62 = nullptr;
  v55 = 0;
  sub_46FD90(0, v56, &v63, &v64);
  ++*v6;
  sub_48EDF0(v61, ".enc", 0xFFFFFFFFLL);
  ++*v61;
  sub_4406D0(0, v8, (__int64)v6, &v62);
  v10 = v62;
  if ( v62 )
  {
    v11 = 0;
    v12 = 0;
    if ( v63 <= 0 )
      goto LABEL_12;
    do
    {
      if ( *(_DWORD **)(v64 + 8LL * v11) == v62 )
        v12 = 1;
      ++v11;
    }
    while ( v12 == 0 && v11 < v63 );
    if ( !v12 )
    {
LABEL_12:
      v13 = 0;
      v14 = (const char *)sub_47B3B0(v62);
      if ( v63 <= 0 )
        goto LABEL_13;
      do
      {
        v34 = (const char *)sub_47B3B0(*(_QWORD *)(v64 + 8LL * v13));
        if ( !strcmp(v14, v34) )
          v12 = 1;
        ++v13;
      }
      while ( v12 == 0 && v13 < v63 );
      if ( !v12 )
      {
LABEL_13:
        v15 = sub_47B2A0(v8);
        sub_440760(0, v15, (__int64)v6, v16, v17, v18);
        sub_49FDD0(qword_65A500, v15, 0);
        v62 = nullptr;
        goto LABEL_14;
      }
      v10 = v62;
    }
    if ( v10 )
    {
      ++*v10;
      v35 = (int *)sub_4556C0(v10, 1, &v61);
      v36 = v62;
      ++*v35;
      v37 = v35;
      LODWORD(v35) = *v36 - 1;
      v23 = *v36 == 1;
      *v36 = (_DWORD)v35;
      if ( (int)v35 < 0 || v23 )
        sub_47B120(v36);
      v55 = sub_46CD30(0, v37, "r", 0);
      v38 = *v37 - 1;
      v23 = *v37 == 1;
      *v37 = v38;
      if ( v38 < 0 || v23 )
        sub_47B120(v37);
    }
  }
LABEL_14:
  for ( i = 0; v55 == 0 && i < v63; ++i )
  {
    v20 = (int *)sub_4556C0(*(_QWORD *)(v64 + 8LL * i), 1, &v61);
    ++*v20;
    v21 = v20;
    v55 = sub_46CD30(0, v20, "r", 0);
    v22 = *v21 - 1;
    v23 = *v21 == 1;
    *v21 = v22;
    if ( v22 < 0 || v23 )
      sub_47B120(v21);
    if ( v55 )
    {
      v24 = sub_49FED0(qword_65A500);
      v25 = sub_47B2A0(v24);
      sub_440560(0, v25, (__int64)v6, *(_DWORD **)(v64 + 8LL * i), v26, v27);
      sub_49FDD0(qword_65A500, v25, 0);
    }
  }
  if ( a1 != 0 && v55 == 0 )
  {
    sub_48B710(a1, (unsigned int)"unknown encoding \"", (_DWORD)a2, (unsigned int)"\"", 0, v9);
    sub_48BC40(a1, (unsigned int)"TCL", (unsigned int)"LOOKUP", (unsigned int)"ENCODING", (_DWORD)a2, 0);
  }
  v28 = v61;
  v29 = *v61 - 1;
  v23 = *v61 == 1;
  *v61 = v29;
  if ( v29 < 0 || v23 )
    sub_47B120(v28);
  v30 = *v6 - 1;
  v23 = *v6 == 1;
  *v6 = v30;
  if ( v30 < 0 || v23 )
    sub_47B120(v6);
  v31 = *v56 - 1;
  v23 = *v56 == 1;
  *v56 = v31;
  if ( v31 < 0 || v23 )
    sub_47B120(v56);
  result = 0;
  if ( !v55 )
    return result;
  sub_464490(0, v55, "-encoding", "utf-8");
  do
  {
    sub_49EDC0(v76);
    sub_463330(v55, v76);
    v32 = *(char *)v76[0];
    sub_49F100(v76);
  }
  while ( v32 == 35 );
  if ( v32 == 69 )
  {
    src[0] = 0;
    dest[0] = 0;
    sub_49EDC0(&v74);
    while ( 1 )
    {
      do
      {
        sub_49EDC0(v69);
        if ( (int)sub_463330(v55, v69) < 0 )
        {
          v42 = sub_40FB00(v75 + 304);
          *(_DWORD *)(v42 + 4) = strlen(src);
          strcpy((char *)(v42 + 8), src);
          *(_DWORD *)(v42 + 24) = strlen(dest);
          strcpy((char *)(v42 + 28), dest);
          v43 = v74;
          *(_DWORD *)(v42 + 300) = (unsigned __int64)v75 >> 6;
          memcpy((void *)(v42 + 304), v43, v75);
          sub_49F100(&v74);
          memset((void *)(v42 + 44), 0, 0x100u);
          v44 = *(_DWORD *)(v42 + 300);
          v45 = 0;
          if ( v44 > 0 )
          {
            v46 = (unsigned __int8 *)(v42 + 308);
            do
            {
              v47 = *v46;
              ++v45;
              v46 += 64;
              *(_BYTE *)(v47 + v42 + 44) = 1;
            }
            while ( v44 > v45 );
          }
          v48 = *(_BYTE *)(v42 + 8);
          if ( v48 )
            *(_BYTE *)(v48 + v42 + 44) = 1;
          v49 = *(_BYTE *)(v42 + 28);
          if ( v49 )
            *(_BYTE *)(v49 + v42 + 44) = 1;
          v70[0] = a2;
          v71 = 1;
          v70[1] = sub_446810;
          v70[2] = &sub_446B00;
          v70[3] = sub_446E90;
          v70[4] = v42;
          v57 = sub_4444E0(v70);
          goto LABEL_35;
        }
      }
      while ( (unsigned int)sub_49D570(0, v69[0], &v59, &v60) );
      if ( v59 > 1 )
      {
        v41 = (__int64)v60;
        if ( !strcmp(*v60, "name") )
          goto LABEL_60;
        if ( !strcmp(*v60, "init") )
        {
          strncpy(src, v60[1], 0x10u);
          src[15] = 0;
        }
        else if ( !strcmp(*v60, "final") )
        {
          strncpy(dest, v60[1], 0x10u);
          dest[15] = 0;
        }
        else
        {
          strncpy(v66, v60[1], 0x10u);
          v66[15] = 0;
          v50 = *v60;
          v65 = strlen(v66);
          strncpy(v67, v50, 0x20u);
          v67[31] = 0;
          v52 = sub_445140(0, v67, v51);
          v53 = v52;
          if ( v52 )
          {
            v54 = *(__int64 (__fastcall **)(int, int, int, int, int, int, int, __int64, __int64, __int64))(v52 + 8);
            if ( v54 != sub_446230 && v54 != sub_446530 )
            {
              sub_444080(v52, (unsigned int)&v65 + 20);
              v53 = 0;
            }
          }
          v68 = v53;
          sub_49EDE0(&v74, &v65, 64);
        }
      }
      v41 = (__int64)v60;
LABEL_60:
      Tcl_Free(v41);
      sub_49F100(v69);
    }
  }
  if ( v32 <= 69 )
  {
    if ( v32 != 68 )
      goto LABEL_35;
    v39 = v55;
    v40 = 1;
  }
  else if ( v32 == 77 )
  {
    v39 = v55;
    v40 = 2;
  }
  else
  {
    if ( v32 != 83 )
      goto LABEL_35;
    v39 = v55;
    v40 = 0;
  }
  v57 = sub_444BA0((__int64)a2, v40, v39);
LABEL_35:
  if ( a1 != 0 && v57 == 0 )
    sub_48B710(a1, (unsigned int)"invalid encoding file \"", (_DWORD)a2, (unsigned int)"\"", 0, v33);
  sub_4610A0(0, v55);
  return v57;
}

