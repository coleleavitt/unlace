void __fastcall sub_801BE0(__int64 a1, __int64 *a2, int *a3, unsigned __int64 a4)
{
  unsigned int v6; // r12d
  __int64 v7; // r14
  void *v8; // r15
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // r15
  unsigned __int64 v12; // rdi
  bool v13; // zf
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  void *v16; // r15
  __int64 v17; // rax
  __int64 v18; // r12
  void *v19; // rbp
  __int64 v20; // rsi
  int v21; // edx
  unsigned __int64 v22; // rax
  void *v23; // r15
  __int64 v24; // rax
  __int64 v25; // rsi
  double v26; // rax
  _DWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // r15
  _DWORD *v30; // rax
  char v31; // al
  __int64 v32; // rax
  char v33; // al
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 *v36; // r15
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  const __m128i **v39; // [rsp+18h] [rbp-110h]
  unsigned __int64 v41; // [rsp+28h] [rbp-100h] BYREF
  __int64 v42; // [rsp+30h] [rbp-F8h] BYREF
  double v43[2]; // [rsp+38h] [rbp-F0h] BYREF
  char v44; // [rsp+4Ch] [rbp-DCh] BYREF
  char v45; // [rsp+4Dh] [rbp-DBh] BYREF
  char v46; // [rsp+4Eh] [rbp-DAh] BYREF
  char v47; // [rsp+4Fh] [rbp-D9h] BYREF
  _QWORD v48[4]; // [rsp+50h] [rbp-D8h] BYREF
  int v49; // [rsp+70h] [rbp-B8h] BYREF
  char v50; // [rsp+74h] [rbp-B4h]
  __int64 v51; // [rsp+78h] [rbp-B0h]
  int v52; // [rsp+80h] [rbp-A8h] BYREF
  char v53; // [rsp+84h] [rbp-A4h]
  __int64 v54; // [rsp+88h] [rbp-A0h]
  _QWORD v55[2]; // [rsp+90h] [rbp-98h] BYREF
  _QWORD v56[2]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-78h]
  __int64 v58; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-60h]
  __int64 v60; // [rsp+D0h] [rbp-58h]
  __m128 v61; // [rsp+D8h] [rbp-50h]

  v39 = (const __m128i **)(a1 + 32);
  v58 = 0;
  v59 = 0;
  v60 = 1;
  v61.m128_u64[0] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v58, a3);
  v61.m128_u64[1] = a4;
  sub_7FB980((const __m128i **)(a1 + 32), (__int64)&v58);
  v6 = 0;
  sub_25A130((char *)&v58);
  v7 = *(_QWORD *)(a1 + 32);
  v48[0] = 0;
  v48[1] = 0;
  v48[2] = 1;
  v48[3] = 0;
  if ( !v7 )
    goto LABEL_16;
  while ( v6 < *(_DWORD *)(v7 - 4) )
  {
    v8 = qword_1C7F2C0;
    v55[0] = 0;
    v55[1] = 0;
    v56[0] = 1;
    v9 = v7 + 40LL * v6;
    v56[1] = 0;
    if ( (*(_BYTE *)(v9 + 4) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v55, v9);
    else
      LODWORD(v55[0]) = *(_DWORD *)v9;
    if ( (*(_BYTE *)(v9 + 20) & 1) != 0 )
    {
      sub_182C690(v8, v56, v9 + 16);
    }
    else
    {
      v10 = *(_DWORD *)(v9 + 16);
      BYTE4(v56[0]) &= ~1u;
      LODWORD(v56[0]) = v10;
    }
    v11 = *(_QWORD *)(v9 + 32);
    v12 = a1 + 16;
    v13 = *(_WORD *)(v11 + 4) == 0;
    v57 = v11;
    if ( !v13 )
      goto LABEL_10;
    v12 = a1 + 16;
    v14 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
    if ( !v14 || *v14 != 5 )
      goto LABEL_10;
    if ( v14[1] == 9 && *(_DWORD *)(v11 + 24) == 2 )
    {
      v25 = *(_QWORD *)(v11 + 32);
      v26 = *(double *)(v11 + 40);
      v41 = a1 + 16;
      v43[0] = v26;
      v42 = v25;
      if ( (unsigned __int8)sub_1666AE0(v12, v25, v48, &v45) )
        goto LABEL_63;
      v12 = v41;
      if ( !*(_WORD *)(v42 + 4) )
      {
        v27 = *(_DWORD **)(*(_QWORD *)(v42 + 16) + 24LL);
        if ( v27 )
        {
          if ( *v27 == 5 && v27[1] == 8 && *(_DWORD *)(v42 + 24) == 1 )
          {
            v31 = sub_1666AE0(v41, *(_QWORD *)(v42 + 32), v48, &v44);
            v12 = v41;
            if ( v31 )
            {
              sub_1831620(qword_1C7F2C0, v48);
LABEL_63:
              sub_3EBE30((__int64)&v49, (__int64)v55, (__int64)v48);
              v54 = 0;
              LODWORD(v58) = v49;
              v61 = _mm_loadh_ps(v43);
              BYTE4(v58) = v50 & 3 | BYTE4(v58) & 0xFC;
              v32 = v51;
              v51 = 0;
              v59 = v32;
              LODWORD(v60) = v52;
              BYTE4(v60) = v53 & 3 | BYTE4(v60) & 0xFC;
              sub_7FB980(v39, (__int64)&v58);
              goto LABEL_40;
            }
          }
        }
      }
      v11 = v57;
      if ( *(_WORD *)(v57 + 4) )
        goto LABEL_10;
      v14 = *(_DWORD **)(*(_QWORD *)(v57 + 16) + 24LL);
      if ( !v14 || *v14 != 5 )
        goto LABEL_10;
      if ( v14[1] == 9 )
      {
LABEL_50:
        if ( *(_DWORD *)(v11 + 24) == 2 )
        {
          v28 = *(_QWORD *)(v11 + 32);
          v29 = *(_QWORD *)(v11 + 40);
          v41 = a1 + 16;
          v42 = v28;
          if ( (unsigned __int8)sub_1666AE0(a1 + 16, v29, v48, &v47) )
            goto LABEL_70;
          v12 = v41;
          if ( !*(_WORD *)(v29 + 4) )
          {
            v30 = *(_DWORD **)(*(_QWORD *)(v29 + 16) + 24LL);
            if ( v30 )
            {
              if ( *v30 == 5 && v30[1] == 8 && *(_DWORD *)(v29 + 24) == 1 )
              {
                v33 = sub_1666AE0(v41, *(_QWORD *)(v29 + 32), v48, &v46);
                v12 = v41;
                if ( v33 )
                {
                  sub_1831620(qword_1C7F2C0, v48);
LABEL_70:
                  sub_3EBE30((__int64)&v49, (__int64)v55, (__int64)v48);
                  v54 = 0;
                  LODWORD(v58) = v49;
                  v61 = _mm_loadh_ps((const double *)&v42);
                  BYTE4(v58) = v50 & 3 | BYTE4(v58) & 0xFC;
                  v34 = v51;
                  v51 = 0;
                  v59 = v34;
                  LODWORD(v60) = v52;
                  BYTE4(v60) = v53 & 3 | BYTE4(v60) & 0xFC;
                  sub_7FB980(v39, (__int64)&v58);
LABEL_40:
                  sub_25A130((char *)&v58);
                  sub_25A130((char *)&v49);
                  goto LABEL_15;
                }
              }
            }
          }
          v11 = v57;
          if ( *(_WORD *)(v57 + 4) )
            goto LABEL_10;
          v14 = *(_DWORD **)(*(_QWORD *)(v57 + 16) + 24LL);
          if ( !v14 || *v14 != 5 )
            goto LABEL_10;
        }
      }
    }
    else if ( v14[1] == 9 )
    {
      goto LABEL_50;
    }
    v21 = v14[1];
    if ( v21 == 6 )
    {
      v35 = 8LL * *(unsigned int *)(v11 + 24);
      v42 = v11 + 32 + v35;
      if ( v35 )
      {
        v36 = (unsigned __int64 *)(v11 + 32);
        do
        {
          v37 = *v36;
          v58 = 0;
          v41 = v37;
          v59 = 0;
          v60 = 1;
          v61.m128_u64[0] = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v58, (int *)v55);
          v61.m128_u64[1] = v41;
          sub_7FB980(v39, (__int64)&v58);
          ++v36;
          sub_25A130((char *)&v58);
        }
        while ( (unsigned __int64 *)v42 != v36 );
      }
      goto LABEL_15;
    }
    if ( v21 == 8 && *(_DWORD *)(v11 + 24) == 1 )
    {
      v38 = *(_QWORD *)(v11 + 32);
      v23 = qword_1C7F2C0;
      v49 = 0;
      v50 &= 0xFCu;
      v53 &= 0xFCu;
      v41 = v38;
      v51 = 0;
      v52 = 1;
      v54 = 0;
      if ( (v55[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(qword_1C7F2C0, &v49, v55);
        if ( (v56[0] & 0x100000000LL) != 0 )
          goto LABEL_80;
LABEL_78:
        v53 &= ~1u;
        v52 = v56[0];
      }
      else
      {
        v49 = v55[0];
        if ( (v56[0] & 0x100000000LL) == 0 )
          goto LABEL_78;
LABEL_80:
        sub_182C690(v23, &v52, v56);
      }
      goto LABEL_39;
    }
    v12 = a1 + 16;
    if ( v14[1] == 7 && *(_DWORD *)(v11 + 24) == 2 )
    {
      v42 = *(_QWORD *)(v11 + 32);
      v22 = *(_QWORD *)(v11 + 40);
      v58 = 0;
      v41 = v22;
      v59 = 0;
      v60 = 1;
      v61.m128_u64[0] = 0;
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v58, (int *)v55);
      v61.m128_u64[1] = v42;
      sub_7FB980(v39, (__int64)&v58);
      sub_25A130((char *)&v58);
      v50 &= 0xFCu;
      v23 = qword_1C7F2C0;
      v53 &= 0xFCu;
      v49 = 0;
      v51 = 0;
      v52 = 1;
      v54 = 0;
      if ( (v55[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v49, v55);
      else
        v49 = v55[0];
      if ( (v56[0] & 0x100000000LL) != 0 )
        goto LABEL_80;
      v53 &= ~1u;
      v52 = v56[0];
LABEL_39:
      sub_1831620(qword_1C7F2C0, &v49);
      v54 = 0;
      LODWORD(v58) = v49;
      v61 = _mm_loadh_ps((const double *)&v41);
      BYTE4(v58) = v50 & 3 | BYTE4(v58) & 0xFC;
      v24 = v51;
      v51 = 0;
      v59 = v24;
      LODWORD(v60) = v52;
      BYTE4(v60) = v53 & 3 | BYTE4(v60) & 0xFC;
      sub_7FB980(v39, (__int64)&v58);
      goto LABEL_40;
    }
LABEL_10:
    v41 = v12;
    if ( (unsigned __int8)sub_1666AE0(v12, v11, v48, &v58) )
      goto LABEL_23;
    if ( !*(_WORD *)(v11 + 4) )
    {
      v15 = *(_DWORD **)(*(_QWORD *)(v11 + 16) + 24LL);
      if ( v15 )
      {
        if ( *v15 == 5
          && v15[1] == 8
          && *(_DWORD *)(v11 + 24) == 1
          && (unsigned __int8)sub_1666AE0(v41, *(_QWORD *)(v11 + 32), v48, &v49) )
        {
          sub_1831620(qword_1C7F2C0, v48);
LABEL_23:
          sub_3EBE30((__int64)&v58, (__int64)v55, (__int64)v48);
          sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)(a2 + 3), (__int64)&v58, (__int64)(a2 + 3));
          sub_25A130((char *)&v58);
          goto LABEL_15;
        }
      }
    }
    sub_7F8E80(a2, v57, (int *)v55);
LABEL_15:
    v16 = qword_1C7F2C0;
    ++v6;
    sub_182CBA0(qword_1C7F2C0, v55);
    sub_182CBA0(v16, v56);
    v7 = *(_QWORD *)(a1 + 32);
    if ( !v7 )
      goto LABEL_16;
  }
  v17 = *(unsigned int *)(v7 - 4);
  if ( (_DWORD)v17 )
  {
    v18 = v7 + 40 * v17;
    do
    {
      v19 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v7);
      v20 = v7 + 16;
      v7 += 40;
      sub_182CBA0(v19, v20);
    }
    while ( v18 != v7 );
    v7 = *(_QWORD *)(a1 + 32);
  }
  *(_DWORD *)(v7 - 4) = 0;
LABEL_16:
  sub_25A130((char *)v48);
}

