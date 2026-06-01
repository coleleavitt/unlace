__int64 __fastcall sub_AA08C0(__int64 a1, __int64 a2, int a3, __int64 *a4, _BYTE *a5)
{
  __int64 v8; // rdi
  __int64 v9; // r12
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // r15
  void *v14; // r14
  void *v15; // r13
  void *v16; // r12
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  void *v25; // r13
  void *v26; // r13
  __int64 v27; // rsi
  _QWORD *v28; // r13
  __int64 v29; // rax
  unsigned int v30; // r12d
  _QWORD *v31; // rax
  __int64 v32; // rbp
  int *v33; // r13
  void *v34; // rdi
  void *v35; // rdi
  __int64 v36; // rdi
  int v37; // eax
  _QWORD *v38; // rax
  __int64 v39; // r13
  unsigned int j; // r12d
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rsi
  char v46; // dl
  char v47; // al
  char v48; // dl
  __int64 v49; // rax
  char v50; // dl
  __int64 v51; // rax
  char v52; // dl
  __int64 v53; // rax
  __int64 v54; // rax
  char v55; // dl
  char v56; // dl
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  char v60; // r13
  __int64 v61; // rax
  int v62; // edx
  int v63; // ecx
  int v64; // r8d
  int v65; // r9d
  void *v66; // [rsp+0h] [rbp-108h]
  _QWORD *v68; // [rsp+8h] [rbp-100h]
  __int64 i; // [rsp+10h] [rbp-F8h]
  unsigned int v70; // [rsp+10h] [rbp-F8h]
  _QWORD *v71; // [rsp+18h] [rbp-F0h]
  int v72[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v73; // [rsp+28h] [rbp-E0h]
  void *v74; // [rsp+30h] [rbp-D8h] BYREF
  int v75[2]; // [rsp+38h] [rbp-D0h]
  int v76[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v77; // [rsp+48h] [rbp-C0h]
  int v78[2]; // [rsp+50h] [rbp-B8h] BYREF
  char v79[8]; // [rsp+58h] [rbp-B0h]
  int v80[2]; // [rsp+60h] [rbp-A8h] BYREF
  int v81[2]; // [rsp+68h] [rbp-A0h]
  int v82[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v83; // [rsp+78h] [rbp-90h]
  __int64 v84; // [rsp+80h] [rbp-88h] BYREF
  __int64 v85; // [rsp+88h] [rbp-80h]
  __int64 v86; // [rsp+90h] [rbp-78h] BYREF
  __int64 v87; // [rsp+98h] [rbp-70h]
  __int64 v88; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v89; // [rsp+A8h] [rbp-60h]
  int v90; // [rsp+B0h] [rbp-58h] BYREF
  char v91; // [rsp+B4h] [rbp-54h]
  __int64 v92; // [rsp+B8h] [rbp-50h]
  int v93; // [rsp+C0h] [rbp-48h]
  char v94; // [rsp+C4h] [rbp-44h]
  __int64 v95; // [rsp+C8h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 504);
  HIDWORD(v66) = a3;
  v74 = nullptr;
  *(_QWORD *)v75 = 0;
  *(_QWORD *)v76 = 1;
  v77 = 0;
  *(_QWORD *)v78 = 0;
  *(_QWORD *)v79 = 0;
  *(_QWORD *)v80 = 1;
  *(_QWORD *)v81 = 0;
  if ( (unsigned __int8)sub_FFAE20(v8) )
  {
    v22 = sub_FF9B30(*(_QWORD *)(a2 + 504));
    v23 = *(_QWORD *)(v22 + 56);
    v71 = (_QWORD *)v22;
    if ( v23 )
    {
      v24 = *(unsigned int *)(v23 - 4);
      if ( (_DWORD)v24 )
      {
        i = v23 + (v24 << 6);
        do
        {
          v25 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v23 + 32);
          sub_182CBA0(v25, v23 + 48);
          v26 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v23);
          v27 = v23 + 16;
          v23 += 64;
          sub_182CBA0(v26, v27);
        }
        while ( v23 != i );
        v23 = v71[7];
      }
      sub_186B220((void *)(v23 - 8));
    }
    v28 = v71;
    v29 = v71[6];
    if ( v29 )
    {
      v30 = *(_DWORD *)(v29 - 4);
      v70 = *(_DWORD *)(v29 - 8);
      v31 = (_QWORD *)sub_186B270(((unsigned __int64)v70 << 6) + 8);
      v32 = (__int64)(v31 + 1);
      LODWORD(v71) = (_DWORD)v31 + 8;
      *v31 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v70), _mm_cvtsi32_si128(v30)).m128i_u64[0];
      v28[7] = v31 + 1;
      v33 = (int *)v28[6];
      if ( v33 )
      {
        for ( i = (__int64)&v33[16 * (unsigned __int64)(unsigned int)*(v33 - 1)]; (int *)i != v33; v32 += 64 )
        {
          *(_BYTE *)(v32 + 4) &= 0xFCu;
          v34 = qword_1C7F2C0;
          *(_BYTE *)(v32 + 20) &= 0xFCu;
          *(_DWORD *)v32 = 0;
          *(_QWORD *)(v32 + 8) = 0;
          *(_DWORD *)(v32 + 16) = 1;
          *(_QWORD *)(v32 + 24) = 0;
          sub_27B950((__int64)v34, v32, v33);
          *(_BYTE *)(v32 + 36) &= 0xFCu;
          v35 = qword_1C7F2C0;
          *(_BYTE *)(v32 + 52) &= 0xFCu;
          *(_DWORD *)(v32 + 32) = 0;
          *(_QWORD *)(v32 + 40) = 0;
          *(_DWORD *)(v32 + 48) = 1;
          *(_QWORD *)(v32 + 56) = 0;
          sub_27B950((__int64)v35, v32 + 32, v33 + 8);
          v33 += 16;
        }
      }
    }
    else
    {
      v71[7] = 0;
    }
  }
  if ( HIDWORD(v66) == -1
    || !(unsigned __int8)sub_FFAE60(*(_QWORD *)(a2 + 504))
    || !(unsigned __int8)sub_18290A0(*(_QWORD *)(a2 + 8)) )
  {
    goto LABEL_3;
  }
  if ( !(unsigned __int8)sub_FFA850(*(_QWORD *)(a2 + 504)) || (unsigned __int8)sub_FF9CD0(*(_QWORD *)(a2 + 504)) )
  {
    sub_1010850(*(_QWORD *)(a2 + 504));
    sub_FFA850(*(_QWORD *)(a2 + 504));
  }
  v18 = (unsigned int)sub_FF9FB0(*(_QWORD *)(a2 + 504), HIDWORD(v66));
  LODWORD(i) = sub_1011940(*(_QWORD *)(a2 + 504));
  if ( (unsigned __int8)sub_FFAE20(*(_QWORD *)(a2 + 504)) )
  {
    v39 = *(_QWORD *)(a2 + 504);
    for ( j = 0; ; ++j )
    {
      v41 = sub_FF9B20(v39);
      if ( j >= -1431655765 * (unsigned int)((__int64)(*(_QWORD *)(v41 + 288) - *(_QWORD *)(v41 + 280)) >> 3) )
        break;
      v18 = j;
      if ( (unsigned __int8)sub_FFADC0(v39, j) )
      {
        v42 = *(_QWORD *)(sub_FF9B20(v39) + 48) + ((unsigned __int64)j << 6);
        if ( (*(_BYTE *)(v42 + 20) & 1) != 0 || *(_DWORD *)(v42 + 16) != 1 || *(_DWORD *)(v42 + 32) )
          goto LABEL_47;
      }
    }
  }
  if ( *(_QWORD *)(a2 + 328) && (i & 0xFFFFFFF7) == 3 )
  {
    if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a2 + 8)) )
      goto LABEL_41;
    v36 = *(_QWORD *)(a2 + 328);
    if ( v36 && (unsigned __int8)sub_1021C70(v36, v18) )
    {
      v37 = sub_1021C80(*(_QWORD *)(a2 + 328));
      if ( v37 == -1 )
      {
        sub_A9E480(a2);
        goto LABEL_41;
      }
      if ( v37 != 1 )
      {
LABEL_41:
        v38 = (_QWORD *)sub_FF9B30(*(_QWORD *)(a2 + 504));
        sub_A804C0(v38);
        goto LABEL_3;
      }
    }
LABEL_47:
    v43 = (_QWORD *)sub_FF9B30(*(_QWORD *)(a2 + 504));
    sub_A804C0(v43);
    goto LABEL_48;
  }
  if ( (_DWORD)i == 10 )
  {
LABEL_48:
    sub_A7B330((__int64)v82, a2, HIDWORD(v66));
    sub_A7DA00((__int64 *)v72, (_QWORD *)a2, HIDWORD(v66));
    v44 = *a4;
    v45 = v73;
    *a4 = *(_QWORD *)v72;
    sub_A72BE0(v44, v45);
    v46 = v82[1];
    *(_DWORD *)a1 = v82[0];
    v47 = v46 & 3 | *(_BYTE *)(a1 + 4) & 0xFC;
    v48 = BYTE4(v84);
    *(_BYTE *)(a1 + 4) = v47;
    v49 = v83;
    v83 = 0;
    *(_QWORD *)(a1 + 8) = v49;
    *(_DWORD *)(a1 + 16) = v84;
    LOBYTE(v49) = v48 & 3 | *(_BYTE *)(a1 + 20) & 0xFC;
    v50 = BYTE4(v86);
    *(_BYTE *)(a1 + 20) = v49;
    v51 = v85;
    v85 = 0;
    *(_QWORD *)(a1 + 24) = v51;
    *(_DWORD *)(a1 + 32) = v86;
    LOBYTE(v51) = v50 & 3 | *(_BYTE *)(a1 + 36) & 0xFC;
    v52 = BYTE4(v88);
    *(_BYTE *)(a1 + 36) = v51;
    v53 = v87;
    v87 = 0;
    *(_QWORD *)(a1 + 40) = v53;
    *(_DWORD *)(a1 + 48) = v88;
    *(_BYTE *)(a1 + 52) = v52 & 3 | *(_BYTE *)(a1 + 52) & 0xFC;
    v54 = v89;
    v89 = 0;
    *(_QWORD *)(a1 + 56) = v54;
    v55 = v91;
    *(_DWORD *)(a1 + 64) = v90;
    LOBYTE(v54) = v55 & 3 | *(_BYTE *)(a1 + 68) & 0xFC;
    v56 = v94;
    *(_BYTE *)(a1 + 68) = v54;
    v57 = v92;
    v92 = 0;
    *(_QWORD *)(a1 + 72) = v57;
    *(_DWORD *)(a1 + 80) = v93;
    *(_BYTE *)(a1 + 84) = v56 & 3 | *(_BYTE *)(a1 + 84) & 0xFC;
    v58 = v95;
    v95 = 0;
    *(_QWORD *)(a1 + 88) = v58;
    sub_25A130((char *)&v90);
    sub_25A130((char *)&v86);
    sub_25A130((char *)v82);
    goto LABEL_6;
  }
  if ( (_DWORD)i == 11 )
  {
    *(_BYTE *)(a2 + 768) = 0;
    if ( (unsigned __int8)sub_18290A0(*(_QWORD *)(a2 + 8)) )
    {
      if ( *(_QWORD *)(a2 + 504) )
      {
        v19 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
        if ( v19 )
        {
          if ( *(_DWORD *)(v19 - 4) )
          {
            v59 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
            v60 = *(_BYTE *)(a2 + 768);
            v68 = (_QWORD *)(v59 + 9456);
            v61 = sub_180C100(v59 + 8400, 24);
            *(_QWORD *)(v61 + 8) = a2 + 768;
            *(_QWORD *)v61 = off_1C54EE8;
            *(_BYTE *)(v61 + 16) = v60;
            *(_QWORD *)v82 = v61;
            sub_A73EF0(v68, v82);
            *(_BYTE *)(a2 + 768) = sub_FFD310(
                                     *(_QWORD *)(a2 + 504),
                                     (int)v82,
                                     v62,
                                     v63,
                                     v64,
                                     v65,
                                     v66,
                                     (int)v68,
                                     i,
                                     (int)v71,
                                     v72[0],
                                     v73,
                                     v74,
                                     v75[0],
                                     v76[0],
                                     v77);
          }
        }
      }
    }
    sub_A7B330(a1, a2, HIDWORD(v66));
    sub_A7DA00((__int64 *)v82, (_QWORD *)a2, HIDWORD(v66));
    v20 = *a4;
    v21 = v83;
    *a4 = *(_QWORD *)v82;
    sub_A72BE0(v20, v21);
    goto LABEL_6;
  }
LABEL_3:
  *a5 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 864LL);
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  sub_A72BE0(*a4, a4[1]);
  *a4 = v9;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  v10 = qword_1C7F2C0;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)v82 = 0;
  v83 = 0;
  v84 = 1;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 1;
  v89 = 0;
  sub_27B950((__int64)v10, a1, &qword_1C7F280);
  *(_BYTE *)(a1 + 36) &= 0xFCu;
  v11 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 52) &= 0xFCu;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  sub_27B950((__int64)v11, a1 + 32, v82);
  *(_BYTE *)(a1 + 68) &= 0xFCu;
  v12 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 84) &= 0xFCu;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0;
  sub_27B950((__int64)v12, a1 + 64, (int *)&v86);
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v86);
  sub_182CBA0(v13, &v88);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v82);
  sub_182CBA0(v14, &v84);
LABEL_6:
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v78);
  sub_182CBA0(v15, v80);
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v74);
  sub_182CBA0(v16, v76);
  return a1;
}

