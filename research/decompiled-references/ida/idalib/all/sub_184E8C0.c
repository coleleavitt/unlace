__int64 __fastcall sub_184E8C0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r15
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  char v24; // dl
  bool v25; // cc
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r11
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned __int64 v53; // [rsp+8h] [rbp-2A0h]
  __int64 v56[2]; // [rsp+28h] [rbp-280h] BYREF
  char v57; // [rsp+3Eh] [rbp-26Ah] BYREF
  unsigned __int8 v58; // [rsp+3Fh] [rbp-269h] BYREF
  __int64 v59; // [rsp+40h] [rbp-268h] BYREF
  unsigned __int64 v60; // [rsp+48h] [rbp-260h] BYREF
  void *v61[2]; // [rsp+50h] [rbp-258h] BYREF
  __int64 v62; // [rsp+60h] [rbp-248h] BYREF
  _QWORD v63[18]; // [rsp+70h] [rbp-238h] BYREF
  __int64 v64; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v65; // [rsp+108h] [rbp-1A0h] BYREF
  __int64 *v66; // [rsp+110h] [rbp-198h]
  __int64 v67; // [rsp+118h] [rbp-190h]
  __int64 v68; // [rsp+120h] [rbp-188h]
  _BYTE v69[128]; // [rsp+128h] [rbp-180h] BYREF
  _BYTE *v70; // [rsp+1A8h] [rbp-100h] BYREF
  __int64 v71; // [rsp+1B0h] [rbp-F8h]
  int v72; // [rsp+1B8h] [rbp-F0h]
  char v73; // [rsp+1BCh] [rbp-ECh]
  _BYTE v74[32]; // [rsp+1C0h] [rbp-E8h] BYREF
  __int64 v75; // [rsp+1E0h] [rbp-C8h]
  _BYTE *v76; // [rsp+1E8h] [rbp-C0h]
  __int64 v77; // [rsp+1F0h] [rbp-B8h]
  _BYTE v78[96]; // [rsp+1F8h] [rbp-B0h] BYREF
  int v79; // [rsp+258h] [rbp-50h]
  __int64 v80; // [rsp+260h] [rbp-48h]
  __int16 v81; // [rsp+268h] [rbp-40h]
  char v82; // [rsp+26Ah] [rbp-3Eh]

  v7 = *(_QWORD *)(a3 + 104);
  v56[0] = a3;
  v59 = 0;
  sub_7052B0((__int64 *)(v7 + 96), v7, a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a3 + 128) + 2LL) & 7) != 0 )
  {
    v8 = 0;
    v59 = v56[0];
    goto LABEL_3;
  }
  v67 = 0;
  v68 = 1;
  v66 = &v65;
  v65 = (__int64)&v65;
  v12 = v69;
  do
  {
    *v12 = 0;
    v12 += 2;
  }
  while ( v12 != &v70 );
  v70 = v74;
  v76 = v78;
  v81 = 257;
  v13 = (__int64)sub_1844FF0;
  v71 = 4;
  v72 = 0;
  v73 = 1;
  v75 = 0;
  v77 = 0x400000000LL;
  v79 = 0;
  v80 = 0;
  v82 = 1;
  v64 = v56[0];
  if ( !(unsigned __int8)sub_B6EFE0(v56[0], (__int64 *)sub_1844FF0, (__int64)&v57, (__int64)&v64, 0) )
  {
    v10 = v56[0];
    v63[0] = v56[0];
    goto LABEL_7;
  }
  v17 = v65;
  if ( (__int64 *)v65 == &v65 )
    BUG();
  v18 = v65 + 16;
LABEL_13:
  v17 = *(_QWORD *)v17;
  if ( (__int64 *)v17 == &v65 )
  {
LABEL_19:
    v60 = sub_1839D10(
            *(__int64 **)(*(_QWORD *)(*(_QWORD *)v18 + 24LL * *(unsigned int *)(v18 + 8) - 24) + 16LL),
            v13,
            v14,
            v15,
            v16);
    if ( !sub_B65DB0(
            (__int64)&v64,
            *(_QWORD *)&byte_8[v60 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v60 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v60) & 7) )
    {
      v48 = sub_A7A9D0(a1[31], v56[0], v26, v27, v28, v29);
      sub_16643B0(a1, a2, v60, v48, v18, 3590, 0, 0);
      v8 = *(unsigned int *)(v18 + 112);
      v59 = (__int64)sub_F63270(*(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL), a2, v49, v50, v51, v52);
      sub_1838710(v65 + 16, a4);
      sub_F7C4A0((__int64)&v64);
LABEL_3:
      v64 = 0;
      v67 = 0;
      v68 = 1;
      v66 = &v65;
      v65 = (__int64)&v65;
      v9 = v69;
      do
      {
        *v9 = 0;
        v9 += 2;
      }
      while ( &v70 != v9 );
      v70 = v74;
      v76 = v78;
      v81 = 257;
      v71 = 4;
      v72 = 0;
      v73 = 1;
      v75 = 0;
      v77 = 0x400000000LL;
      v79 = 0;
      v80 = 0;
      v82 = 1;
      if ( (unsigned __int8)sub_B6EFE0(v59, (__int64 *)sub_1844FF0, (__int64)&v57, (__int64)&v64, 0) )
      {
        sub_168B9F0((__int64)v63, a1 + 1, a2, 0xE09u, 0);
        LOBYTE(v60) = v59 == v56[0];
        v32 = sub_1588420((__int64)v63, (unsigned __int8 *)&v60);
        v33 = sub_184B8A0(v32, v56);
        v34 = sub_184B8A0(v33, &v59);
        v61[0] = (void *)sub_1839D10(
                           *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v65 + 16) + 24LL * *(unsigned int *)(v65 + 24) - 24)
                                       + 16LL),
                           (__int64)&v59,
                           v65,
                           *(_QWORD *)(v65 + 16),
                           v35);
        sub_162B6D0(v34, (__int64 *)v61);
        v10 = 0;
        sub_15F7200(v63);
      }
      else
      {
        v10 = v59 | v8;
        v63[0] = v10;
      }
      goto LABEL_7;
    }
    sub_168B9F0((__int64)v63, a1 + 1, a2, 0xE02u, 0);
    v30 = sub_184B8A0((__int64)v63, v56);
    v31 = sub_1605D30(v30, (__int64 *)&v60);
    sub_1841240((__int64)v61, (__int64)a1, &v64);
    sub_1682AF0(v31, (__int64)v61);
    if ( v61[0] != &v62 )
      operator delete(v61[0]);
    v10 = 0;
    sub_15F7200(v63);
  }
  else
  {
    while ( 1 )
    {
      v19 = v17 + 16;
      if ( !v18 )
      {
        v18 = v17 + 16;
        goto LABEL_13;
      }
      v53 = sub_1839D10(
              *(__int64 **)(*(_QWORD *)(*(_QWORD *)v18 + 24LL * *(unsigned int *)(v18 + 8) - 24) + 16LL),
              v13,
              *(_QWORD *)v18,
              v15,
              v16);
      v22 = sub_1839D10(
              *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 24LL * *(unsigned int *)(v17 + 24) - 24) + 16LL),
              v13,
              v20,
              *(_QWORD *)(v17 + 16),
              v21);
      v23 = *(_QWORD *)&byte_8[v53 & 0xFFFFFFFFFFFFFFF0LL];
      v24 = v23 | v53;
      v13 = v23 & 0xFFFFFFFFFFFFFFF8LL;
      v14 = v13 | v24 & 7;
      if ( (*(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v22) & 7) != v14 )
        break;
      v25 = *(_DWORD *)(v17 + 128) < *(_DWORD *)(v18 + 112);
      v17 = *(_QWORD *)v17;
      if ( v25 )
        v18 = v19;
      if ( (__int64 *)v17 == &v65 )
        goto LABEL_19;
    }
    sub_168B9F0((__int64)v63, a1 + 1, a2, 0xE09u, 0);
    v58 = 0;
    v36 = sub_1588420((__int64)v63, &v58);
    v37 = sub_184B8A0(v36, v56);
    v61[0] = (void *)sub_1839D10(
                       *(__int64 **)(*(_QWORD *)(*(_QWORD *)v18 + 24LL * *(unsigned int *)(v18 + 8) - 24) + 16LL),
                       (__int64)v56,
                       v38,
                       v39,
                       v40);
    v41 = sub_162B6D0(v37, (__int64 *)v61);
    v42 = *(_QWORD *)(v17 + 16);
    v43 = v41;
    v44 = *(unsigned int *)(v17 + 24);
    v10 = 0;
    v60 = sub_1839D10(*(__int64 **)(*(_QWORD *)(v42 + 24 * v44 - 24) + 16LL), (__int64)v61, v45, v46, v47);
    sub_162B6D0(v43, (__int64 *)&v60);
    sub_15F7200(v63);
  }
LABEL_7:
  sub_F7C4A0((__int64)&v64);
  return v10;
}
