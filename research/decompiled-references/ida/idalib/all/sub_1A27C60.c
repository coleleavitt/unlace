void __fastcall sub_1A27C60(
        __int64 a1,
        __m128i *a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int *a9,
        char a10)
{
  __int64 v15; // r11
  __int64 v16; // rax
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  __int64 *v19; // r15
  __int16 v20; // ax
  __int64 *v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r11
  __int64 v29; // rdi
  __int64 v30; // rbx
  unsigned int v31; // eax
  __int64 v32; // rbx
  size_t v33; // r12
  int v34; // eax
  __int64 v35; // r12
  size_t v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r13
  int v39; // eax
  int v40; // eax
  __int32 v41; // eax
  __int16 v42; // ax
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rdi
  _QWORD *v49; // rdi
  unsigned __int8 v50; // cl
  _DWORD *v51; // rcx
  _DWORD *v52; // rax
  bool v53; // zf
  _DWORD *v54; // rax
  __int64 v55; // rax
  __int64 *v56; // r11
  char v57; // r9
  unsigned __int64 v58; // rax
  __int64 v59; // [rsp+8h] [rbp-20A0h]
  _WORD *v60; // [rsp+10h] [rbp-2098h]
  _QWORD *v61; // [rsp+10h] [rbp-2098h]
  __int64 v62; // [rsp+18h] [rbp-2090h]
  _DWORD *v63; // [rsp+18h] [rbp-2090h]
  __int64 v64; // [rsp+20h] [rbp-2088h]
  unsigned __int64 v65; // [rsp+28h] [rbp-2080h] BYREF
  _DWORD *v66; // [rsp+30h] [rbp-2078h] BYREF
  __int64 v67; // [rsp+38h] [rbp-2070h] BYREF
  __m128i v68; // [rsp+40h] [rbp-2068h] BYREF
  void *v69; // [rsp+58h] [rbp-2050h]
  __int64 v70; // [rsp+68h] [rbp-2040h] BYREF
  __m128 v71; // [rsp+80h] [rbp-2028h] BYREF
  __m128 v72; // [rsp+90h] [rbp-2018h]
  __m128i v73; // [rsp+A0h] [rbp-2008h] BYREF
  unsigned __int64 v74[1021]; // [rsp+C0h] [rbp-1FE8h] BYREF

  v65 = a4;
  v15 = a4;
  v16 = *(_QWORD *)(a3 + 16);
  v17 = *a5;
  v18 = *(_DWORD **)(v16 + 8 * v17);
  v19 = (__int64 *)(v65 & 0xFFFFFFFFFFFFFFF0LL);
  v66 = v18;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 <= 1 )
  {
    sub_1A25860(a1, (__int64)a2, a3, v65, a5, a6, a7, a8, a9);
    return;
  }
  v20 = *(_WORD *)v18 & 0x1FF;
  if ( v20 == 53 )
  {
    v21 = *((__int64 **)v18 + 2);
    v22 = *(_QWORD *)a1;
    if ( (unsigned int)((__int64)(*((_QWORD *)v18 + 3) - (_QWORD)v21) >> 3) == 1 )
    {
      v46 = *v21;
      v63 = v18;
      v61 = *(_QWORD **)(v22 + 248);
      v47 = sub_A72040(v61, v65);
      v17 = (__int64)v61;
      if ( !v47 || (unsigned int)sub_1A0A380(v46, v47) )
      {
        v15 = v65;
        v18 = v66;
        v22 = *(_QWORD *)a1;
        v19 = (__int64 *)(v65 & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        v15 = v65;
        v22 = *(_QWORD *)a1;
        v18 = **((_DWORD ***)v63 + 2);
        v19 = (__int64 *)(v65 & 0xFFFFFFFFFFFFFFF0LL);
        v66 = v18;
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v22 + 232) + 1LL) & 8) != 0 )
      goto LABEL_26;
    goto LABEL_7;
  }
  if ( v20 == 54 )
  {
    if ( a6 )
    {
      sub_1A11640((_BYTE *)a1, a6, a9, v18, *(double *)a7.m128_u64);
      LODWORD(v17) = *a5;
    }
    *a5 = v17 + 1;
    return;
  }
  v22 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 8) == 0 )
  {
LABEL_7:
    if ( (*(_WORD *)v18 & 0x1FF) != 0x35 )
    {
      if ( sub_F61140(*v19, v22, v17, (__int64)v18, (__int64)a5, a6)
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 7 )
      {
        sub_1A25380((_BYTE *)a1, (__int64)a2, a3, v65, a5, a6, a7, a8, a9);
        return;
      }
      v23 = sub_A72040(*(_QWORD **)(*(_QWORD *)a1 + 248LL), v65);
      if ( v23 )
      {
        v22 = v23;
        if ( (unsigned int)sub_1A0A380((__int64)v66, v23) )
        {
LABEL_12:
          v28 = v65;
          goto LABEL_13;
        }
        if ( !*(_BYTE *)(a1 + 9) )
        {
          v56 = *(__int64 **)a1;
          v57 = 0;
          if ( (**(_BYTE **)(*(_QWORD *)a1 + 232LL) & 8) != 0 )
            v57 = sub_1A0AF90(a2->m128i_i32);
          sub_1A14210((__int64)v66, (__int64)&v65, v23, v56, a2->m128i_i64, v57, *(double *)a7.m128_u64);
        }
        if ( a6 )
          sub_1A11640((_BYTE *)a1, a6, a9, v66, *(double *)a7.m128_u64);
      }
      else
      {
        v22 = v65;
        v49 = *(_QWORD **)a1;
        v50 = *(_BYTE *)(a1 + 9) ^ 1;
        v74[0] = (unsigned __int64)v66;
        if ( (unsigned int)sub_1919BF0(v49, v65, v74, v50, 0, 1u, a7, a8) == 18 )
          goto LABEL_12;
        v51 = (_DWORD *)(v74[0] & 0xFFFFFFFFFFFFFFFELL);
        if ( v74[0] == 1 )
        {
          *(_BYTE *)(a1 + 8) = 1;
        }
        else
        {
          v58 = sub_19179A0(
                  *(_QWORD *)a1,
                  (_QWORD *)(v74[0] & 0xFFFFFFFFFFFFFFFELL),
                  1u,
                  (__int64)v51,
                  v26,
                  v27,
                  a7,
                  a8);
          v74[0] = v58;
          if ( v58 == 1 )
          {
            *(_BYTE *)(a1 + 8) = 1;
            v51 = nullptr;
          }
          else
          {
            v51 = (_DWORD *)(v58 & 0xFFFFFFFFFFFFFFFELL);
          }
        }
        if ( a6 )
          sub_1A11640((_BYTE *)a1, a6, a9, v51, *(double *)a7.m128_u64);
      }
      ++*a5;
      return;
    }
  }
LABEL_26:
  v64 = v22;
  v62 = v15;
  v60 = v18;
  v41 = sub_EEB7E0((unsigned __int64)v18, v22, *(double *)a7.m128_u64);
  v68.m128i_i64[1] = 0;
  v28 = v62;
  v68.m128i_i16[0] = 2;
  v68.m128i_i32[1] = v41;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 58
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2[1].m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 58 )
  {
    a7 = (__m128)_mm_loadu_si128(a2);
    a8 = (__m128)_mm_loadu_si128(a2 + 1);
    v71 = a7;
    v72 = a8;
    v73 = _mm_loadu_si128(a2 + 2);
  }
  else
  {
    v71.m128_i32[0] = 9;
    v71.m128_u64[1] = 0;
    v72.m128_u64[0] = v65;
    v72.m128_i32[2] = 0;
    v73.m128i_i64[0] = 0;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v72.m128_u64[0] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
  {
    sub_1A19220((__int64)v74, v22, (__int64)&v71, &v68, (__int64)&v66, 1, a7, a8, 1u, 1u);
    if ( !LODWORD(v74[0]) )
    {
      if ( (*(_WORD *)v66 & 0x1FF) != 0x35 )
      {
        sub_1A0BB10((__int64)v74);
        v28 = v65;
LABEL_13:
        v29 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 47LL) & 0x20) == 0
          && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1
          || sub_F61BB0(v29, v22, v24, v25, v26, v27) )
        {
          sub_1A27710((unsigned int *)a1, a2->m128i_i64, a3, v65, (int *)a5, a6, a7, a8, a9);
          ++*a9;
          if ( a10 )
          {
            v30 = *(_QWORD *)a1;
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 1LL) & 8) != 0 && !*(_BYTE *)(a1 + 8) )
            {
              if ( *(_BYTE *)(a1 + 11) )
                *(_BYTE *)(a1 + 8) = 1;
              if ( !*(_BYTE *)(a1 + 9) )
              {
                v31 = sub_EEB7E0((unsigned __int64)v66, (__int64)a2, *(double *)a7.m128_u64);
                sub_168B9F0((__int64)v74, (__int64 *)(v30 + 8), v31, 0x159Cu, 0);
                v67 = sub_EEC8C0((unsigned __int64)v66, v30 + 8, *(double *)a7.m128_u64);
                v32 = sub_1587DB0((__int64)v74, &v67);
                v33 = j__strlen("{");
                v34 = sub_EEB7E0((unsigned __int64)v66, (__int64)&v67, *(double *)a7.m128_u64);
                sub_9EC740((__int64)&v68, v34, "{", v33, 0);
                v35 = sub_1589170(v32, &v68);
                v36 = j__strlen("}");
                v37 = *(_QWORD *)a1;
                v38 = v36;
                v39 = sub_EEC140((unsigned __int64)v66);
                v40 = sub_15F0EF0(v37, v39, 0, (__m128i)a7, *(double *)a8.m128_u64);
                sub_9EC740((__int64)&v71, v40, "}", v38, 0);
                sub_1589170(v35, &v71);
                if ( (unsigned __int64 *)v72.m128_u64[1] != &v73.m128i_u64[1] )
                  operator delete((void *)v72.m128_u64[1]);
                if ( v69 != &v70 )
                  operator delete(v69);
                sub_15F7200(v74);
              }
            }
          }
        }
        else
        {
          if ( !*(_BYTE *)(a1 + 9) )
            sub_1A24E20(*(_QWORD *)a1, (__int64)a2, 0, (__int64)v66, 1u, 0, a7, a8);
          *(_BYTE *)(a1 + 8) = 1;
          ++*a5;
          ++*a9;
        }
        return;
      }
      if ( *(_BYTE *)(a1 + 9) )
        goto LABEL_53;
      goto LABEL_76;
    }
    if ( (*(_WORD *)v66 & 0x1FF) == 0x42 )
    {
      v52 = (_DWORD *)sub_1A0A810(a1, (__int64)v66, (__int64)a2);
      v53 = *(_BYTE *)(a1 + 9) == 0;
      v66 = v52;
      if ( !v53 )
      {
        if ( !LODWORD(v74[0]) )
        {
LABEL_53:
          *(_BYTE *)(a1 + 8) = 1;
LABEL_54:
          if ( !*(_QWORD *)(a1 + 40) )
            ++*a5;
          v48 = *(_QWORD *)(a1 + 32);
          if ( v48 )
            sub_A6A4A0(v48, v65);
          sub_1A0BB10((__int64)v74);
          return;
        }
        goto LABEL_72;
      }
    }
    else if ( *(_BYTE *)(a1 + 9) )
    {
LABEL_72:
      if ( !a6 )
        goto LABEL_54;
      v54 = (_DWORD *)sub_1A0A760(*(_QWORD *)a1, a1 + 24);
LABEL_74:
      sub_1A11640((_BYTE *)a1, a6, a9, v54, *(double *)a7.m128_u64);
      goto LABEL_54;
    }
LABEL_76:
    v55 = sub_1A1D600(
            (unsigned int)v74,
            *(_QWORD *)a1,
            (unsigned int)&v71,
            (unsigned int)&v68,
            (unsigned int)&v66,
            1,
            0);
    if ( v55 == 1 )
      *(_BYTE *)(a1 + 8) = 1;
    if ( !a6 )
      goto LABEL_54;
    v54 = (_DWORD *)(v55 & 0xFFFFFFFFFFFFFFFELL);
    goto LABEL_74;
  }
  v42 = *v60 & 0x1FF;
  if ( v42 != 53 && v42 != 68 )
  {
    v22 = v65;
    v43 = sub_A72040(*(_QWORD **)(v64 + 248), v65);
    v28 = v65;
    if ( v43 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(v43 + 16) - 2 <= 1 )
        goto LABEL_13;
    }
  }
  ++*a5;
  v44 = *(_QWORD *)(a1 + 32);
  v45 = *(unsigned int *)(v44 + 8);
  if ( v45 + 1 > (unsigned __int64)*(unsigned int *)(v44 + 12) )
  {
    v59 = v28;
    sub_2237220(*(_QWORD *)(a1 + 32), v44 + 16, v45 + 1, 8);
    v45 = *(unsigned int *)(v44 + 8);
    v28 = v59;
  }
  *(_QWORD *)(*(_QWORD *)v44 + 8 * v45) = v28;
  ++*(_DWORD *)(v44 + 8);
}
