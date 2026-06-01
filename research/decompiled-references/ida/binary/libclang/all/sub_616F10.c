__int64 __fastcall sub_616F10(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int128 a7,
        const __m128i a8)
{
  int v8; // r14d
  int v9; // ebx
  unsigned int v10; // r15d
  _QWORD *v11; // rbp
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned int v14; // ecx
  __m128i v15; // xmm2
  __int64 v17; // rax
  __m128i v18; // xmm0
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // r14
  unsigned int v25; // eax
  __m128i v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // r15
  __m128i *v29; // r14
  __int64 v30; // r10
  unsigned int v31; // eax
  unsigned int v32; // r14d
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rax
  _DWORD *v39; // rax
  __int64 v40; // rax
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  __int128 si128; // xmm0
  __int64 v46; // rax
  const __m128i **v47; // rax
  __int64 v48; // rax
  __int64 v49; // r15
  unsigned int v50; // r14d
  __int64 i; // rax
  __int64 v52; // rdi
  int v53; // edx
  __int64 v54; // r10
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rdx
  _QWORD *v58; // rsi
  __int64 *v59; // rdi
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r11
  __int64 v64; // rdx
  __m128i v65; // [rsp+0h] [rbp-D8h]
  __m128i v66; // [rsp+0h] [rbp-D8h]
  __m128i v67; // [rsp+0h] [rbp-D8h]
  __m128i v68; // [rsp+0h] [rbp-D8h]
  __m128i v69; // [rsp+0h] [rbp-D8h]
  __m128i v70; // [rsp+0h] [rbp-D8h]
  __int128 v71; // [rsp+0h] [rbp-D8h]
  __m128i v72; // [rsp+0h] [rbp-D8h]
  __m128i v73; // [rsp+0h] [rbp-D8h]
  __m128i v74; // [rsp+0h] [rbp-D8h]
  __int64 v75; // [rsp+28h] [rbp-B0h]
  __m128i v76; // [rsp+30h] [rbp-A8h] BYREF
  __int64 *v77; // [rsp+40h] [rbp-98h]
  unsigned __int64 v78; // [rsp+48h] [rbp-90h]
  __int64 v79; // [rsp+50h] [rbp-88h]
  __int64 v80; // [rsp+58h] [rbp-80h]
  __m128i v81; // [rsp+60h] [rbp-78h] BYREF
  __m128i v82; // [rsp+70h] [rbp-68h] BYREF
  __m128i v83; // [rsp+80h] [rbp-58h] BYREF
  __m128i v84[4]; // [rsp+90h] [rbp-48h] BYREF

  v8 = a7;
  LOBYTE(a3) = (_DWORD)a7 != 44 && (unsigned int)(a7 - 40) <= 0xA;
  if ( (_BYTE)a3 )
    return 0;
  v9 = *(_DWORD *)(a1 + 16);
  v10 = a3;
  v11 = (_QWORD *)a1;
  v12 = *(_QWORD *)(a1 + 16);
  v75 = *(_QWORD *)(a1 + 40);
  v13 = a7;
  v76 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)((char *)&a7 + 8));
  *(_QWORD *)(a1 + 16) = v13;
  *(_QWORD *)(a1 + 40) = a8.m128i_i64[1];
  LOBYTE(a3) = (unsigned int)(v8 - 1) <= 0x26;
  v14 = a3;
  LOBYTE(v14) = ((unsigned int)(v8 - 600) <= 4) | a3;
  if ( (_BYTE)v14 )
  {
    v65 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    v17 = sub_63A250(a1, (_DWORD)a2, a3, v14, a5, a6, v65.m128i_i32[0], v65.m128i_i64[1]);
    v18 = _mm_loadu_si128((const __m128i *)&a7);
    *(_QWORD *)(a1 + 48) = v17;
    v23 = sub_63A250(a1, (_DWORD)a2, v19, v20, v21, v22, v18.m128i_i32[0], v18.m128i_i64[1]);
    v24 = v23;
    if ( v23 )
    {
      LODWORD(a2) = v23;
      v10 = sub_61A980(a1, v23);
      if ( !(_BYTE)v10 )
      {
        LODWORD(a2) = v24;
        sub_616AF0(a1, v24);
        v10 = v25;
      }
    }
    goto LABEL_10;
  }
  if ( (unsigned int)(v8 - 200) <= 0x83 )
  {
    v67 = _mm_loadu_si128((const __m128i *)&a7);
    a2 = (const __m128i *)sub_63A2A0(
                            a1,
                            (_DWORD)a2,
                            a3,
                            v14,
                            a5,
                            a6,
                            v67.m128i_i32[0],
                            v67.m128i_i32[2],
                            _mm_loadu_si128(&a8).m128i_i64[0]);
    if ( !a2 )
      goto LABEL_10;
    goto LABEL_19;
  }
  if ( (unsigned int)(v8 - 100) <= 0x38 )
  {
    v68 = _mm_loadu_si128((const __m128i *)&a7);
    a2 = (const __m128i *)sub_63A260(
                            a1,
                            (_DWORD)a2,
                            a3,
                            v14,
                            a5,
                            a6,
                            v68.m128i_i32[0],
                            v68.m128i_i32[2],
                            _mm_loadu_si128(&a8).m128i_i64[0]);
    if ( !a2 )
      goto LABEL_10;
LABEL_19:
    v10 = sub_6160A0(a1, (__int64)a2);
    goto LABEL_10;
  }
  if ( v8 == 350 )
  {
    LOBYTE(v77) = 0;
    v69 = _mm_loadu_si128((const __m128i *)&a7);
    v26 = _mm_loadu_si128(&a8);
    v27 = sub_63A300(
            a1,
            (_DWORD)a2,
            a3,
            v14,
            a5,
            a6,
            v69.m128i_i32[0],
            v69.m128i_i32[2],
            v26.m128i_i32[0],
            v26.m128i_i64[1]);
    v14 = 0;
    v28 = v27;
    if ( v27 )
      v28 = *(_QWORD *)(v27 + 8);
    LODWORD(a3) = *(unsigned __int8 *)(a1 + 80);
    v29 = &v83;
    v83.m128i_i32[0] = a3;
    v83.m128i_i32[1] = (unsigned __int8)a3 ^ 1;
    v77 = &v83.m128i_i64[1];
    while ( 1 )
    {
      LODWORD(a2) = v29->m128i_i32[0];
      if ( v29->m128i_i32[0] )
      {
        if ( *(_BYTE *)(v28 + 280) || !*(_BYTE *)(v28 + 272) || *((_DWORD *)v11 + 21) && *((_DWORD *)v11 + 22) )
        {
          v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 80) + 2112LL) + 80LL);
          v55 = *(_QWORD *)(v54 + 72);
          v56 = v55 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v55 & 1) != 0 )
            goto LABEL_59;
          if ( v56 > 3 )
          {
            v58 = (_QWORD *)(v55 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v55 & 2) == 0 )
              goto LABEL_69;
            v63 = v58[2275];
            if ( v63 )
            {
              v64 = v58[274];
              v58[284] += 24LL;
              v56 = (v64 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v58[275] >= v56 + 24 && v64 )
              {
                v58[274] = v56 + 24;
              }
              else
              {
                v80 = v63;
                v79 = v54;
                LOBYTE(v78) = v14;
                v56 = sub_5F8390((__int64)(v58 + 274), 24, 3);
                v63 = v80;
                v54 = v79;
                LOBYTE(v14) = v78;
              }
              *(_QWORD *)v56 = v63;
              *(_DWORD *)(v56 + 8) = 0;
              v55 = v56 | 5;
              *(_QWORD *)(v56 + 16) = v54;
              *(_QWORD *)(v54 + 72) = v56 | 5;
              LOBYTE(v56) = v56 & 0xFA | 4;
              goto LABEL_60;
            }
            v56 = v54 & 0xFFFFFFFFFFFFFFFALL;
            v55 = v54 & 0xFFFFFFFFFFFFFFFALL | 1;
            *(_QWORD *)(v54 + 72) = v55;
LABEL_59:
            if ( v56 )
            {
LABEL_60:
              v57 = v55 & 0xFFFFFFFFFFFFFFF8LL;
              v58 = (_QWORD *)v57;
              if ( (v56 & 4) != 0 )
              {
                if ( !v57 )
                  goto LABEL_62;
                v59 = *(__int64 **)v57;
                v60 = *(_DWORD *)(*(_QWORD *)v57 + 12LL);
                if ( *(_DWORD *)(v57 + 8) != v60 )
                {
                  *(_DWORD *)(v57 + 8) = v60;
                  v61 = *v59;
                  LOBYTE(v79) = v14;
                  v78 = v57;
                  (*(void (__fastcall **)(__int64 *, __int64))(v61 + 144))(v59, v54);
                  LOBYTE(v14) = v79;
                  v57 = v78;
                }
                v58 = *(_QWORD **)(v57 + 16);
              }
              if ( v58 )
              {
LABEL_69:
                a2 = (const __m128i *)(v58 + 5);
                goto LABEL_63;
              }
            }
          }
LABEL_62:
          a2 = nullptr;
LABEL_63:
          LODWORD(a1) = (_DWORD)v11;
          LOBYTE(v78) = v14;
          v31 = sub_618190(v11, a2);
          if ( (_BYTE)v31 )
            goto LABEL_35;
LABEL_57:
          v14 = (unsigned __int8)v78;
          goto LABEL_42;
        }
        if ( *(_QWORD *)(v28 + 1928) == *(_QWORD *)(v28 + 1920) )
        {
          a3 = *(_QWORD *)(v28 + 296);
        }
        else
        {
          LODWORD(a1) = v28;
          LOBYTE(v78) = v14;
          sub_FF0B30(v28);
          v14 = (unsigned __int8)v78;
          a3 = *(_QWORD *)(v28 + 296);
          if ( *(_QWORD *)(v28 + 1928) != *(_QWORD *)(v28 + 1920) )
          {
            LODWORD(a1) = v28;
            v79 = *(_QWORD *)(v28 + 296);
            sub_FF0B30(v28);
            a3 = v79;
            v14 = (unsigned __int8)v78;
          }
        }
        v30 = *(_QWORD *)(v28 + 304);
        if ( v30 != a3 )
        {
          while ( 1 )
          {
            a2 = *(const __m128i **)a3;
            LODWORD(a1) = (_DWORD)v11;
            v80 = v30;
            LOBYTE(v79) = v14;
            v78 = a3;
            v31 = sub_617B10(v11, a2);
            LODWORD(a3) = v78;
            v14 = (unsigned __int8)v79;
            WORD1(a2) = HIWORD(v31);
            v30 = v80;
            LOWORD(a2) = BYTE1(v31);
            if ( BYTE1(v31) )
              break;
            a3 = v78 + 8;
            if ( v80 == v78 + 8 )
              goto LABEL_42;
          }
LABEL_35:
          v14 = v31;
LABEL_36:
          v10 = v14;
          goto LABEL_10;
        }
      }
      else if ( *(_QWORD *)(*(_QWORD *)(v28 + 64) + 2880LL) )
      {
        LODWORD(a1) = (_DWORD)v11;
        LOBYTE(v78) = v14;
        sub_61A680(v11);
        goto LABEL_57;
      }
LABEL_42:
      v29 = (__m128i *)((char *)v29 + 4);
      if ( v77 == (__int64 *)v29 )
        goto LABEL_36;
    }
  }
  if ( v8 == 44 )
  {
    v73 = _mm_loadu_si128((const __m128i *)&a7);
    v46 = sub_639EB0(a1, (_DWORD)a2, a3, v14, a5, a6, v73.m128i_i32[0], v73.m128i_i64[1]);
    if ( v46 )
    {
      v47 = *(const __m128i ***)(v46 + 16);
      if ( v47 )
      {
        a2 = *v47;
        v10 = sub_61B330(a1, *v47, v47 + 1);
      }
    }
    goto LABEL_10;
  }
  if ( v8 != 403 )
  {
    if ( (unsigned int)(v8 - 400) > 0x29 )
    {
      if ( v8 == 501 )
      {
        v32 = *(_DWORD *)(a1 + 84);
        if ( *(_DWORD *)(a1 + 88) == v32 )
        {
          a1 = *(_QWORD *)(a1 + 8);
          v33 = sub_FEDF50(a1, v32);
          a2 = (const __m128i *)*v11;
          LODWORD(a7) = 501;
          LODWORD(v77) = v33;
          v78 = (unsigned __int64)a2;
          v70 = _mm_loadu_si128((const __m128i *)&a7);
          v38 = sub_639FD0(a1, (_DWORD)a2, v34, v35, v36, v37, v70.m128i_i32[0], v70.m128i_i64[1]);
          v39 = sub_60B650(v38, (__int64)a2);
          LODWORD(a2) = (_DWORD)v77;
          LODWORD(a1) = (_DWORD)v39;
          v40 = sub_60BAB0((__int64)v39, (unsigned int)v77, *v11);
          if ( v40 )
          {
            LODWORD(a2) = v40;
            sub_63A010(&v83, v40, v32, *v11);
            v71 = (__int128)_mm_load_si128(&v83);
            si128 = (__int128)_mm_load_si128(v84);
            goto LABEL_40;
          }
        }
      }
      goto LABEL_10;
    }
LABEL_44:
    LODWORD(a7) = v8;
    v72 = _mm_loadu_si128((const __m128i *)&a7);
    a2 = (const __m128i *)sub_63A2C0(
                            a1,
                            (_DWORD)a2,
                            a3,
                            v14,
                            a5,
                            a6,
                            v72.m128i_i32[0],
                            v72.m128i_i32[2],
                            _mm_loadu_si128(&a8).m128i_i64[0]);
    if ( a2 )
    {
      LODWORD(a1) = (_DWORD)v11;
      v10 = sub_615F70((__int64)v11, (__int64)a2);
    }
    goto LABEL_10;
  }
  v74 = _mm_loadu_si128((const __m128i *)&a7);
  v48 = sub_63A2C0(
          a1,
          (_DWORD)a2,
          a3,
          v14,
          a5,
          a6,
          v74.m128i_i32[0],
          v74.m128i_i32[2],
          _mm_loadu_si128(&a8).m128i_i64[0]);
  a2 = *(const __m128i **)(v48 + 40);
  v14 = v48;
  a3 = *(_QWORD *)(a2->m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(a3 + 16) - 34 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
      goto LABEL_44;
    a1 = *(_QWORD *)(a2->m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
    v77 = (__int64 *)v48;
    a3 = sub_B0D320(a1);
    if ( !a3 )
      goto LABEL_44;
    a2 = (const __m128i *)v77[5];
  }
  v77 = (__int64 *)a3;
  v49 = *v11;
  v83 = _mm_unpacklo_epi64(_mm_loadl_epi64(a2), (__m128i)(unsigned __int64)&a2->m128i_u64[1]);
  v50 = sub_B1E2D0(&v83);
  for ( i = v77[3]; ; i = *(_QWORD *)(v52 + 24) )
  {
    v52 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    v53 = *(unsigned __int8 *)(v52 + 16);
    if ( (unsigned int)(v53 - 34) <= 1 )
      goto LABEL_52;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v52 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
      break;
    v62 = sub_B0D320(v52);
    v52 = v62;
    if ( !v62 )
      break;
    LOBYTE(v53) = *(_BYTE *)(v62 + 16);
LABEL_52:
    if ( (_BYTE)v53 == 35 )
    {
      a2 = (const __m128i *)sub_B07AF0();
      goto LABEL_54;
    }
  }
  a2 = nullptr;
LABEL_54:
  sub_639C80(&v81, a2, v50, v49);
  v71 = (__int128)_mm_load_si128(&v81);
  si128 = (__int128)_mm_load_si128(&v82);
LABEL_40:
  LODWORD(a1) = (_DWORD)v11;
  v10 = sub_619180((_DWORD)v11, (_DWORD)a2, v41, v42, v43, v44, v71, si128);
LABEL_10:
  v15 = _mm_load_si128(&v76);
  v11[2] = v12;
  v11[5] = v75;
  *(__m128i *)(v11 + 3) = v15;
  if ( (unsigned int)(v9 - 1) <= 0x26 || (unsigned int)(v9 - 600) <= 4 )
  {
    v66 = _mm_loadu_si128((const __m128i *)v11 + 1);
    v11[6] = sub_63A250(a1, (_DWORD)a2, a3, v14, a5, a6, v66.m128i_i32[0], v66.m128i_i64[1]);
  }
  return v10;
}

