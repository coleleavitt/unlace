__int64 __fastcall sub_8682D0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // edx
  __int64 i; // rbp
  unsigned int v11; // ebx
  __int64 v13; // r14
  unsigned int v14; // r13d
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbp
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rax
  int v23; // r8d
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // rdx
  int v27; // ecx
  bool v28; // si
  unsigned __int8 v29; // di
  bool v30; // al
  char v31; // al
  __int64 v32; // rdx
  char v33; // al
  unsigned __int8 v34; // bp
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  size_t v39; // r8
  const void *v40; // r11
  __int64 v41; // rax
  __int64 v42; // r9
  unsigned __int64 v43; // rdx
  __int64 v44; // rdx
  char v45; // r8
  char v46; // al
  int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rdx
  int v50; // eax
  __int64 v54; // [rsp+10h] [rbp-188h]
  _QWORD *v55; // [rsp+18h] [rbp-180h]
  int v56; // [rsp+20h] [rbp-178h]
  int v57; // [rsp+20h] [rbp-178h]
  size_t v58; // [rsp+28h] [rbp-170h]
  __int64 v59; // [rsp+30h] [rbp-168h]
  int v60; // [rsp+30h] [rbp-168h]
  const void *v61; // [rsp+38h] [rbp-160h]
  bool v62; // [rsp+4Fh] [rbp-149h] BYREF
  _QWORD v63[2]; // [rsp+50h] [rbp-148h] BYREF
  unsigned int v64; // [rsp+60h] [rbp-138h]
  __int128 v65; // [rsp+68h] [rbp-130h] BYREF
  void *ptr; // [rsp+78h] [rbp-120h] BYREF
  __int64 v67; // [rsp+80h] [rbp-118h]
  _BYTE v68[72]; // [rsp+88h] [rbp-110h] BYREF
  _QWORD v69[2]; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+E0h] [rbp-B8h]
  int v71; // [rsp+E8h] [rbp-B0h]
  __int64 v72; // [rsp+F0h] [rbp-A8h]
  __int64 v73; // [rsp+F8h] [rbp-A0h]
  void *v74[2]; // [rsp+100h] [rbp-98h] BYREF
  _BYTE v75[64]; // [rsp+110h] [rbp-88h] BYREF
  char v76; // [rsp+150h] [rbp-48h]
  char v77; // [rsp+151h] [rbp-47h]

  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_DWORD *)(v7 + 176);
  v9 = *(_DWORD *)(v7 + 56);
  for ( i = v7; v9 < v8; v8 = *(_DWORD *)(i + 176) )
    i = *(_QWORD *)(i + 16);
  if ( v9 != v8 )
    goto LABEL_4;
  v13 = *(_QWORD *)(v7 + 48);
  v14 = *(_DWORD *)(v7 + 60);
  v15 = a2;
  if ( v13 )
  {
    v16 = (unsigned __int8)(*(_WORD *)(a2 + 98) >> 4);
    if ( v16 == 255 )
      v16 = sub_77D6D0(a2);
    v15 = *(_QWORD *)(*(_QWORD *)(v13 + 120) + 8LL * v16);
  }
  v17 = *(_QWORD *)(i + 88);
  v18 = i + 80;
  if ( !v17 )
    goto LABEL_4;
  v19 = i + 80;
  do
  {
    while ( *(_QWORD *)(v17 + 32) >= v15 && (*(_QWORD *)(v17 + 32) != v15 || *(_DWORD *)(v17 + 40) >= v14) )
    {
      v19 = v17;
      v17 = *(_QWORD *)(v17 + 16);
      if ( !v17 )
        goto LABEL_17;
    }
    v17 = *(_QWORD *)(v17 + 24);
  }
  while ( v17 );
LABEL_17:
  if ( v18 != v19 && *(_QWORD *)(v19 + 32) == v15 && v14 == *(_DWORD *)(v19 + 40) )
  {
    v20 = *(_QWORD **)(a1 + 16);
    LOBYTE(v71) = v71 | 1;
    v74[1] = (void *)0x800000000LL;
    v70 = 0;
    v73 = 0;
    v74[0] = v75;
    v77 = 0;
    v55 = v20;
    v69[0] = sub_6A34D0(v19 + 48);
    v69[1] = v21;
    v22 = (__int64 *)sub_6A34F0(v19 + 48);
    v23 = 1;
    v24 = *v22;
    v76 &= ~2u;
    v25 = *(_DWORD *)(v19 + 48) == 7;
    v70 = v24;
    if ( v25 )
      v23 = !sub_6A3500(v19 + 48);
    v64 = v23;
    ptr = v68;
    v67 = 0x800000000LL;
    v65 = 0;
    if ( (v23 & 1) != 0 )
    {
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
    }
    else
    {
      LOBYTE(v64) = (2 * sub_6A34E0(v19 + 48)) | v64 & 0xFD;
      v37 = sub_6A3510(v19 + 48);
      v39 = 8 * v38;
      v40 = (const void *)v37;
      v41 = (unsigned int)v67;
      v42 = (8 * v38) >> 3;
      v43 = (unsigned int)v67 + v42;
      if ( HIDWORD(v67) < v43 )
      {
        v61 = v40;
        v60 = v42;
        v58 = v39;
        sub_25D6060(&ptr, v68, v43, 8);
        v40 = v61;
        LODWORD(v42) = v60;
        v41 = (unsigned int)v67;
        v39 = v58;
      }
      if ( v39 )
      {
        v56 = v42;
        memcpy((char *)ptr + 8 * v41, v40, v39);
        LODWORD(v42) = v56;
        LODWORD(v41) = v67;
      }
      LODWORD(v67) = v42 + v41;
      v63[0] = sub_6A34D0(v19 + 48);
      v63[1] = v44;
      if ( sub_69F610(v63) )
      {
        v62 = 0;
        LOBYTE(v63[0]) = 0;
        v59 = sub_6A3510(v19 + 48);
        v57 = v47;
        v48 = sub_6A34D0(v19 + 48);
        v50 = sub_824B30(v55, v48, v49, v59, v57, &v65, (__int64 *)&v65 + 1, &v62, v63);
        v28 = v62;
        v29 = v63[0];
        v27 = v50 & 0xFFFFFFF;
        v64 = (16 * v50) | v64 & 0xF;
        v45 = (4 * (v63[0] & 1)) | (8 * v62) | v64 & 0xF3;
        LOBYTE(v64) = v45;
      }
      else
      {
        v45 = v64;
        v27 = v64 >> 4;
        v29 = (v64 & 4) != 0;
        v28 = (v64 & 8) != 0;
      }
      v46 = v45;
      v26 = v65;
      v23 = v45 & 1;
      v30 = (v46 & 2) != 0;
    }
    v72 = v26;
    v71 = (16 * v27) | (8 * v28) | (4 * v29) | v23 | (2 * v30);
    v73 = *((_QWORD *)&v65 + 1);
    sub_820970((__int64)v74, (__int64)&ptr);
    if ( ptr != v68 )
      free(ptr);
    v31 = sub_6A3540(v19 + 48);
    v32 = *(_QWORD *)(a2 + 48);
    v76 = v31 & 1 | v76 & 0xFE;
    v33 = *(_BYTE *)(v19 + 52);
    v34 = a5;
    v77 = v33 & 1;
    v35 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v35 + 16) - 42 <= 1
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 <= 1
      && (v54 = v32, v36 = sub_B0D320(v35), v32 = v54, (v35 = v36) != 0) )
    {
      while ( (*(_BYTE *)(v35 + 18) & 0x10) != 0 )
      {
        while ( 1 )
        {
          v35 = *(_QWORD *)(*(_QWORD *)(v35 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v35 + 16) - 42 <= 1 )
            break;
          v35 = sub_B0D320(v35);
          if ( (*(_BYTE *)(v35 + 18) & 0x10) == 0 )
            goto LABEL_30;
        }
      }
LABEL_30:
      v32 = *(_QWORD *)(v35 + 32);
    }
    v11 = sub_85F440(a1, a3, v32, (__int64)v69, a4, v34);
    if ( v74[0] != v75 )
      free(v74[0]);
  }
  else
  {
LABEL_4:
    v11 = 0;
    sub_A2E130(a1, a3, 110, 0);
  }
  return v11;
}

