__int64 __fastcall sub_21B4A00(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  unsigned __int64 v15; // r12
  __int64 v16; // r13
  _BOOL8 v17; // rax
  __int64 v18; // rax
  bool v19; // cf
  unsigned __int64 v20; // rax
  __int64 (__fastcall ***v21)(); // rax
  __int64 v22; // rax
  __int64 v24; // rax
  bool (__fastcall *v25)(__int64); // rdx
  bool v26; // al
  unsigned __int16 v27; // ax
  __int64 v28; // rcx
  unsigned __int16 v29; // ax
  bool (__fastcall *v30)(__int64); // rdx
  __int64 v31; // r14
  bool v32; // al
  unsigned __int64 v33; // rcx
  __int64 (__fastcall ***v34)(); // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r15
  _BYTE *v48; // rdi
  unsigned __int64 v49; // rcx
  unsigned __int128 v50; // rax
  __int64 (__fastcall ***v51)(); // rax
  __int64 v52; // rax
  unsigned int v53; // eax
  __int64 v54; // r14
  bool (__fastcall *v55)(__int64); // rax
  bool v56; // al
  __int64 v57; // rdx
  unsigned __int64 v58; // r15
  unsigned __int64 v59; // r15
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 (__fastcall ***v62)(); // rax
  __int64 v63; // rcx
  __int64 v64; // r9
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r15
  _BYTE *v75; // rdi
  __m128i v76; // xmm1
  __int64 (__fastcall ***v77)(); // [rsp+8h] [rbp-270h]
  __int64 (__fastcall ***v78)(); // [rsp+8h] [rbp-270h]
  unsigned __int64 v79; // [rsp+18h] [rbp-260h] BYREF
  __int64 v80; // [rsp+20h] [rbp-258h] BYREF
  __int64 v81; // [rsp+28h] [rbp-250h] BYREF
  unsigned __int64 v82; // [rsp+30h] [rbp-248h] BYREF
  char v83; // [rsp+38h] [rbp-240h]
  unsigned __int64 v84; // [rsp+40h] [rbp-238h] BYREF
  char v85; // [rsp+48h] [rbp-230h]
  __m128i v86; // [rsp+50h] [rbp-228h] BYREF
  _BYTE v87[16]; // [rsp+60h] [rbp-218h] BYREF
  __m128i v88; // [rsp+70h] [rbp-208h] BYREF
  _BYTE v89[16]; // [rsp+80h] [rbp-1F8h] BYREF
  __m128i v90; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v91; // [rsp+A0h] [rbp-1D8h]
  __int16 v92; // [rsp+B0h] [rbp-1C8h]
  __m128i v93[2]; // [rsp+C0h] [rbp-1B8h] BYREF
  __int16 v94; // [rsp+E0h] [rbp-198h]
  __m128i v95[3]; // [rsp+F0h] [rbp-188h] BYREF
  __m128i v96[2]; // [rsp+120h] [rbp-158h] BYREF
  __int16 v97; // [rsp+140h] [rbp-138h]
  __m128i v98[3]; // [rsp+150h] [rbp-128h] BYREF
  __m128i v99; // [rsp+180h] [rbp-F8h] BYREF
  __int64 v100; // [rsp+190h] [rbp-E8h]
  __int16 v101; // [rsp+1A0h] [rbp-D8h]
  __m128i v102[3]; // [rsp+1B0h] [rbp-C8h] BYREF
  __m128i v103[2]; // [rsp+1E0h] [rbp-98h] BYREF
  __int16 v104; // [rsp+200h] [rbp-78h]
  __m128i v105; // [rsp+210h] [rbp-68h] BYREF
  __int64 v106; // [rsp+220h] [rbp-58h]
  __int64 v107; // [rsp+228h] [rbp-50h]

  v105 = a7;
  v107 = a9;
  v10 = operator new(0x60u);
  v106 = a8;
  sub_21A20D0((_QWORD *)v10, a2, v11, v12, v13, v14, a7.m128i_i64[0], a7.m128i_i64[1], a8, a9);
  v15 = *(_QWORD *)(v10 + 16);
  v79 = 0;
  v16 = *(_QWORD *)(v10 + 24);
  *(_DWORD *)(v10 + 80) = 0;
  *(_OWORD *)(v10 + 48) = 0;
  *(_QWORD *)v10 = &off_2C74A18;
  v17 = *(_DWORD *)(v10 + 8) == 12;
  *(_OWORD *)(v10 + 64) = 0;
  v18 = 4 * v17 + 20;
  *(_QWORD *)(v10 + 88) = 0;
  v19 = __CFADD__(v15, v18);
  v20 = v15 + v18;
  if ( (v19 || v20 > v15 + v16) && (v21 = sub_2195B10(), sub_2220500(&v105, 4, v21), (v22 = v105.m128i_i64[0]) != 0) )
  {
    v83 |= 1u;
    *(_BYTE *)(a1 + 8) |= 1u;
    v82 = 0;
    *(_QWORD *)a1 = v22;
  }
  else
  {
    v24 = *(_QWORD *)v10;
    *(_QWORD *)(v10 + 48) = v15;
    v82 = v15;
    v25 = *(bool (__fastcall **)(__int64))(v24 + 64);
    v83 &= ~1u;
    if ( v25 == sub_21B1110 )
    {
      v26 = *(_DWORD *)(v10 + 8) == 12;
    }
    else
    {
      v26 = v25(v10);
      v25 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL);
    }
    v79 += (-(__int64)!v26 & 0xFFFFFFFFFFFFFFFCLL) + 24;
    if ( v25 != sub_21B1110 )
    {
      v25(v10);
      v25 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL);
    }
    v27 = __ROL2__(*(_WORD *)(*(_QWORD *)(v10 + 48) + 16LL), 8);
    if ( v27 )
    {
      if ( v25 != sub_21B1110 )
      {
        v25(v10);
        v27 = __ROL2__(*(_WORD *)(*(_QWORD *)(v10 + 48) + 16LL), 8);
      }
      v49 = v15 + v79;
      v19 = __CFADD__(v15 + v79, v27);
      *(_QWORD *)&v50 = v15 + v79 + v27;
      *((_QWORD *)&v50 + 1) = v19;
      if ( v19 || v50 > v15 + v16 || v15 > v49 )
      {
        v51 = sub_2195B10();
        sub_2220500(&v105, 4, v51);
        v52 = v105.m128i_i64[0];
        v49 = v15 + v79;
        if ( v105.m128i_i64[0] )
        {
          *(_BYTE *)(a1 + 8) |= 1u;
          *(_QWORD *)a1 = v52;
          v105.m128i_i8[8] |= 1u;
          v105.m128i_i64[0] = 0;
          sub_21B3540(v105.m128i_i64);
          goto LABEL_5;
        }
      }
      v105.m128i_i64[0] = v49;
      v105.m128i_i8[8] &= ~1u;
      *(_QWORD *)(v10 + 56) = v49;
      sub_21B3540(v105.m128i_i64);
      v25 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL);
    }
    if ( v25 != sub_21B1110 )
    {
      v25(v10);
      v25 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL);
    }
    v28 = *(_QWORD *)(v10 + 48);
    v79 += (unsigned __int16)__ROL2__(*(_WORD *)(v28 + 16), 8);
    if ( v25 != sub_21B1110 )
    {
      v25(v10);
      v28 = *(_QWORD *)(v10 + 48);
    }
    v29 = __ROL2__(*(_WORD *)(v28 + 2), 8);
    if ( v29 )
    {
      v30 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL);
      if ( v30 != sub_21B1110 )
      {
        v30(v10);
        v30 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL);
        v29 = __ROL2__(*(_WORD *)(*(_QWORD *)(v10 + 48) + 2LL), 8);
      }
      v31 = v29;
      if ( v30 == sub_21B1110 )
        v32 = *(_DWORD *)(v10 + 8) == 12;
      else
        v32 = v30(v10);
      v33 = v15 + v79;
      v80 = v31 * ((-(__int64)!v32 & 0xFFFFFFFFFFFFFFE0LL) + 72);
      if ( __CFADD__(v15 + v79, v80) || __CFADD__(v15 + v79, v80) || v15 + v79 + v80 > v15 + v16 || v15 > v33 )
      {
        v34 = sub_2195B10();
        sub_2220500(&v105, 4, v34);
        v33 = v15 + v79;
        if ( v105.m128i_i64[0] )
        {
          v92 = 271;
          v103[0].m128i_i64[0] = (__int64)" go past the end of the file";
          v81 = v105.m128i_i64[0];
          v99.m128i_i64[0] = (__int64)&v80;
          v104 = 259;
          v101 = 271;
          v96[0].m128i_i64[0] = (__int64)" and size 0x";
          v97 = 259;
          v90.m128i_i64[0] = (__int64)&v79;
          v85 |= 1u;
          v100 = 0;
          v91 = 0;
          v84 = 0;
          sub_2221210(&v86, &v81);
          sub_10E1980(&v88, &v86, ": section headers with offset 0x");
          v94 = 260;
          v93[0].m128i_i64[0] = (__int64)&v88;
          sub_A41580(v95, v93, &v90, v35, v36, v37);
          sub_A41580(v98, v95, v96, v38, v39, v40);
          sub_A41580(v102, v98, &v99, v41, v42, v43);
          sub_A41580(&v105, v102, v103, v44, v45, v46);
          v77 = sub_2195B10();
          v47 = operator new(0x40u);
          sub_2220590(v47, &v105, 3, v77);
          v48 = (_BYTE *)v88.m128i_i64[0];
          *(_BYTE *)(a1 + 8) |= 1u;
          *(_QWORD *)a1 = v47;
          if ( v48 != v89 )
            operator delete(v48);
          if ( (_BYTE *)v86.m128i_i64[0] != v87 )
            operator delete((void *)v86.m128i_i64[0]);
          if ( v81 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 8LL))(v81);
          sub_21B3540((__int64 *)&v84);
          goto LABEL_5;
        }
      }
      v84 = v33;
      v85 &= ~1u;
      *(_QWORD *)(v10 + 64) = v33;
      sub_21B3540((__int64 *)&v84);
    }
    v53 = sub_21B2C70(v10);
    v54 = v53;
    if ( !v53 )
    {
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_QWORD *)a1 = v10;
      sub_21B3540((__int64 *)&v82);
      return a1;
    }
    v55 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v10 + 64LL);
    if ( v55 == sub_21B1110 )
      v56 = *(_DWORD *)(v10 + 8) == 12;
    else
      v56 = v55(v10);
    v57 = *(_QWORD *)(v10 + 48);
    v58 = _byteswap_ulong(*(_DWORD *)(v57 + 8));
    if ( v56 )
      v58 = _byteswap_uint64(*(_QWORD *)(v57 + 8));
    v79 = v58;
    v59 = v15 + v58;
    v80 = 18 * v54;
    if ( (__CFADD__(v59, 18 * v54) || __CFADD__(v59, 18 * v54) || v59 + 18 * v54 > v15 + v16 || v15 > v59)
      && (v62 = sub_2195B10(), sub_2220500(&v105, 4, v62), v105.m128i_i64[0]) )
    {
      v81 = v105.m128i_i64[0];
      v104 = 259;
      v97 = 259;
      v103[0].m128i_i64[0] = (__int64)" goes past the end of the file";
      v99.m128i_i64[0] = (__int64)&v80;
      v101 = 271;
      v92 = 271;
      v96[0].m128i_i64[0] = (__int64)" and size 0x";
      v90.m128i_i64[0] = (__int64)&v79;
      v85 |= 1u;
      v100 = 0;
      v91 = 0;
      v84 = 0;
      sub_2221210(&v86, &v81);
      sub_10E1980(&v88, &v86, ": symbol table with offset 0x");
      v93[0].m128i_i64[0] = (__int64)&v88;
      v94 = 260;
      sub_A41580(v95, v93, &v90, v63, 260, v64);
      sub_A41580(v98, v95, v96, v65, v66, v67);
      sub_A41580(v102, v98, &v99, v68, v69, v70);
      sub_A41580(&v105, v102, v103, v71, v72, v73);
      v78 = sub_2195B10();
      v74 = operator new(0x40u);
      sub_2220590(v74, &v105, 3, v78);
      v75 = (_BYTE *)v88.m128i_i64[0];
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v74;
      if ( v75 != v89 )
        operator delete(v75);
      if ( (_BYTE *)v86.m128i_i64[0] != v87 )
        operator delete((void *)v86.m128i_i64[0]);
      if ( v81 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 8LL))(v81);
    }
    else
    {
      v60 = v79 + v80;
      v85 &= ~1u;
      v84 = v59;
      *(_QWORD *)(v10 + 72) = v59;
      v79 = v60;
      sub_21B4650((__int64)&v105, v10, v60);
      if ( (v106 & 1) == 0 || (v61 = v105.m128i_i64[0], v105.m128i_i64[0] = 0, !v61) )
      {
        v76 = _mm_load_si128(&v105);
        *(_BYTE *)(a1 + 8) &= ~1u;
        *(_QWORD *)a1 = v10;
        *(__m128i *)(v10 + 80) = v76;
        sub_21B3520(v105.m128i_i64);
        sub_21B3580((__int64 *)&v84);
        sub_21B3540((__int64 *)&v82);
        return a1;
      }
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v61;
      sub_21B3520(v105.m128i_i64);
    }
    sub_21B3580((__int64 *)&v84);
  }
LABEL_5:
  sub_21B3540((__int64 *)&v82);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  return a1;
}
