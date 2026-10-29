__int64 *__fastcall sub_A84BA0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, char a5, __int64 a6, __int64 *a7)
{
  void *v10; // rbx
  char *v11; // rax
  char *v12; // rbx
  char *v13; // r14
  _DWORD *v14; // rax
  int v15; // r9d
  int v16; // r12d
  int *v17; // rax
  int *v18; // rdx
  __int64 v19; // rax
  __m128i v20; // kr00_16
  __int64 v21; // rdi
  __int64 v22; // rsi
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rbx
  void *v33; // r13
  __int32 v34; // eax
  __int64 v35; // rax
  char v36; // dl
  char v37; // cl
  __int64 v38; // rax
  char v39; // dl
  void *v40; // r13
  char *v41; // rax
  char *v42; // rbx
  char *v43; // r12
  void *v44; // rdi
  char *v45; // rsi
  char *v46; // rax
  char *v47; // r13
  char *v48; // r14
  void *v49; // rbx
  __int32 v50; // edx
  void *v51; // rbx
  __int64 v52; // rdx
  char v53; // si
  char v54; // al
  int v55; // eax
  __int64 v56; // rax
  char *v57; // rax
  int v58; // eax
  char *v59; // rbx
  char *v60; // r13
  char *v61; // rax
  int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rax
  void *v65; // r13
  __int32 v66; // edx
  __int8 v67; // cl
  __int64 v68; // rax
  __int64 v69; // rdx
  char v70; // si
  __int64 v71; // rax
  char *v72; // rbx
  char *v73; // r13
  char *v74; // rax
  void *v75; // [rsp+10h] [rbp-108h]
  void *v76; // [rsp+10h] [rbp-108h]
  char v79; // [rsp+3Bh] [rbp-DDh]
  void *ptr; // [rsp+40h] [rbp-D8h] BYREF
  int v82[2]; // [rsp+48h] [rbp-D0h]
  int v83; // [rsp+50h] [rbp-C8h]
  __int32 v84; // [rsp+60h] [rbp-B8h] BYREF
  char v85; // [rsp+64h] [rbp-B4h]
  __int64 v86; // [rsp+68h] [rbp-B0h]
  int v87; // [rsp+70h] [rbp-A8h] BYREF
  char v88; // [rsp+74h] [rbp-A4h]
  __int64 v89; // [rsp+78h] [rbp-A0h]
  int v90; // [rsp+80h] [rbp-98h] BYREF
  char v91; // [rsp+84h] [rbp-94h]
  __int64 v92; // [rsp+88h] [rbp-90h]
  int v93; // [rsp+90h] [rbp-88h]
  char v94; // [rsp+94h] [rbp-84h]
  __int64 v95; // [rsp+98h] [rbp-80h]
  __int64 v96; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v97; // [rsp+A8h] [rbp-70h]
  __int64 v98; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v99; // [rsp+B8h] [rbp-60h]
  __m128i v100; // [rsp+C0h] [rbp-58h] BYREF
  int v101; // [rsp+D0h] [rbp-48h] BYREF
  char v102; // [rsp+D4h] [rbp-44h]
  __int64 v103; // [rsp+D8h] [rbp-40h]

  v79 = a5;
  sub_27B950((__int64)qword_1C7F2C0, a6, (int *)a4);
  ptr = (void *)sub_A729C0();
  *(_QWORD *)v82 = 8;
  v83 = 0;
  sub_A7CA80(a2, a3, (__int64)&ptr, (__int64)&qword_1C7F280);
  v85 &= 0xFCu;
  v10 = qword_1C7F2C0;
  v88 &= 0xFCu;
  v84 = 0;
  v86 = 0;
  v87 = 1;
  v89 = 0;
  if ( (*(_BYTE *)(a4 + 20) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v84, a4 + 16);
  else
    v84 = *(_DWORD *)(a4 + 16);
  sub_182CBA0(v10, &v87);
  v11 = (char *)ptr;
  v87 = 1;
  v88 &= ~1u;
  v12 = (char *)ptr + 48 * (unsigned int)v82[0];
  if ( v12 == ptr )
    goto LABEL_37;
  while ( 1 )
  {
    v13 = v11;
    if ( *((_DWORD *)v11 + 1) == 2 )
      break;
    v11 += 48;
    if ( v12 == v11 )
      goto LABEL_37;
  }
  if ( v12 == v11 )
  {
LABEL_37:
    if ( (v85 & 1) != 0 || v84 != 1 || (v88 & 1) != 0 || v87 != 1 )
    {
      sub_9AF730((__int64)qword_1C7F2C0, a6, (__int64)&v84, a6);
      v42 = (char *)ptr;
      v43 = (char *)ptr + 48 * (unsigned int)v82[0];
      if ( ptr != v43 )
      {
        while ( *((_DWORD *)v42 + 1) != 2 )
        {
          v42 += 48;
          if ( v43 == v42 )
            goto LABEL_49;
        }
        while ( v43 != v42 )
        {
          v44 = qword_1C7F2C0;
          v45 = v42 + 16;
          if ( (v42[36] & 1) != 0 || *((_DWORD *)v42 + 8) != 1 || (v88 & 1) != 0 || v87 != 1 )
          {
            sub_1848FF0(qword_1C7F2C0, v45, &v84);
          }
          else
          {
            sub_1831650(qword_1C7F2C0, v45, &v84);
            sub_182CBA0(v44, v42 + 32);
            v42[36] &= ~1u;
            *((_DWORD *)v42 + 8) = 1;
          }
          v46 = v42 + 48;
          if ( v43 == v42 + 48 )
            break;
          while ( 1 )
          {
            v42 = v46;
            if ( *((_DWORD *)v46 + 1) == 2 )
              break;
            v46 += 48;
            if ( v43 == v46 )
              goto LABEL_49;
          }
        }
      }
    }
LABEL_49:
    v96 = 0;
    v97 = 0;
    v98 = 1;
    v99 = 0;
    sub_182CBA0(qword_1C7F2C0, &v98);
    v47 = (char *)ptr;
    LODWORD(v98) = 1;
    BYTE4(v98) &= ~1u;
    v48 = (char *)ptr + 48 * (unsigned int)v82[0];
    if ( ptr == v48 )
      goto LABEL_106;
    while ( *((_DWORD *)v47 + 1) != 2 )
    {
      v47 += 48;
      if ( v48 == v47 )
        goto LABEL_106;
    }
    if ( v48 == v47 )
    {
LABEL_106:
      v58 = v96;
      if ( (_DWORD)v96 )
      {
LABEL_60:
        if ( (v96 & 0x100000000LL) != 0 || v58 != 1 || (v98 & 0x100000000LL) != 0 || (v62 = v98, (_DWORD)v98 != 1) )
        {
          v59 = (char *)ptr;
          v60 = (char *)ptr + 48 * (unsigned int)v82[0];
          if ( ptr != v60 )
          {
            while ( *((_DWORD *)v59 + 1) != 2 )
            {
              v59 += 48;
              if ( v60 == v59 )
                goto LABEL_73;
            }
            if ( v60 != v59 )
            {
              do
              {
                sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v59 + 4, (__int64)&v96, (__int64)(v59 + 16));
                v61 = v59 + 48;
                if ( v60 == v59 + 48 )
                  break;
                while ( 1 )
                {
                  v59 = v61;
                  if ( *((_DWORD *)v61 + 1) == 2 )
                    break;
                  v61 += 48;
                  if ( v60 == v61 )
                    goto LABEL_72;
                }
              }
              while ( v60 != v61 );
LABEL_72:
              v58 = v96;
            }
          }
LABEL_73:
          v62 = v98;
        }
        else
        {
          v58 = 1;
        }
        v90 = v58;
        v93 = v62;
        v91 = BYTE4(v96) & 3 | v91 & 0xFC;
        v63 = v97;
        v97 = 0;
        v92 = v63;
        v94 = BYTE4(v98) & 3 | v94 & 0xFC;
        v64 = v99;
        v99 = 0;
        v95 = v64;
        goto LABEL_75;
      }
    }
    else
    {
      do
      {
        v49 = qword_1C7F2C0;
        v100.m128i_i8[4] &= 0xFCu;
        v102 &= 0xFCu;
        v100.m128i_i32[0] = 0;
        v100.m128i_i64[1] = 0;
        v101 = 1;
        v103 = 0;
        sub_1832C70(qword_1C7F2C0, &v96, v47 + 16, &v100);
        sub_182CBA0(v49, &v101);
        v50 = v100.m128i_i32[0];
        v51 = qword_1C7F2C0;
        v100.m128i_i32[0] = v96;
        LODWORD(v96) = v50;
        v52 = v100.m128i_i64[1];
        v100.m128i_i64[1] = v97;
        v97 = v52;
        v53 = BYTE4(v96) & 1;
        v54 = v100.m128i_i8[4] & 0xFC | BYTE4(v96) & 2;
        BYTE4(v96) = v100.m128i_i8[4] & 1 | BYTE4(v96) & 0xFC | v100.m128i_i8[4] & 2;
        v100.m128i_i8[4] = v53 | v54;
        v55 = v98;
        LODWORD(v98) = 1;
        v101 = v55;
        v56 = v99;
        v99 = v103;
        v103 = v56;
        LOBYTE(v52) = BYTE4(v98) & 0xFC | v102 & 2;
        v102 = BYTE4(v98) & 1 | BYTE4(v98) & 2 | v102 & 0xFC;
        BYTE4(v98) = v52;
        sub_182CBA0(qword_1C7F2C0, &v100);
        sub_182CBA0(v51, &v101);
        v57 = v47 + 48;
        if ( v48 == v47 + 48 )
          break;
        while ( 1 )
        {
          v47 = v57;
          if ( *((_DWORD *)v57 + 1) == 2 )
            break;
          v57 += 48;
          if ( v48 == v57 )
            goto LABEL_59;
        }
      }
      while ( v48 != v57 );
LABEL_59:
      v58 = v96;
      if ( (_DWORD)v96 )
        goto LABEL_60;
    }
    v90 = 0;
    v91 &= 0xFCu;
    v94 &= 0xFCu;
    v92 = 0;
    v93 = 1;
    v95 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v90, &qword_1C7F280);
LABEL_75:
    sub_25A130((char *)&v96);
    if ( (v91 & 1) != 0 || v90 != 1 || (v94 & 1) != 0 || v93 != 1 )
    {
      sub_27B620((__int64)&v96, a6, (__int64)&v90);
      v65 = qword_1C7F2C0;
      v100.m128i_i32[0] = 0;
      v100.m128i_i8[4] &= 0xFCu;
      v102 &= 0xFCu;
      v100.m128i_i64[1] = 0;
      v101 = 1;
      v103 = 0;
      if ( a5 )
        sub_1849700(qword_1C7F2C0, &v96, &v100);
      else
        sub_18495B0(qword_1C7F2C0, &v96, &v100);
      sub_182CBA0(v65, &v101);
      v66 = v100.m128i_i32[0];
      v67 = v100.m128i_i8[4];
      v100.m128i_i32[0] = *(_DWORD *)a6;
      v68 = *(_QWORD *)(a6 + 8);
      *(_DWORD *)a6 = v66;
      v69 = v100.m128i_i64[1];
      v100.m128i_i64[1] = v68;
      LOBYTE(v68) = *(_BYTE *)(a6 + 4);
      *(_QWORD *)(a6 + 8) = v69;
      LOBYTE(v69) = v67;
      v67 &= ~2u;
      LOBYTE(v69) = v68 & 0xFC | v69 & 2;
      v70 = *(_BYTE *)(a6 + 20);
      v100.m128i_i8[4] = v68 & 1 | v67 & 0xFE | v68 & 2;
      LODWORD(v68) = *(_DWORD *)(a6 + 16);
      *(_BYTE *)(a6 + 4) = v67 & 1 | v69;
      v101 = v68;
      v71 = *(_QWORD *)(a6 + 24);
      *(_QWORD *)(a6 + 24) = v103;
      v103 = v71;
      LOBYTE(v71) = v102;
      *(_DWORD *)(a6 + 16) = 1;
      *(_BYTE *)(a6 + 20) = v70 & 0xFC | v71 & 2;
      v102 = v70 & 1 | v70 & 2 | v71 & 0xFC;
      sub_25A130(v100.m128i_i8);
      sub_25A130((char *)&v96);
    }
    v16 = 1;
    sub_25A130((char *)&v90);
    goto LABEL_11;
  }
  while ( 1 )
  {
    v14 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*a2 + 32LL) + 8LL * *((unsigned int *)v13 + 2))) + 24);
    if ( !v14 || *v14 != 5 || v14[1] != 1 )
      break;
    BYTE4(v96) &= 0xFCu;
    v33 = qword_1C7F2C0;
    BYTE4(v98) &= 0xFCu;
    LODWORD(v96) = 0;
    v97 = 0;
    LODWORD(v98) = 1;
    v99 = 0;
    if ( (v13[36] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v96, v13 + 32);
    else
      LODWORD(v96) = *((_DWORD *)v13 + 8);
    sub_182CBA0(v33, &v98);
    LODWORD(v98) = 1;
    BYTE4(v98) &= ~1u;
    v100.m128i_i8[4] &= 0xFCu;
    v102 &= 0xFCu;
    v100.m128i_i32[0] = 0;
    v100.m128i_i64[1] = 0;
    v101 = 1;
    v103 = 0;
    v75 = qword_1C7F2C0;
    sub_1836B00(qword_1C7F2C0, &v84, &v96, &v100);
    sub_182CBA0(v75, &v101);
    v34 = v84;
    v84 = v100.m128i_i32[0];
    v100.m128i_i32[0] = v34;
    v35 = v86;
    v86 = v100.m128i_i64[1];
    v100.m128i_i64[1] = v35;
    v76 = qword_1C7F2C0;
    v36 = v100.m128i_i8[4] & 1;
    v37 = v85 & 0xFC | v100.m128i_i8[4] & 2;
    v100.m128i_i8[4] = v85 & 1 | v100.m128i_i8[4] & 0xFC | v85 & 2;
    v85 = v37 | v36;
    v101 = v87;
    v38 = v89;
    v89 = v103;
    v103 = v38;
    v87 = 1;
    v39 = v88 & 0xFC | v102 & 2;
    v102 = v88 & 1 | v88 & 2 | v102 & 0xFC;
    v88 = v39;
    sub_182CBA0(qword_1C7F2C0, &v100);
    sub_182CBA0(v76, &v101);
    v40 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v96);
    sub_182CBA0(v40, &v98);
    v41 = v13 + 48;
    if ( v12 != v13 + 48 )
    {
      while ( 1 )
      {
        v13 = v41;
        if ( *((_DWORD *)v41 + 1) == 2 )
          break;
        v41 += 48;
        if ( v12 == v41 )
          goto LABEL_37;
      }
      if ( v12 != v41 )
        continue;
    }
    goto LABEL_37;
  }
  v16 = 0;
LABEL_11:
  if ( !v82[1] )
    goto LABEL_14;
  v17 = (int *)ptr;
  v18 = (int *)((char *)ptr + 48 * (unsigned int)v82[0]);
  if ( ptr == v18 )
  {
LABEL_13:
    if ( v17[4] >= 0 )
      goto LABEL_14;
    goto LABEL_97;
  }
  while ( v17[1] != 2 )
  {
    v17 += 12;
    if ( v18 == v17 )
      goto LABEL_13;
  }
  if ( v17[4] < 0 )
  {
LABEL_97:
    sub_1831620(qword_1C7F2C0, a6);
    v72 = (char *)ptr;
    v79 = a5 ^ 1;
    v73 = (char *)ptr + 48 * (unsigned int)v82[0];
    if ( ptr != v73 )
    {
      while ( *((_DWORD *)v72 + 1) != 2 )
      {
        v72 += 48;
        if ( v73 == v72 )
          goto LABEL_14;
      }
      while ( v73 != v72 )
      {
        sub_1831620(qword_1C7F2C0, v72 + 16);
        v74 = v72 + 48;
        if ( v73 == v72 + 48 )
          break;
        while ( 1 )
        {
          v72 = v74;
          if ( *((_DWORD *)v74 + 1) == 2 )
            break;
          v74 += 48;
          if ( v73 == v74 )
            goto LABEL_14;
        }
      }
    }
  }
LABEL_14:
  v19 = a2[1];
  *a1 = 0;
  a1[1] = v19;
  sub_A846A0(&v100, (__int64)a2, (__int64 *)&ptr, (__int64)&qword_1C7F2A0, v16, v15);
  v20 = v100;
  v21 = *a7;
  v22 = a7[1];
  if ( v100.m128i_i64[0] )
  {
    ++*(_DWORD *)(v100.m128i_i64[0] + 8);
    sub_A72BE0(v21, v22);
    *a7 = v20.m128i_i64[0];
    if ( (*(_DWORD *)(v20.m128i_i64[0] + 8))-- == 1 )
      sub_15D7BC0(v20.m128i_i64[1], v20.m128i_i64[0]);
  }
  else
  {
    sub_A72BE0(v21, v22);
    *a7 = 0;
  }
  v27 = a2[3];
  if ( v79 )
  {
    if ( !v27 )
    {
      sub_16669E0(a2 + 2);
      v27 = a2[3];
    }
  }
  else if ( !v27 )
  {
    sub_16669E0(a2 + 2);
    v27 = a2[3];
  }
  sub_166A700(v27, a6, v16, v23, v24, v25);
  v28 = sub_15E1B70(a2[2]);
  v29 = v28;
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  sub_A72BE0(*a1, a1[1]);
  v30 = *a2;
  *a1 = v29;
  sub_B6F780(*(_QWORD *)(v30 + 16));
  v31 = *(_QWORD *)(*a2 + 16LL);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v31 + 7488) + 48LL))(*(_QWORD *)(v31 + 7488), *a1);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v31 + 7488) + 64LL))(*(_QWORD *)(v31 + 7488));
  sub_25A130((char *)&v84);
  if ( ptr )
    sub_A73030((char *)ptr, v82[0]);
  return a1;
}

