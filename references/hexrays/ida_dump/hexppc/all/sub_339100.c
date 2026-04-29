__int64 sub_339100()
{
  __int64 module_data; // r14
  size_t v1; // rbx
  __m128i v2; // xmm4
  int v3; // eax
  size_t v4; // rbx
  unsigned __int64 v5; // rbx
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  bool v15; // zf
  __m128i v16; // xmm0
  __int64 v17; // rdx
  void *v18; // r15
  void *v20; // rax
  const void *v21; // rsi
  void *v22; // rax
  const void *v23; // rsi
  __m128i v24; // xmm0
  __m128i v25; // xmm5
  __m128i v26; // xmm6
  __m128i v27; // xmm7
  __m128i v28; // xmm0
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r15
  size_t v31; // r12
  __int64 v32; // r12
  unsigned __int64 v33; // rax
  void *v34; // rdi
  void *v35; // r13
  void *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // [rsp+Ch] [rbp-1B4h]
  int v40; // [rsp+10h] [rbp-1B0h]
  int v41; // [rsp+14h] [rbp-1ACh]
  __int64 v42; // [rsp+18h] [rbp-1A8h]
  __m128i v43; // [rsp+20h] [rbp-1A0h] BYREF
  __m128i v44; // [rsp+30h] [rbp-190h] BYREF
  __m128i v45; // [rsp+40h] [rbp-180h] BYREF
  int v46; // [rsp+50h] [rbp-170h]
  char v47; // [rsp+56h] [rbp-16Ah]
  unsigned __int8 v48; // [rsp+57h] [rbp-169h]
  _QWORD *v49; // [rsp+58h] [rbp-168h]
  __int64 *v50; // [rsp+60h] [rbp-160h]
  __int64 v51; // [rsp+68h] [rbp-158h]
  __int64 v52; // [rsp+70h] [rbp-150h]
  __int64 v53; // [rsp+78h] [rbp-148h]
  __int64 *v54; // [rsp+80h] [rbp-140h]
  __int64 *v55; // [rsp+88h] [rbp-138h]
  __int64 v56; // [rsp+90h] [rbp-130h] BYREF
  __int64 v57; // [rsp+98h] [rbp-128h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-120h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-118h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-110h] BYREF
  _QWORD v61[2]; // [rsp+B8h] [rbp-108h] BYREF
  __m128i v62; // [rsp+C8h] [rbp-F8h]
  __m128i v63; // [rsp+D8h] [rbp-E8h]
  __m128i v64; // [rsp+E8h] [rbp-D8h] BYREF
  __m128i v65[2]; // [rsp+F8h] [rbp-C8h] BYREF
  int v66; // [rsp+118h] [rbp-A8h]
  void *v67; // [rsp+120h] [rbp-A0h]
  __int128 v68; // [rsp+128h] [rbp-98h]
  void *src; // [rsp+138h] [rbp-88h]
  __int128 v70; // [rsp+140h] [rbp-80h]
  char v71; // [rsp+150h] [rbp-70h]
  unsigned __int64 v72; // [rsp+151h] [rbp-6Fh]
  int v73; // [rsp+15Ch] [rbp-64h]
  __m128i v74; // [rsp+160h] [rbp-60h] BYREF
  __m128i v75; // [rsp+170h] [rbp-50h] BYREF
  int v76; // [rsp+180h] [rbp-40h]
  unsigned __int64 v77; // [rsp+188h] [rbp-38h]

  v77 = __readfsqword(0x28u);
  v67 = nullptr;
  module_data = get_module_data((unsigned int)dword_4DC8D8);
  v1 = *(_QWORD *)(module_data + 672);
  v42 = *(_QWORD *)(module_data + 568);
  v64 = _mm_loadu_si128((const __m128i *)(module_data + 608));
  v61[1] = v42;
  v2 = _mm_cvtsi32_si128(*(_DWORD *)(module_data + 604));
  v3 = *(_DWORD *)(module_data + 656);
  v65[0] = _mm_loadu_si128((const __m128i *)(module_data + 624));
  v43 = _mm_loadu_si128((const __m128i *)(module_data + 576));
  v41 = v3;
  v66 = v3;
  v62 = v43;
  v45 = _mm_loadu_si128((const __m128i *)(module_data + 592));
  v46 = _mm_cvtsi128_si32(v2);
  v63 = v45;
  v44 = _mm_loadu_si128((const __m128i *)(module_data + 640));
  v65[1] = v44;
  v68 = 0;
  if ( v1 )
  {
    v22 = (void *)qalloc_or_throw(v1);
    v23 = *(const void **)(module_data + 664);
    *((_QWORD *)&v68 + 1) = v1;
    v67 = v22;
    memcpy(v22, v23, v1);
    *(_QWORD *)&v68 = v1;
  }
  v4 = *(_QWORD *)(module_data + 696);
  src = nullptr;
  v70 = 0;
  if ( v4 )
  {
    v20 = (void *)qalloc_or_throw(v4);
    v21 = *(const void **)(module_data + 688);
    src = v20;
    *((_QWORD *)&v70 + 1) = v4;
    memcpy(v20, v21, v4);
    *(_QWORD *)&v70 = v4;
  }
  v5 = *(_QWORD *)(module_data + 713);
  v6 = _mm_loadu_si128((const __m128i *)(module_data + 728));
  v47 = *(_BYTE *)(module_data + 712);
  v71 = v47;
  v74 = v6;
  v7 = _mm_loadu_si128((const __m128i *)(module_data + 744));
  v72 = v5;
  v48 = HIBYTE(v5) & 1;
  v8 = *(_DWORD *)(module_data + 724);
  v75 = v7;
  v40 = v8;
  v73 = v8;
  v39 = *(_DWORD *)(module_data + 760);
  v76 = v39;
  v56 = *(int *)(module_data + 592);
  v57 = *(int *)(module_data + 596);
  v58 = *(int *)(module_data + 600);
  v59 = *(int *)(module_data + 640);
  v60 = *(int *)(module_data + 648);
  v61[0] = *(int *)(module_data + 644);
  v50 = &v59;
  v54 = &v57;
  v51 = module_data + 588;
  v52 = module_data + 584;
  v53 = module_data + 580;
  v49 = v61;
  v55 = &v56;
  while ( (unsigned int)sub_338C80(
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
                          v53,
                          v52,
                          v51,
                          v54,
                          v50,
                          v55,
                          &v60,
                          &v58,
                          v49,
                          sub_338EA0,
                          sub_338E10,
                          sub_338D50,
                          sub_33B7C0,
                          sub_33B7C0,
                          sub_33B7C0,
                          sub_33B7C0,
                          sub_33B4F0) )
  {
    *(_BYTE *)(*(_QWORD *)(module_data + 840) + 286LL) |= 1u;
    switch ( v59 )
    {
      case 0LL:
        v9 = 0;
        goto LABEL_11;
      case 16LL:
        v9 = 16;
LABEL_11:
        v10 = v56;
        v11 = v61[0];
        *(_DWORD *)(module_data + 640) = v9;
        *(_DWORD *)(module_data + 592) = v10;
        v12 = v57;
        *(_DWORD *)(module_data + 644) = v11;
        v13 = v60;
        *(_DWORD *)(module_data + 596) = v12;
        v14 = v58;
        *(_DWORD *)(module_data + 648) = v13;
        v15 = *(_DWORD *)(module_data + 604) == v46;
        *(_DWORD *)(module_data + 600) = v14;
        if ( !v15
          || (v16 = _mm_load_si128(&v45),
              _mm_cvtsi128_si32(_mm_unpackhi_epi32(v16, v16)) != v14
           || *(_QWORD *)(module_data + 592) != v16.m128i_i64[0])
          || v44.m128i_i32[0] != v9
          || *(_DWORD *)(module_data + 580) != _mm_cvtsi128_si32(_mm_shuffle_epi32(v43, 85))
          || *(_QWORD *)(module_data + 584) != v43.m128i_i64[1] )
        {
          sub_391B50(module_data, !v15, -1);
        }
        v17 = *(unsigned __int8 *)(module_data + 720);
        if ( (_BYTE)v17 != v48 )
          reg_int_op("UseExternalGraph", 1, v17, 0);
        v18 = src;
        goto LABEL_18;
      case 10LL:
        v9 = 10;
        goto LABEL_11;
    }
    sub_2B11F0((__int64)"Radix must be 0, 10 or 16");
  }
  v24 = _mm_loadu_si128(&v64);
  v25 = _mm_load_si128(&v43);
  v26 = _mm_load_si128(&v45);
  *(_QWORD *)(module_data + 568) = v42;
  v27 = _mm_load_si128(&v44);
  *(__m128i *)(module_data + 608) = v24;
  v28 = _mm_loadu_si128(v65);
  *(_DWORD *)(module_data + 656) = v41;
  v29 = v68;
  *(__m128i *)(module_data + 576) = v25;
  *(__m128i *)(module_data + 592) = v26;
  v30 = v29;
  *(__m128i *)(module_data + 624) = v28;
  *(__m128i *)(module_data + 640) = v27;
  if ( v29 && (v31 = v29 - 1, v29 != 1) )
  {
    v35 = v67;
    v36 = *(void **)(module_data + 664);
    if ( *(_QWORD *)(module_data + 680) < v29 )
    {
      v38 = qvector_reserve(module_data + 664, *(_QWORD *)(module_data + 664), v29, 1);
      *(_QWORD *)(module_data + 664) = v38;
      v36 = (void *)v38;
    }
    *(_QWORD *)(module_data + 672) = v30;
    memmove(v36, v35, v31);
    *(_BYTE *)(*(_QWORD *)(module_data + 664) + v30 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(module_data + 672) = 0;
  }
  v32 = v70;
  v18 = src;
  if ( (unsigned __int64)v70 > 1 )
  {
    v34 = *(void **)(module_data + 688);
    if ( *(_QWORD *)(module_data + 704) < (unsigned __int64)v70 )
    {
      v37 = qvector_reserve(module_data + 688, *(_QWORD *)(module_data + 688), v70, 1);
      *(_QWORD *)(module_data + 688) = v37;
      v34 = (void *)v37;
    }
    *(_QWORD *)(module_data + 696) = v32;
    memmove(v34, v18, v32 - 1);
    *(_BYTE *)(*(_QWORD *)(module_data + 688) + v32 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(module_data + 696) = 0;
  }
  *(_BYTE *)(module_data + 712) = v47;
  v33 = (unsigned __int64)v48 << 8;
  *(__m128i *)(module_data + 728) = _mm_load_si128(&v74);
  *(__m128i *)(module_data + 744) = _mm_load_si128(&v75);
  *(_QWORD *)(module_data + 713) = v5 & 1
                                 | ((BYTE1(v5) & 1
                                   | (((v5 >> 16) & 1
                                     | (((v5 >> 24) & 1
                                       | ((BYTE4(v5) & 1 | (((v5 >> 40) & 1 | ((HIWORD(v5) & 1 | v33) << 8)) << 8)) << 8)) << 8)) << 8)) << 8);
  *(_DWORD *)(module_data + 724) = v40;
  *(_DWORD *)(module_data + 760) = v39;
LABEL_18:
  if ( v18 )
    qfree(v18);
  if ( v67 )
    qfree(v67);
  return 1;
}
