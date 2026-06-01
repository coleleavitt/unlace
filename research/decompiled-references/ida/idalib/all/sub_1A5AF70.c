__int64 __fastcall sub_1A5AF70(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r12
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r15
  char v15; // dl
  __int64 v16; // rsi
  char *v17; // rcx
  char *v18; // rdi
  char *v19; // rax
  char *v20; // rsi
  char *v21; // rax
  char *v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __m128i v25; // xmm1
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // eax
  int v29; // r15d
  unsigned __int64 *v30; // rbp
  __int64 v31; // rdx
  unsigned __int64 v32; // r13
  bool v33; // zf
  unsigned __int64 v34; // rdx
  unsigned __int8 v35; // al
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r15
  unsigned __int64 v43; // r13
  unsigned __int64 v44; // rcx
  __int64 v45; // r9
  __int64 v46; // r14
  char v47; // dl
  __int64 v48; // rsi
  char *v49; // rcx
  __int64 *v50; // rdi
  char *v51; // rax
  char *v52; // rcx
  char *v53; // rax
  char *v54; // rsi
  unsigned __int64 v55; // rax
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  void *v60; // r13
  signed __int64 v61; // rbp
  __int64 v62; // r15
  char *v63; // rdi
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  unsigned __int8 v67; // di
  bool v68; // cf
  unsigned __int8 v69; // al
  unsigned __int8 v71; // [rsp+25h] [rbp-1B3h]
  unsigned __int8 v72; // [rsp+25h] [rbp-1B3h]
  unsigned __int8 v73; // [rsp+25h] [rbp-1B3h]
  unsigned __int8 v74; // [rsp+25h] [rbp-1B3h]
  unsigned __int8 v75; // [rsp+26h] [rbp-1B2h]
  unsigned __int8 v76; // [rsp+27h] [rbp-1B1h]
  unsigned __int64 v77; // [rsp+38h] [rbp-1A0h] BYREF
  void *ptr; // [rsp+40h] [rbp-198h] BYREF
  __int64 v79; // [rsp+48h] [rbp-190h]
  _BYTE v80[64]; // [rsp+50h] [rbp-188h] BYREF
  void *v81; // [rsp+90h] [rbp-148h] BYREF
  __int64 v82; // [rsp+98h] [rbp-140h]
  int v83; // [rsp+A0h] [rbp-138h]
  char v84; // [rsp+A4h] [rbp-134h]
  unsigned __int64 v85; // [rsp+A8h] [rbp-130h] BYREF
  unsigned __int64 v86; // [rsp+F0h] [rbp-E8h] BYREF
  void *src; // [rsp+F8h] [rbp-E0h]
  __int64 v88; // [rsp+100h] [rbp-D8h]
  __int64 v89; // [rsp+108h] [rbp-D0h] BYREF
  void *v90[2]; // [rsp+148h] [rbp-90h]
  __int64 v91; // [rsp+158h] [rbp-80h]
  __int64 v92; // [rsp+160h] [rbp-78h]
  __m128i v93; // [rsp+168h] [rbp-70h]
  __int64 v94; // [rsp+178h] [rbp-60h]
  __int64 v95; // [rsp+180h] [rbp-58h]
  __int64 v96; // [rsp+188h] [rbp-50h]
  __int16 v97; // [rsp+190h] [rbp-48h]
  char v98; // [rsp+192h] [rbp-46h]
  __int16 v99; // [rsp+193h] [rbp-45h]
  char v100; // [rsp+195h] [rbp-43h]
  char v101; // [rsp+196h] [rbp-42h]
  char v102; // [rsp+197h] [rbp-41h]

  ptr = v80;
  v79 = 0x800000000LL;
  v81 = &v85;
  v82 = 0x100000008LL;
  v83 = 0;
  v84 = 1;
  v85 = a3;
  v86 = sub_B946F0(a3, a2, a3, a4, a5, a6);
  v10 = v9;
  if ( v9 != v86 )
  {
    while ( 1 )
    {
      v11 = sub_B8EEF0(&v86);
      v14 = *(_QWORD *)(sub_B99AD0(v11) + 88);
      if ( (*(_BYTE *)(v11 + 8) & 6) == 0 || sub_1A42350(a1, v11, 0, v12, v7, v13) )
        break;
LABEL_20:
      if ( (v86 & 4) != 0 && (v86 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v23 = *(_QWORD *)((v86 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        v86 = v23;
      }
      else
      {
        v86 = 0;
        v23 = 0;
      }
      if ( v10 == v23 )
        goto LABEL_24;
    }
    v15 = v84;
    v16 = v14 + 48;
    if ( !v14 )
      v16 = 0;
    if ( !v84 )
      goto LABEL_74;
    v17 = (char *)v81;
    v8 = 8LL * HIDWORD(v82);
    v18 = (char *)v81 + v8;
    if ( v81 != (char *)v81 + v8 )
    {
      v19 = (char *)v81;
      if ( v16 == *(_QWORD *)v81 )
      {
LABEL_90:
        v15 = 0;
        goto LABEL_13;
      }
      while ( 1 )
      {
        v19 += 8;
        if ( v18 == v19 )
          break;
        if ( v16 == *(_QWORD *)v19 )
          goto LABEL_90;
      }
    }
    if ( HIDWORD(v82) < (unsigned int)v82 )
    {
      ++HIDWORD(v82);
      *(_QWORD *)v18 = v16;
      v17 = (char *)v81;
      v19 = (char *)v81 + v8;
    }
    else
    {
LABEL_74:
      v19 = (char *)sub_2236760(&v81, v16);
      v17 = (char *)v81;
      if ( !v84 )
      {
        v20 = (char *)v81 + 8 * (unsigned int)v82;
LABEL_14:
        if ( v20 != v19 && *(_QWORD *)v19 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v21 = v19 + 8;
          do
          {
            v22 = v21;
            if ( v21 == v20 )
              break;
            v21 += 8;
          }
          while ( *(_QWORD *)v22 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( v15 )
        {
          v64 = (unsigned int)v79;
          v65 = (unsigned int)v79 + 1LL;
          if ( v65 > HIDWORD(v79) )
          {
            sub_2237220(&ptr, v80, v65, 8);
            v64 = (unsigned int)v79;
          }
          *((_QWORD *)ptr + v64) = v14;
          LODWORD(v79) = v79 + 1;
        }
        goto LABEL_20;
      }
    }
LABEL_13:
    v20 = &v17[8 * HIDWORD(v82)];
    goto LABEL_14;
  }
LABEL_24:
  v24 = *(_QWORD *)(a2 + 152);
  v25 = _mm_loadu_si128((const __m128i *)(a2 + 120));
  src = &v89;
  v88 = 0x800000000LL;
  v26 = *(_QWORD *)(a2 + 112);
  v96 = v24;
  LOWORD(v24) = *(_WORD *)(a2 + 160);
  v92 = v26;
  v27 = *(_QWORD *)(a2 + 136);
  v86 = 0;
  v94 = v27;
  LOBYTE(v27) = *(_BYTE *)(a2 + 162);
  *(_OWORD *)v90 = 0;
  v98 = v27;
  v99 = 0;
  LOBYTE(v27) = *(_BYTE *)(a2 + 165);
  v91 = 0;
  v100 = v27;
  LOBYTE(v27) = *(_BYTE *)(a2 + 167);
  v93 = v25;
  v102 = v27;
  v28 = v79;
  v95 = 0;
  v97 = v24;
  v101 = 0;
  v71 = 0;
  v75 = 0;
  v76 = 0;
  if ( (_DWORD)v79 )
  {
    while ( 1 )
    {
      v29 = *(_DWORD *)(a2 + 16);
      v30 = &v86;
      v31 = *((_QWORD *)ptr + v28 - 1);
      LODWORD(v79) = v28 - 1;
      if ( !v29 )
        v30 = (unsigned __int64 *)a2;
      v32 = v31 + 48;
      v33 = v31 == 0;
      v34 = 0;
      if ( !v33 )
        v34 = v32;
      v35 = sub_1A5A1A0(a1, (__int64)v30, v34, v28, v7, v8, 0.0, *(double *)v25.m128i_i64);
      if ( v35 )
      {
        v72 = v35;
        sub_1A43500((__int64)v30);
        v7 = v72;
        if ( *(_DWORD *)v30 == 2 )
        {
          v66 = sub_16C47B0(*(_QWORD *)v30[1] & 0xFFFFFFFFFFFFFFF8LL);
          v67 = v75;
          v7 = v72;
          v68 = (*(_BYTE *)(v66 + 28) & 0x7Fu) - 58 < 5;
          v69 = v76;
          if ( v68 )
            v69 = v72;
          else
            v67 = v72;
          v75 = v67;
          v76 = v69;
        }
        else
        {
          v75 = v72;
        }
        v71 = v7;
        if ( !v29 )
          goto LABEL_53;
        v59 = *(unsigned int *)(a2 + 16);
        v60 = src;
        v61 = 8LL * (unsigned int)v88;
        v62 = v61 >> 3;
        if ( (v61 >> 3) + v59 > (unsigned __int64)*(unsigned int *)(a2 + 20) )
        {
          sub_2237220(a2 + 8, a2 + 24, v62 + v59, 8);
          v59 = *(unsigned int *)(a2 + 16);
          v7 = v71;
        }
        if ( v61 )
        {
          v73 = v7;
          memcpy((void *)(*(_QWORD *)(a2 + 8) + 8 * v59), v60, v61);
          LODWORD(v59) = *(_DWORD *)(a2 + 16);
          v7 = v73;
        }
        v63 = (char *)v90[0];
        *(_DWORD *)a2 = 2;
        *(_DWORD *)(a2 + 16) = v59 + v62;
        LODWORD(v86) = 0;
        LODWORD(v88) = 0;
        if ( v63 )
        {
          v74 = v7;
          sub_1A38860(v63);
          v7 = v74;
        }
        v28 = v79;
        v71 = v7;
        *(_OWORD *)v90 = 0;
        v101 = 0;
        if ( !(_DWORD)v79 )
        {
LABEL_54:
          if ( v71 )
          {
            if ( (v76 & v75) != 0 )
            {
              v71 = v76 & v75;
              *(_QWORD *)a2 = 0x400000005LL;
            }
            else
            {
              sub_1A43500(a2);
            }
          }
          break;
        }
      }
      else
      {
        v40 = sub_B946F0(v32, (__int64)v30, v36, v37, v38, v39);
        v42 = v41;
        v77 = v40;
        if ( v41 != v40 )
        {
          while ( 1 )
          {
            v43 = sub_B8EEF0(&v77);
            v46 = sub_B99AD0(v43);
            if ( (*(_BYTE *)(v43 + 8) & 6) == 0 || sub_1A42350(a1, v43, 0, v44, v7, v45) )
              break;
LABEL_49:
            if ( (v77 & 4) != 0 && (v77 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v55 = *(_QWORD *)((v77 & 0xFFFFFFFFFFFFFFF8LL) + 8);
              v77 = v55;
            }
            else
            {
              v77 = 0;
              v55 = 0;
            }
            if ( v42 == v55 )
              goto LABEL_53;
          }
          v47 = v84;
          v48 = v46 + 48;
          if ( !v46 )
            v48 = 0;
          if ( v84 )
          {
            v49 = (char *)v81;
            v8 = 8LL * HIDWORD(v82);
            v50 = (__int64 *)((char *)v81 + v8);
            if ( v81 != (char *)v81 + v8 )
            {
              v51 = (char *)v81;
              if ( v48 == *(_QWORD *)v81 )
              {
LABEL_71:
                v47 = 0;
LABEL_42:
                v52 = &v49[8 * HIDWORD(v82)];
                goto LABEL_43;
              }
              while ( 1 )
              {
                v51 += 8;
                if ( v50 == (__int64 *)v51 )
                  break;
                if ( v48 == *(_QWORD *)v51 )
                  goto LABEL_71;
              }
            }
            if ( HIDWORD(v82) < (unsigned int)v82 )
            {
              ++HIDWORD(v82);
              *v50 = v48;
              v49 = (char *)v81;
              v51 = (char *)v81 + v8;
              goto LABEL_42;
            }
          }
          v51 = (char *)sub_2236760(&v81, v48);
          v49 = (char *)v81;
          if ( v84 )
            goto LABEL_42;
          v52 = (char *)v81 + 8 * (unsigned int)v82;
LABEL_43:
          if ( v52 != v51 && *(_QWORD *)v51 >= 0xFFFFFFFFFFFFFFFELL )
          {
            v53 = v51 + 8;
            do
            {
              v54 = v53;
              if ( v53 == v52 )
                break;
              v53 += 8;
            }
            while ( *(_QWORD *)v54 >= 0xFFFFFFFFFFFFFFFELL );
          }
          if ( v47 )
          {
            v57 = (unsigned int)v79;
            v58 = (unsigned int)v79 + 1LL;
            if ( v58 > HIDWORD(v79) )
            {
              sub_2237220(&ptr, v80, v58, 8);
              v57 = (unsigned int)v79;
            }
            *((_QWORD *)ptr + v57) = v46;
            LODWORD(v79) = v79 + 1;
          }
          goto LABEL_49;
        }
LABEL_53:
        v28 = v79;
        if ( !(_DWORD)v79 )
          goto LABEL_54;
      }
    }
  }
  sub_169D230((__int64)&v86);
  if ( !v84 )
    free(v81);
  if ( ptr != v80 )
    free(ptr);
  return v71;
}
