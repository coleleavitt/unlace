__int64 __fastcall sub_62D640(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r10
  unsigned __int64 v11; // rdx
  char v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbp
  const __m128i *v15; // r14
  const __m128i *v16; // rbp
  __int64 i; // rax
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned __int64 *v20; // rax
  __int64 v21; // rdi
  __m128i *v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rax
  Elf64_Rela *v26; // rax
  __int64 v27; // rbp
  __int64 v28; // r14
  unsigned __int64 v29; // rax
  __int64 v30; // rdi
  __int64 *v31; // rbx
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // r9
  int v35; // esi
  __int64 v36; // rbp
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  int CursorKind; // eax
  __int128 v42; // xmm0
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  int v46; // r9d
  __int64 CursorUSR; // rax
  __int64 v48; // rdx
  __int64 v49; // rbp
  __int64 v50; // r12
  const char *CString; // rax
  __int64 result; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rdx
  __int64 v57; // r8
  __m128i *v58; // rsi
  __m128i *v59; // rdi
  const __m128i *v60; // rax
  unsigned __int64 v61; // r9
  __int64 v62; // rcx
  __m128i v63; // xmm2
  __m128i v64; // xmm3
  __m128i v65; // xmm1
  unsigned __int64 v66; // r9
  __m128i *v67; // rcx
  const __m128i *v68; // rax
  __int64 v69; // rsi
  __m128i v70; // xmm1
  int v71; // edx
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // edx
  __int64 v75; // rax
  __m128i v76; // xmm0
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // edx
  __int64 v82; // [rsp+28h] [rbp-80h]
  unsigned __int64 v83; // [rsp+28h] [rbp-80h]
  __int64 v84; // [rsp+30h] [rbp-78h]
  unsigned __int64 v85; // [rsp+38h] [rbp-70h]
  _QWORD *v86; // [rsp+38h] [rbp-70h]
  __int64 v87; // [rsp+40h] [rbp-68h]
  unsigned __int64 v88; // [rsp+40h] [rbp-68h]
  __int64 v89; // [rsp+48h] [rbp-60h]
  __m128i v90; // [rsp+50h] [rbp-58h] BYREF
  __m128i v91[4]; // [rsp+60h] [rbp-48h] BYREF

  v6 = a5;
  v11 = a5 + (unsigned __int64)*(unsigned int *)(a1 + 72);
  if ( *(unsigned int *)(a1 + 76) < v11 )
  {
    v83 = a5;
    sub_25D6060(a1 + 64, a1 + 80, v11, 16);
    v6 = v83;
  }
  v12 = *(_BYTE *)(a1 + 8);
  v13 = *(_QWORD *)(a1 + 16);
  if ( (v12 & 0x40) != 0 )
  {
    v54 = *(_QWORD *)(v13 + 1984);
    if ( 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD *)(v13 + 2000) - v54) >> 3) < v6 )
    {
      v14 = 2 * v6;
      v87 = *(_QWORD *)(a1 + 16);
      v85 = v6;
      v82 = *(_QWORD *)(v13 + 1992) - v54;
      v84 = 24 * v6;
      v55 = operator new(24 * v6);
      v56 = (_QWORD *)v87;
      v6 = v85;
      v57 = v55;
      v58 = *(__m128i **)(v87 + 1992);
      v59 = *(__m128i **)(v87 + 1984);
      if ( v58 != v59 )
      {
        v60 = *(const __m128i **)(v87 + 1984);
        if ( ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)&v58[-2].m128i_u64[1] - (char *)v59) >> 3))
            & 0x1FFFFFFFFFFFFFFFLL) != 0
          && (unsigned __int64)&v59[2].m128i_u64[1] - v57 + 7 > 0x5E )
        {
          v61 = ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)&v58[-2].m128i_u64[1] - (char *)v59) >> 3))
               & 0x1FFFFFFFFFFFFFFFLL)
              + 1;
          v62 = v57;
          do
          {
            v63 = _mm_loadu_si128(v60 + 1);
            v64 = _mm_loadu_si128(v60);
            v62 += 48;
            *v60 = 0;
            v65 = _mm_loadu_si128(v60 + 2);
            v60[1] = 0;
            v60 += 3;
            *(__m128i *)(v62 - 48) = v64;
            *(__m128i *)(v62 - 32) = v63;
            *(__m128i *)(v62 - 16) = v65;
            v60[-1] = 0;
          }
          while ( v57 + 48 * (v61 >> 1) != v62 );
          if ( (v61 & 1) != 0 )
          {
            v66 = v61 & 0xFFFFFFFFFFFFFFFELL;
            v67 = (__m128i *)(v57 + 24 * v66);
            v68 = (__m128i *)((char *)v59 + 24 * v66);
            v69 = v68[1].m128i_i64[0];
            v70 = _mm_loadu_si128(v68);
            v68[1].m128i_i64[0] = 0;
            *v68 = 0;
            v67[1].m128i_i64[0] = v69;
            *v67 = v70;
          }
        }
        else
        {
          v75 = v57;
          do
          {
            v76 = _mm_loadu_si128(v59);
            v77 = v59[1].m128i_i64[0];
            *v59 = 0;
            v59 = (__m128i *)((char *)v59 + 24);
            v59[-1].m128i_i64[1] = 0;
            v75 += 24;
            *(__m128i *)(v75 - 24) = v76;
            *(_QWORD *)(v75 - 8) = v77;
          }
          while ( v58 != v59 );
        }
        v59 = *(__m128i **)(v87 + 1984);
      }
      if ( v59 )
      {
        v89 = v57;
        v88 = v85;
        v86 = v56;
        operator delete(v59, v56[250] - (_QWORD)v59);
        v57 = v89;
        v6 = v88;
        v56 = v86;
      }
      v56[248] = v57;
      v56[249] = v57 + v82;
      v56[250] = v84 + v57;
      v13 = *(_QWORD *)(a1 + 16);
      v12 = *(_BYTE *)(a1 + 8);
      goto LABEL_6;
    }
  }
  if ( a5 )
  {
    v14 = 2 * v6;
LABEL_6:
    v15 = (const __m128i *)(a4 + 40);
    v16 = &v15[2 * v6 + 2 * v14];
    for ( i = sub_1367BB0(&v15[-3].m128i_u64[1], a2, a3, *(_QWORD *)(v13 + 1872), a1 + 24, (v12 & 0x10) != 0);
          ;
          i = sub_1367BB0(
                &v15[-3].m128i_u64[1],
                a2,
                a3,
                *(_QWORD *)(v13 + 1872),
                a1 + 24,
                (*(_BYTE *)(a1 + 8) & 0x10) != 0) )
    {
      v18 = i;
      v19 = *(unsigned int *)(a1 + 72);
      v5 = v15[-1].m128i_u32[1] | v5 & 0xFFFFFFFF00000000LL;
      if ( *(unsigned int *)(a1 + 76) < (unsigned __int64)(v19 + 1) )
      {
        sub_25D6060(a1 + 64, a1 + 80, v19 + 1, 16);
        v19 = *(unsigned int *)(a1 + 72);
      }
      v20 = (unsigned __int64 *)(*(_QWORD *)(a1 + 64) + 16 * v19);
      *v20 = v5;
      v20[1] = v18;
      ++*(_DWORD *)(a1 + 72);
      if ( (*(_BYTE *)(a1 + 8) & 0x40) == 0 )
        goto LABEL_7;
      v21 = *(_QWORD *)(a1 + 16);
      v22 = *(__m128i **)(v21 + 1992);
      if ( v22 == *(__m128i **)(v21 + 2000) )
        break;
      v23 = _mm_loadu_si128(v15);
      v24 = v15[1].m128i_i64[0];
      v15 += 6;
      v15[-5].m128i_i64[0] = 0;
      *v22 = v23;
      v15[-6] = 0;
      v22[1].m128i_i64[0] = v24;
      *(_QWORD *)(v21 + 1992) += 24LL;
      v13 = *(_QWORD *)(a1 + 16);
      if ( v16 == v15 )
        goto LABEL_14;
LABEL_8:
      ;
    }
    sub_62D3C0(v21 + 1984, v15);
LABEL_7:
    v15 += 6;
    v13 = *(_QWORD *)(a1 + 16);
    if ( v16 == v15 )
      goto LABEL_14;
    goto LABEL_8;
  }
LABEL_14:
  v25 = *(unsigned int *)a3;
  *(_DWORD *)(v13 + 1888) = v25;
  switch ( v25 )
  {
    case 1LL:
    case 23LL:
      v26 = &stru_FFFF8 + 8;
      break;
    case 2LL:
    case 5LL:
    case 6LL:
    case 18LL:
      v26 = (Elf64_Rela *)((-(__int64)((*(_BYTE *)(*(_QWORD *)(a2 + 232) + 1LL) & 8) == 0) & 0xFFFFFFFFFFFFD100LL)
                         + 28417);
      break;
    case 7LL:
    case 29LL:
      v26 = (Elf64_Rela *)((-(__int64)((*(_BYTE *)(*(_QWORD *)(a2 + 232) + 1LL) & 8) == 0) & 0xFFFFFFFFFFFFD100LL)
                         + 28419);
      break;
    case 8LL:
      v73 = -(__int64)((*(_BYTE *)(*(_QWORD *)(a2 + 232) + 1LL) & 8) == 0);
      BYTE1(v73) &= 0x90u;
      v26 = (Elf64_Rela *)(v73 + 28419);
      break;
    case 9LL:
      v26 = (Elf64_Rela *)((-(__int64)((*(_BYTE *)(*(_QWORD *)(a2 + 232) + 1LL) & 8) == 0) & 0xFFFFFFFFFFFFD0EFLL)
                         + 28445);
      break;
    case 10LL:
      v26 = (Elf64_Rela *)&qword_20;
      break;
    case 11LL:
      v26 = (Elf64_Rela *)&dword_40;
      break;
    case 12LL:
      v26 = (Elf64_Rela *)&qword_80;
      break;
    case 13LL:
      v26 = (Elf64_Rela *)&stru_2100;
      break;
    case 14LL:
      v26 = (Elf64_Rela *)(&stru_21F0 + 16);
      break;
    case 15LL:
      v26 = (Elf64_Rela *)(&stru_2BF8 + 8);
      break;
    case 16LL:
      v26 = (Elf64_Rela *)("clang_CompileCommands_getCommand" + 22);
      break;
    case 17LL:
      v26 = (Elf64_Rela *)(&stru_FF0 + 16);
      break;
    case 20LL:
    case 21LL:
      v26 = (Elf64_Rela *)(&stru_1FF8 + 8);
      break;
    case 26LL:
      v26 = &stru_200000;
      break;
    case 27LL:
      v26 = &stru_80000;
      break;
    case 30LL:
      v26 = &stru_20000;
      break;
    case 31LL:
      v26 = &stru_3FFF8 + 8;
      break;
    case 32LL:
      v26 = (Elf64_Rela *)(&stru_3FF0 + 16);
      break;
    case 33LL:
      v26 = &stru_FFF8 + 8;
      break;
    case 34LL:
      v26 = &stru_3FFFF8 + 8;
      break;
    case 36LL:
      v26 = (Elf64_Rela *)(&loc_7FFFFE + 1);
      break;
    default:
      v26 = nullptr;
      break;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1896LL) = v26;
  std::string::_M_replace();
  v27 = a3[3];
  v28 = v27 + 8LL * a3[4];
  while ( v27 != v28 )
  {
    if ( *(_QWORD *)v27 )
    {
      if ( 0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1960LL) < (unsigned __int64)**(unsigned int **)(*(_QWORD *)v27 + 16LL) )
        goto LABEL_95;
      std::string::_M_append();
    }
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1960LL) == 0x3FFFFFFFFFFFFFFFLL )
LABEL_95:
      std::__throw_length_error("basic_string::append");
    v27 += 8;
    std::string::_M_append();
  }
  if ( (a3[2] & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    goto LABEL_29;
  v29 = a3[2] & 0xFFFFFFFFFFFFFFF0LL;
  v30 = *(_QWORD *)v29;
  v31 = (__int64 *)v29;
  v32 = *(unsigned __int8 *)(*(_QWORD *)v29 + 16LL);
  if ( (unsigned int)(v32 - 46) <= 1 )
    goto LABEL_24;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 46 <= 1 )
  {
    v30 = sub_B0D320(v30);
    if ( v30 )
    {
LABEL_24:
      v33 = sub_B14A40(v30);
      goto LABEL_25;
    }
    v30 = *v31;
    LOBYTE(v32) = *(_BYTE *)(*v31 + 16);
  }
  if ( (_BYTE)v32 == 33 )
  {
LABEL_48:
    v30 = *(_QWORD *)(*(_QWORD *)(v30 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v30 + 16) - 34 > 1 )
      v30 = sub_B0D320(v30);
    while ( 1 )
    {
      v30 = *(_QWORD *)(*(_QWORD *)(v30 + 24) & 0xFFFFFFFFFFFFFFF0LL);
      v71 = *(unsigned __int8 *)(v30 + 16);
      if ( (unsigned int)(v71 - 34) > 1 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
          goto LABEL_29;
        v72 = sub_B0D320(v30);
        v30 = v72;
        if ( !v72 )
          goto LABEL_29;
        LOBYTE(v71) = *(_BYTE *)(v72 + 16);
      }
      if ( (_BYTE)v71 == 35 )
        goto LABEL_52;
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
  {
    v30 = sub_B0D320(v30);
    if ( v30 )
      goto LABEL_48;
    v30 = *v31;
    LOBYTE(v32) = *(_BYTE *)(*v31 + 16);
  }
  if ( (unsigned int)(unsigned __int8)v32 - 34 <= 1 )
    goto LABEL_81;
  v79 = *(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v80 = *(unsigned __int8 *)(v79 + 16);
  if ( (unsigned int)(v80 - 34) <= 1 )
  {
    v30 = sub_B0D320(v30);
    if ( v30 )
    {
      do
      {
LABEL_81:
        v30 = *(_QWORD *)(*(_QWORD *)(v30 + 24) & 0xFFFFFFFFFFFFFFF0LL);
        v74 = *(unsigned __int8 *)(v30 + 16);
        if ( (unsigned int)(v74 - 34) > 1 )
        {
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 34 > 1 )
            goto LABEL_29;
          v78 = sub_B0D320(v30);
          v30 = v78;
          if ( !v78 )
            goto LABEL_29;
          LOBYTE(v74) = *(_BYTE *)(v78 + 16);
        }
      }
      while ( (_BYTE)v74 != 35 );
LABEL_52:
      v33 = sub_B07AF0(v30);
      goto LABEL_25;
    }
    v79 = *(_QWORD *)(*(_QWORD *)(*v31 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v80) = *(_BYTE *)(v79 + 16);
  }
  if ( (_BYTE)v80 != 28 )
    goto LABEL_29;
  v33 = sub_B14EC0(v79);
LABEL_25:
  if ( !v33 )
  {
LABEL_29:
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1904LL) = 73;
    v53 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(v53 + 1920) = 0;
    **(_BYTE **)(v53 + 1912) = 0;
    goto LABEL_30;
  }
  v35 = v33;
  sub_639160(&v90, v33, **(_QWORD **)(a1 + 336), 0, 1, v34);
  v36 = *(_QWORD *)(a1 + 16);
  CursorKind = clang_getCursorKind((int)&v90, v35, v37, v38, v39, v40, _mm_load_si128(&v90).m128i_i32[0]);
  v42 = (__int128)_mm_load_si128(&v90);
  *(_DWORD *)(v36 + 1904) = CursorKind;
  CursorUSR = clang_getCursorUSR((int)&v90, v35, v43, v44, v45, v46, v42, (__int128)_mm_load_si128(v91));
  v49 = v48;
  v50 = CursorUSR;
  CString = (const char *)clang_getCString(CursorUSR, v48);
  strlen(CString);
  std::string::_M_replace();
  clang_disposeString(v50, v49);
  if ( *v31 )
  {
    result = (unsigned __int8)sub_B19120(*v31, 0);
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1944LL) = (unsigned __int8)result;
    return result;
  }
LABEL_30:
  result = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(result + 1944) = 1;
  return result;
}

