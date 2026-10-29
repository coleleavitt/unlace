unsigned __int64 __fastcall sub_192BE00(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v9; // rax
  unsigned __int16 v10; // ax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rbp
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // r12
  int v28; // r13d
  size_t v29; // rax
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // r9
  __int64 v33; // r13
  size_t v34; // r12
  size_t v35; // rax
  unsigned int v36; // eax
  __m128 v37; // xmm0
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // r8
  char v41; // al
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 *v47; // rsi
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  void *v51; // rdi
  int v52; // ebp
  unsigned int v53; // eax
  __int64 v54; // rsi
  __int64 v55; // rax
  unsigned __int64 v56; // rbp
  unsigned int v57; // r13d
  unsigned int v58; // r12d
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 *v61; // rax
  __int64 *v62; // rax
  __m128i v63; // xmm2
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r13
  __int64 v67; // rax
  _BOOL4 v68; // r9d
  __int64 v69; // rax
  __int64 *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // [rsp+0h] [rbp-2C8h] BYREF
  __int64 v76; // [rsp+8h] [rbp-2C0h]
  __m128i *v77; // [rsp+10h] [rbp-2B8h]
  unsigned int v78; // [rsp+1Ch] [rbp-2ACh]
  __int64 v79; // [rsp+28h] [rbp-2A0h] BYREF
  __m128i v80; // [rsp+30h] [rbp-298h] BYREF
  __int64 v81; // [rsp+40h] [rbp-288h]
  int v82; // [rsp+50h] [rbp-278h] BYREF
  __int64 v83; // [rsp+58h] [rbp-270h]
  __int64 v84; // [rsp+68h] [rbp-260h]
  __int64 v85[2]; // [rsp+70h] [rbp-258h] BYREF
  __m128 v86; // [rsp+80h] [rbp-248h]
  __int128 v87; // [rsp+90h] [rbp-238h] BYREF
  void *v88[2]; // [rsp+A0h] [rbp-228h]
  __int128 v89; // [rsp+B0h] [rbp-218h]
  __int64 v90; // [rsp+C0h] [rbp-208h] BYREF
  _QWORD *v91; // [rsp+C8h] [rbp-200h] BYREF
  __int64 v92; // [rsp+D0h] [rbp-1F8h]
  _BYTE v93[64]; // [rsp+D8h] [rbp-1F0h] BYREF
  void *v94[2]; // [rsp+118h] [rbp-1B0h]
  __int64 v95; // [rsp+128h] [rbp-1A0h]
  __int64 v96; // [rsp+130h] [rbp-198h]
  __m128 v97; // [rsp+138h] [rbp-190h]
  __int64 v98; // [rsp+148h] [rbp-180h]
  __int64 v99; // [rsp+150h] [rbp-178h]
  __int64 v100; // [rsp+158h] [rbp-170h]
  __int64 v101; // [rsp+160h] [rbp-168h]
  void *ptr[2]; // [rsp+170h] [rbp-158h] BYREF
  _QWORD v103[41]; // [rsp+180h] [rbp-148h] BYREF

  v9 = *(_QWORD *)(*((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v9 + 16) != 13 )
    goto LABEL_8;
  v10 = (*(_WORD *)(v9 + 18) >> 3) & 0x1FF;
  if ( v10 <= 0x1F1u )
    goto LABEL_8;
  if ( v10 != 504 )
    goto LABEL_7;
  if ( (_DWORD)a3 == 2 )
  {
LABEL_70:
    a2 = (char *)sub_19D0DD0(*(_QWORD *)(a1 + 736));
    goto LABEL_8;
  }
  if ( !a4 || (*((_BYTE *)a4 + 29) & 1) == 0 )
    goto LABEL_7;
  v75 = (unsigned __int64)a2;
  v61 = sub_B8C3D0((__int64)a4, (__int64)a2, a3, (__int64)a4, a5, a6);
  a3 = *v61;
  a4 = (__int64 *)(*v61 + 8LL * *((unsigned int *)v61 + 2));
  if ( *v61 >= (unsigned __int64)a4 )
  {
    if ( (__int64 *)a3 == a4 )
      goto LABEL_7;
    if ( *(_WORD *)(*a4 + 36) != 151 )
    {
      v70 = a4 + 1;
      while ( 1 )
      {
        a4 = v70;
        if ( (__int64 *)a3 == v70 )
          goto LABEL_7;
        v71 = *v70++;
        if ( *(_WORD *)(v71 + 36) == 151 )
          goto LABEL_70;
      }
    }
    goto LABEL_70;
  }
  v62 = (__int64 *)*v61;
  while ( 1 )
  {
    a3 = *v62;
    if ( *(_WORD *)(*v62 + 36) == 151 )
      break;
    if ( a4 == ++v62 )
      goto LABEL_7;
  }
  if ( a4 != v62 )
    goto LABEL_70;
LABEL_7:
  v11 = sub_1907C70(a1, a2, (__m128i)a7, a8, a3, (__int64)a4, a5, a6);
  a2 = (char *)(v11 & 0xFFFFFFFFFFFFFFFELL);
  if ( v11 == 1 )
    return 1;
LABEL_8:
  v12 = sub_19245F0(a1, a2, a3, (__int64)a4, a5, a6, a7, a8);
  if ( v12 == 1 )
    return 1;
  v17 = v12 & 0xFFFFFFFFFFFFFFFELL;
  v18 = v17;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 11
    && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) != 0 )
  {
    v23 = sub_C0A3E0(*(_QWORD **)(a1 + 248), *(_QWORD *)(v17 + 8), 57, v17, 0, 0, 0);
    *(_WORD *)(a1 + 4512) = 257;
    v18 = v23 & 0xFFFFFFFFFFFFFFFELL;
  }
  ptr[0] = *(void **)(v18 + 8);
  if ( (unsigned int)sub_18C6570(a1, (__int64 *)ptr, v13, v14, v15, v16) == 2 )
  {
    v82 = 0;
    v87 = 0;
    *(_OWORD *)v88 = 0;
    v89 = 0;
    v83 = 0;
    v84 = 0;
    v26 = sub_EEB7E0(v18, (__int64)ptr, 0.0);
    v27 = *(_QWORD *)(a1 + 240);
    v28 = v26;
    v29 = j__strlen("__builtin_trap");
    v30 = sub_6F3470(v27 + 552, "__builtin_trap", v29);
    HIDWORD(v84) = v28;
    v82 = 0;
    v31 = *(_QWORD *)(a1 + 192);
    v83 = v30;
    LODWORD(v84) = v28;
    ptr[0] = v103;
    ptr[1] = (void *)0x800000000LL;
    v77 = &v80;
    v103[32] = 0;
    v80.m128i_i64[0] = 0;
    v80.m128i_i32[2] = 0;
    v81 = 0;
    sub_18C1280((__int64 *)a1, (__int64)&v82, (__int64)ptr, &v80, &v79, v32, 0.0);
    if ( (v80.m128i_i8[0] & 7) != 0 )
    {
      v75 = 0;
      v78 = v80.m128i_u32[2];
    }
    else
    {
      v75 = v80.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
      v78 = v80.m128i_u32[2];
      if ( (v80.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v33 = *(_QWORD *)((v80.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) + 16);
        if ( (*(_QWORD *)v33 & 0xFFFFFFFE) != 0 && *(_WORD *)(v33 + 16) == 9020 )
        {
          v34 = (unsigned int)*(_QWORD *)v33;
          v35 = j__strlen("#>");
          if ( v34 >= v35 && (!v35 || !memcmp((const void *)(v33 + v34 - v35 + 16), "#>", v35)) )
          {
LABEL_59:
            if ( ptr[0] != v103 )
              free(ptr[0]);
            goto LABEL_61;
          }
        }
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 48) == 2
      && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0
      && (*(_BYTE *)(v31 + 8) & 0x20) != 0 )
    {
      v63 = _mm_load_si128(&v80);
      v37 = 0;
      v91 = v93;
      v92 = 0x800000000LL;
      v90 = 0;
      v98 = v81;
      *(_OWORD *)v94 = 0;
      v95 = 0;
      v96 = a1;
      v97 = (__m128)v63;
      v99 = 0;
      v100 = 3;
      v101 = 0x101010000LL;
      sub_1A395A0(&v90);
      if ( (unsigned __int8)sub_1A49A10(a1, &v90, v31, 0, 0) )
      {
        v66 = sub_16C47B0(*v91 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_BYTE *)(v66 + 28) & 0x7Fu) - 26 <= 0x1A )
        {
          v85[0] = *(_QWORD *)(v66 + 48);
          v67 = sub_C1BEF0((__int64)v85, (__int64)&v90, v64, v65);
          v47 = (__int64 *)v66;
          v76 = sub_190BDA0(a1, v66, v67, 1, v78, 0, 0.0, a8);
          sub_169D230((__int64)&v90);
LABEL_52:
          v51 = ptr[0];
          if ( ptr[0] == v103 )
          {
LABEL_54:
            if ( v76 != 1 )
            {
              v52 = sub_EEC140(v18);
              v53 = sub_EEB7E0(v18, (__int64)v47, *(double *)v37.m128_u64);
              v54 = *(_QWORD *)(a1 + 192);
              v55 = sub_192A5E0(
                      a1,
                      v54,
                      (unsigned __int16 *)(v76 & 0xFFFFFFFFFFFFFFFELL),
                      v53,
                      nullptr,
                      0,
                      v37,
                      a8,
                      v52,
                      0,
                      0,
                      0);
              if ( v55 != 1 )
              {
                v56 = v55 & 0xFFFFFFFFFFFFFFFELL;
                v57 = sub_EEB7E0(v18, v54, *(double *)v37.m128_u64);
                v75 = *(_QWORD *)(a1 + 192);
                v58 = sub_18C3160(66);
                sub_18F8950(a1, v58, v57, v56, v18, v59, (__m128i)v37, *(double *)a8.m128_u64);
                sub_16CDEE0(a1, v56, v58 - 21 >= 0xB ? 5 : 0, *(double *)v37.m128_u64);
                sub_16CDEE0(a1, v18, v58 - 21 >= 0xB ? 5 : 0, *(double *)v37.m128_u64);
                v60 = sub_1929BB0(a1, v75, v57, v58, v56, (_QWORD *)v18, v37, a8, 0);
                if ( v60 != 1 )
                {
                  result = v60 & 0xFFFFFFFFFFFFFFFELL;
                  goto LABEL_62;
                }
              }
            }
LABEL_61:
            result = 1;
LABEL_62:
            if ( HIDWORD(v88[1]) )
            {
              v75 = result;
              free(v88[0]);
              return v75;
            }
            return result;
          }
LABEL_53:
          free(v51);
          goto LABEL_54;
        }
      }
      sub_169D230((__int64)&v90);
    }
    v36 = 12;
    if ( v82 != 8 )
      v36 = 0;
    v37 = 0;
    a8 = (__m128)_mm_load_si128(&v80);
    v91 = v93;
    v100 = v36;
    v90 = 0;
    v92 = 0x800000000LL;
    *(_OWORD *)v94 = 0;
    v95 = 0;
    v96 = a1;
    v97 = a8;
    v98 = v81;
    v99 = 0;
    v101 = 0x101010000LL;
    sub_1A395A0(&v90);
    if ( v79 )
    {
      if ( (unsigned __int8)sub_1CE41F0(a1, 0x100000000LL, (__int64)v85, 1) )
        goto LABEL_58;
      v39 = v90;
      if ( (_DWORD)v90 != 1 )
      {
        v40 = (unsigned int)v87;
        if ( !(_DWORD)v87 || !DWORD1(v87) || *((_QWORD *)&v87 + 1) )
          goto LABEL_34;
      }
    }
    else
    {
      v68 = 1;
      LOBYTE(v76) = 0;
      if ( v75 && !*((_QWORD *)&v87 + 1) )
      {
        v74 = sub_15F1670(a1);
        LOBYTE(v76) = v74 != 0;
        v68 = v74 == 0;
      }
      sub_1A5D3E0(a1, (unsigned int)&v90, v31, (unsigned int)&v87, 0, v68, 0);
      v39 = v90;
      if ( (_DWORD)v90 != 1 && (!(_DWORD)v87 || !DWORD1(v87) || *((_QWORD *)&v87 + 1)) )
      {
        if ( (_BYTE)v76 )
        {
          v47 = &v90;
          v69 = sub_19E7170(*(_QWORD *)(a1 + 736), &v90, v31, v75, 1);
          if ( v69 == 1 )
            goto LABEL_58;
          v76 = v69 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v69 & 0xFFFFFFFFFFFFFFFELL) != 0 )
            goto LABEL_51;
          v39 = v90;
        }
LABEL_34:
        if ( v39 == 5 )
          goto LABEL_58;
        if ( !(_DWORD)v92 )
        {
          if ( v75 )
          {
            v72 = *(_QWORD *)(a1 + 232);
            if ( (*(_WORD *)v72 & 0x808) == 0 && (*(_BYTE *)(v72 + 12) & 1) == 0 && (*(_BYTE *)(v72 + 47) & 0x20) == 0 )
            {
              v73 = (unsigned __int64)sub_17FF390(a1, v78, v75, v31, v40, v38);
              if ( v73 )
              {
                v85[0] = v73 | (*(_BYTE *)(v73 + 29) >> 5) & 3;
                sub_1743080((__int64)&v91, v85[0]);
                LODWORD(v90) = 2;
              }
            }
          }
        }
        v41 = sub_18C19C0(a1, (__int64)&v87, (__int64)&v90, 1u);
        v43 = (unsigned int)v92;
        LOBYTE(v78) = v41;
        if ( (_DWORD)v92 || v41 )
        {
LABEL_88:
          if ( (unsigned __int8)sub_19C4B30(a1, &v87, &v90, 0, v42, v43) )
          {
            v47 = (__int64 *)&v87;
            v76 = sub_19CC8A0(a1, &v87, 0, &v90, v79, v31);
          }
          else
          {
            v47 = (__int64 *)&v87;
            if ( v79 )
              v76 = sub_1CD7830(a1, &v87, 0, &v90, (unsigned __int8)v78, v79);
            else
              v76 = sub_190B490(a1, (__int64 *)&v87, (__int64)&v90, (unsigned __int8)v78, 0, 0, (__m128i)v37, a8);
          }
          goto LABEL_51;
        }
        v44 = *((_QWORD *)&v87 + 1);
        if ( (_DWORD)v87 && DWORD1(v87) || *((_QWORD *)&v87 + 1) || (**(_BYTE **)(a1 + 232) & 0x20) == 0 )
          goto LABEL_42;
        v47 = *(__int64 **)(a1 + 248);
        v76 = sub_18D7B30(a1, v47, (__int64)v77, 0, v79);
        if ( !v76 )
        {
          v44 = *((_QWORD *)&v87 + 1);
LABEL_42:
          v75 = v44;
          v37 = _mm_loadh_ps((const double *)&v75);
          v85[0] = (__int64)off_2C58E38;
          v86 = v37;
          v85[1] = 0x101010101LL;
          if ( !(unsigned __int8)sub_18DE2E0(a1, v31, (unsigned int *)&v87, (__int64)&v90, (__int64)v85, 0, 0, 0, 0) )
          {
            if ( (_DWORD)v90 == 2 )
            {
              v45 = sub_16C47B0(*v91 & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_BYTE *)(v45 + 28) & 0x7F) == 0x32 )
              {
                LODWORD(v90) = 0;
                LODWORD(v92) = 0;
                if ( v94[0] )
                {
                  v75 = v45;
                  sub_1A39780(v94[0]);
                  v45 = v75;
                }
                v37 = 0;
                v46 = *(_QWORD *)(a1 + 736);
                v47 = &v90;
                *(_OWORD *)v94 = 0;
                BYTE6(v101) = 0;
                v48 = *(_QWORD *)(v45 + 40);
                v49 = v48 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v48 & 7) != 0 )
                  v49 = 0;
                v50 = sub_19E7170(v46, &v90, v31, v49, 0);
                v76 = v50;
                if ( v50 == 1 )
                {
                  sub_169D230((__int64)&v90);
                  v51 = ptr[0];
                  if ( ptr[0] == v103 )
                    goto LABEL_61;
                  goto LABEL_53;
                }
                if ( (v50 & 0xFFFFFFFFFFFFFFFELL) != 0 )
                  goto LABEL_51;
                goto LABEL_58;
              }
            }
            goto LABEL_88;
          }
LABEL_58:
          sub_169D230((__int64)&v90);
          goto LABEL_59;
        }
LABEL_51:
        sub_169D230((__int64)&v90);
        goto LABEL_52;
      }
    }
    v47 = (__int64 *)&v87;
    v76 = sub_1CB42E0(a1, &v87, 0, v77, 0, v79);
    goto LABEL_51;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
  {
    v24 = *(_QWORD *)(v18 + 8);
    v25 = sub_C00A40(v18, (__int64)ptr, v19, v20, v21);
    if ( (unsigned __int8)sub_1E63CF0(a1, v25, v24, 1, 3380) )
      return 1;
  }
  return v18;
}
