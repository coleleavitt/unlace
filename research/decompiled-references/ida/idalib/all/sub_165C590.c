void __fastcall sub_165C590(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int16 v5; // ax
  unsigned __int64 *v6; // r12
  unsigned __int64 v7; // rbp
  unsigned __int8 v8; // al
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int8 v19; // al
  __int64 v20; // r14
  char v21; // dl
  unsigned __int64 v22; // rdi
  bool v23; // zf
  unsigned __int64 v24; // rax
  int v25; // edx
  __m128i *v26; // r15
  __m128i *v27; // rcx
  const __m128i *v28; // r14
  const __m128i *v29; // r13
  __int64 *m128i_i64; // rcx
  _BYTE *v31; // rsi
  size_t v32; // r10
  __int64 *v33; // rax
  unsigned __int64 v34; // r12
  __int64 v35; // r12
  unsigned __int64 v36; // rdi
  __int64 *v37; // rdi
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int32 v40; // r12d
  _BYTE *v41; // rdi
  char *v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // r10
  char *v47; // rsi
  __int64 v48; // rdx
  __int64 (*v49)(void); // rax
  __int64 v50; // rax
  unsigned int v51; // edx
  void **v52; // r12
  unsigned __int64 v53; // rax
  void **v54; // r13
  void **v55; // rbx
  void **v56; // rdi
  void **v57; // rdi
  void **v58; // rbx
  void **v59; // r13
  __int64 v60; // rdx
  __int64 v61; // r12
  __int64 v62; // r14
  __int64 v63; // r12
  void *v64; // rdi
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  char v67; // al
  __int64 v68; // rsi
  __int64 v69; // rcx
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rdx
  size_t v73; // [rsp+8h] [rbp-120h]
  size_t v74; // [rsp+8h] [rbp-120h]
  __int64 v75; // [rsp+8h] [rbp-120h]
  __int64 v76; // [rsp+8h] [rbp-120h]
  __int64 *v77; // [rsp+10h] [rbp-118h]
  __int64 *v78; // [rsp+10h] [rbp-118h]
  __int64 *v79; // [rsp+10h] [rbp-118h]
  __int64 *v81; // [rsp+28h] [rbp-100h]
  char v82[8]; // [rsp+30h] [rbp-F8h] BYREF
  unsigned __int64 v83; // [rsp+38h] [rbp-F0h]
  __int64 v84; // [rsp+40h] [rbp-E8h]
  __int64 v85; // [rsp+48h] [rbp-E0h]
  void *v86; // [rsp+50h] [rbp-D8h]
  unsigned __int64 v87; // [rsp+58h] [rbp-D0h]
  int v88; // [rsp+60h] [rbp-C8h]
  char v89; // [rsp+68h] [rbp-C0h]
  __int64 v90; // [rsp+70h] [rbp-B8h]
  unsigned __int64 v91; // [rsp+78h] [rbp-B0h]
  unsigned __int64 *v92; // [rsp+80h] [rbp-A8h] BYREF
  void *v93; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v94; // [rsp+90h] [rbp-98h]
  _BYTE v95[32]; // [rsp+98h] [rbp-90h] BYREF
  void *ptr; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v97; // [rsp+C0h] [rbp-68h]
  _BYTE v98[96]; // [rsp+C8h] [rbp-60h] BYREF

  v4 = *(_QWORD *)(a3 + 16);
  v5 = *(_WORD *)(a3 + 30) & 0x800;
  v6 = (unsigned __int64 *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v4 & 4) == 0 )
  {
    v7 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v5 )
      goto LABEL_3;
LABEL_22:
    v6 = (unsigned __int64 *)(a3 + 72);
    v19 = *(_BYTE *)(a3 + 28) & 0x7F;
    if ( (unsigned int)v19 - 34 > 5 )
    {
      if ( (unsigned int)v19 - 68 > 6 )
      {
        v72 = a3 + 40;
        if ( v19 == 2 )
          v7 = v72;
        v6 = (unsigned __int64 *)v7;
      }
      else
      {
        v20 = *(_QWORD *)(a3 + 48);
        v6 = (unsigned __int64 *)v7;
        if ( v20 )
        {
          if ( sub_B8E0B0(*(_QWORD *)(a3 + 48)) )
          {
            v6 = (unsigned __int64 *)sub_B8D340(v20);
            if ( !v6 )
              v6 = (unsigned __int64 *)v7;
          }
        }
      }
    }
    goto LABEL_3;
  }
  v7 = *v6;
  if ( !v5 )
    goto LABEL_22;
  v6 = (unsigned __int64 *)v6[1];
LABEL_3:
  v92 = v6;
  v93 = v95;
  v94 = 0x400000000LL;
  ptr = v98;
  v97 = 0x400000000LL;
  v98[32] = sub_B8E180((unsigned __int64)v6);
  v8 = v6[1] & 0x7F;
  if ( v8 == 39 )
  {
    if ( v6 == (unsigned __int64 *)&qword_48 )
    {
      v8 = 0;
    }
    else if ( (*((_BYTE *)v6 - 43) & 2) != 0 )
    {
      v66 = v6[12];
      if ( v66 )
      {
        v6 = (unsigned __int64 *)(v66 + 72);
        v8 = *(_BYTE *)(v66 + 80) & 0x7F;
      }
      else
      {
        if ( (*(_DWORD *)(v6 - 4) & 7) != 7 || (v71 = *(v6 - 4) & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)v71) )
          BUG();
        v6 = (unsigned __int64 *)sub_B8D340(*(_QWORD *)(*(_QWORD *)(v71 + 16) + 48LL));
        v8 = v6[1] & 0x7F;
      }
    }
  }
  while ( 1 )
  {
    if ( (unsigned int)v8 - 59 <= 2 )
    {
      v9 = (__int64)(v6 - 8);
      v10 = *(__int64 (__fastcall **)(__int64))(*(v6 - 8) + 32);
      if ( v10 == sub_A01140 )
        v11 = sub_B70A60(v9);
      else
        v11 = v10(v9);
      v12 = (unsigned int)v97;
      v13 = (unsigned int)v97 + 1LL;
      if ( v13 > HIDWORD(v97) )
      {
        v75 = v11;
        sub_2237220(&ptr, v98, v13, 8);
        v12 = (unsigned int)v97;
        v11 = v75;
      }
      *((_QWORD *)ptr + v12) = v11;
      LODWORD(v97) = v97 + 1;
      v14 = *(v6 - 6);
      if ( (v14 & 4) == 0 )
      {
LABEL_12:
        v6 = (unsigned __int64 *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
        goto LABEL_13;
      }
      goto LABEL_32;
    }
    if ( (unsigned int)v8 - 34 > 5 )
      break;
    v15 = (*(__int64 (__fastcall **)(unsigned __int64 *))(*(v6 - 9) + 32))(v6 - 9);
    v16 = (unsigned int)v94;
    v17 = (unsigned int)v94 + 1LL;
    if ( v17 > HIDWORD(v94) )
    {
      v76 = v15;
      sub_2237220(&v93, v95, v17, 8);
      v16 = (unsigned int)v94;
      v15 = v76;
    }
    *((_QWORD *)v93 + v16) = v15;
    LODWORD(v94) = v94 + 1;
    v18 = *(v6 - 7);
    if ( (*((_WORD *)v6 - 21) & 0x180) != 0 )
    {
      v6 = (unsigned __int64 *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v18 & 4) != 0 )
        v6 = (unsigned __int64 *)v6[1];
    }
    else
    {
      v6 = (unsigned __int64 *)(v18 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v18 & 4) != 0 )
        goto LABEL_33;
    }
LABEL_13:
    v8 = v6[1] & 0x7F;
  }
  if ( v8 && v8 != 24 )
  {
    v14 = *(_QWORD *)(sub_B8C1B0((__int64)v6) + 16);
    if ( (v14 & 4) == 0 )
      goto LABEL_12;
LABEL_32:
    v6 = (unsigned __int64 *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_33:
    v6 = (unsigned __int64 *)*v6;
    goto LABEL_13;
  }
  v21 = *(_BYTE *)(a2 + 8);
  v86 = nullptr;
  v22 = *(_QWORD *)(a2 + 16);
  v23 = *(_QWORD *)(a2 + 40) == 0;
  v83 = v22;
  v82[0] = v21 & 7 | v82[0] & 0xF8;
  v84 = *(_QWORD *)(a2 + 24);
  v85 = *(_QWORD *)(a2 + 32);
  v88 = *(_DWORD *)(a2 + 56);
  v24 = *(_QWORD *)(a2 + 48);
  v87 = v24;
  if ( !v23 )
  {
    v25 = *(_DWORD *)(v24 + 14976);
    if ( v25 )
    {
      v60 = (unsigned int)(v25 - 1);
      *(_DWORD *)(v24 + 14976) = v60;
      v26 = *(__m128i **)(v24 + 8 * v60 + 14848);
      v61 = v26[33].m128i_u32[2];
      v26->m128i_i8[0] = 0;
      v62 = v26[33].m128i_i64[0];
      v26[26].m128i_i32[2] = 0;
      v63 = v62 + (v61 << 6);
      while ( v62 != v63 )
      {
        while ( 1 )
        {
          v63 -= 64;
          v64 = *(void **)(v63 + 24);
          if ( v64 == (void *)(v63 + 40) )
            break;
          operator delete(v64);
          if ( v62 == v63 )
            goto LABEL_103;
        }
      }
LABEL_103:
      v26[33].m128i_i32[2] = 0;
      v27 = v26 + 6;
    }
    else
    {
      v26 = (__m128i *)operator new(0x3A0u);
      v26->m128i_i8[0] = 0;
      v27 = v26 + 6;
      v26[6].m128i_i64[0] = (__int64)v26[7].m128i_i64;
      v26[8].m128i_i64[0] = (__int64)v26[9].m128i_i64;
      v26[10].m128i_i64[0] = (__int64)v26[11].m128i_i64;
      v26[12].m128i_i64[0] = (__int64)v26[13].m128i_i64;
      v26[14].m128i_i64[0] = (__int64)v26[15].m128i_i64;
      v26[16].m128i_i64[0] = (__int64)v26[17].m128i_i64;
      v26[18].m128i_i64[0] = (__int64)v26[19].m128i_i64;
      v26[20].m128i_i64[0] = (__int64)v26[21].m128i_i64;
      v26[22].m128i_i64[0] = (__int64)v26[23].m128i_i64;
      v26[24].m128i_i64[0] = (__int64)v26[25].m128i_i64;
      v26[26].m128i_i64[0] = (__int64)v26[27].m128i_i64;
      v26[6].m128i_i64[1] = 0;
      v26[7].m128i_i8[0] = 0;
      v26[8].m128i_i64[1] = 0;
      v26[9].m128i_i8[0] = 0;
      v26[10].m128i_i64[1] = 0;
      v26[11].m128i_i8[0] = 0;
      v26[12].m128i_i64[1] = 0;
      v26[13].m128i_i8[0] = 0;
      v26[14].m128i_i64[1] = 0;
      v26[15].m128i_i8[0] = 0;
      v26[16].m128i_i64[1] = 0;
      v26[17].m128i_i8[0] = 0;
      v26[18].m128i_i64[1] = 0;
      v26[19].m128i_i8[0] = 0;
      v26[20].m128i_i64[1] = 0;
      v26[21].m128i_i8[0] = 0;
      v26[22].m128i_i64[1] = 0;
      v26[23].m128i_i8[0] = 0;
      v26[24].m128i_i64[1] = 0;
      v26[25].m128i_i8[0] = 0;
      v26[26].m128i_i64[1] = 0x800000000LL;
      v26[33].m128i_i64[0] = (__int64)v26[34].m128i_i64;
      v26[33].m128i_i64[1] = 0x600000000LL;
    }
    v28 = *(const __m128i **)(a2 + 40);
    v86 = v26;
    v26->m128i_i8[0] = v28->m128i_i8[0];
    v26->m128i_i8[1] = v28->m128i_i8[1];
    v26->m128i_i8[2] = v28->m128i_i8[2];
    v26->m128i_i8[3] = v28->m128i_i8[3];
    v26->m128i_i8[4] = v28->m128i_i8[4];
    v26->m128i_i8[5] = v28->m128i_i8[5];
    v26->m128i_i8[6] = v28->m128i_i8[6];
    v26->m128i_i8[7] = v28->m128i_i8[7];
    v26->m128i_i8[8] = v28->m128i_i8[8];
    v26->m128i_i8[9] = v28->m128i_i8[9];
    v26->m128i_i8[10] = v28->m128i_i8[10];
    if ( &v28[1] < &v26[2] && &v26[1] < &v28[2] )
    {
      v26[1].m128i_i64[0] = v28[1].m128i_i64[0];
      v26[1].m128i_i64[1] = v28[1].m128i_i64[1];
      v26[2].m128i_i64[0] = v28[2].m128i_i64[0];
      v26[2].m128i_i64[1] = v28[2].m128i_i64[1];
      v26[3].m128i_i64[0] = v28[3].m128i_i64[0];
      v26[3].m128i_i64[1] = v28[3].m128i_i64[1];
      v26[4].m128i_i64[0] = v28[4].m128i_i64[0];
      v26[4].m128i_i64[1] = v28[4].m128i_i64[1];
      v26[5].m128i_i64[0] = v28[5].m128i_i64[0];
      v26[5].m128i_i64[1] = v28[5].m128i_i64[1];
    }
    else
    {
      v26[1] = _mm_loadu_si128(v28 + 1);
      v26[2] = _mm_loadu_si128(v28 + 2);
      v26[3] = _mm_loadu_si128(v28 + 3);
      v26[4] = _mm_loadu_si128(v28 + 4);
      v26[5] = _mm_loadu_si128(v28 + 5);
    }
    v29 = v28 + 6;
    m128i_i64 = v27[1].m128i_i64;
    do
    {
      if ( v29 != (const __m128i *)(m128i_i64 - 2) )
      {
        v33 = (__int64 *)*(m128i_i64 - 2);
        v32 = v29->m128i_u64[1];
        if ( m128i_i64 == v33 )
          v34 = 15;
        else
          v34 = *m128i_i64;
        if ( v32 > v34 )
        {
          if ( (v32 & 0x8000000000000000LL) != 0LL )
            std::__throw_length_error("basic_string::_M_create");
          v35 = 2 * v34;
          if ( v32 < v35 )
          {
            v36 = v35 + 1;
            if ( v35 < 0 )
            {
              v36 = 0x8000000000000000LL;
              v35 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v36 = v32 + 1;
            v35 = v29->m128i_i64[1];
          }
          v78 = m128i_i64;
          v74 = v29->m128i_u64[1];
          v33 = (__int64 *)operator new(v36);
          m128i_i64 = v78;
          v32 = v74;
          v37 = (__int64 *)*(v78 - 2);
          if ( v78 != v37 )
          {
            v81 = v78;
            v79 = v33;
            operator delete(v37);
            m128i_i64 = v81;
            v33 = v79;
            v32 = v74;
          }
          *(m128i_i64 - 2) = (__int64)v33;
          *m128i_i64 = v35;
        }
        if ( v32 )
        {
          v31 = (_BYTE *)v29->m128i_i64[0];
          if ( v32 == 1 )
          {
            *(_BYTE *)v33 = *v31;
            v33 = (__int64 *)*(m128i_i64 - 2);
          }
          else
          {
            v77 = m128i_i64;
            v73 = v32;
            memcpy(v33, v31, v32);
            m128i_i64 = v77;
            v32 = v73;
            v33 = (__int64 *)*(v77 - 2);
          }
        }
        *(m128i_i64 - 1) = v32;
        *((_BYTE *)v33 + v32) = 0;
      }
      v29 += 2;
      m128i_i64 += 4;
    }
    while ( v29 != &v28[26] );
    if ( &v26[26] != v29 )
    {
      v38 = v28[26].m128i_u32[2];
      v39 = v26[26].m128i_u32[2];
      v40 = v28[26].m128i_i32[2];
      if ( v38 <= v39 )
      {
        if ( v28[26].m128i_i32[2] )
        {
          v68 = v26[26].m128i_i64[0];
          v69 = v28[26].m128i_i64[0];
          v70 = 0;
          do
          {
            *(_QWORD *)(v68 + v70) = *(_QWORD *)(v69 + v70);
            *(_BYTE *)(v68 + v70 + 8) = *(_BYTE *)(v69 + v70 + 8);
            v70 += 12;
          }
          while ( 12 * v38 != v70 );
        }
      }
      else
      {
        if ( v38 > v26[26].m128i_u32[3] )
        {
          v26[26].m128i_i32[2] = 0;
          sub_2237220(&v26[26], &v26[27], v38, 12);
          v42 = (char *)v28[26].m128i_i64[0];
          v41 = (_BYTE *)v26[26].m128i_i64[0];
          v46 = 0;
          v38 = v28[26].m128i_u32[2];
          v47 = v42;
        }
        else
        {
          v41 = (_BYTE *)v26[26].m128i_i64[0];
          v42 = (char *)v28[26].m128i_i64[0];
          if ( v26[26].m128i_i32[2] )
          {
            v43 = 3 * v39;
            v44 = 0;
            v45 = 4 * v43;
            v46 = v45;
            do
            {
              *(_QWORD *)&v41[v44] = *(_QWORD *)&v42[v44];
              v41[v44 + 8] = v42[v44 + 8];
              v44 += 12;
            }
            while ( v45 != v44 );
            v38 = v28[26].m128i_u32[2];
            v41 += v45;
            v47 = &v42[v45];
          }
          else
          {
            v47 = (char *)v28[26].m128i_i64[0];
            v46 = 0;
          }
        }
        v48 = 12 * v38;
        if ( v47 != &v42[v48] )
          memcpy(v41, v47, v48 - v46);
      }
      v26[26].m128i_i32[2] = v40;
    }
    sub_9EED30((__int64)v26[33].m128i_i64, v28[33].m128i_i64);
    v22 = v83;
  }
  if ( (v82[0] & 4) == 0 )
  {
    v89 &= 0xFCu;
    v90 = 0;
    goto LABEL_69;
  }
  if ( (v85 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v89 &= 0xFCu;
    v90 = 0;
    goto LABEL_98;
  }
  v67 = sub_B72F20(v22);
  v22 = v83;
  v90 = 0;
  v89 = v67 & 1 | v89 & 0xFC;
  if ( (v82[0] & 4) != 0 )
LABEL_98:
    v22 = sub_1654A20(v22);
LABEL_69:
  v91 = v22;
  v49 = *(__int64 (**)(void))(*(_QWORD *)v22 + 32LL);
  if ( (char *)v49 == (char *)sub_A01140 )
    v50 = sub_B70A60(v22);
  else
    v50 = v49();
  v51 = *(_DWORD *)(a2 + 4);
  v91 = v50;
  if ( (unsigned int)sub_165BA60(a1, (__int64 *)&v92, v51, (__int64)v82) == 1 )
    *(_BYTE *)(a2 + 1) = 1;
  v52 = (void **)v86;
  if ( v86 )
  {
    v53 = v87;
    if ( v87 )
    {
      if ( (unsigned __int64)v86 < v87 || (unsigned __int64)v86 > v87 + 14848 )
      {
        v54 = *((void ***)v86 + 66);
        v55 = &v54[8 * (unsigned __int64)*((unsigned int *)v86 + 134)];
        if ( v54 != v55 )
        {
          do
          {
            while ( 1 )
            {
              v55 -= 8;
              v56 = (void **)v55[3];
              if ( v56 == v55 + 5 )
                break;
              operator delete(v56);
              if ( v54 == v55 )
                goto LABEL_79;
            }
          }
          while ( v54 != v55 );
LABEL_79:
          v55 = (void **)v52[66];
        }
        if ( v55 != v52 + 68 )
          free(v55);
        v57 = (void **)v52[52];
        if ( v57 != v52 + 54 )
          free(v57);
        v58 = v52 + 48;
        v59 = v52 + 8;
        do
        {
          while ( *v58 != v58 + 2 )
          {
            operator delete(*v58);
            v58 -= 4;
            if ( v59 == v58 )
              goto LABEL_87;
          }
          v58 -= 4;
        }
        while ( v59 != v58 );
LABEL_87:
        operator delete(v52, 0x3A0u);
      }
      else
      {
        v65 = *(unsigned int *)(v87 + 14976);
        *(_DWORD *)(v87 + 14976) = v65 + 1;
        *(_QWORD *)(v53 + 8 * v65 + 14848) = v52;
      }
    }
  }
  if ( ptr != v98 )
    free(ptr);
  if ( v93 != v95 )
    free(v93);
}
