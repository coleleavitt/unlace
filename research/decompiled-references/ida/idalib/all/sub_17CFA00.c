__int64 __fastcall sub_17CFA00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int *a6, unsigned __int8 a7)
{
  unsigned int v8; // r14d
  unsigned __int64 v11; // r9
  char v12; // al
  __int64 v13; // r9
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int8 v20; // al
  __m128 v21; // xmm0
  __int64 v22; // rdx
  int v23; // r15d
  __int64 v24; // rax
  unsigned int v25; // r10d
  char v27; // r12
  unsigned __int8 v28; // dl
  __int64 *v29; // rsi
  unsigned int v30; // ecx
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // r15d
  __int64 *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  int v42; // eax
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rbx
  unsigned __int8 v45; // cl
  unsigned __int64 v46; // rsi
  __int64 v47; // rdx
  unsigned __int8 v48; // al
  int v49; // eax
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rsi
  __int64 v54; // rbp
  __int64 v55; // rax
  unsigned __int8 v56; // r10
  __int64 v57; // r15
  __int64 v58; // rax
  unsigned __int8 v59; // r10
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  unsigned __int8 v66; // r10
  __int64 v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int8 v74; // r10
  __int64 v75; // r15
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // [rsp+0h] [rbp-158h]
  __int64 v79; // [rsp+0h] [rbp-158h]
  unsigned __int8 v80; // [rsp+0h] [rbp-158h]
  unsigned __int8 v81; // [rsp+0h] [rbp-158h]
  unsigned __int8 v82; // [rsp+0h] [rbp-158h]
  __int64 v83; // [rsp+0h] [rbp-158h]
  unsigned __int8 v84; // [rsp+0h] [rbp-158h]
  unsigned __int64 v85; // [rsp+8h] [rbp-150h]
  unsigned __int8 v86; // [rsp+8h] [rbp-150h]
  unsigned __int8 v87; // [rsp+8h] [rbp-150h]
  __int64 v88; // [rsp+10h] [rbp-148h]
  __int64 v89[2]; // [rsp+18h] [rbp-140h] BYREF
  bool v90; // [rsp+2Fh] [rbp-129h] BYREF
  __m128i v91; // [rsp+30h] [rbp-128h] BYREF
  __int64 v92[2]; // [rsp+40h] [rbp-118h] BYREF
  unsigned __int64 v93; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v94[12]; // [rsp+58h] [rbp-100h]
  char v95; // [rsp+64h] [rbp-F4h]
  void *v96; // [rsp+68h] [rbp-F0h]
  __int64 v97; // [rsp+70h] [rbp-E8h]
  _BYTE v98[16]; // [rsp+78h] [rbp-E0h] BYREF
  char v99; // [rsp+88h] [rbp-D0h]
  _BYTE v100[200]; // [rsp+90h] [rbp-C8h] BYREF

  v8 = a5;
  v11 = *(_QWORD *)(a1 + 544);
  v89[0] = a4;
  v12 = *(_BYTE *)(v11 + 8) & 0x7F;
  if ( v12 == 7 )
  {
    do
    {
LABEL_3:
      while ( 1 )
      {
        v13 = *(_QWORD *)(sub_B8C1B0(v11) + 16);
        if ( (v13 & 4) == 0 )
          break;
        v11 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
        v12 = *(_BYTE *)(v11 + 8) & 0x7F;
        if ( v12 != 7 )
          goto LABEL_2;
      }
      v11 = v13 & 0xFFFFFFFFFFFFFFF8LL;
      v14 = *(_BYTE *)(v11 + 8) & 0x7F;
    }
    while ( v14 == 4 || v14 == 7 );
  }
  else
  {
LABEL_2:
    if ( v12 == 4 )
      goto LABEL_3;
  }
  if ( a3
    && (v85 = v11,
        v78 = sub_B91570(v11, a2, a3, a4, a5, v11),
        v19 = sub_B91570(a3, a2, v15, v16, v17, v18),
        v11 = v85,
        v78 == v19) )
  {
    v36 = (__int64 *)(a1 + 8);
    if ( ((*(_BYTE *)(v85 + 8) + 70) & 0x7Fu) <= 3 )
    {
      sub_168B9F0((__int64)v100, v36, v8, ((**(char **)(a1 + 232) >> 31) & 0xB7D) + 4147, 0);
      v50 = sub_17B3DD0((__int64)v100, v89);
      v51 = *(_QWORD *)a2;
      *(_QWORD *)&v94[4] = 0;
      v95 = 0;
      v96 = v98;
      v97 = 0;
      v98[0] = 0;
      v99 = 0;
      v93 = v51;
      v94[0] = 1;
      sub_1589170(v50, &v93);
      if ( v96 != v98 )
        operator delete(v96);
      sub_15F7200(v100);
      *(_QWORD *)a2 = 0;
      v25 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 24) = 0;
    }
    else
    {
      sub_168B9F0((__int64)v100, v36, v8, 0x1BD2u, 0);
      sub_17B3DD0((__int64)v100, v89);
      sub_15F7200(v100);
      return 0;
    }
  }
  else
  {
    v79 = v11;
    if ( (unsigned __int8)sub_B91990(v11, a3, a3, a4, a5, v11) )
    {
      v20 = (*(_BYTE *)(v79 + 8) + 70) & 0x7F;
      goto LABEL_10;
    }
    v27 = a7 ^ 1;
    v28 = *(_BYTE *)(v79 + 8) & 0x7F;
    v20 = (v28 + 70) & 0x7F;
    if ( ((a7 ^ 1) & (a6 == nullptr)) == 0 )
    {
LABEL_10:
      if ( v20 > 3u )
      {
        if ( a6 && *a6 )
        {
          sub_168B9F0((__int64)v100, (__int64 *)(a1 + 8), v8, 0x162Eu, 0);
          v49 = *a6;
          v95 = 0;
          *(_QWORD *)&v94[4] = 0;
          v96 = v98;
          v97 = 0;
          v98[0] = 0;
          v99 = 0;
          LODWORD(v93) = v49;
          HIDWORD(v93) = v49;
          v94[0] = 1;
          sub_1589170((__int64)v100, &v93);
          if ( v96 != v98 )
            operator delete(v96);
          sub_15F7200(v100);
        }
        v21 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 8));
        v91 = (__m128i)v21;
        while ( 1 )
        {
          v92[0] = sub_E90670(&v91);
          v92[1] = v22;
          if ( v92[0] )
          {
            v23 = sub_F6E9D0(v92);
            if ( v23 )
            {
              sub_168B9F0((__int64)v100, (__int64 *)(a1 + 8), v8, 0x162Eu, 0);
              *(_QWORD *)&v94[4] = 0;
              v95 = 0;
              v96 = v98;
              v97 = 0;
              v98[0] = 0;
              v99 = 0;
              LODWORD(v93) = v23;
              HIDWORD(v93) = v23;
              v94[0] = 1;
              sub_1589170((__int64)v100, &v93);
              if ( v96 != v98 )
                operator delete(v96);
              sub_15F7200(v100);
            }
          }
          v24 = *(_QWORD *)(v91.m128i_i64[0] + 8);
          if ( ((v24 >> 1) & 3) == 2 )
          {
            v31 = *(_QWORD *)(v91.m128i_i64[0] + 16);
            if ( v31 )
            {
              v32 = sub_17A8D90(*(_QWORD *)(v91.m128i_i64[0] + 16));
              if ( v32 )
              {
                if ( (*(_BYTE *)(v32 + 17) & 4) != 0 && (*(_BYTE *)(v32 + 18) & 8) != 0 )
                {
                  sub_168B9F0((__int64)v100, (__int64 *)(a1 + 8), v8, 0x1573u, 0);
                  v93 = sub_E90530(v91.m128i_i64);
                  sub_1587DB0((__int64)v100, (__int64 *)&v93);
                  sub_15F7200(v100);
                }
              }
              else if ( *(_BYTE *)(v31 + 16) == 15 || sub_17A8EB0(v31) )
              {
                sub_168B9F0((__int64)v100, (__int64 *)(a1 + 8), v8, 0xD75u, 0);
                v90 = *(_BYTE *)(v31 + 16) == 15;
                v88 = sub_1588420((__int64)v100, (unsigned __int8 *)&v90);
                v33 = sub_E90670(&v91);
                *(_QWORD *)v94 = v34;
                v93 = v33;
                v35 = sub_F6CE20((__int64 *)&v93);
                v92[0] = __PAIR64__(v35, sub_F6CCB0((__int64 *)&v93, v21));
                sub_1587DB0(v88, v92);
                sub_15F7200(v100);
              }
              if ( !v91.m128i_i64[0] )
                return 0;
              v24 = *(_QWORD *)(v91.m128i_i64[0] + 8);
            }
          }
          v91.m128i_i64[0] = v24 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v24 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
            return 0;
        }
      }
      sub_168B9F0((__int64)v100, (__int64 *)(a1 + 8), v8, 0x103Au, 0);
      v38 = sub_17B3DD0((__int64)v100, v89);
      v93 = *(_QWORD *)a2;
      sub_1587DB0(v38, (__int64 *)&v93);
      sub_15F7200(v100);
      v41 = v89[0];
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 24) = 0;
      v42 = v41 & 7;
      if ( v42 != 7 && (unsigned int)(v42 - 3) <= 1 )
      {
        v43 = *(_QWORD *)(v79 - 16);
        if ( v43 )
        {
          v44 = v43 & 0xFFFFFFFFFFFFFFF0LL;
          v45 = v44;
          v46 = v44;
        }
        else
        {
          v52 = sub_A7AA70(*(_QWORD *)(a1 + 248), v79 - 64, v41, v39, v40, v79);
          v41 = v89[0];
          v53 = v52;
          v45 = v52;
          v48 = 0;
          v46 = v53 & 0xFFFFFFFFFFFFFFF0LL;
          if ( (unsigned __int64)((v89[0] & 7) - 3) > 2 )
            goto LABEL_52;
        }
        v47 = *(_QWORD *)((v41 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        v43 = v47 & 0xFFFFFFFFFFFFFFF0LL;
        v48 = v47 & 7;
LABEL_52:
        LOBYTE(v25) = (*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)(v46 + 8) | v45) & 7) != (*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)(v43 + 8) | v48) & 7);
        return v25;
      }
      return 0;
    }
    if ( v20 <= 3u )
    {
      v80 = v27 & (a6 == nullptr);
      v29 = (__int64 *)(a1 + 8);
      v30 = 4154;
      goto LABEL_46;
    }
    if ( (*(_BYTE *)(a3 + 8) & 0x7F) == 0 )
    {
      v80 = v27 & (a6 == nullptr);
      v29 = (__int64 *)(a1 + 8);
      v30 = 4035;
      goto LABEL_46;
    }
    if ( (unsigned int)v28 - 34 <= 5 )
    {
      v80 = v27 & (a6 == nullptr);
      v29 = (__int64 *)(a1 + 8);
      v30 = 4037;
      goto LABEL_46;
    }
    if ( v28 == 8 )
    {
      v80 = v27 & (a6 == nullptr);
      v29 = (__int64 *)(a1 + 8);
      v30 = 4036;
      goto LABEL_46;
    }
    if ( v28 == 6 )
    {
      if ( (*(_BYTE *)(a3 + 8) & 0x7F) == 0x18 )
        return 0;
      v80 = v27 & (a6 == nullptr);
      v29 = (__int64 *)(a1 + 8);
      v30 = 3790;
LABEL_46:
      sub_168B9F0((__int64)v100, v29, v8, v30, 0);
      v37 = sub_17B3DD0((__int64)v100, v89);
      v93 = *(_QWORD *)a2;
      sub_1587DB0(v37, (__int64 *)&v93);
      sub_15F7200(v100);
      return v80;
    }
    v86 = (a7 ^ 1) & (a6 == nullptr);
    sub_168B9F0((__int64)v100, (__int64 *)(a1 + 8), v8, 0xFC6u, 0);
    v54 = sub_17B3DD0((__int64)v100, v89);
    v55 = sub_B8C1B0(v79);
    v56 = v86;
    v57 = v55;
    if ( *(_BYTE *)(v54 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v54 + 32), v55, 0xAu);
      v56 = v86;
    }
    else if ( *(_BYTE *)(v54 + 132) )
    {
      v61 = sub_168B9E0((_QWORD *)v54);
      v66 = v86;
      v83 = v61;
      v67 = *(_QWORD *)(v54 + 16);
      if ( v67 )
      {
        v67 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v67 + 32LL))(*(_QWORD *)(v54 + 16));
        v66 = v86;
      }
      v87 = v66;
      v93 = v67;
      v68 = sub_1587BC0(v83, (__int64 *)&v93, v62, v63, v64, v65);
      sub_AE9DF0((unsigned __int8 **)(*v68 + 32LL * *(unsigned int *)(v54 + 128) + 8), v57, 0xAu);
      v56 = v87;
    }
    v81 = v56;
    v58 = sub_B8C1B0(a3);
    v59 = v81;
    v60 = v58;
    if ( *(_BYTE *)(v54 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v54 + 32), v58, 0xAu);
      v59 = v81;
    }
    else if ( *(_BYTE *)(v54 + 132) )
    {
      v69 = sub_168B9E0((_QWORD *)v54);
      v74 = v81;
      v75 = v69;
      v76 = *(_QWORD *)(v54 + 16);
      if ( v76 )
      {
        v76 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v76 + 32LL))(*(_QWORD *)(v54 + 16));
        v74 = v81;
      }
      v84 = v74;
      v93 = v76;
      v77 = sub_1587BC0(v75, (__int64 *)&v93, v70, v71, v72, v73);
      sub_AE9DF0((unsigned __int8 **)(*v77 + 32LL * *(unsigned int *)(v54 + 128) + 8), v60, 0xAu);
      v59 = v84;
    }
    v82 = v59;
    v93 = *(_QWORD *)a2;
    sub_1587DB0(v54, (__int64 *)&v93);
    sub_15F7200(v100);
    return v82;
  }
  return v25;
}
