unsigned __int64 __fastcall sub_3BCE60(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, char a5)
{
  __m128i *v9; // rax
  size_t v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rax
  size_t v13; // r14
  size_t v14; // r14
  unsigned __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  char *v18; // r15
  __int64 v19; // r14
  size_t v20; // rax
  size_t v21; // r11
  const char *v22; // r12
  __int64 v23; // rax
  void *v24; // rdi
  size_t v25; // rdx
  __m128i *v26; // rax
  __m128i si128; // xmm0
  __int64 v28; // rdx
  __int64 v29; // rax
  bool v30; // zf
  unsigned __int64 v31; // r14
  const char *v32; // rax
  __int64 v33; // r14
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // rsi
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __int64 single_var_tlc; // rax
  __int64 v41; // rdi
  __int64 v42; // r12
  unsigned __int64 v43; // r15
  unsigned __int64 v44; // r14
  __int64 v45; // rdi
  QT::QWidget *v46; // r14
  volatile signed __int32 *v47; // rax
  volatile signed __int32 *v48; // r12
  volatile signed __int32 *v49; // rdx
  signed __int32 v50; // eax
  __int64 v51; // r12
  __int64 v52; // rax
  __int64 v53; // rax
  const char *v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rdi
  __int64 v57; // r12
  __int64 v58; // r15
  _QWORD *v59; // rbx
  __int64 v60; // rdi
  __int64 v61; // rdi
  double v62; // xmm0_8
  double v63; // xmm0_8
  __int64 v65; // rax
  const void *v66; // r8
  void *v67; // rax
  size_t v68; // r8
  const void *v69; // r9
  void *v70; // rax
  size_t v71; // r9
  const void *v72; // r10
  void *v73; // rdi
  __int64 v74; // rax
  void *v75; // rax
  const void *v76; // rsi
  void *v77; // rax
  const void *v78; // rsi
  void *v79; // rax
  void *v80; // rsi
  __int64 v81; // rax
  size_t v82; // [rsp+0h] [rbp-180h]
  const void *v83; // [rsp+0h] [rbp-180h]
  __int64 v84; // [rsp+10h] [rbp-170h]
  _QWORD *v85; // [rsp+10h] [rbp-170h]
  const void *v86; // [rsp+10h] [rbp-170h]
  size_t v87; // [rsp+20h] [rbp-160h]
  size_t v88; // [rsp+20h] [rbp-160h]
  const void *v90; // [rsp+28h] [rbp-158h]
  __int64 v91; // [rsp+38h] [rbp-148h]
  _QWORD *v92; // [rsp+38h] [rbp-148h]
  __int64 v93; // [rsp+40h] [rbp-140h] BYREF
  volatile signed __int32 *v94; // [rsp+48h] [rbp-138h]
  __int64 v95; // [rsp+50h] [rbp-130h] BYREF
  __int128 v96; // [rsp+58h] [rbp-128h] BYREF
  __int64 v97; // [rsp+68h] [rbp-118h]
  __int64 v98; // [rsp+70h] [rbp-110h] BYREF
  __int64 v99; // [rsp+78h] [rbp-108h] BYREF
  __int128 v100; // [rsp+80h] [rbp-100h]
  __int64 v101; // [rsp+90h] [rbp-F0h]
  __int128 v102; // [rsp+98h] [rbp-E8h]
  char v103; // [rsp+A8h] [rbp-D8h]
  void *src; // [rsp+B0h] [rbp-D0h] BYREF
  size_t n[2]; // [rsp+B8h] [rbp-C8h]
  __int128 v106; // [rsp+C8h] [rbp-B8h]
  __int128 v107; // [rsp+D8h] [rbp-A8h]
  __int64 v108; // [rsp+E8h] [rbp-98h]
  __m128i v109; // [rsp+F0h] [rbp-90h]
  __m128i v110; // [rsp+100h] [rbp-80h]
  __int64 v111; // [rsp+110h] [rbp-70h]
  __int128 v112; // [rsp+118h] [rbp-68h]
  __int64 v113; // [rsp+128h] [rbp-58h]
  __int64 v114; // [rsp+130h] [rbp-50h]
  char v115; // [rsp+138h] [rbp-48h]
  __int64 v116; // [rsp+140h] [rbp-40h]
  unsigned __int64 v117; // [rsp+148h] [rbp-38h]

  v117 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  v9 = (__m128i *)qvector_reserve(&src, 0, 24, 1);
  src = v9;
  n[0] = 24;
  *v9 = _mm_load_si128((const __m128i *)&xmmword_5DD680);
  *(__int64 *)((char *)&v9->m128i_i64[1] + 7) = 0x657079746F746F72LL;
  *((_BYTE *)src + 23) = 0;
  v10 = n[0];
  *(_QWORD *)(a1 + 8) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(a1 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)a1 = &forms::abstract_form_desc_t___vtable;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  if ( v10 )
  {
    v79 = (void *)qalloc_or_throw(v10);
    *(_QWORD *)(a1 + 144) = v79;
    v80 = src;
    *(_QWORD *)(a1 + 160) = v10;
    memcpy(v79, v80, v10);
    *(_QWORD *)(a1 + 152) = v10;
  }
  *(_DWORD *)(a1 + 168) = -1;
  *(_QWORD *)a1 = &forms::dialog_desc_t___vtable;
  *(_QWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  v84 = a1 + 176;
  sub_3B7850(a1 + 176, 2, -1);
  sub_3B7850(a1 + 176, 4, -1);
  if ( src )
  {
    n[0] = 0;
    qfree(src, &byte_4);
  }
  *(_QWORD *)a1 = &edit_func_dialog_t___vtable;
  v12 = *a2;
  *(_OWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 256) = v12;
  *(_QWORD *)(a1 + 288) = 0;
  copy_tinfo_t(a1 + 288, a3, v11);
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = 0;
  *(_OWORD *)(a1 + 312) = 0;
  v13 = *(_QWORD *)(a4 + 8);
  if ( v13 )
  {
    v77 = (void *)qalloc_or_throw(*(_QWORD *)(a4 + 8));
    *(_QWORD *)(a1 + 304) = v77;
    v78 = *(const void **)a4;
    *(_QWORD *)(a1 + 320) = v13;
    memcpy(v77, v78, v13);
    *(_QWORD *)(a1 + 312) = v13;
  }
  *(_QWORD *)(a1 + 328) = 0;
  *(_OWORD *)(a1 + 336) = 0;
  v14 = *(_QWORD *)(a4 + 8);
  if ( v14 )
  {
    v75 = (void *)qalloc_or_throw(*(_QWORD *)(a4 + 8));
    *(_QWORD *)(a1 + 328) = v75;
    v76 = *(const void **)a4;
    *(_QWORD *)(a1 + 344) = v14;
    memcpy(v75, v76, v14);
    *(_QWORD *)(a1 + 336) = v14;
  }
  *(_BYTE *)(a1 + 416) = a5;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = -1;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_OWORD *)(a1 + 376) = 0;
  *(_OWORD *)(a1 + 400) = 0;
  netnode_check(a1 + 360, "$ proto_editor", 0, 1);
  v15 = *(_QWORD *)(a1 + 248);
  v16 = *(_QWORD *)(a1 + 232);
  v91 = a1 + 232;
  v17 = *(_QWORD *)(a1 + 240);
  if ( v15 < v17 + 39 )
  {
    v74 = qvector_reserve(v91, v16, v17 + 39, 24);
    *(_QWORD *)(a1 + 232) = v74;
    v16 = v74;
    v15 = *(_QWORD *)(a1 + 248);
    v17 = *(_QWORD *)(a1 + 240);
  }
  v18 = (char *)&off_8BCC00;
  while ( 1 )
  {
    v22 = *(const char **)v18;
    if ( v15 < v17 + 1 )
    {
      v23 = qvector_reserve(v91, v16, v17 + 1, 24);
      *(_QWORD *)(a1 + 232) = v23;
      v16 = v23;
      v17 = *(_QWORD *)(a1 + 240);
    }
    v19 = v16 + 24 * v17;
    *(_QWORD *)v19 = 0;
    *(_OWORD *)(v19 + 8) = 0;
    ++*(_QWORD *)(a1 + 240);
    if ( v22 )
    {
      v20 = strlen(v22);
      v21 = v20;
      if ( v20 )
        break;
    }
    v18 += 8;
    *(_QWORD *)(v19 + 8) = 0;
    if ( &byte_8BCD38 == v18 )
      goto LABEL_21;
LABEL_15:
    v17 = *(_QWORD *)(a1 + 240);
    v15 = *(_QWORD *)(a1 + 248);
    v16 = *(_QWORD *)(a1 + 232);
  }
  v24 = *(void **)v19;
  v25 = v20 + 1;
  if ( *(_QWORD *)(v19 + 16) < v20 + 1 )
  {
    v82 = v20;
    v88 = v20 + 1;
    v65 = qvector_reserve(v19, *(_QWORD *)v19, v25, 1);
    *(_QWORD *)v19 = v65;
    v21 = v82;
    v24 = (void *)v65;
    v25 = v88;
  }
  *(_QWORD *)(v19 + 8) = v25;
  v18 += 8;
  v87 = v21;
  memmove(v24, v22, v21);
  *(_BYTE *)(*(_QWORD *)v19 + v87) = 0;
  if ( &byte_8BCD38 != v18 )
    goto LABEL_15;
LABEL_21:
  *(_OWORD *)n = 0;
  src = nullptr;
  v26 = (__m128i *)qvector_reserve(&src, 0, 17, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD690);
  src = v26;
  n[0] = 17;
  *v26 = si128;
  *((_BYTE *)src + 16) = 0;
  sub_3B74D0(v84, (__int64)&src, 1, 2);
  if ( src )
  {
    n[0] = 0;
    *(double *)si128.m128i_i64 = qfree(src, (const char *)&src);
  }
  copy_tinfo_t(a1 + 296, a1 + 288, v28);
  detach_tinfo_t(a1 + 296, *(double *)si128.m128i_i64);
  get_func_cmt(a1 + 368, a2, 1);
  get_func_cmt(a1 + 392, a2, 0);
  v29 = operator new(0x28u);
  v30 = *(_BYTE *)(a1 + 296) == 0;
  v92 = (_QWORD *)v29;
  *(_QWORD *)(v29 + 8) = 0;
  v31 = *(_QWORD *)(a1 + 336);
  *(_DWORD *)(v29 + 32) = 2;
  *(_QWORD *)v29 = &forms::vlayout_t___vtable;
  *(_QWORD *)(a1 + 104) = v29;
  *(_OWORD *)(v29 + 16) = 0;
  if ( v30 )
  {
    if ( !v31 || (v71 = v31 - 1, v31 == 1) )
    {
      *(_QWORD *)(a1 + 272) = 0;
    }
    else
    {
      v72 = *(const void **)(a1 + 328);
      v73 = *(void **)(a1 + 264);
      if ( *(_QWORD *)(a1 + 280) < v31 )
      {
        v86 = *(const void **)(a1 + 328);
        v81 = qvector_reserve(a1 + 264, *(_QWORD *)(a1 + 264), v31, 1);
        *(_QWORD *)(a1 + 264) = v81;
        v72 = v86;
        v73 = (void *)v81;
        v71 = v31 - 1;
      }
      *(_QWORD *)(a1 + 272) = v31;
      memmove(v73, v72, v71);
      *(_BYTE *)(*(_QWORD *)(a1 + 264) + v31 - 1) = 0;
    }
  }
  else
  {
    v32 = &s1;
    if ( v31 )
      v32 = *(const char **)(a1 + 328);
    print_tinfo(a1 + 264, 0, 0, 0, 8, a1 + 296, v32, 0);
  }
  v33 = operator new(0x90u);
  *(_QWORD *)(v33 + 8) = 3;
  *(_QWORD *)(v33 + 16) = 0;
  *(_QWORD *)(v33 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v33 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v33 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v33 = &forms::text_line_t___vtable;
  *(_QWORD *)(v33 + 136) = a1 + 264;
  *(_QWORD *)(v33 + 48) = 0;
  *(_QWORD *)(v33 + 56) = 0;
  *(_QWORD *)(v33 + 80) = 0;
  *(_QWORD *)(v33 + 104) = 0;
  *(_QWORD *)(v33 + 128) = 0;
  *(_QWORD *)(v33 + 12) = 0x6400000000LL;
  *(_OWORD *)(v33 + 64) = 0;
  *(_OWORD *)(v33 + 88) = 0;
  *(_OWORD *)(v33 + 112) = 0;
  v34 = qvector_reserve(v33 + 104, 0, 18, 1);
  v35 = _mm_load_si128((const __m128i *)&xmmword_5DD6A0);
  *(_QWORD *)(v33 + 104) = v34;
  *(_QWORD *)(v33 + 112) = 18;
  *(_BYTE *)(v34 + 16) = 121;
  *(__m128i *)v34 = v35;
  *(_BYTE *)(*(_QWORD *)(v33 + 104) + 17LL) = 0;
  v85 = v92 + 1;
  v36 = v92[2];
  v37 = v92[1];
  if ( v92[3] < (unsigned __int64)(v36 + 1) )
  {
    v37 = qvector_reserve(v85, v37, v36 + 1, 8);
    v92[1] = v37;
    v36 = v92[2];
  }
  *(_QWORD *)(v37 + 8 * v36) = v33;
  v110.m128i_i64[0] = 0;
  ++v92[2];
  v110.m128i_i64[1] = -1;
  src = nullptr;
  v108 = 0;
  v111 = 0;
  v113 = 0;
  v114 = 0;
  *(_OWORD *)n = 0;
  v106 = 0;
  v107 = 0;
  v109 = 0;
  v112 = 0;
  sub_1E8870((__int64)&v95, 1);
  v38 = _mm_load_si128((const __m128i *)&v95);
  v115 = 0;
  v109 = v38;
  v39 = _mm_load_si128((const __m128i *)((char *)&v96 + 8));
  LODWORD(v111) = v98;
  v116 = 0;
  v110 = v39;
  sub_1E8790((__int64)&src, 0, 0, 0, *(double *)v39.m128i_i64);
  single_var_tlc = create_single_var_tlc(a1 + 296, a1 + 328, a2);
  v41 = single_var_tlc + 64;
  v42 = single_var_tlc;
  if ( a1 + 368 != single_var_tlc + 64 )
  {
    v43 = *(_QWORD *)(a1 + 376);
    if ( !v43 || (v68 = v43 - 1, v43 == 1) )
    {
      *(_QWORD *)(single_var_tlc + 72) = 0;
    }
    else
    {
      v69 = *(const void **)(a1 + 368);
      v70 = *(void **)(single_var_tlc + 64);
      if ( *(_QWORD *)(v42 + 80) < v43 )
      {
        v83 = *(const void **)(a1 + 368);
        v70 = (void *)qvector_reserve(v41, v70, *(_QWORD *)(a1 + 376), 1);
        *(_QWORD *)(v42 + 64) = v70;
        v69 = v83;
        v68 = v43 - 1;
      }
      *(_QWORD *)(v42 + 72) = v43;
      memmove(v70, v69, v68);
      *(_BYTE *)(*(_QWORD *)(v42 + 64) + v43 - 1) = 0;
    }
  }
  if ( a1 + 392 != v42 + 88 )
  {
    v44 = *(_QWORD *)(a1 + 400);
    if ( v44 > 1 )
    {
      v66 = *(const void **)(a1 + 392);
      v67 = *(void **)(v42 + 88);
      if ( *(_QWORD *)(v42 + 104) < v44 )
      {
        v90 = *(const void **)(a1 + 392);
        v67 = (void *)qvector_reserve(v42 + 88, *(_QWORD *)(v42 + 88), *(_QWORD *)(a1 + 400), 1);
        *(_QWORD *)(v42 + 88) = v67;
        v66 = v90;
      }
      *(_QWORD *)(v42 + 96) = v44;
      memmove(v67, v66, v44 - 1);
      *(_BYTE *)(*(_QWORD *)(v42 + 88) + v44 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v42 + 96) = 0;
    }
  }
  *(_BYTE *)(v42 + 59) = (unsigned int)reg_int_op("ShowArglocs", 0, 0, 0) != 0;
  *((_QWORD *)&v107 + 1) = v42;
  sub_3AC770(&src, (const char *)v42, 0);
  v45 = *(_QWORD *)(a1 + 296);
  v95 = 0;
  v97 = 0;
  v98 = 0;
  v99 = 0;
  v101 = 0;
  v103 = 16;
  v96 = 0;
  v100 = 0;
  v102 = 0;
  if ( (unsigned __int8)get_tinfo_details(v45, 12, &v95) )
  {
    if ( (v103 & 0xF0) == 0xC0 )
    {
      if ( (unsigned int)(HIDWORD(v97) - 208) <= 0x2F )
        goto LABEL_68;
    }
    else
    {
      if ( (v103 & 0xF0u) - 208 > 0x2F )
        goto LABEL_38;
LABEL_68:
      *(_BYTE *)(v42 + 59) = 1;
    }
  }
LABEL_38:
  v93 = v42;
  v46 = (QT::QWidget *)operator new(0x3F8u);
  v47 = (volatile signed __int32 *)operator new(0x18u);
  *((_QWORD *)v47 + 2) = v42;
  *(_QWORD *)v47 = std::_Sp_counted_ptr_type_listing_contents_t_______gnu_cxx::_Lock_policy_2____vtable;
  *((_QWORD *)v47 + 1) = 0x100000001LL;
  v94 = v47;
  sub_3AF7B0(v46, "My listing", &v93, (__int64)&src);
  v48 = v94;
  *(_QWORD *)(a1 + 352) = v46;
  if ( v48 )
  {
    v49 = v48 + 2;
    if ( *((_QWORD *)v48 + 1) == 0x100000001LL )
    {
      *((_QWORD *)v48 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, const char *, volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(
        v48,
        "My listing",
        v49);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 24LL))(v48);
      v46 = *(QT::QWidget **)(a1 + 352);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v50 = _InterlockedExchangeAdd(v49, 0xFFFFFFFF);
      }
      else
      {
        v50 = *((_DWORD *)v48 + 2);
        *((_DWORD *)v48 + 2) = v50 - 1;
      }
      if ( v50 == 1 )
        sub_28E9C0(v48);
      v46 = *(QT::QWidget **)(a1 + 352);
    }
  }
  (*(void (__fastcall **)(QT::QWidget *, __int64, __int64))(*(_QWORD *)v46 + 536LL))(v46, 1, 1);
  v51 = operator new(0x78u);
  v52 = *(_QWORD *)(a1 + 352);
  *(_QWORD *)(v51 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v51 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v51 + 104) = v52;
  *(_QWORD *)(v51 + 8) = 11;
  *(_QWORD *)(v51 + 16) = 0;
  *(_QWORD *)(v51 + 12) = 0x2800000001LL;
  v53 = v92[2];
  *(_QWORD *)(v51 + 32) = 0;
  *(_QWORD *)v51 = &forms::custom_t___vtable;
  v54 = (const char *)v92[1];
  *(_QWORD *)(v51 + 48) = 0;
  *(_QWORD *)(v51 + 56) = 0;
  *(_QWORD *)(v51 + 80) = 0;
  *(_DWORD *)(v51 + 112) = 0;
  *(_DWORD *)(v51 + 36) = 6;
  *(_OWORD *)(v51 + 64) = 0;
  *(_OWORD *)(v51 + 88) = 0;
  if ( v92[3] < (unsigned __int64)(v53 + 1) )
  {
    v54 = (const char *)qvector_reserve(v85, v54, v53 + 1, 8);
    v92[1] = v54;
    v53 = v92[2];
  }
  *(_QWORD *)&v54[8 * v53] = v51;
  v55 = v101;
  ++v92[2];
  if ( v55 )
  {
    *(_QWORD *)&v102 = 0;
    qfree(v55, v54);
  }
  cleanup_argloc(&v99);
  clear_tinfo_t(&v98);
  v56 = v95;
  if ( v95 )
  {
    v57 = v96;
    if ( (_QWORD)v96 )
    {
      v58 = 0;
      do
      {
        v59 = (_QWORD *)(v56 + 80 * v58);
        clear_tinfo_t(v59 + 8);
        v60 = v59[5];
        if ( v60 )
        {
          v59[6] = 0;
          qfree(v60, v54);
        }
        v61 = v59[2];
        if ( v61 )
        {
          v59[3] = 0;
          qfree(v61, v54);
        }
        cleanup_argloc(v59);
        v56 = v95;
        ++v58;
      }
      while ( v57 != v58 );
    }
    *(_QWORD *)&v96 = 0;
    qfree(v56, v54);
  }
  v62 = qfree(*((_QWORD *)&v112 + 1), v54);
  *((_QWORD *)&v112 + 1) = 0;
  v63 = qfree(v113, v54, v62);
  v113 = 0;
  if ( (_QWORD)v112 )
    qfree(v112, v54, v63);
  return v117 - __readfsqword(0x28u);
}
