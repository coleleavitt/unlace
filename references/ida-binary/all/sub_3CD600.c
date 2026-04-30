QT::QSplitter *__fastcall sub_3CD600(bool *a1, __int64 a2, const char *a3, const char *a4, _QWORD *a5)
{
  __int64 module_data; // rax
  __m128i si128; // xmm0
  __m128i v10; // xmm0
  const char *tlc_for_til; // r12
  __int64 *v12; // rbp
  size_t v13; // r14
  char *v14; // rsi
  __int64 v15; // r14
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  const char *v18; // rsi
  int v19; // r13d
  char *v20; // rsi
  volatile signed __int32 *v21; // r13
  volatile signed __int32 *v22; // rdx
  signed __int32 v23; // eax
  _QWORD *v24; // rax
  size_t v25; // r13
  char *v26; // rsi
  __int64 v27; // r13
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  char *v30; // rax
  __int64 v31; // r14
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // r13
  const char *v35; // rsi
  signed __int32 v36; // eax
  size_t v37; // rax
  size_t v38; // r14
  QT::QSplitter *v39; // r14
  __int64 v40; // rdi
  __int64 v41; // r13
  __int64 v42; // rbx
  __int64 *v43; // r12
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // r12
  __int64 v47; // rbx
  __int64 *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // r12
  __int64 v52; // rbx
  __int64 *v53; // rax
  __int64 v54; // rdi
  __int64 *v55; // rbx
  __int64 v56; // rdi
  __int64 v57; // rdi
  signed __int32 v58; // eax
  double v59; // xmm0_8
  double v60; // xmm0_8
  __int64 v61; // rdi
  __int64 v62; // rax
  const QT::QObject *v63; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  const char *v67; // rsi
  __int64 v68; // rdi
  __int64 (__fastcall *v69)(__int64); // rax
  __int64 v70; // rax
  __int64 v71; // r14
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdi
  size_t v77; // [rsp+8h] [rbp-310h]
  QT::QWidget *v78; // [rsp+10h] [rbp-308h]
  __int64 idati; // [rsp+20h] [rbp-2F8h]
  volatile signed __int32 *v80; // [rsp+28h] [rbp-2F0h]
  unsigned __int64 v81; // [rsp+30h] [rbp-2E8h]
  unsigned __int64 v82; // [rsp+30h] [rbp-2E8h]
  __int64 v83; // [rsp+38h] [rbp-2E0h]
  __int64 v84; // [rsp+38h] [rbp-2E0h]
  char *s; // [rsp+40h] [rbp-2D8h] BYREF
  __int128 v86; // [rsp+48h] [rbp-2D0h]
  char *v87; // [rsp+60h] [rbp-2B8h] BYREF
  __int128 v88; // [rsp+68h] [rbp-2B0h]
  void *v89; // [rsp+80h] [rbp-298h] BYREF
  __int128 v90; // [rsp+88h] [rbp-290h]
  const char *v91; // [rsp+A0h] [rbp-278h] BYREF
  __int128 v92; // [rsp+A8h] [rbp-270h]
  __int64 v93; // [rsp+B8h] [rbp-260h]
  __int128 v94; // [rsp+C0h] [rbp-258h]
  __m128i v95; // [rsp+D0h] [rbp-248h]
  void *v96[2]; // [rsp+E0h] [rbp-238h]
  __int64 v97; // [rsp+F0h] [rbp-228h]
  int v98; // [rsp+F8h] [rbp-220h]
  const char *v99; // [rsp+100h] [rbp-218h] BYREF
  __int128 v100; // [rsp+108h] [rbp-210h] BYREF
  __int64 v101; // [rsp+118h] [rbp-200h]
  __int128 v102; // [rsp+120h] [rbp-1F8h]
  __int64 v103; // [rsp+130h] [rbp-1E8h]
  __int128 v104; // [rsp+138h] [rbp-1E0h]
  __int64 v105; // [rsp+148h] [rbp-1D0h]
  __int128 v106; // [rsp+150h] [rbp-1C8h]
  int v107; // [rsp+160h] [rbp-1B8h]
  __int64 v108; // [rsp+170h] [rbp-1A8h] BYREF
  __int128 v109; // [rsp+178h] [rbp-1A0h]
  __int128 v110; // [rsp+188h] [rbp-190h]
  __int128 v111; // [rsp+198h] [rbp-180h]
  __int64 v112; // [rsp+1A8h] [rbp-170h]
  __m128i v113; // [rsp+1B0h] [rbp-168h]
  __m128i v114; // [rsp+1C0h] [rbp-158h]
  __int64 v115; // [rsp+1D0h] [rbp-148h]
  __int128 v116; // [rsp+1D8h] [rbp-140h]
  __int64 v117; // [rsp+1E8h] [rbp-130h]
  __int64 v118; // [rsp+1F0h] [rbp-128h]
  char v119; // [rsp+1F8h] [rbp-120h]
  __int64 v120; // [rsp+200h] [rbp-118h]
  __int64 v121; // [rsp+210h] [rbp-108h] BYREF
  __int128 v122; // [rsp+218h] [rbp-100h]
  int v123; // [rsp+228h] [rbp-F0h]
  int v124; // [rsp+22Ch] [rbp-ECh]
  _BYTE v125[56]; // [rsp+230h] [rbp-E8h] BYREF
  char v126; // [rsp+268h] [rbp-B0h] BYREF
  char v127; // [rsp+2A0h] [rbp-78h] BYREF
  _QWORD v128[8]; // [rsp+2D8h] [rbp-40h] BYREF

  v128[0] = __readfsqword(0x28u);
  if ( !strcmp(a3, "Local Types") )
  {
    module_data = get_module_data((unsigned int)dword_8CD7F0);
    if ( *(_BYTE *)(module_data + 176) )
    {
      *a1 = 1;
      goto LABEL_4;
    }
    v39 = *(QT::QSplitter **)(module_data + 168);
  }
  else
  {
    v63 = (const QT::QObject *)sub_47C4D0(QT::QCoreApplication::self + 2, a3);
    v39 = (QT::QSplitter *)QT::QMetaObject::cast((QT::QMetaObject *)&off_890D60, v63);
  }
  *a1 = v39 == nullptr;
  if ( v39 )
  {
    sub_479090(QT::QCoreApplication::self + 2, v39, 1);
    return v39;
  }
LABEL_4:
  v108 = 0;
  v112 = 0;
  v114.m128i_i64[0] = 0;
  v114.m128i_i64[1] = -1;
  v115 = 0;
  v117 = 0;
  v118 = 0;
  v109 = 0;
  v110 = 0;
  v111 = 0;
  v113 = 0;
  v116 = 0;
  sub_1E8870((__int64)&v99, 1);
  si128 = _mm_load_si128((const __m128i *)&v99);
  v119 = 0;
  v113 = si128;
  v10 = _mm_load_si128((const __m128i *)((char *)&v100 + 8));
  LODWORD(v115) = v102;
  v120 = 0;
  v114 = v10;
  sub_1E8790((__int64)&v108, 0, 0, 0, *(double *)v10.m128i_i64);
  idati = get_idati(&v108);
  tlc_for_til = (const char *)create_tlc_for_til(a2, idati == a2);
  s = nullptr;
  v12 = (__int64 *)operator new(0x18u);
  v80 = (volatile signed __int32 *)(v12 + 1);
  v12[2] = (__int64)tlc_for_til;
  v12[1] = 0x100000001LL;
  *v12 = (__int64)std::_Sp_counted_ptr_type_listing_contents_t_______gnu_cxx::_Lock_policy_2____vtable;
  v86 = 0;
  if ( !a3 )
  {
    v14 = nullptr;
    v17 = 15;
    v15 = 0;
    v16 = 14;
LABEL_104:
    v83 = v16;
    v81 = v17;
    s = (char *)qvector_reserve(&s, v14, v17, 1);
    v16 = v83;
    v14 = s;
    v17 = v81;
    goto LABEL_8;
  }
  v13 = strlen(a3);
  s = (char *)qvector_reserve(&s, 0, v13 + 1, 1);
  *(_QWORD *)&v86 = v13 + 1;
  memmove(s, a3, v13);
  s[v13] = 0;
  v14 = s;
  v15 = v86 - 1;
  v16 = v86 + 13;
  v17 = v86 + 14;
  if ( !(_QWORD)v86 )
  {
    v15 = 0;
    v17 = 15;
    v16 = 14;
  }
  if ( *((_QWORD *)&v86 + 1) < v17 )
    goto LABEL_104;
LABEL_8:
  *(_QWORD *)&v86 = v17;
  v14[v16] = 0;
  qmemcpy(&s[v15], ": Types Layout", 14);
  sub_3AC770(&v108, tlc_for_til, 0);
  if ( a4 )
  {
    v18 = a4;
    v19 = (*(__int64 (__fastcall **)(const char *, const char *, _QWORD))(*(_QWORD *)tlc_for_til + 48LL))(
            tlc_for_til,
            a4,
            0);
    if ( v19 )
    {
      v68 = sub_3AC530();
      v69 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL);
      if ( v69 == j__tiplace_t__clone )
        v70 = tiplace_t__clone(v68);
      else
        v70 = v69(v68);
      *(_DWORD *)(v70 + 12) = v19;
      v71 = v70;
      if ( a5 )
        *(_QWORD *)(v70 + 16) = *a5;
      *(_DWORD *)(v70 + 8) = -1;
      if ( (_QWORD)v116 )
        qfree(v116, v18);
      LODWORD(v118) = v118 | 3;
      *(_QWORD *)&v116 = v71;
    }
  }
  v78 = (QT::QWidget *)operator new(0x3F8u);
  v99 = tlc_for_til;
  *(_QWORD *)&v100 = v12;
  if ( v12 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)v12 + 2, 1u);
    else
      ++*((_DWORD *)v12 + 2);
  }
  v20 = (char *)&s1;
  if ( (_QWORD)v86 )
    v20 = s;
  sub_3AF7B0(v78, v20, (__int64 *)&v99, (__int64)&v108);
  v21 = (volatile signed __int32 *)v100;
  if ( (_QWORD)v100 )
  {
    v22 = (volatile signed __int32 *)(v100 + 8);
    if ( *(_QWORD *)(v100 + 8) == 0x100000001LL )
    {
      v74 = *(_QWORD *)v100;
      v75 = v100;
      *(_QWORD *)(v100 + 8) = 0;
      (*(void (__fastcall **)(__int64, char *, volatile signed __int32 *))(v74 + 16))(v75, v20, v22);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 24LL))(v21);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v23 = _InterlockedExchangeAdd(v22, 0xFFFFFFFF);
      }
      else
      {
        v23 = *(_DWORD *)(v100 + 8);
        *(_DWORD *)(v100 + 8) = v23 - 1;
      }
      if ( v23 == 1 )
        sub_28E9C0(v21);
    }
  }
  v121 = 0;
  v123 = 0;
  v24 = v125;
  v122 = 0;
  do
  {
    *v24 = 0;
    v24 += 7;
    *((_OWORD *)v24 - 3) = 0;
    *(v24 - 4) = 0;
    *(_OWORD *)(v24 - 3) = 0;
    *((_DWORD *)v24 - 2) = -1;
  }
  while ( v128 != v24 );
  v123 |= 0x18u;
  v124 = 10;
  sub_3C6160((int)v125, unk_8C9B28);
  sub_3C6160((int)&v126, unk_8C9B08);
  sub_3C6160((int)&v127, unk_8C9B20);
  v87 = nullptr;
  v88 = 0;
  if ( a3 )
  {
    v25 = strlen(a3);
    v87 = (char *)qvector_reserve(&v87, 0, v25 + 1, 1);
    *(_QWORD *)&v88 = v25 + 1;
    memmove(v87, a3, v25);
    v87[v25] = 0;
    v26 = v87;
    v27 = v88 - 1;
    v28 = v88 + 5;
    v29 = v88 + 6;
    if ( !(_QWORD)v88 )
    {
      v27 = 0;
      v29 = 7;
      v28 = 6;
    }
    if ( *((_QWORD *)&v88 + 1) >= v29 )
      goto LABEL_27;
  }
  else
  {
    v26 = nullptr;
    v29 = 7;
    v28 = 6;
    v27 = 0;
  }
  v84 = v28;
  v82 = v29;
  v87 = (char *)qvector_reserve(&v87, v26, v29, 1);
  v28 = v84;
  v26 = v87;
  v29 = v82;
LABEL_27:
  *(_QWORD *)&v88 = v29;
  v26[v28] = 0;
  v30 = &v87[v27];
  *(_DWORD *)v30 = 1918115898;
  *((_WORD *)v30 + 2) = 25957;
  v99 = nullptr;
  v101 = 0;
  v103 = 0;
  v105 = 0;
  v107 = 496;
  v100 = 0;
  v102 = 0;
  v104 = 0;
  v106 = 0;
  sub_197020((__int64 *)&v99, "Name", 16, 0, nullptr);
  sub_197020((__int64 *)&v99, "Size", 8, 0x20000, nullptr);
  sub_197020((__int64 *)&v99, "Ordinal", 3, 268632064, nullptr);
  sub_197020((__int64 *)&v99, "Definition", 64, 0x100000, nullptr);
  sub_197020((__int64 *)&v99, "Comment", 20, 0x100000, nullptr);
  if ( idati == a2 )
  {
    v31 = operator new(0x138u);
    v65 = (*(__int64 (__fastcall **)(const char *))(*(_QWORD *)tlc_for_til + 112LL))(tlc_for_til);
    sub_3CD470(v31, v65, (__int64)&v99);
    v123 |= 7u;
    v66 = (_QWORD *)operator new(0x9C8u);
    v91 = tlc_for_til;
    v34 = (__int64)v66;
    *(_QWORD *)&v92 = v12;
    if ( v12 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)v12 + 2, 1u);
      else
        ++*((_DWORD *)v12 + 2);
    }
    v67 = &s1;
    if ( (_QWORD)v88 )
      v67 = v87;
    sub_3CC620(v66, v67, (const __m128i *)&v91, 7, (__int64)&v121, 0.0, (__m128)0LL);
  }
  else
  {
    v31 = operator new(0x138u);
    v32 = (*(__int64 (__fastcall **)(const char *))(*(_QWORD *)tlc_for_til + 112LL))(tlc_for_til);
    sub_3CD470(v31, v32, (__int64)&v99);
    v33 = (_QWORD *)operator new(0x9C8u);
    v91 = tlc_for_til;
    v34 = (__int64)v33;
    *(_QWORD *)&v92 = v12;
    if ( v12 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)v12 + 2, 1u);
      else
        ++*((_DWORD *)v12 + 2);
    }
    v35 = &s1;
    if ( (_QWORD)v88 )
      v35 = v87;
    sub_3CC480(v33, v35, &v91, 7, (__int64)&v121);
  }
  if ( v12 )
  {
    if ( v12[1] == 0x100000001LL )
    {
      v73 = *v12;
      v12[1] = 0;
      (*(void (__fastcall **)(__int64 *))(v73 + 16))(v12);
      (*(void (__fastcall **)(__int64 *))(*v12 + 24))(v12);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v36 = _InterlockedExchangeAdd(v80, 0xFFFFFFFF);
      }
      else
      {
        v36 = *((_DWORD *)v12 + 2);
        *((_DWORD *)v12 + 2) = v36 - 1;
      }
      if ( v36 == 1 )
        sub_28E9C0((volatile signed __int32 *)v12);
    }
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 456LL))(v34, v31);
  v89 = nullptr;
  v90 = 0;
  if ( a3 )
  {
    v37 = strlen(a3);
    v38 = v37;
    if ( v37 )
    {
      v77 = v37 + 1;
      v89 = (void *)qvector_reserve(&v89, 0, v37 + 1, 1);
      *(_QWORD *)&v90 = v77;
      memmove(v89, a3, v38);
      *((_BYTE *)v89 + v38) = 0;
    }
  }
  v39 = (QT::QSplitter *)operator new(0x78u);
  sub_3CC800(v39, v34, (__int64)v78, (__int64)&v89);
  v91 = nullptr;
  v92 = 0;
  v93 = 0;
  v97 = 0;
  v98 = 4194308;
  v94 = 0;
  v95 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_OWORD *)v96 = 0;
  (*(void (__fastcall **)(_QWORD *, QT::QSplitter *, const char **))(QT::QCoreApplication::self[2] + 120LL))(
    QT::QCoreApplication::self + 2,
    v39,
    &v91);
  if ( v96[0] && !_InterlockedSub((volatile signed __int32 *)v96[0], 1u) )
    free(v96[0]);
  v40 = v93;
  if ( v93 )
  {
    v41 = v94;
    if ( (_QWORD)v94 )
    {
      v42 = 0;
      do
      {
        v43 = (__int64 *)(v40 + 40 * v42);
        jvalue_t_clear(v43 + 3);
        v44 = *v43;
        if ( *v43 )
        {
          v43[1] = 0;
          qfree(v44, (const char *)v39);
        }
        ++v42;
        v40 = v93;
      }
      while ( v41 != v42 );
    }
    *(_QWORD *)&v94 = 0;
    qfree(v40, (const char *)v39);
  }
  if ( v91 )
  {
    *(_QWORD *)&v92 = 0;
    qfree(v91, (const char *)v39);
  }
  if ( v89 )
  {
    *(_QWORD *)&v90 = 0;
    qfree(v89, (const char *)v39);
  }
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    qfree(v105, (const char *)v39);
  }
  if ( v103 )
  {
    *(_QWORD *)&v104 = 0;
    qfree(v103, (const char *)v39);
  }
  v45 = v101;
  if ( v101 )
  {
    v46 = v102;
    if ( (_QWORD)v102 )
    {
      v47 = 0;
      do
      {
        v48 = (__int64 *)(v45 + 24 * v47);
        v49 = *v48;
        if ( *v48 )
        {
          v48[1] = 0;
          qfree(v49, (const char *)v39);
          v45 = v101;
        }
        ++v47;
      }
      while ( v46 != v47 );
    }
    *(_QWORD *)&v102 = 0;
    qfree(v45, (const char *)v39);
  }
  v50 = (__int64)v99;
  if ( v99 )
  {
    v51 = v100;
    if ( (_QWORD)v100 )
    {
      v52 = 0;
      do
      {
        v53 = (__int64 *)(v50 + 24 * v52);
        v54 = *v53;
        if ( *v53 )
        {
          v53[1] = 0;
          qfree(v54, (const char *)v39);
          v50 = (__int64)v99;
        }
        ++v52;
      }
      while ( v51 != v52 );
    }
    *(_QWORD *)&v100 = 0;
    qfree(v50, (const char *)v39);
  }
  if ( v87 )
  {
    *(_QWORD *)&v88 = 0;
    qfree(v87, (const char *)v39);
  }
  v55 = v128;
  do
  {
    v56 = *(v55 - 4);
    v55 -= 7;
    if ( v56 )
    {
      v55[4] = 0;
      qfree(v56, (const char *)v39);
    }
    v57 = *v55;
    if ( *v55 )
    {
      v55[1] = 0;
      qfree(v57, (const char *)v39);
    }
  }
  while ( v55 != (__int64 *)v125 );
  if ( v121 )
  {
    *(_QWORD *)&v122 = 0;
    qfree(v121, (const char *)v39);
  }
  if ( s )
  {
    *(_QWORD *)&v86 = 0;
    qfree(s, (const char *)v39);
  }
  if ( v12 )
  {
    if ( v12[1] == 0x100000001LL )
    {
      v72 = *v12;
      v12[1] = 0;
      (*(void (__fastcall **)(__int64 *))(v72 + 16))(v12);
      (*(void (__fastcall **)(__int64 *))(*v12 + 24))(v12);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v58 = _InterlockedExchangeAdd(v80, 0xFFFFFFFF);
      }
      else
      {
        v58 = *((_DWORD *)v12 + 2);
        *((_DWORD *)v12 + 2) = v58 - 1;
      }
      if ( v58 == 1 )
        sub_28E9C0((volatile signed __int32 *)v12);
    }
  }
  v59 = qfree(*((_QWORD *)&v116 + 1), (const char *)v39);
  *((_QWORD *)&v116 + 1) = 0;
  v60 = qfree(v117, (const char *)v39, v59);
  v61 = v116;
  v117 = 0;
  if ( (_QWORD)v116 )
    qfree(v116, (const char *)v39, v60);
  if ( v39 && a2 == get_idati(v61) )
  {
    v62 = get_module_data((unsigned int)dword_8CD7F0);
    sub_478D00((char *)(v62 + 152), a2);
  }
  return v39;
}
