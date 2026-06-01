__int64 *__fastcall sub_830C60(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, char a5, __int64 a6, _QWORD *a7)
{
  _BYTE *v10; // rax
  void *v11; // rbx
  char *v12; // rax
  char *v13; // rbx
  char *v14; // r14
  _DWORD *v15; // rax
  int v16; // r9d
  int v17; // r12d
  int *v18; // rax
  int *v19; // rdx
  __int64 v20; // rax
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  _QWORD *v24; // rax
  __m128i v25; // kr00_16
  __int64 v26; // rsi
  __int64 v27; // rdi
  int v28; // eax
  bool v29; // zf
  int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  void *v35; // r12
  __int32 v36; // eax
  __int64 v37; // rax
  char v38; // dl
  char v39; // cl
  __int64 v40; // rax
  char v41; // dl
  void *v42; // r12
  char *v43; // rax
  void *v44; // rdi
  char *v45; // rbx
  char *v46; // r12
  void *v47; // rdi
  char *v48; // rsi
  char *v49; // rax
  void *v50; // r12
  int v51; // eax
  void *v52; // r14
  void *v53; // r14
  void *v54; // r13
  __int8 v55; // cl
  __int32 v56; // eax
  __int64 v57; // rax
  __int8 v58; // dl
  char v59; // si
  char v60; // dl
  char v61; // si
  __int64 v62; // rax
  char *v63; // rbx
  char *v64; // r13
  char *v65; // rax
  void *v66; // [rsp+0h] [rbp-118h]
  void *v67; // [rsp+10h] [rbp-108h]
  void *v68; // [rsp+10h] [rbp-108h]
  char v71; // [rsp+3Bh] [rbp-DDh]
  void *v73; // [rsp+40h] [rbp-D8h] BYREF
  int v74[2]; // [rsp+48h] [rbp-D0h]
  int v75; // [rsp+50h] [rbp-C8h]
  __int32 v76; // [rsp+60h] [rbp-B8h] BYREF
  char v77; // [rsp+64h] [rbp-B4h]
  __int64 v78; // [rsp+68h] [rbp-B0h]
  int v79; // [rsp+70h] [rbp-A8h] BYREF
  char v80; // [rsp+74h] [rbp-A4h]
  __int64 v81; // [rsp+78h] [rbp-A0h]
  int v82; // [rsp+80h] [rbp-98h] BYREF
  char v83; // [rsp+84h] [rbp-94h]
  int v84; // [rsp+90h] [rbp-88h]
  char v85; // [rsp+94h] [rbp-84h]
  __int32 v86; // [rsp+A0h] [rbp-78h] BYREF
  char v87; // [rsp+A4h] [rbp-74h]
  __int64 v88; // [rsp+A8h] [rbp-70h]
  int v89; // [rsp+B0h] [rbp-68h] BYREF
  char v90; // [rsp+B4h] [rbp-64h]
  __int64 v91; // [rsp+B8h] [rbp-60h]
  __m128i v92; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v93; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v94; // [rsp+D8h] [rbp-40h]

  v71 = a5;
  sub_27B950((__int64)qword_1C7F2C0, a6, (int *)a4);
  v10 = (_BYTE *)sub_186B270(0x180u);
  v10[20] &= 0xFCu;
  v10[36] &= 0xFCu;
  v10[68] &= 0xFCu;
  v10[84] &= 0xFCu;
  v10[116] &= 0xFCu;
  v10[132] &= 0xFCu;
  v10[164] &= 0xFCu;
  v10[180] &= 0xFCu;
  v10[212] &= 0xFCu;
  *(_QWORD *)v10 = 0;
  *((_QWORD *)v10 + 3) = 0;
  *((_QWORD *)v10 + 5) = 0;
  *((_QWORD *)v10 + 6) = 0;
  *((_QWORD *)v10 + 9) = 0;
  *((_QWORD *)v10 + 11) = 0;
  *((_QWORD *)v10 + 12) = 0;
  *((_QWORD *)v10 + 15) = 0;
  *((_QWORD *)v10 + 17) = 0;
  *((_QWORD *)v10 + 18) = 0;
  *((_QWORD *)v10 + 21) = 0;
  *((_QWORD *)v10 + 23) = 0;
  *((_QWORD *)v10 + 24) = 0;
  *((_QWORD *)v10 + 27) = 0;
  v10[228] &= 0xFCu;
  v10[260] &= 0xFCu;
  v10[276] &= 0xFCu;
  v10[308] &= 0xFCu;
  v10[324] &= 0xFCu;
  v10[356] &= 0xFCu;
  v10[372] &= 0xFCu;
  *((_QWORD *)v10 + 29) = 0;
  *((_QWORD *)v10 + 30) = 0;
  *((_QWORD *)v10 + 33) = 0;
  *((_QWORD *)v10 + 35) = 0;
  *((_QWORD *)v10 + 36) = 0;
  *((_QWORD *)v10 + 39) = 0;
  *((_QWORD *)v10 + 41) = 0;
  *((_QWORD *)v10 + 42) = 0;
  *((_QWORD *)v10 + 45) = 0;
  *((_QWORD *)v10 + 47) = 0;
  *((_DWORD *)v10 + 4) = 0;
  *((_DWORD *)v10 + 16) = 0;
  *((_DWORD *)v10 + 28) = 0;
  *((_DWORD *)v10 + 40) = 0;
  *((_DWORD *)v10 + 52) = 0;
  *((_DWORD *)v10 + 64) = 0;
  *((_DWORD *)v10 + 76) = 0;
  *((_DWORD *)v10 + 88) = 0;
  *((_DWORD *)v10 + 8) = 1;
  *((_DWORD *)v10 + 20) = 1;
  *((_DWORD *)v10 + 32) = 1;
  *((_DWORD *)v10 + 44) = 1;
  *((_DWORD *)v10 + 56) = 1;
  *((_DWORD *)v10 + 68) = 1;
  *((_DWORD *)v10 + 80) = 1;
  *((_DWORD *)v10 + 92) = 1;
  v73 = v10;
  *(_QWORD *)v74 = 8;
  v75 = 0;
  sub_830100(a2, a3, (unsigned int *)&v73, (__int64)&qword_1C7F280);
  v77 &= 0xFCu;
  v11 = qword_1C7F2C0;
  v80 &= 0xFCu;
  v76 = 0;
  v78 = 0;
  v79 = 1;
  v81 = 0;
  if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v76, a4 + 16);
  else
    v76 = *(_DWORD *)(a4 + 16);
  sub_182CBA0(v11, &v79);
  v12 = (char *)v73;
  v79 = 1;
  v80 &= ~1u;
  v13 = (char *)v73 + 48 * (unsigned int)v74[0];
  if ( v13 == v73 )
    goto LABEL_39;
  while ( 1 )
  {
    v14 = v12;
    if ( *((_DWORD *)v12 + 1) == 2 )
      break;
    v12 += 48;
    if ( v13 == v12 )
      goto LABEL_39;
  }
  if ( v13 == v12 )
  {
LABEL_39:
    if ( (v77 & 1) != 0 || v76 != 1 || (v80 & 1) != 0 || v79 != 1 )
    {
      v44 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a6 + 20) & 1) != 0 || *(_DWORD *)(a6 + 16) != 1 || (v80 & 1) != 0 || v79 != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, a6, &v76);
      }
      else
      {
        sub_1831650(qword_1C7F2C0, a6, &v76);
        sub_182CBA0(v44, a6 + 16);
        *(_BYTE *)(a6 + 20) &= ~1u;
        *(_DWORD *)(a6 + 16) = 1;
      }
      v45 = (char *)v73;
      v46 = (char *)v73 + 48 * (unsigned int)v74[0];
      if ( v73 != v46 )
      {
        while ( *((_DWORD *)v45 + 1) != 2 )
        {
          v45 += 48;
          if ( v46 == v45 )
            goto LABEL_54;
        }
        while ( v46 != v45 )
        {
          v47 = qword_1C7F2C0;
          v48 = v45 + 16;
          if ( (v45[36] & 1) != 0 || *((_DWORD *)v45 + 8) != 1 || (v80 & 1) != 0 || v79 != 1 )
          {
            sub_1848FF0(qword_1C7F2C0, v48, &v76);
          }
          else
          {
            sub_1831650(qword_1C7F2C0, v48, &v76);
            sub_182CBA0(v47, v45 + 32);
            v45[36] &= ~1u;
            *((_DWORD *)v45 + 8) = 1;
          }
          v49 = v45 + 48;
          if ( v46 == v45 + 48 )
            break;
          while ( 1 )
          {
            v45 = v49;
            if ( *((_DWORD *)v49 + 1) == 2 )
              break;
            v49 += 48;
            if ( v46 == v49 )
              goto LABEL_54;
          }
        }
      }
    }
LABEL_54:
    sub_829C50((__int64)&v82, (__int64)a2, (__int64 *)&v73);
    if ( (v83 & 1) != 0 || v82 != 1 || (v85 & 1) != 0 || v84 != 1 )
    {
      if ( a5 )
      {
        v50 = qword_1C7F2C0;
        v92 = 0u;
        v93 = 1;
        v94 = 0;
        if ( (*(_BYTE *)(a6 + 4) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v92, a6);
        else
          v92.m128i_i32[0] = *(_DWORD *)a6;
        if ( (*(_BYTE *)(a6 + 20) & 1) != 0 )
        {
          sub_182C690(v50, &v93, a6 + 16);
        }
        else
        {
          v51 = *(_DWORD *)(a6 + 16);
          BYTE4(v93) &= ~1u;
          LODWORD(v93) = v51;
        }
        sub_3ED4D0((__int64)qword_1C7F2C0, v92.m128i_i32, (__int64)&v82, (__int64)&v92);
        v87 &= 0xFCu;
        v52 = qword_1C7F2C0;
        v90 &= 0xFCu;
        v86 = 0;
        v88 = 0;
        v89 = 1;
        v91 = 0;
        if ( (v92.m128i_i8[4] & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v86, &v92);
        else
          v86 = v92.m128i_i32[0];
        if ( (v93 & 0x100000000LL) != 0 )
        {
          sub_182C690(v52, &v89, &v93);
        }
        else
        {
          v90 &= ~1u;
          v89 = v93;
        }
        v53 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v92);
        sub_182CBA0(v53, &v93);
        v92.m128i_i8[4] &= 0xFCu;
        BYTE4(v93) &= 0xFCu;
        v92.m128i_i32[0] = 0;
        v92.m128i_i64[1] = 0;
        LODWORD(v93) = 1;
        v94 = 0;
        v66 = qword_1C7F2C0;
        sub_1849700(qword_1C7F2C0, &v86, &v92);
        sub_182CBA0(v66, &v93);
      }
      else
      {
        sub_27B620((__int64)&v86, a6, (__int64)&v82);
        v54 = qword_1C7F2C0;
        v92.m128i_i8[4] &= 0xFCu;
        BYTE4(v93) &= 0xFCu;
        v92.m128i_i32[0] = 0;
        v92.m128i_i64[1] = 0;
        LODWORD(v93) = 1;
        v94 = 0;
        sub_18495B0(qword_1C7F2C0, &v86, &v92);
        sub_182CBA0(v54, &v93);
      }
      v55 = v92.m128i_i8[4];
      v56 = *(_DWORD *)a6;
      *(_DWORD *)a6 = v92.m128i_i32[0];
      v92.m128i_i32[0] = v56;
      v57 = *(_QWORD *)(a6 + 8);
      *(_QWORD *)(a6 + 8) = v92.m128i_i64[1];
      v58 = v55;
      v55 &= ~2u;
      v92.m128i_i64[1] = v57;
      v59 = *(_BYTE *)(a6 + 4);
      LOBYTE(v57) = v59 & 2;
      v59 &= ~2u;
      LOBYTE(v57) = v59 & 1 | (v55 | v57) & 0xFE;
      v60 = v59 & 0xFE | v58 & 2;
      v61 = *(_BYTE *)(a6 + 20);
      v92.m128i_i8[4] = v57;
      LODWORD(v57) = *(_DWORD *)(a6 + 16);
      *(_BYTE *)(a6 + 4) = v55 & 1 | v60;
      LODWORD(v93) = v57;
      v62 = *(_QWORD *)(a6 + 24);
      *(_QWORD *)(a6 + 24) = v94;
      v94 = v62;
      LOBYTE(v62) = BYTE4(v93);
      *(_DWORD *)(a6 + 16) = 1;
      *(_BYTE *)(a6 + 20) = v61 & 0xFC | v62 & 2;
      BYTE4(v93) = v61 & 1 | v61 & 2 | v62 & 0xFC;
      sub_25A130(v92.m128i_i8);
      sub_25A130((char *)&v86);
    }
    v17 = 1;
    sub_25A130((char *)&v82);
  }
  else
  {
    while ( 1 )
    {
      v15 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(a2[11] + 8LL * *((unsigned int *)v14 + 2))) + 24);
      if ( !v15 || *v15 != 5 || v15[1] != 1 )
        break;
      v87 &= 0xFCu;
      v35 = qword_1C7F2C0;
      v90 &= 0xFCu;
      v86 = 0;
      v88 = 0;
      v89 = 1;
      v91 = 0;
      if ( (v14[36] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v86, v14 + 32);
      else
        v86 = *((_DWORD *)v14 + 8);
      sub_182CBA0(v35, &v89);
      v89 = 1;
      v90 &= ~1u;
      v92.m128i_i8[4] &= 0xFCu;
      BYTE4(v93) &= 0xFCu;
      v92.m128i_i32[0] = 0;
      v92.m128i_i64[1] = 0;
      LODWORD(v93) = 1;
      v94 = 0;
      v67 = qword_1C7F2C0;
      sub_1836B00(qword_1C7F2C0, &v76, &v86, &v92);
      sub_182CBA0(v67, &v93);
      v36 = v76;
      v76 = v92.m128i_i32[0];
      v92.m128i_i32[0] = v36;
      v37 = v78;
      v78 = v92.m128i_i64[1];
      v92.m128i_i64[1] = v37;
      v68 = qword_1C7F2C0;
      v38 = v92.m128i_i8[4] & 1;
      v39 = v77 & 0xFC | v92.m128i_i8[4] & 2;
      v92.m128i_i8[4] = v77 & 1 | v92.m128i_i8[4] & 0xFC | v77 & 2;
      v77 = v39 | v38;
      LODWORD(v93) = v79;
      v40 = v81;
      v81 = v94;
      v94 = v40;
      v79 = 1;
      v41 = v80 & 0xFC | BYTE4(v93) & 2;
      BYTE4(v93) = v80 & 1 | v80 & 2 | BYTE4(v93) & 0xFC;
      v80 = v41;
      sub_182CBA0(qword_1C7F2C0, &v92);
      sub_182CBA0(v68, &v93);
      v42 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v86);
      sub_182CBA0(v42, &v89);
      v43 = v14 + 48;
      if ( v13 != v14 + 48 )
      {
        while ( 1 )
        {
          v14 = v43;
          if ( *((_DWORD *)v43 + 1) == 2 )
            break;
          v43 += 48;
          if ( v13 == v43 )
            goto LABEL_39;
        }
        if ( v13 != v43 )
          continue;
      }
      goto LABEL_39;
    }
    v17 = 0;
  }
  if ( v74[1] )
  {
    v18 = (int *)v73;
    v19 = (int *)((char *)v73 + 48 * (unsigned int)v74[0]);
    if ( v73 == v19 )
    {
LABEL_13:
      if ( v18[4] >= 0 )
        goto LABEL_14;
      goto LABEL_90;
    }
    while ( v18[1] != 2 )
    {
      v18 += 12;
      if ( v19 == v18 )
        goto LABEL_13;
    }
    if ( v18[4] < 0 )
    {
LABEL_90:
      sub_1831620(qword_1C7F2C0, a6);
      v63 = (char *)v73;
      v71 = a5 ^ 1;
      v64 = (char *)v73 + 48 * (unsigned int)v74[0];
      if ( v73 != v64 )
      {
        while ( *((_DWORD *)v63 + 1) != 2 )
        {
          v63 += 48;
          if ( v64 == v63 )
            goto LABEL_14;
        }
        while ( v64 != v63 )
        {
          sub_1831620(qword_1C7F2C0, v63 + 16);
          v65 = v63 + 48;
          if ( v64 == v63 + 48 )
            break;
          while ( 1 )
          {
            v63 = v65;
            if ( *((_DWORD *)v65 + 1) == 2 )
              break;
            v65 += 48;
            if ( v64 == v65 )
              goto LABEL_14;
          }
        }
      }
    }
  }
LABEL_14:
  v20 = a2[9];
  *a1 = 0;
  a1[1] = v20;
  sub_82C4A0(&v92, (__int64)a2, (__int64 *)&v73, (unsigned __int64 *)&qword_1C7F2A0, v17, v16);
  v24 = a7;
  v25 = v92;
  v26 = *a7;
  v27 = a7[1];
  if ( !v92.m128i_i64[0] )
  {
    if ( v26 )
    {
      v29 = (*(_DWORD *)(v26 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(v27, v26);
      v24 = a7;
    }
    *v24 = 0;
LABEL_19:
    v31 = a2[105];
    if ( v71 )
      goto LABEL_20;
    goto LABEL_75;
  }
  v28 = *(_DWORD *)(v92.m128i_i64[0] + 8);
  *(_DWORD *)(v92.m128i_i64[0] + 8) = v28 + 1;
  if ( v26 )
  {
    v29 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v29 )
      sub_15D7BC0(v27, v26);
    *a7 = v25.m128i_i64[0];
    v30 = *(_DWORD *)(v25.m128i_i64[0] + 8) - 1;
    *(_DWORD *)(v25.m128i_i64[0] + 8) = v30;
    if ( v30 )
      goto LABEL_19;
  }
  else
  {
    v21 = (int)a7;
    *a7 = v25.m128i_i64[0];
    *(_DWORD *)(v25.m128i_i64[0] + 8) = v28;
    if ( v28 )
      goto LABEL_19;
  }
  sub_15D7BC0(v25.m128i_i64[1], v25.m128i_i64[0]);
  v31 = a2[105];
  if ( v71 )
  {
LABEL_20:
    if ( !v31 )
    {
      sub_16669E0(a2 + 104);
      v31 = a2[105];
    }
    goto LABEL_22;
  }
LABEL_75:
  if ( !v31 )
  {
    sub_16669E0(a2 + 104);
    v31 = a2[105];
  }
LABEL_22:
  sub_166A700(v31, a6, v17, v21, v22, v23);
  v32 = sub_15E1B70(a2[104]);
  v33 = v32;
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  sub_828D40(*a1, a1[1]);
  *a1 = v33;
  sub_7E58C0((__int64)a2, v33);
  sub_25A130((char *)&v76);
  if ( v73 )
    sub_828DB0((char *)v73, v74[0]);
  return a1;
}

