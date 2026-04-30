unsigned __int64 __fastcall sub_4763A0(QT::QMetaObject *a1, int a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  unsigned __int64 (__fastcall *v9)(QT::QMetaObject *, int, __int64, __int64, void **); // rax
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  char v25; // dl
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  int v36; // edx
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 *v55; // rsi
  char v56; // dl
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rsi
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 *v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rcx
  void **v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 *v78; // rdx
  void ***v79; // r8
  __int64 v80; // rcx
  __int64 v81; // rsi
  __int64 v82; // rax
  void **v83; // r8
  char v84; // dl
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  char v96; // dl
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rax
  int v104; // edx
  __int64 v105; // rcx
  __int64 v106; // rax
  char *v107; // rdx
  __int64 *v108; // rsi
  unsigned int *v109; // r8
  __int64 *v110; // r9
  __int64 v111; // rcx
  void **v112; // rax
  __int64 v113; // rsi
  void **v114; // r8
  __int64 v115; // r9
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rax
  __int64 v122; // rdx
  char v123; // [rsp+7h] [rbp-71h] BYREF
  __int64 v124; // [rsp+8h] [rbp-70h] BYREF
  void **v125; // [rsp+10h] [rbp-68h] BYREF
  __int64 v126; // [rsp+18h] [rbp-60h] BYREF
  __int64 v127; // [rsp+20h] [rbp-58h] BYREF
  __int64 v128; // [rsp+28h] [rbp-50h] BYREF
  int v129[2]; // [rsp+30h] [rbp-48h] BYREF
  __m128i v130; // [rsp+38h] [rbp-40h]
  __m128i v131; // [rsp+48h] [rbp-30h]
  __m128i v132; // [rsp+58h] [rbp-20h]
  unsigned __int64 v133; // [rsp+68h] [rbp-10h]

  v133 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v7 = *(_QWORD *)(a4 + 8);
      v8 = *(_DWORD **)a4;
      v9 = *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, int, __int64, __int64, void **))v7;
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, __int64, __int64, __int64, void **))v7 == sub_474B70 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 0;
      }
      else if ( (char *)v9 == (char *)sub_474C10 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 1;
      }
      else if ( (char *)v9 == (char *)sub_474C70 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 2;
      }
      else if ( (char *)v9 == (char *)sub_474CD0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 3;
      }
      else if ( (char *)v9 == (char *)sub_474D30 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 4;
      }
      else if ( (char *)v9 == (char *)sub_474DA0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 5;
      }
      else if ( (char *)v9 == (char *)sub_474E10 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 6;
      }
      else if ( (char *)v9 == (char *)sub_474E70 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 7;
      }
      else if ( (char *)v9 == (char *)sub_474EF0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 8;
      }
      else if ( (char *)v9 == (char *)sub_474F80 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 9;
      }
      else if ( (char *)v9 == (char *)sub_475010 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 10;
      }
      else if ( (char *)v9 == (char *)sub_475090 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 11;
      }
      else if ( v9 == sub_475110 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 12;
      }
      else if ( (char *)v9 == (char *)sub_475170 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 13;
      }
      else if ( (char *)v9 == (char *)sub_475190 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 14;
      }
      else if ( (char *)v9 == (char *)sub_4751B0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 15;
      }
      else if ( (char *)v9 == (char *)sub_475240 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 16;
      }
      else if ( (char *)v9 == (char *)sub_4752D0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 17;
      }
      else if ( (char *)v9 == (char *)sub_475360 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 18;
      }
      else if ( (char *)v9 == (char *)sub_4753D0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 19;
      }
      else if ( (char *)v9 == (char *)sub_4753F0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 20;
      }
      else if ( (char *)v9 == (char *)sub_475410 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 21;
      }
      else if ( (char *)v9 == (char *)sub_475430 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 22;
      }
      else if ( (char *)v9 == (char *)sub_475450 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 23;
      }
      else if ( (char *)v9 == (char *)sub_4754B0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 24;
      }
      else if ( (char *)v9 == (char *)sub_4754D0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 25;
      }
      else if ( (char *)v9 == (char *)sub_4754F0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 26;
      }
      else if ( (char *)v9 == (char *)sub_475570 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 27;
      }
      else if ( (char *)v9 == (char *)sub_4755D0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 28;
      }
      else if ( (char *)v9 == (char *)sub_475630 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 29;
      }
      else if ( (char *)v9 == (char *)sub_475680 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 30;
      }
      else if ( (char *)v9 == (char *)sub_4756D0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 31;
      }
      else if ( (char *)v9 == (char *)sub_475740 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 32;
      }
      else if ( (char *)v9 == (char *)sub_4757B0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 33;
      }
      else if ( (char *)v9 == (char *)sub_475810 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 34;
      }
      else if ( (char *)v9 == (char *)sub_475860 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 35;
      }
      else if ( (char *)v9 == (char *)sub_4758C0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 36;
      }
      else if ( (char *)v9 == (char *)sub_475990 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 37;
      }
      else if ( (char *)v9 == (char *)sub_475A20 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 38;
      }
      else if ( (char *)v9 == (char *)sub_475A80 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 39;
      }
      else if ( (char *)v9 == (char *)sub_475AA0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 40;
      }
      else if ( (char *)v9 == (char *)sub_475B10 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 41;
      }
      else if ( (char *)v9 == (char *)sub_475B80 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 42;
      }
      else if ( (char *)v9 == (char *)sub_475C10 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 43;
      }
      else if ( (char *)v9 == (char *)sub_475CA0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 44;
      }
      else if ( (char *)v9 == (char *)sub_475D30 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 45;
      }
      else if ( (char *)v9 == (char *)sub_475DA0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 46;
      }
      else if ( (char *)v9 == (char *)sub_475E00 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 47;
      }
      else if ( (char *)v9 == (char *)sub_475E90 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 48;
      }
      else if ( (char *)v9 == (char *)sub_475F40 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 49;
      }
      else if ( (char *)v9 == (char *)sub_475FA0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 50;
      }
      else if ( (char *)v9 == (char *)sub_476010 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 51;
      }
      else if ( (char *)v9 == (char *)sub_4760A0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 52;
      }
      else if ( (char *)v9 == (char *)sub_476130 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 53;
      }
      else if ( (char *)v9 == (char *)sub_4761D0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 54;
      }
      else if ( (char *)v9 == (char *)sub_476260 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 55;
      }
      else if ( v9 == sub_4762C0 )
      {
        if ( !*(_QWORD *)(v7 + 8) )
          *v8 = 56;
      }
      else if ( v9 == sub_476340 && !*(_QWORD *)(v7 + 8) )
      {
        *v8 = 57;
      }
    }
    return v133 - __readfsqword(0x28u);
  }
  else
  {
    switch ( a3 )
    {
      case 0LL:
        v55 = *(__int64 **)(a4 + 16);
        v56 = **(_BYTE **)(a4 + 32);
        v57 = **(_QWORD **)(a4 + 24);
        v58 = **(_QWORD **)(a4 + 8);
        v59 = *v55;
        *(_QWORD *)v129 = 0;
        v128 = v57;
        v126 = v58;
        v127 = v59;
        LOBYTE(v125) = v56;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v126, (__m128i)(unsigned __int64)&v127);
        v131 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v128, (__m128i)(unsigned __int64)&v125);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, nullptr, (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 1LL:
        v54 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v54;
        v130.m128i_i64[0] = (__int64)&v128;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&dword_0 + 1),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 2LL:
        v53 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v53;
        v130.m128i_i64[0] = (__int64)&v128;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&dword_0 + 2),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 3LL:
        v52 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v52;
        v130.m128i_i64[0] = (__int64)&v128;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&dword_0 + 3),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 4LL:
        v50 = **(_QWORD **)(a4 + 8);
        v51 = **(_QWORD **)(a4 + 16);
        *(_QWORD *)v129 = 0;
        v127 = v50;
        v128 = v51;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&byte_4, (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 5LL:
        v48 = **(_QWORD **)(a4 + 8);
        v49 = **(_QWORD **)(a4 + 16);
        *(_QWORD *)v129 = 0;
        v127 = v48;
        v128 = v49;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&byte_5, (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 6LL:
        v47 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v47;
        v130.m128i_i64[0] = (__int64)&v128;
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&byte_6, (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 7LL:
        v45 = **(_QWORD **)(a4 + 8);
        v46 = **(_DWORD **)(a4 + 16);
        *(_QWORD *)v129 = 0;
        v128 = v45;
        LODWORD(v127) = v46;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v128, (__m128i)(unsigned __int64)&v127);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&byte_7, (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 8LL:
        v42 = **(_QWORD **)(a4 + 24);
        v43 = **(_QWORD **)(a4 + 16);
        v44 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v127 = v43;
        v126 = v44;
        v128 = v42;
        v131.m128i_i64[0] = (__int64)&v128;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v126, (__m128i)(unsigned __int64)&v127);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&byte_8, (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 9LL:
        v39 = **(_QWORD **)(a4 + 24);
        v40 = **(_QWORD **)(a4 + 16);
        v41 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v127 = v40;
        v126 = v41;
        v128 = v39;
        v131.m128i_i64[0] = (__int64)&v128;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v126, (__m128i)(unsigned __int64)&v127);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)byte_9, (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 10LL:
        v37 = **(_QWORD **)(a4 + 8);
        v38 = **(_DWORD **)(a4 + 16);
        *(_QWORD *)v129 = 0;
        v128 = v37;
        LODWORD(v127) = v38;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v128, (__m128i)(unsigned __int64)&v127);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&byte_9[1], (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 11LL:
        v35 = **(_QWORD **)(a4 + 8);
        v36 = **(_DWORD **)(a4 + 16);
        *(_QWORD *)v129 = 0;
        v128 = v35;
        LODWORD(v127) = v36;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v128, (__m128i)(unsigned __int64)&v127);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&byte_9[2], (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 12LL:
        v34 = **(_DWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        LODWORD(v128) = v34;
        v130.m128i_i64[0] = (__int64)&v128;
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&byte_9[3], (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 13LL:
        result = QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&byte_9[4], 0, a5);
        break;
      case 14LL:
        result = QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&byte_9[5], 0, a5);
        break;
      case 15LL:
        v31 = **(_DWORD **)(a4 + 24);
        v32 = **(_QWORD **)(a4 + 16);
        v33 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v32;
        v127 = v33;
        LODWORD(v126) = v31;
        v131.m128i_i64[0] = (__int64)&v126;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&byte_9[6], (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 16LL:
        v28 = **(_DWORD **)(a4 + 24);
        v29 = **(_QWORD **)(a4 + 16);
        v30 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v29;
        v127 = v30;
        LODWORD(v126) = v28;
        v131.m128i_i64[0] = (__int64)&v126;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&word_10, (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 17LL:
        v25 = **(_BYTE **)(a4 + 24);
        v26 = **(_QWORD **)(a4 + 16);
        v27 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v26;
        v127 = v27;
        LOBYTE(v126) = v25;
        v131.m128i_i64[0] = (__int64)&v126;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&word_10 + 1),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 18LL:
        v23 = **(_QWORD **)(a4 + 8);
        v24 = **(_QWORD **)(a4 + 16);
        *(_QWORD *)v129 = 0;
        v127 = v23;
        v128 = v24;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&word_12, (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 19LL:
        result = QT::QMetaObject::activate(
                   a1,
                   (QT::QObject *)&off_893BE0,
                   (const QT::QMetaObject *)((char *)&word_12 + 1),
                   0,
                   a5);
        break;
      case 20LL:
        result = QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&dword_14, 0, a5);
        break;
      case 21LL:
        result = QT::QMetaObject::activate(
                   a1,
                   (QT::QObject *)&off_893BE0,
                   (const QT::QMetaObject *)((char *)&dword_14 + 1),
                   0,
                   a5);
        break;
      case 22LL:
        result = QT::QMetaObject::activate(
                   a1,
                   (QT::QObject *)&off_893BE0,
                   (const QT::QMetaObject *)((char *)&dword_14 + 2),
                   0,
                   a5);
        break;
      case 23LL:
        v22 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v22;
        v130.m128i_i64[0] = (__int64)&v128;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&dword_14 + 3),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 24LL:
        result = QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&off_18, 0, a5);
        break;
      case 25LL:
        result = QT::QMetaObject::activate(
                   a1,
                   (QT::QObject *)&off_893BE0,
                   (const QT::QMetaObject *)((char *)&off_18 + 1),
                   0,
                   a5);
        break;
      case 26LL:
        v19 = **(_DWORD **)(a4 + 24);
        v20 = **(_QWORD **)(a4 + 16);
        v21 = **(_DWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v20;
        LODWORD(v126) = v21;
        LODWORD(v127) = v19;
        v131.m128i_i64[0] = (__int64)&v127;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v126, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&off_18 + 2),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 27LL:
        v18 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v18;
        v130.m128i_i64[0] = (__int64)&v128;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&off_18 + 3),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 28LL:
        v17 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v17;
        v130.m128i_i64[0] = (__int64)&v128;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&off_18 + 4),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 29LL:
        v16 = *(_QWORD *)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v130.m128i_i64[0] = v16;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&off_18 + 5),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 30LL:
        v15 = *(_QWORD *)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v130.m128i_i64[0] = v15;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&off_18 + 6),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 31LL:
        v121 = **(_QWORD **)(a4 + 8);
        v122 = **(_QWORD **)(a4 + 16);
        *(_QWORD *)v129 = 0;
        v127 = v121;
        v128 = v122;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&off_18 + 7),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 32LL:
        v119 = **(_QWORD **)(a4 + 8);
        v120 = **(_QWORD **)(a4 + 16);
        *(_QWORD *)v129 = 0;
        v127 = v119;
        v128 = v120;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&qword_20, (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 33LL:
        v118 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v118;
        v130.m128i_i64[0] = (__int64)&v128;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&qword_20 + 1),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 34LL:
        v117 = *(_QWORD *)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v130.m128i_i64[0] = v117;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&qword_20 + 2),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 35LL:
        v116 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v116;
        v130.m128i_i64[0] = (__int64)&v128;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&qword_20 + 3),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 36LL:
        v107 = *(char **)(a4 + 48);
        v108 = *(__int64 **)(a4 + 32);
        v109 = *(unsigned int **)(a4 + 24);
        v110 = *(__int64 **)(a4 + 16);
        v111 = **(_QWORD **)(a4 + 40);
        v112 = **(void ****)(a4 + 8);
        v113 = *v108;
        v114 = (void **)*v109;
        v115 = *v110;
        v123 = *v107;
        v125 = v112;
        v127 = v113;
        v128 = v111;
        v126 = v115;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v125, (__m128i)(unsigned __int64)&v126);
        LODWORD(v124) = (_DWORD)v114;
        *(_QWORD *)v129 = 0;
        v131 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v124, (__m128i)(unsigned __int64)&v127);
        v132 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v128, (__m128i)(unsigned __int64)&v123);
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&qword_20 + 4),
          (int)v129,
          v114);
        return v133 - __readfsqword(0x28u);
      case 37LL:
        v104 = **(_DWORD **)(a4 + 24);
        v105 = **(_QWORD **)(a4 + 16);
        v106 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v105;
        v127 = v106;
        LODWORD(v126) = v104;
        v131.m128i_i64[0] = (__int64)&v126;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&qword_20 + 5),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 38LL:
        v103 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v103;
        v130.m128i_i64[0] = (__int64)&v128;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&qword_20 + 6),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 39LL:
        result = QT::QMetaObject::activate(
                   a1,
                   (QT::QObject *)&off_893BE0,
                   (const QT::QMetaObject *)((char *)&qword_20 + 7),
                   0,
                   a5);
        break;
      case 40LL:
        v101 = **(_QWORD **)(a4 + 8);
        v102 = **(_QWORD **)(a4 + 16);
        *(_QWORD *)v129 = 0;
        v127 = v101;
        v128 = v102;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&qword_28, (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 41LL:
        v99 = **(_QWORD **)(a4 + 8);
        v100 = **(_QWORD **)(a4 + 16);
        *(_QWORD *)v129 = 0;
        v127 = v99;
        v128 = v100;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&qword_28 + 1),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 42LL:
        v96 = **(_BYTE **)(a4 + 24);
        v97 = **(_QWORD **)(a4 + 16);
        v98 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v97;
        v127 = v98;
        LOBYTE(v126) = v96;
        v131.m128i_i64[0] = (__int64)&v126;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&qword_28 + 2),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 43LL:
        v93 = **(_QWORD **)(a4 + 24);
        v94 = **(_QWORD **)(a4 + 16);
        v95 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v127 = v94;
        v126 = v95;
        v128 = v93;
        v131.m128i_i64[0] = (__int64)&v128;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v126, (__m128i)(unsigned __int64)&v127);
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&qword_28 + 3),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 44LL:
        v90 = **(_QWORD **)(a4 + 24);
        v91 = **(_QWORD **)(a4 + 16);
        v92 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v127 = v91;
        v126 = v92;
        v128 = v90;
        v131.m128i_i64[0] = (__int64)&v128;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v126, (__m128i)(unsigned __int64)&v127);
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&qword_28 + 4),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 45LL:
        v88 = **(_QWORD **)(a4 + 8);
        v89 = **(_QWORD **)(a4 + 16);
        *(_QWORD *)v129 = 0;
        v127 = v88;
        v128 = v89;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&qword_28 + 5),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 46LL:
        v87 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v87;
        v130.m128i_i64[0] = (__int64)&v128;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&qword_28 + 6),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 47LL:
        v84 = **(_BYTE **)(a4 + 24);
        v85 = **(_QWORD **)(a4 + 16);
        v86 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v85;
        v127 = v86;
        LOBYTE(v126) = v84;
        v131.m128i_i64[0] = (__int64)&v126;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&qword_28 + 7),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 48LL:
        v78 = *(__int64 **)(a4 + 40);
        v79 = *(void ****)(a4 + 16);
        v80 = **(_QWORD **)(a4 + 32);
        v81 = **(_QWORD **)(a4 + 24);
        v82 = **(_QWORD **)(a4 + 8);
        v83 = *v79;
        v128 = *v78;
        v126 = v81;
        v124 = v82;
        v127 = v80;
        v125 = v83;
        *(_QWORD *)v129 = 0;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v124, (__m128i)(unsigned __int64)&v125);
        v132.m128i_i64[0] = (__int64)&v128;
        v131 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v126, (__m128i)(unsigned __int64)&v127);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&dword_30, (int)v129, v83);
        return v133 - __readfsqword(0x28u);
      case 49LL:
        v77 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v77;
        v130.m128i_i64[0] = (__int64)&v128;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&dword_30 + 1),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 50LL:
        v75 = **(_QWORD **)(a4 + 8);
        v76 = **(_QWORD **)(a4 + 16);
        *(_QWORD *)v129 = 0;
        v127 = v75;
        v128 = v76;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&dword_30 + 2),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 51LL:
        v72 = **(_QWORD **)(a4 + 24);
        v73 = **(_QWORD **)(a4 + 16);
        v74 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v127 = v73;
        v126 = v74;
        v128 = v72;
        v131.m128i_i64[0] = (__int64)&v128;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v126, (__m128i)(unsigned __int64)&v127);
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&dword_30 + 3),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 52LL:
        v69 = **(_QWORD **)(a4 + 24);
        v70 = **(_QWORD **)(a4 + 16);
        v71 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v127 = v70;
        v126 = v71;
        v128 = v69;
        v131.m128i_i64[0] = (__int64)&v128;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v126, (__m128i)(unsigned __int64)&v127);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&word_34, (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 53LL:
        v64 = *(__int64 **)(a4 + 16);
        v65 = **(_QWORD **)(a4 + 32);
        v66 = **(_QWORD **)(a4 + 24);
        v67 = **(void ****)(a4 + 8);
        v68 = *v64;
        *(_QWORD *)v129 = 0;
        v127 = v66;
        v125 = v67;
        v126 = v68;
        v128 = v65;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v125, (__m128i)(unsigned __int64)&v126);
        v131 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v127, (__m128i)(unsigned __int64)&v128);
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&word_34 + 1),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 54LL:
        v61 = **(_QWORD **)(a4 + 24);
        v62 = **(_QWORD **)(a4 + 16);
        v63 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v127 = v62;
        v126 = v63;
        v128 = v61;
        v131.m128i_i64[0] = (__int64)&v128;
        v130 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v126, (__m128i)(unsigned __int64)&v127);
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&word_36, (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 55LL:
        v14 = **(_QWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        v128 = v14;
        v130.m128i_i64[0] = (__int64)&v128;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&word_36 + 1),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      case 56LL:
        v10 = **(_DWORD **)(a4 + 32);
        v11 = **(_QWORD **)(a4 + 24);
        v12 = *(_QWORD *)(a4 + 16);
        v13 = **(_DWORD **)(a4 + 8);
        v128 = v11;
        LODWORD(v127) = v10;
        LODWORD(v126) = v13;
        v130.m128i_i64[0] = (__int64)&v126;
        v130.m128i_i64[1] = v12;
        v131.m128i_i64[0] = (__int64)&v128;
        *(_QWORD *)v129 = 0;
        v131.m128i_i64[1] = (__int64)&v127;
        QT::QMetaObject::activate(a1, (QT::QObject *)&off_893BE0, (const QT::QMetaObject *)&word_38, (int)v129, a5);
        return v133 - __readfsqword(0x28u);
      case 57LL:
        v60 = **(_DWORD **)(a4 + 8);
        *(_QWORD *)v129 = 0;
        LODWORD(v128) = v60;
        v130.m128i_i64[0] = (__int64)&v128;
        QT::QMetaObject::activate(
          a1,
          (QT::QObject *)&off_893BE0,
          (const QT::QMetaObject *)((char *)&word_38 + 1),
          (int)v129,
          a5);
        return v133 - __readfsqword(0x28u);
      default:
        return v133 - __readfsqword(0x28u);
    }
  }
  return result;
}
