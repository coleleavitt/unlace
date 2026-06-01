__int64 __fastcall sub_A83560(__int64 *a1, unsigned int *a2, __int64 a3)
{
  unsigned int *v4; // rbx
  char v5; // al
  void *v6; // r12
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  char v13; // al
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 (__fastcall *v17)(__int64, unsigned int *, unsigned int *); // rax
  __int64 v18; // r12
  unsigned int *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int *v27; // rax
  unsigned int *v28; // rax
  unsigned int *v29; // rax
  _QWORD *v30; // rax
  _DWORD *v31; // rax
  void *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  void *v35; // rbx
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rdx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // r12
  _QWORD *v44; // rbx
  _QWORD *v45; // rax
  unsigned int *v46; // rax
  unsigned int v47; // eax
  unsigned int *v48; // rax
  unsigned int v49; // eax
  _QWORD *v50; // rax
  __m128i v51; // xmm0
  __int64 v52; // rax
  unsigned int *v53; // rax
  unsigned int *v54; // rax
  unsigned int v55; // ebx
  unsigned int *v56; // rax
  unsigned int v57; // r15d
  unsigned int *v58; // rax
  unsigned int v59; // r14d
  unsigned int *v60; // rax
  unsigned int *v61; // rax
  unsigned int v62; // r12d
  char v63; // bl
  int v64; // ebx
  __int64 v65; // rdx
  char *v66; // r8
  __int64 v67; // rax
  __int64 v68; // r12
  __int64 v69; // rax
  __int64 v70; // r12
  _DWORD *v71; // rax
  unsigned int v72; // eax
  __int64 v73; // rcx
  unsigned int v74; // edx
  __int64 v75; // r12
  __int64 v76; // rax
  char *v77; // rdi
  __int64 v78; // r9
  __int64 v79; // rdi
  __int64 v80; // rbx
  unsigned int *v81; // rax
  unsigned int v82; // eax
  unsigned int *v83; // rax
  unsigned int v84; // eax
  __int64 v85; // rdx
  int v86; // ecx
  int v87; // r8d
  int v88; // r9d
  __int64 v89; // rax
  __int64 v90; // r12
  unsigned int v91; // [rsp+Ch] [rbp-194h]
  unsigned int v92; // [rsp+10h] [rbp-190h]
  _QWORD *v93; // [rsp+10h] [rbp-190h]
  __int64 v94; // [rsp+18h] [rbp-188h]
  __int64 v95; // [rsp+20h] [rbp-180h]
  __int64 v96; // [rsp+28h] [rbp-178h]
  unsigned int v97; // [rsp+28h] [rbp-178h]
  __int64 v98; // [rsp+30h] [rbp-170h]
  __int64 v99; // [rsp+38h] [rbp-168h]
  __int64 v100; // [rsp+50h] [rbp-150h]
  __int64 v101; // [rsp+58h] [rbp-148h]
  unsigned int *v102; // [rsp+68h] [rbp-138h]
  __int64 v103; // [rsp+70h] [rbp-130h]
  int v104[2]; // [rsp+78h] [rbp-128h]
  __int64 v105; // [rsp+78h] [rbp-128h]
  int v106; // [rsp+78h] [rbp-128h]
  __int64 v107; // [rsp+80h] [rbp-120h]
  unsigned int *v108; // [rsp+88h] [rbp-118h]
  unsigned int v109; // [rsp+88h] [rbp-118h]
  unsigned int v110; // [rsp+88h] [rbp-118h]
  __int64 v111; // [rsp+88h] [rbp-118h]
  unsigned int v112; // [rsp+88h] [rbp-118h]
  char *v113; // [rsp+88h] [rbp-118h]
  __int64 v114; // [rsp+90h] [rbp-110h]
  unsigned int v115; // [rsp+90h] [rbp-110h]
  __int64 v116; // [rsp+98h] [rbp-108h] BYREF
  unsigned int v117; // [rsp+A4h] [rbp-FCh] BYREF
  __int64 v118; // [rsp+A8h] [rbp-F8h] BYREF
  __m128i v119; // [rsp+B0h] [rbp-F0h] BYREF
  __m128i v120; // [rsp+C0h] [rbp-E0h] BYREF
  __int64 v121; // [rsp+D0h] [rbp-D0h] BYREF
  __int64 v122; // [rsp+D8h] [rbp-C8h]
  _QWORD v123[2]; // [rsp+E0h] [rbp-C0h] BYREF
  _QWORD v124[2]; // [rsp+F0h] [rbp-B0h] BYREF
  __int64 v125; // [rsp+100h] [rbp-A0h] BYREF
  __int64 v126[3]; // [rsp+108h] [rbp-98h] BYREF
  void *ptr[2]; // [rsp+120h] [rbp-80h] BYREF
  _OWORD v128[7]; // [rsp+130h] [rbp-70h] BYREF

  v4 = a2;
  v116 = a3;
  v114 = (__int64)(a1 + 2);
  ptr[0] = nullptr;
  ptr[1] = nullptr;
  v128[0] = 1u;
  v5 = sub_1666AE0(a1 + 2, a3, ptr, &v125);
  v6 = qword_1C7F2C0;
  if ( v5 && !LODWORD(ptr[0]) )
  {
    sub_182CBA0(qword_1C7F2C0, ptr);
    return sub_182CBA0(v6, v128);
  }
  sub_182CBA0(qword_1C7F2C0, ptr);
  sub_182CBA0(v6, v128);
  v100 = a1[1];
  v8 = sub_15E1B70(a1[2]);
  v107 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v9 = a1[1];
  v10 = sub_15E1B70(a1[2]);
  v119 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v9);
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v11 = a1[1];
  v12 = sub_993400(v114, 0);
  v120 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v11);
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v13 = sub_993370(v114, (__int64)a2);
  v14 = a1[2];
  if ( v13 )
  {
    v53 = (unsigned int *)sub_15E1B70(v14);
    v115 = sub_A7A500(a1, v53);
    v54 = (unsigned int *)sub_15E1B70(a1[2]);
    v55 = sub_A7A500(a1, v54);
    v56 = (unsigned int *)sub_15E1B70(a1[2]);
    v57 = sub_A7A500(a1, v56);
    v58 = (unsigned int *)sub_15E1B70(a1[2]);
    v59 = sub_A7A500(a1, v58);
    v60 = (unsigned int *)sub_15E1B70(a1[2]);
    v110 = sub_A7A500(a1, v60);
    v61 = (unsigned int *)sub_15E1B70(a1[2]);
    v62 = sub_A7A500(a1, v61);
    sub_A7A430((__int64)a1, v115, v57);
    sub_A7A430((__int64)a1, v115, v59);
    sub_A7A430((__int64)a1, v115, v110);
    sub_A7A430((__int64)a1, v115, v62);
    sub_A7A430((__int64)a1, v55, v57);
    sub_A7A430((__int64)a1, v55, v59);
    sub_A7A430((__int64)a1, v55, v110);
    sub_A7A430((__int64)a1, v55, v62);
    sub_A72BE0(v120.m128i_i64[0], v120.m128i_i64[1]);
    sub_A72BE0(v119.m128i_i64[0], v119.m128i_i64[1]);
    return sub_A72BE0(v107, v100);
  }
  v99 = a1[1];
  sub_15E1B70(v14);
  v15 = sub_15E1B70(a1[2]);
  v102 = (unsigned int *)v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  v16 = *a1;
  v98 = a1[1];
  v17 = *(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)*a1 + 296LL);
  if ( v17 == sub_8FEA20 )
  {
    v18 = *(_QWORD *)(v16 + 24);
    if ( *a2 < *v102 )
    {
      *(_QWORD *)v104 = v102;
      v19 = v102;
      v108 = a2;
    }
    else
    {
      *(_QWORD *)v104 = a2;
      v19 = a2;
      a2 = v102;
      v108 = v102;
    }
    if ( (unsigned __int8)sub_15D27F0(v18, a2, v19) )
    {
      v20 = *(_QWORD *)(v18 + 864);
      v101 = v20;
      goto LABEL_18;
    }
    if ( (unsigned __int8)sub_15D2760(v18, v108, *(_QWORD *)v104) )
    {
      v20 = *(_QWORD *)(v18 + 856);
      v101 = v20;
      goto LABEL_18;
    }
    v20 = sub_15E1B70(*(_QWORD *)(v16 + 24));
  }
  else
  {
    v20 = v17(v16, v102, a2);
  }
  v101 = v20;
LABEL_18:
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  sub_B6F780(*(_QWORD *)(*a1 + 16));
  v117 = sub_B645B0(*(_QWORD *)(*a1 + 16), v101);
  v123[0] = 0;
  v123[1] = 0;
  v124[0] = 1;
  v124[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v124);
  v21 = a1[1];
  BYTE4(v124[0]) &= ~1u;
  v122 = v21;
  LODWORD(v124[0]) = 1;
  v121 = 0;
  if ( (unsigned __int8)sub_1666AE0(v114, v116, v123, ptr) )
  {
    if ( SLODWORD(v123[0]) > 0 )
    {
      sub_7542A0((__int64)ptr, (__int64)v123, 1u);
      v42 = sub_A72970(v114, (int)ptr, v38, v39, v40, v41);
      v43 = v42;
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      sub_A72BE0(v121, v122);
      v121 = v43;
      sub_25A130((char *)ptr);
    }
    else
    {
      if ( !LODWORD(v123[0]) )
      {
        v22 = *(_QWORD *)(*a1 + 16);
        goto LABEL_24;
      }
      sub_3EBD70((__int64)&v125, (__int64)v123);
      sub_7542A0((__int64)ptr, (__int64)&v125, 1u);
      v89 = sub_A72970(v114, (int)ptr, v85, v86, v87, v88);
      v90 = v89;
      if ( v89 )
        ++*(_DWORD *)(v89 + 8);
      sub_A72BE0(v121, v122);
      v121 = v90;
      sub_25A130((char *)ptr);
      sub_25A130((char *)&v125);
    }
  }
  v22 = *(_QWORD *)(*a1 + 16);
  if ( LODWORD(v123[0]) )
  {
    sub_A7A3B0((__int64)a1, v117);
    v44 = sub_966570(*a1, v4);
    v45 = sub_966570(*a1, v102);
    sub_8E1D30((__int64)(a1 + 4), v45, v44);
    v46 = (unsigned int *)sub_15E1B70(a1[2]);
    v47 = sub_A7A500(a1, v46);
    sub_A7A3B0((__int64)a1, v47);
    v48 = (unsigned int *)sub_15E1B70(a1[2]);
    v49 = sub_A7A500(a1, v48);
    sub_A7A3B0((__int64)a1, v49);
    v128[0] = 0u;
    *(_OWORD *)ptr = 0;
    v50 = (_QWORD *)operator new(0x38u);
    *v50 = a1;
    v51 = _mm_loadl_epi64((const __m128i *)off_1C565F8);
    v50[1] = &v116;
    v50[2] = &v120;
    v50[4] = &v117;
    v50[5] = &v119;
    v50[3] = v22;
    v50[6] = &v121;
    ptr[0] = v50;
    v52 = a1[1];
    v128[0] = _mm_unpacklo_epi64(v51, (__m128i)(unsigned __int64)sub_A78B20);
    if ( *(_QWORD *)(v52 + 912) )
    {
      sub_A78B20((__int64 ***)ptr);
      if ( *(_QWORD *)&v128[0] )
        (*(void (__fastcall **)(void **, void **, __int64))&v128[0])(ptr, ptr, 3);
    }
    else
    {
      sub_A77A30((__m128i **)ptr, (const __m128i **)ptr, 3);
    }
    goto LABEL_39;
  }
LABEL_24:
  v105 = a1[1];
  sub_15E1A70(a1[2]);
  sub_15E1B70(a1[2]);
  v23 = sub_15E1BF0(v105);
  v24 = v23;
  if ( v23 )
    ++*(_DWORD *)(v23 + 8);
  v95 = a1[1];
  v25 = sub_993400(v114, 0xFFFFFFFF);
  v103 = v25;
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  v94 = a1[1];
  v26 = sub_15E1B70(a1[2]);
  v96 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  v27 = (unsigned int *)sub_15E1B70(a1[1]);
  v109 = sub_A7A500(a1, v27);
  v28 = (unsigned int *)sub_15E1B70(a1[2]);
  v92 = sub_A7A500(a1, v28);
  v29 = (unsigned int *)sub_15E1B70(a1[2]);
  v91 = sub_A7A500(a1, v29);
  sub_A7A430((__int64)a1, v109, v117);
  sub_A7A430((__int64)a1, v109, v92);
  sub_A7A430((__int64)a1, v109, v91);
  v93 = sub_966570(*a1, v4);
  v30 = sub_966570(*a1, v102);
  sub_8E1D30((__int64)(a1 + 4), v30, v93);
  if ( (unsigned __int8)sub_993370(v114, (__int64)v4) )
  {
    v81 = (unsigned int *)sub_15E1B70(a1[1]);
    v82 = sub_A7A500(a1, v81);
    sub_A7A430((__int64)a1, v109, v82);
    v83 = (unsigned int *)sub_15E1B70(a1[1]);
    v84 = sub_A7A500(a1, v83);
    sub_A7A430((__int64)a1, v109, v84);
  }
  else if ( *(_WORD *)(v116 + 4)
         || (v31 = *(_DWORD **)(*(_QWORD *)(v116 + 16) + 24LL)) == nullptr
         || *v31 != 5
         || v31[1] )
  {
    v32 = (void *)a1[1];
    v33 = a1[2];
    ptr[0] = nullptr;
    ptr[1] = v32;
    sub_15E1B70(v33);
    sub_15E1B70(a1[2]);
    v34 = sub_15E1B70(a1[2]);
    v35 = (void *)v34;
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    sub_A72BE0((__int64)ptr[0], (__int64)ptr[1]);
    v36 = *a1;
    ptr[0] = v35;
    sub_14B9B80(*(_QWORD *)(v36 + 16) + 7456LL, ptr);
    v37 = sub_A7A500(a1, (unsigned int *)ptr[0]);
    sub_A7A430((__int64)a1, v109, v37);
    sub_A72BE0((__int64)ptr[0], (__int64)ptr[1]);
  }
  sub_A72BE0(v96, v94);
  sub_A72BE0(v103, v95);
  sub_A72BE0(v24, v105);
LABEL_39:
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 112LL) + 337LL) )
  {
    if ( SLODWORD(v123[0]) > 0 )
    {
      ptr[0] = &byte_8;
      ptr[1] = nullptr;
      v128[0] = 1u;
      sub_182CBA0(qword_1C7F2C0, v128);
      LODWORD(v128[0]) = 1;
      BYTE4(v128[0]) &= ~1u;
      v63 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v123, (__int64)ptr);
      sub_25A130((char *)ptr);
      if ( v63 )
      {
        v106 = sub_182D020(qword_1C7F2C0, v123);
        v64 = 0;
        ptr[0] = v128;
        ptr[1] = (void *)0x1000000000LL;
        v65 = a1[1];
        v126[0] = 0;
        v125 = v65;
        if ( v106 )
        {
          do
          {
            v70 = *a1;
            v71 = (_DWORD *)sub_88EF10(v114, v64);
            v72 = sub_966380(v70, v119.m128i_i64[0], v71);
            v73 = LODWORD(ptr[1]);
            v74 = v72;
            if ( LODWORD(ptr[1]) < HIDWORD(ptr[1]) )
            {
              v66 = (char *)ptr[0];
            }
            else
            {
              v112 = v72;
              v75 = (unsigned int)(2 * HIDWORD(ptr[1]));
              v66 = (char *)sub_186B270(4 * v75);
              v76 = 0;
              v77 = (char *)ptr[0];
              v74 = v112;
              v73 = LODWORD(ptr[1]);
              v78 = 4LL * LODWORD(ptr[1]);
              if ( LODWORD(ptr[1]) )
              {
                do
                {
                  *(_DWORD *)&v66[v76] = *(_DWORD *)&v77[v76];
                  v76 += 4;
                }
                while ( v76 != v78 );
              }
              if ( v77 != (char *)v128 && v77 )
              {
                v97 = v112;
                v113 = v66;
                sub_186B220(v77);
                v73 = LODWORD(ptr[1]);
                v74 = v97;
                v66 = v113;
              }
              ptr[0] = v66;
              HIDWORD(ptr[1]) = v75;
            }
            *(_DWORD *)&v66[4 * v73] = v74;
            v67 = *(_QWORD *)(v22 + 8840);
            v68 = v74 >> 1;
            ++LODWORD(ptr[1]);
            v69 = *(_QWORD *)(v67 + 8 * v68);
            v118 = v69;
            if ( v69 )
              ++*(_DWORD *)(v69 + 8);
            sub_A74DF0(v126, &v118);
            v111 = *(_QWORD *)(*a1 + 16);
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v111 + 7488) + 48LL))(
              *(_QWORD *)(v111 + 7488),
              *(_QWORD *)(*(_QWORD *)(v111 + 8840) + 8 * v68));
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v111 + 7488) + 64LL))(*(_QWORD *)(v111 + 7488));
            ++v64;
          }
          while ( v64 != v106 );
        }
        v79 = *a1;
        v80 = *(_QWORD *)(*a1 + 24);
        if ( *(_QWORD *)(v80 + 912) )
        {
          sub_967300(v79, (__int64)ptr);
          v79 = *a1;
        }
        sub_B69FE0(*(_QWORD *)(v79 + 16), *(_DWORD *)(v79 + 8), ptr[1], ptr[0], 0, 0, 1);
        if ( *(_QWORD *)(v80 + 912) )
          std::operator<<<std::char_traits<char>>();
        sub_2334C0(&v125);
        if ( ptr[0] != v128 )
        {
          if ( ptr[0] )
            sub_186B220(ptr[0]);
        }
      }
    }
  }
  sub_A72BE0(v121, v122);
  sub_25A130((char *)v123);
  sub_A72BE0(v101, v98);
  sub_A72BE0((__int64)v102, v99);
  sub_A72BE0(v120.m128i_i64[0], v120.m128i_i64[1]);
  sub_A72BE0(v119.m128i_i64[0], v119.m128i_i64[1]);
  return sub_A72BE0(v107, v100);
}

