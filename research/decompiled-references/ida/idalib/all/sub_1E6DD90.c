__int64 __fastcall sub_1E6DD90(__int64 *a1, __int64 a2, char a3, __m128i a4, __m128i a5)
{
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // al
  unsigned __int8 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r13
  char v15; // al
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r12
  _QWORD *v20; // rcx
  __int64 v21; // rbp
  __int64 v22; // r8
  _QWORD *v23; // rdx
  __int64 v24; // rsi
  _QWORD *v25; // rsi
  _QWORD *v26; // rdi
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rcx
  int v45; // eax
  _BYTE *v46; // rsi
  __int64 v47; // rdx
  size_t v48; // rax
  __m128i *v49; // rax
  size_t v50; // rcx
  size_t v51; // rax
  _BYTE *v52; // rdi
  size_t v53; // r9
  unsigned __int64 v54; // rdx
  __m128 *v55; // r9
  __int64 v56; // rax
  int v57; // edi
  int v58; // eax
  int v59; // eax
  unsigned int v60; // eax
  _BYTE *v61; // rdi
  __int64 v62; // [rsp+0h] [rbp-218h]
  bool v63; // [rsp+0h] [rbp-218h]
  __int64 v64; // [rsp+0h] [rbp-218h]
  unsigned __int8 v65; // [rsp+0h] [rbp-218h]
  __int64 v66; // [rsp+0h] [rbp-218h]
  size_t v67; // [rsp+0h] [rbp-218h]
  size_t v68; // [rsp+0h] [rbp-218h]
  bool v69; // [rsp+8h] [rbp-210h]
  __int64 v70; // [rsp+8h] [rbp-210h]
  __m128 *v71; // [rsp+18h] [rbp-200h]
  void *v72[2]; // [rsp+20h] [rbp-1F8h] BYREF
  _BYTE v73[16]; // [rsp+30h] [rbp-1E8h] BYREF
  void *v74; // [rsp+40h] [rbp-1D8h] BYREF
  size_t v75; // [rsp+48h] [rbp-1D0h]
  __m128i v76; // [rsp+50h] [rbp-1C8h] BYREF
  void *v77; // [rsp+60h] [rbp-1B8h]
  size_t v78; // [rsp+68h] [rbp-1B0h]
  __m128 v79; // [rsp+70h] [rbp-1A8h] BYREF
  _DWORD v80[6]; // [rsp+80h] [rbp-198h] BYREF
  void *v81; // [rsp+98h] [rbp-180h]
  __int64 v82; // [rsp+A8h] [rbp-170h] BYREF
  __int64 v83; // [rsp+C0h] [rbp-158h] BYREF
  int v84; // [rsp+C8h] [rbp-150h]
  int v85; // [rsp+CCh] [rbp-14Ch]
  __int64 v86; // [rsp+D0h] [rbp-148h]
  char v87; // [rsp+D8h] [rbp-140h]
  _QWORD v88[10]; // [rsp+E0h] [rbp-138h] BYREF
  int v89; // [rsp+130h] [rbp-E8h]
  char v90; // [rsp+138h] [rbp-E0h]
  __int64 v91; // [rsp+140h] [rbp-D8h]
  __int64 v92; // [rsp+150h] [rbp-C8h] BYREF
  char v93; // [rsp+158h] [rbp-C0h]
  _BYTE v94[12]; // [rsp+15Ch] [rbp-BCh]
  void *v95; // [rsp+168h] [rbp-B0h]
  unsigned __int8 *v96; // [rsp+170h] [rbp-A8h] BYREF
  _BYTE v97[88]; // [rsp+178h] [rbp-A0h] BYREF
  unsigned int v98; // [rsp+1D0h] [rbp-48h]
  char v99; // [rsp+1D4h] [rbp-44h]

  if ( *(_DWORD *)a2 )
  {
    v7 = 1;
    if ( *(_DWORD *)a2 != 4 )
      v7 = (-(__int64)(a3 == 0) & 0xFFFFFFFFFFFFFFFELL) + 4;
  }
  else
  {
    v7 = a3 != 0 ? 3 : 0;
  }
  sub_168B9F0((__int64)&v92, (__int64 *)(*(_QWORD *)*a1 + 8LL), *(_DWORD *)(a1[1] + 24), 0x1C01u, 0);
  v8 = a1[1];
  v9 = *(_QWORD *)(v8 + 72);
  v10 = *(_BYTE *)(v8 + 34) & 0xF;
  v12 = (unsigned int)*(unsigned __int16 *)(v9 + 8) - 382;
  v11 = byte_266C2C4[v12];
  LOBYTE(v12) = v10 == 8;
  if ( v97[80] )
  {
    v60 = v11;
    BYTE1(v60) = v12;
    sub_FC65C0(&v96, v60, v12, (__int64)byte_266C2C4);
  }
  else if ( v99 )
  {
    v63 = v10 == 8;
    v36 = sub_168B9E0(&v92);
    v39 = v63;
    v40 = v36;
    v41 = *(_QWORD *)&v94[4];
    if ( *(_QWORD *)&v94[4] )
    {
      v69 = v63;
      v64 = v40;
      v41 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v94[4] + 32LL))(*(_QWORD *)&v94[4]);
      v39 = v69;
      v40 = v64;
    }
    v65 = v39;
    v83 = v41;
    v42 = sub_1587BC0(v40, &v83, v39, v40, v37, v38);
    v43 = *v42 + 32LL * v98;
    LODWORD(v42) = v11;
    BYTE1(v42) = v65;
    sub_FC65C0((unsigned __int8 **)(v43 + 8), (unsigned int)v42, v65, v44);
  }
  v13 = sub_1605D30((__int64)&v92, (__int64 *)a1[2]);
  v14 = v13;
  if ( *(_BYTE *)(v13 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v13 + 32), v7, 3u);
  }
  else if ( *(_BYTE *)(v13 + 132) )
  {
    v30 = sub_168B9E0((_QWORD *)v13);
    v34 = *(_QWORD *)(v14 + 16);
    if ( v34 )
    {
      v62 = v30;
      v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 32LL))(v34);
      v30 = v62;
    }
    v83 = v34;
    v35 = sub_1587BC0(v30, &v83, v30, v31, v32, v33);
    sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * *(unsigned int *)(v14 + 128) + 8), v7, 3u);
  }
  v83 = *(_QWORD *)v14;
  v84 = *(_DWORD *)(v14 + 8);
  v85 = *(_DWORD *)(v14 + 12);
  v86 = *(_QWORD *)(v14 + 16);
  v15 = *(_BYTE *)(v14 + 24);
  v90 = 0;
  v16 = *(_BYTE *)(v14 + 120) == 0;
  v87 = v15;
  if ( !v16 )
  {
    sub_FC70F0((__int64)v88, v14 + 32);
    v88[9] = *(_QWORD *)(v14 + 104);
    v59 = *(_DWORD *)(v14 + 112);
    v90 = 1;
    v89 = v59;
  }
  v91 = *(_QWORD *)(v14 + 128);
  sub_15F7200(&v92);
  if ( *(_DWORD *)a2 != 5 )
  {
    v45 = *(_DWORD *)(a1[1] + 24);
    v94[8] = 0;
    *(_QWORD *)v94 = 0;
    v95 = v97;
    v96 = nullptr;
    v97[0] = 0;
    v97[16] = 0;
    LODWORD(v92) = v45;
    HIDWORD(v92) = v45;
    v93 = 1;
    v70 = sub_1589170((__int64)&v83, &v92);
    v46 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)a1[1] + 16LL) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)a1[1] + 16LL) == -16 )
    {
      v73[0] = 0;
      v72[1] = nullptr;
      v72[0] = v73;
    }
    else
    {
      v47 = **(_QWORD **)(*(_QWORD *)a1[1] + 16LL);
      v72[0] = v73;
      sub_1E5E4B0(v72, v46, (__int64)&v46[(unsigned int)v47]);
    }
    v48 = j__strlen(" ");
    v49 = (__m128i *)sub_99BDC0(v72, 0, 0, " ", v48);
    v74 = &v76;
    if ( (__m128i *)v49->m128i_i64[0] == &v49[1] )
    {
      a4 = _mm_loadu_si128(v49 + 1);
      v76 = a4;
    }
    else
    {
      v74 = (void *)v49->m128i_i64[0];
      v76.m128i_i64[0] = v49[1].m128i_i64[0];
    }
    v50 = v49->m128i_u64[1];
    v49[1].m128i_i8[0] = 0;
    v75 = v50;
    v49->m128i_i64[0] = (__int64)v49[1].m128i_i64;
    v49->m128i_i64[1] = 0;
    v51 = j__strlen(" ");
    if ( v51 > 0x7FFFFFFFFFFFFFFFLL - v75 )
      std::__throw_length_error("basic_string::append");
    v52 = v74;
    v53 = v51 + v75;
    if ( v74 == &v76 )
      v54 = 15;
    else
      v54 = v76.m128i_i64[0];
    if ( v53 > v54 )
    {
      v68 = v51 + v75;
      sub_998B30((__int64)&v74, v75, 0, " ", v51);
      v52 = v74;
      v53 = v68;
    }
    else if ( v51 )
    {
      v61 = (char *)v74 + v75;
      if ( v51 == 1 )
      {
        *v61 = 32;
        v52 = v74;
      }
      else
      {
        v67 = v51 + v75;
        memcpy(v61, " ", v51);
        v52 = v74;
        v53 = v67;
      }
    }
    v75 = v53;
    v52[v53] = 0;
    v55 = (__m128 *)v74;
    v77 = &v79;
    if ( v74 == &v76 )
    {
      a5 = _mm_load_si128(&v76);
      v55 = &v79;
      v79 = (__m128)a5;
    }
    else
    {
      v77 = v74;
      v79.m128_u64[0] = v76.m128i_i64[0];
    }
    v76.m128i_i8[0] = 0;
    v74 = &v76;
    v56 = *a1;
    v78 = v75;
    v57 = *(_DWORD *)(a2 + 4);
    v75 = 0;
    v71 = v55;
    v66 = v78;
    v58 = sub_13DC060(
            v57,
            0,
            *(__int64 **)(*(_QWORD *)(*(_QWORD *)v56 + 240LL) + 88LL),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v56 + 240LL) + 56LL),
            a4,
            *(double *)a5.m128i_i64);
    sub_9EC740((__int64)v80, v58, v71, v66, 0);
    sub_1589170(v70, v80);
    if ( v81 != &v82 )
      operator delete(v81);
    if ( v77 != &v79 )
      operator delete(v77);
    if ( v74 != &v76 )
      operator delete(v74);
    if ( v72[0] != v73 )
      operator delete(v72[0]);
    if ( v95 != v97 )
      operator delete(v95);
  }
  v17 = *(_QWORD *)(*a1 + 8);
  v18 = *(unsigned int *)(*a1 + 16);
  if ( (_DWORD)v18 == *(_DWORD *)(v17 + 136) )
    v19 = *(_QWORD *)v17 + 32LL;
  else
    v19 = *(_QWORD *)(v17 + 128) + 144 * v18 + 16;
  v20 = *(_QWORD **)(v19 + 8);
  v21 = a1[1];
  v22 = *(unsigned int *)(v19 + 16);
  v23 = &v20[v22];
  v24 = (8 * v22) >> 3;
  if ( !((8 * v22) >> 5) )
  {
    v26 = *(_QWORD **)(v19 + 8);
LABEL_25:
    switch ( v24 )
    {
      case 2LL:
        v25 = v26;
        break;
      case 3LL:
        v25 = v26 + 1;
        if ( v21 == *v26 )
          goto LABEL_29;
        break;
      case 1LL:
        goto LABEL_78;
      default:
        goto LABEL_28;
    }
    v26 = v25 + 1;
    if ( v21 == *v25 )
    {
      v26 = v25++;
      goto LABEL_29;
    }
LABEL_78:
    v25 = v26 + 1;
    if ( v21 == *v26 )
      goto LABEL_29;
LABEL_28:
    v25 = v23 + 1;
    v26 = v23;
    goto LABEL_29;
  }
  v25 = v20 + 1;
  if ( v21 == *v20 )
  {
    v26 = *(_QWORD **)(v19 + 8);
  }
  else
  {
    v26 = v20 + 1;
    v25 = v20 + 2;
    if ( v21 != v20[1] )
    {
      v26 = v20 + 2;
      v25 = v20 + 3;
      if ( v21 != v20[2] )
      {
        v26 = v20 + 3;
        v25 = v20 + 4;
        v27 = &v20[4 * ((8 * v22) >> 5)];
        if ( v21 != v20[3] )
        {
          while ( 1 )
          {
            v26 = v20 + 4;
            if ( v27 == v20 + 4 )
            {
              v24 = v23 - v26;
              goto LABEL_25;
            }
            if ( v21 == v20[4] )
            {
              v25 = v20 + 5;
              goto LABEL_29;
            }
            if ( v21 == v20[5] )
            {
              v26 = v20 + 5;
              v25 = v20 + 6;
              goto LABEL_29;
            }
            if ( v21 == v20[6] )
            {
              v26 = v20 + 6;
              v25 = v20 + 7;
              goto LABEL_29;
            }
            if ( v21 == v20[7] )
              break;
            v20 += 4;
          }
          v26 = v20 + 7;
          v25 = v20 + 8;
        }
      }
    }
  }
LABEL_29:
  if ( v23 != v25 )
  {
    memmove(v26, v25, (char *)v23 - (char *)v25);
    LODWORD(v22) = *(_DWORD *)(v19 + 16);
  }
  *(_DWORD *)(v19 + 16) = v22 - 1;
  v28 = *(unsigned int *)(a2 + 32);
  if ( v28 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 36) )
  {
    sub_2237220(a2 + 24, a2 + 40, v28 + 1, 8);
    v28 = *(unsigned int *)(a2 + 32);
  }
  *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v28) = v21;
  ++*(_DWORD *)(a2 + 32);
  sub_15F7200(&v83);
  return 1;
}
