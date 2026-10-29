__int64 __fastcall sub_33D380(__int64 a1, const void *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 module_data; // r14
  size_t v5; // rbx
  __m128i v6; // xmm4
  int v7; // eax
  size_t v8; // rbx
  unsigned __int64 v9; // rbx
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  bool v19; // zf
  __m128i v20; // xmm0
  void *v21; // r15
  void *v23; // rax
  const void *v24; // rsi
  void *v25; // rax
  __m128i v26; // xmm0
  __m128i v27; // xmm5
  __m128i v28; // xmm6
  __m128i v29; // xmm7
  __m128i v30; // xmm0
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r15
  size_t v33; // r12
  __int64 v34; // r12
  unsigned __int64 v35; // rax
  void *v36; // rdi
  void *v37; // r13
  void *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // [rsp+Ch] [rbp-1B4h]
  int v42; // [rsp+10h] [rbp-1B0h]
  int v43; // [rsp+14h] [rbp-1ACh]
  __int64 v44; // [rsp+18h] [rbp-1A8h]
  __m128i v45; // [rsp+20h] [rbp-1A0h] BYREF
  __m128i v46; // [rsp+30h] [rbp-190h] BYREF
  __m128i v47; // [rsp+40h] [rbp-180h] BYREF
  int v48; // [rsp+50h] [rbp-170h]
  char v49; // [rsp+56h] [rbp-16Ah]
  unsigned __int8 v50; // [rsp+57h] [rbp-169h]
  _QWORD *v51; // [rsp+58h] [rbp-168h]
  __int64 *v52; // [rsp+60h] [rbp-160h]
  __int64 v53; // [rsp+68h] [rbp-158h]
  __int64 v54; // [rsp+70h] [rbp-150h]
  __int64 v55; // [rsp+78h] [rbp-148h]
  __int64 *v56; // [rsp+80h] [rbp-140h]
  __int64 *v57; // [rsp+88h] [rbp-138h]
  __int64 v58; // [rsp+90h] [rbp-130h] BYREF
  __int64 v59; // [rsp+98h] [rbp-128h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-120h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-118h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-110h] BYREF
  _QWORD v63[2]; // [rsp+B8h] [rbp-108h] BYREF
  __m128i v64; // [rsp+C8h] [rbp-F8h]
  __m128i v65; // [rsp+D8h] [rbp-E8h]
  __m128i v66; // [rsp+E8h] [rbp-D8h] BYREF
  __m128i v67[2]; // [rsp+F8h] [rbp-C8h] BYREF
  int v68; // [rsp+118h] [rbp-A8h]
  void *v69; // [rsp+120h] [rbp-A0h]
  __int128 v70; // [rsp+128h] [rbp-98h]
  void *src; // [rsp+138h] [rbp-88h]
  __int128 v72; // [rsp+140h] [rbp-80h]
  char v73; // [rsp+150h] [rbp-70h]
  unsigned __int64 v74; // [rsp+151h] [rbp-6Fh]
  int v75; // [rsp+15Ch] [rbp-64h]
  __m128i v76; // [rsp+160h] [rbp-60h] BYREF
  __m128i v77; // [rsp+170h] [rbp-50h] BYREF
  int v78; // [rsp+180h] [rbp-40h]
  unsigned __int64 v79; // [rsp+188h] [rbp-38h]

  v79 = __readfsqword(0x28u);
  v69 = nullptr;
  module_data = get_module_data();
  v5 = *(_QWORD *)(module_data + 672);
  v44 = *(_QWORD *)(module_data + 568);
  v66 = _mm_loadu_si128((const __m128i *)(module_data + 608));
  v63[1] = v44;
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(module_data + 604));
  v7 = *(_DWORD *)(module_data + 656);
  v67[0] = _mm_loadu_si128((const __m128i *)(module_data + 624));
  v45 = _mm_loadu_si128((const __m128i *)(module_data + 576));
  v43 = v7;
  v68 = v7;
  v64 = v45;
  v47 = _mm_loadu_si128((const __m128i *)(module_data + 592));
  v48 = _mm_cvtsi128_si32(v6);
  v65 = v47;
  v46 = _mm_loadu_si128((const __m128i *)(module_data + 640));
  v67[1] = v46;
  v70 = 0;
  if ( v5 )
  {
    v25 = (void *)qalloc_or_throw(v5, (__int64)a2, v2, v3);
    a2 = *(const void **)(module_data + 664);
    *((_QWORD *)&v70 + 1) = v5;
    v69 = v25;
    memcpy(v25, a2, v5);
    *(_QWORD *)&v70 = v5;
  }
  v8 = *(_QWORD *)(module_data + 696);
  src = nullptr;
  v72 = 0;
  if ( v8 )
  {
    v23 = (void *)qalloc_or_throw(v8, (__int64)a2, v2, v3);
    v24 = *(const void **)(module_data + 688);
    src = v23;
    *((_QWORD *)&v72 + 1) = v8;
    memcpy(v23, v24, v8);
    *(_QWORD *)&v72 = v8;
  }
  v9 = *(_QWORD *)(module_data + 713);
  v10 = _mm_loadu_si128((const __m128i *)(module_data + 728));
  v49 = *(_BYTE *)(module_data + 712);
  v73 = v49;
  v76 = v10;
  v11 = _mm_loadu_si128((const __m128i *)(module_data + 744));
  v74 = v9;
  v50 = HIBYTE(v9) & 1;
  v12 = *(_DWORD *)(module_data + 724);
  v77 = v11;
  v42 = v12;
  v75 = v12;
  v41 = *(_DWORD *)(module_data + 760);
  v78 = v41;
  v58 = *(int *)(module_data + 592);
  v59 = *(int *)(module_data + 596);
  v60 = *(int *)(module_data + 600);
  v61 = *(int *)(module_data + 640);
  v62 = *(int *)(module_data + 648);
  v63[0] = *(int *)(module_data + 644);
  v52 = &v61;
  v56 = &v59;
  v53 = module_data + 588;
  v54 = module_data + 584;
  v55 = module_data + 580;
  v51 = v63;
  v57 = &v58;
  while ( (unsigned int)sub_33CF00(
                          (__int64)"Hex-Rays Decompiler Options\n"
                                   "\n"
                                   " <#Background color of variable definition area#~V~ariable definition color:K::12::>\n"
                                   " <#Background color of function statement area#~F~unction body color      :K::12::>\n"
                                   " <#Background color of marked functions#~M~arked function color    :K::12::>\n"
                                   "\n"
                                   " <~C~omment indent:D::12::> <#Default number base for constants (0, 10 or 16)#Default"
                                   " radi~x~ :D::12::>\n"
                                   " <~B~lock indent  :D::12::> <#Strings longer than this value won't be printed#Max ~s~"
                                   "trlit len:D::12::>\n"
                                   " <~R~ight margin  :D::12::> <#Max number of commas in an expression#Max c~o~mmas    :"
                                   "D::12::>\n"
                                   "\n"
                                   " <Op~t~ions 1:B:0:::> <Opt~i~ons 2:B:1:::> <Optio~n~s 3:B:2:::>\n"
                                   " <Warnings ~1~:B:0:::> <Warnings ~2~:B:1:::> <Warnings ~3~:B:2:::> <Warnings ~4~:B:3:"
                                   "::>\n"
                                   " <O~p~timizations:B:0:::>\n"
                                   "\n"
                                   "To modify default options, please edit hexrays.cfg\n"
                                   "\n",
                          v55,
                          v54,
                          v53,
                          v56,
                          v52,
                          v57,
                          &v62,
                          &v60,
                          v51,
                          sub_33D120,
                          sub_33D090,
                          sub_33CFD0,
                          sub_33F940,
                          sub_33F940,
                          sub_33F940,
                          sub_33F940,
                          sub_33F690) )
  {
    *(_BYTE *)(*(_QWORD *)(module_data + 840) + 286LL) |= 1u;
    switch ( v61 )
    {
      case 0LL:
        v13 = 0;
        goto LABEL_11;
      case 16LL:
        v13 = 16;
LABEL_11:
        v14 = v58;
        v15 = v63[0];
        *(_DWORD *)(module_data + 640) = v13;
        *(_DWORD *)(module_data + 592) = v14;
        v16 = v59;
        *(_DWORD *)(module_data + 644) = v15;
        v17 = v62;
        *(_DWORD *)(module_data + 596) = v16;
        v18 = v60;
        *(_DWORD *)(module_data + 648) = v17;
        v19 = *(_DWORD *)(module_data + 604) == v48;
        *(_DWORD *)(module_data + 600) = v18;
        if ( !v19
          || (v20 = _mm_load_si128(&v47),
              _mm_cvtsi128_si32(_mm_unpackhi_epi32(v20, v20)) != v18
           || *(_QWORD *)(module_data + 592) != v20.m128i_i64[0])
          || v46.m128i_i32[0] != v13
          || *(_DWORD *)(module_data + 580) != _mm_cvtsi128_si32(_mm_shuffle_epi32(v45, 85))
          || *(_QWORD *)(module_data + 584) != v45.m128i_i64[1] )
        {
          sub_395CD0(module_data, !v19, -1);
        }
        if ( *(_BYTE *)(module_data + 720) != v50 )
          reg_int_op();
        v21 = src;
        goto LABEL_18;
      case 10LL:
        v13 = 10;
        goto LABEL_11;
    }
    sub_2B4E70((__int64)"Radix must be 0, 10 or 16");
  }
  v26 = _mm_loadu_si128(&v66);
  v27 = _mm_load_si128(&v45);
  v28 = _mm_load_si128(&v47);
  *(_QWORD *)(module_data + 568) = v44;
  v29 = _mm_load_si128(&v46);
  *(__m128i *)(module_data + 608) = v26;
  v30 = _mm_loadu_si128(v67);
  *(_DWORD *)(module_data + 656) = v43;
  v31 = v70;
  *(__m128i *)(module_data + 576) = v27;
  *(__m128i *)(module_data + 592) = v28;
  v32 = v31;
  *(__m128i *)(module_data + 624) = v30;
  *(__m128i *)(module_data + 640) = v29;
  if ( v31 && (v33 = v31 - 1, v31 != 1) )
  {
    v37 = v69;
    v38 = *(void **)(module_data + 664);
    if ( *(_QWORD *)(module_data + 680) < v31 )
    {
      v40 = qvector_reserve(module_data + 664, *(_QWORD *)(module_data + 664), v31, 1);
      *(_QWORD *)(module_data + 664) = v40;
      v38 = (void *)v40;
    }
    *(_QWORD *)(module_data + 672) = v32;
    memmove(v38, v37, v33);
    *(_BYTE *)(*(_QWORD *)(module_data + 664) + v32 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(module_data + 672) = 0;
  }
  v34 = v72;
  v21 = src;
  if ( (unsigned __int64)v72 > 1 )
  {
    v36 = *(void **)(module_data + 688);
    if ( *(_QWORD *)(module_data + 704) < (unsigned __int64)v72 )
    {
      v39 = qvector_reserve(module_data + 688, *(_QWORD *)(module_data + 688), v72, 1);
      *(_QWORD *)(module_data + 688) = v39;
      v36 = (void *)v39;
    }
    *(_QWORD *)(module_data + 696) = v34;
    memmove(v36, v21, v34 - 1);
    *(_BYTE *)(*(_QWORD *)(module_data + 688) + v34 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(module_data + 696) = 0;
  }
  *(_BYTE *)(module_data + 712) = v49;
  v35 = (unsigned __int64)v50 << 8;
  *(__m128i *)(module_data + 728) = _mm_load_si128(&v76);
  *(__m128i *)(module_data + 744) = _mm_load_si128(&v77);
  *(_QWORD *)(module_data + 713) = v9 & 1
                                 | ((BYTE1(v9) & 1
                                   | (((v9 >> 16) & 1
                                     | (((v9 >> 24) & 1
                                       | ((BYTE4(v9) & 1 | (((v9 >> 40) & 1 | ((HIWORD(v9) & 1 | v35) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
  *(_DWORD *)(module_data + 724) = v42;
  *(_DWORD *)(module_data + 760) = v41;
LABEL_18:
  if ( v21 )
    qfree((__int64)v21);
  if ( v69 )
    qfree((__int64)v69);
  return 1;
}
