void __fastcall sub_18D4A10(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        double a6)
{
  int v6; // r15d
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // r9
  __int64 v28; // r8
  char v29; // r14
  char v30; // al
  char v31; // dl
  char v32; // al
  char v33; // r14
  char v34; // al
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbp
  __int64 v38; // r8
  __int64 v39; // r9
  void *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 v49; // rsi
  __int64 v50; // r12
  __int64 v51; // rsi
  char v52; // al
  char v53; // [rsp+20h] [rbp-1F8h]
  unsigned __int64 v54; // [rsp+30h] [rbp-1E8h] BYREF
  unsigned __int64 v55; // [rsp+38h] [rbp-1E0h] BYREF
  __int64 v56; // [rsp+40h] [rbp-1D8h] BYREF
  __int64 v57; // [rsp+48h] [rbp-1D0h] BYREF
  void *v58; // [rsp+50h] [rbp-1C8h] BYREF
  unsigned int v59; // [rsp+58h] [rbp-1C0h]
  char v60; // [rsp+5Ch] [rbp-1BCh]
  void *v61; // [rsp+60h] [rbp-1B8h] BYREF
  unsigned int v62; // [rsp+68h] [rbp-1B0h]
  char v63; // [rsp+6Ch] [rbp-1ACh]
  void *v64[2]; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v65; // [rsp+80h] [rbp-198h] BYREF
  void *v66[2]; // [rsp+90h] [rbp-188h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v68[2]; // [rsp+B0h] [rbp-168h] BYREF
  unsigned int v69; // [rsp+C0h] [rbp-158h] BYREF
  char v70; // [rsp+C4h] [rbp-154h]
  void *v71; // [rsp+C8h] [rbp-150h] BYREF
  unsigned int v72; // [rsp+D0h] [rbp-148h]
  char v73; // [rsp+D4h] [rbp-144h]
  __int64 v74[2]; // [rsp+100h] [rbp-118h] BYREF
  unsigned int v75; // [rsp+110h] [rbp-108h] BYREF
  char v76; // [rsp+114h] [rbp-104h]
  void *v77; // [rsp+118h] [rbp-100h] BYREF
  unsigned int v78; // [rsp+120h] [rbp-F8h]
  char v79; // [rsp+124h] [rbp-F4h]
  _BYTE v80[200]; // [rsp+150h] [rbp-C8h] BYREF

  v6 = a5;
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(_QWORD *)(v10 + 8) & 7LL;
  if ( v11 | (*(__int64 *)(v10 + 8) >> 3) & 1 )
    v10 = sub_F64F00(*(_QWORD *)(a2 + 8), a2, v11, v11 | (*(__int64 *)(v10 + 8) >> 3) & 1, a5);
  v12 = *(_QWORD *)(a3 + 8);
  v54 = v10 & 0xFFFFFFFFFFFFFFF0LL;
  v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(_QWORD *)(v13 + 8) & 7LL;
  if ( v14 | (*(__int64 *)(v13 + 8) >> 3) & 1 )
    v13 = sub_F64F00(v12, a2, v14, v14 | (*(__int64 *)(v13 + 8) >> 3) & 1, a5);
  v55 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0
    && sub_F58030(*(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF0LL))
    && sub_F58030(*(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v16 = *(_QWORD *)&byte_8[v55 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v55 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v55) & 7;
    v17 = *(_QWORD *)&byte_8[v54 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v54 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v54) & 7;
    if ( v6 != 2 )
    {
      if ( v16 != v17 )
      {
        sub_168B9F0((__int64)v80, (__int64 *)(a1 + 8), a4, 0x1975u, 0);
        v68[0] = sub_EEC8C0(a2, a1 + 8, a6);
        v18 = sub_1587DB0((__int64)v80, v68);
        v74[0] = sub_EEC8C0(a3, (__int64)v68, a6);
        v19 = sub_1587DB0(v18, v74);
        v20 = v19;
        if ( *(_BYTE *)(v19 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v19 + 32), v6, 2u);
        }
        else if ( *(_BYTE *)(v19 + 132) )
        {
          v37 = sub_168B9E0((_QWORD *)v19);
          v40 = *(void **)(v20 + 16);
          if ( v40 )
            v40 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v40 + 32LL))(*(_QWORD *)(v20 + 16));
          v66[0] = v40;
          v41 = sub_1587BC0(v37, (__int64 *)v66, v35, v36, v38, v39);
          sub_AE9DF0((unsigned __int8 **)(*v41 + 32LL * *(unsigned int *)(v20 + 128) + 8), v6, 2u);
        }
        v21 = sub_1605D30(v20, (__int64 *)&v54);
        sub_1605D30(v21, (__int64 *)&v55);
        sub_15F7200(v80);
      }
      return;
    }
    if ( v16 == v17 )
      return;
    v68[1] = 0;
    v22 = *(_QWORD *)(a1 + 248);
    LOWORD(v68[0]) = 0;
    v23 = *(unsigned int *)(a1 + 4624);
    v24 = 1;
    v69 = 0;
    v70 &= ~1u;
    v25 = *(_QWORD *)(a1 + 4616) + 640 * v23;
    LOWORD(v74[0]) = 0;
    v74[1] = 0;
    v75 = 0;
    v76 &= ~1u;
    if ( (unsigned int)(*(_DWORD *)(v25 - 640) - 4) > 1 )
      v24 = *(unsigned __int8 *)(a1 + 2440);
    v26 = sub_C3F220(a2, (__int64)v68, v22, 2, v24, v15);
    v28 = 1;
    v29 = v26;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640) - 4) > 1 )
      v28 = *(unsigned __int8 *)(a1 + 2440);
    v30 = sub_C3F220(a3, (__int64)v74, *(_QWORD *)(a1 + 248), 2, v28, v27);
    v31 = v30;
    if ( v29 != v30 )
    {
      v53 = v30;
      if ( !v29 )
      {
        if ( (unsigned __int8)sub_18BCE20(&v54, &v77) && (unsigned __int8)sub_18BCE20(&v55, &v77) )
          goto LABEL_36;
        goto LABEL_46;
      }
      v32 = sub_18BCE20(&v54, &v71);
      v31 = v53;
      if ( v32 )
      {
        v52 = sub_18BCE20(&v55, &v71);
        v31 = v53;
        if ( v52 )
          goto LABEL_36;
      }
    }
    if ( v29 && v31 )
    {
      v59 = 32;
      v58 = nullptr;
      v60 = 1;
      if ( v72 <= 0x40 )
      {
        v59 = v72;
        v58 = v71;
      }
      else
      {
        sub_22056A0(&v58, &v71);
      }
      v62 = 32;
      v61 = nullptr;
      v60 = v73;
      v63 = 1;
      if ( v78 <= 0x40 )
      {
        v62 = v78;
        v61 = v77;
      }
      else
      {
        sub_22056A0(&v61, &v77);
      }
      v63 = v79;
      v33 = sub_18BCE20(&v54, &v58);
      v34 = sub_18BCE20(&v55, &v61);
      if ( !v33 || !v34 )
      {
        sub_168B9F0((__int64)v80, (__int64 *)(a1 + 8), a4, 0x1A1Bu, 0);
        v56 = sub_EEC8C0(a2, a1 + 8, a6);
        v45 = sub_1587DB0((__int64)v80, &v56);
        v57 = sub_EEC8C0(a3, (__int64)&v56, a6);
        v46 = sub_1587DB0(v45, &v57);
        v47 = sub_1605D30(v46, (__int64 *)&v54);
        v48 = sub_1605D30(v47, (__int64 *)&v55);
        if ( v60 )
        {
          LODWORD(v49) = (_DWORD)v58;
          if ( v59 > 0x40 )
            v49 = *(_QWORD *)v58;
        }
        else if ( v59 > 0x40 )
        {
          v49 = *(_QWORD *)v58;
        }
        else
        {
          LODWORD(v49) = 0;
          if ( v59 )
            v49 = (__int64)((_QWORD)v58 << (64 - (unsigned __int8)v59)) >> (64 - (unsigned __int8)v59);
        }
        sub_AC62E0(v64, v49, v54);
        v50 = sub_1682AF0(v48, (__int64)v64);
        if ( v63 )
        {
          LODWORD(v51) = (_DWORD)v61;
          if ( v62 > 0x40 )
            v51 = *(_QWORD *)v61;
        }
        else if ( v62 > 0x40 )
        {
          v51 = *(_QWORD *)v61;
        }
        else
        {
          LODWORD(v51) = 0;
          if ( v62 )
            v51 = (__int64)((_QWORD)v61 << (64 - (unsigned __int8)v62)) >> (64 - (unsigned __int8)v62);
        }
        sub_AC62E0(v66, v51, v55);
        sub_1682AF0(v50, (__int64)v66);
        if ( v66[0] != &v67 )
          operator delete(v66[0]);
        if ( v64[0] != &v65 )
          operator delete(v64[0]);
        sub_15F7200(v80);
      }
      if ( v62 > 0x40 && v61 )
        operator delete[](v61);
      if ( v59 > 0x40 && v58 )
        operator delete[](v58);
      goto LABEL_36;
    }
LABEL_46:
    sub_168B9F0((__int64)v80, (__int64 *)(a1 + 8), a4, 0x1A1Au, 0);
    v64[0] = (void *)sub_EEC8C0(a2, a1 + 8, a6);
    v42 = sub_1587DB0((__int64)v80, (__int64 *)v64);
    v66[0] = (void *)sub_EEC8C0(a3, (__int64)v64, a6);
    v43 = sub_1587DB0(v42, (__int64 *)v66);
    v44 = sub_1605D30(v43, (__int64 *)&v54);
    sub_1605D30(v44, (__int64 *)&v55);
    sub_15F7200(v80);
LABEL_36:
    if ( v75 > 1 )
      sub_A4F8E0((int *)&v75);
    if ( v69 > 1 )
      sub_A4F8E0((int *)&v69);
  }
}
