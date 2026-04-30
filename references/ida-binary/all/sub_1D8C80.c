__int64 *__fastcall sub_1D8C80(size_t a1, __int64 a2)
{
  struct _Unwind_Exception *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 *p_src; // r15
  const char *v9; // rsi
  char v10; // r14
  __int64 v11; // rdi
  const char *v12; // rsi
  __int64 v13; // rax
  __int64 *v14; // rbp
  __m128i si128; // xmm0
  const char **v16; // rbx
  __int128 v17; // rax
  double kk; // rsi
  __int8 *v19; // rax
  char *v20; // rdi
  size_t v21; // r13
  void *v22; // rbp
  __int64 v23; // rsi
  int v24; // ebp
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  const char *v28; // rsi
  char *v29; // rax
  const char *v30; // rsi
  __int64 v31; // rcx
  size_t v32; // r12
  size_t v33; // r14
  char v34; // r13
  _BYTE *v35; // rsi
  const char *v36; // rdx
  size_t v37; // r13
  void *v38; // r12
  const char **v39; // r13
  void *v40; // r12
  __m128i v41; // xmm0
  __m128i v42; // xmm1
  __int8 *v43; // rax
  __int64 v44; // rax
  __int64 *v45; // rbp
  const char *v46; // rdx
  const char *v47; // rdx
  __int64 v48; // rax
  __int64 *v49; // rbx
  const char *v50; // rdx
  const char *v51; // rdx
  const char *v52; // rdx
  __int64 v53; // rax
  __int64 *v54; // r12
  __int64 v55; // rdx
  __int64 v56; // rcx
  const char *v57; // rdx
  const char *v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned __int64 v61; // r12
  __m128i *v62; // r13
  __int64 v63; // rbx
  int *v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rcx
  unsigned __int64 v67; // r13
  char *v68; // r14
  __m128i *v69; // rbx
  size_t v70; // rbp
  unsigned __int64 v71; // rcx
  const char *v72; // rsi
  _BYTE *v73; // rax
  __int64 v74; // r13
  void *v75; // rdi
  __int64 v76; // rcx
  __m128i *v77; // rbx
  __int64 (__fastcall *v78)(__int64); // r12
  __int64 (__fastcall *v79)(__int64); // rbp
  __int64 (__fastcall *v80)(__m128i *); // r13
  __int64 i; // rdx
  __int64 (__fastcall *v82)(__int64); // rax
  _BYTE *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 *v89; // rdx
  unsigned __int64 v90; // rdx
  __int64 *v91; // rbp
  __int64 v92; // r12
  __int64 v93; // rbx
  __int64 *v94; // rax
  __int64 v95; // rdi
  __int64 (__fastcall *v97)(__int64); // rax
  _BYTE *v98; // rax
  __int64 (__fastcall *v99)(__m128i *); // rax
  __int32 v100; // eax
  char *(__fastcall *v101)(__int64, const char *); // rax
  _WORD *v102; // rdi
  int v103; // eax
  size_t v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdx
  int v107; // ecx
  char k; // al
  char v109; // dl
  __int64 (__fastcall *v110)(__m128i *); // rax
  __int32 v111; // eax
  size_t v112; // rax
  __int64 v113; // rdi
  __int64 *v114; // r14
  __int64 v115; // r15
  __int64 *v116; // rbx
  __int64 v117; // rdi
  _BYTE *v118; // rax
  __int64 (__fastcall *v119)(__m128i *); // rax
  __int32 v120; // eax
  unsigned __int8 *v121; // rax
  __int64 (__fastcall *v122)(__int64); // rax
  unsigned __int8 *v123; // rax
  __int64 (__fastcall *v124)(__int64); // rax
  unsigned __int8 *v125; // rax
  __int64 (__fastcall *v126)(__int64); // rax
  unsigned __int8 *v127; // rax
  __int64 (__fastcall *v128)(__int64); // rax
  unsigned __int8 *v129; // rdx
  int v130; // eax
  __int64 (__fastcall *v131)(__int64); // rax
  _BYTE *v132; // rax
  _BYTE *v133; // rax
  __int64 (__fastcall *v134)(__int64); // rax
  __int32 v135; // eax
  __int64 *v136; // rdx
  _BYTE *v137; // rax
  __int64 (__fastcall *v138)(__int64); // rax
  __int64 *v139; // rbx
  int v140; // eax
  __int64 v141; // rax
  __int64 *v142; // r8
  _DWORD *v143; // rbx
  char *(__fastcall *v144)(__int64, const char *); // rax
  int v145; // eax
  __int64 v146; // rbx
  __int64 v147; // r8
  __int64 v148; // rdx
  __int8 j; // al
  char v150; // dl
  int v151; // ebx
  int v152; // r12d
  size_t v153; // rdx
  unsigned __int64 *v154; // rdi
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // rbx
  size_t v158; // rdi
  const char *v159; // rax
  __int64 v160; // rcx
  __m128i v161; // xmm0
  __m128i v162; // xmm1
  char *v163; // rax
  size_t v164; // rdi
  char *v165; // rax
  unsigned __int64 v166; // r12
  __m128i *v167; // r13
  __int64 v168; // rbx
  __int64 v169; // r14
  const char *v170; // rdi
  const char *v171; // rsi
  unsigned __int64 v172; // r13
  const char *v173; // r14
  __m128i *v174; // rbp
  size_t v175; // rbx
  const char *v176; // rdi
  QT::QByteArray *v177; // r14
  double *v178; // rax
  size_t v179; // rbx
  double v180; // rdi
  __int64 v181; // r8
  __int64 v182; // rbx
  double v183; // r15
  double v184; // rdx
  __int64 v185; // r8
  size_t v186; // rbx
  __int64 (__fastcall *v187)(__int64); // rax
  __int32 v188; // eax
  char *(__fastcall *v189)(__int64, const char *); // rax
  _WORD *v190; // rdi
  int v191; // eax
  size_t v192; // r8
  __int64 v193; // r9
  int v194; // ecx
  __int64 v195; // rdx
  char ii; // al
  char v197; // dl
  int v198; // eax
  const char *v199; // rdi
  __int64 *v200; // rdx
  __int64 v201; // rax
  char *v202; // r14
  size_t v203; // rbx
  const char *v204; // rdi
  const char *v205; // rdx
  char *v206; // rdx
  __int64 (__fastcall *v207)(__m128i *); // rbx
  char *v208; // rax
  __int64 v209; // rdi
  const char *v210; // rsi
  size_t v211; // rax
  size_t v212; // rbx
  __int64 v213; // rdx
  unsigned __int64 v214; // r14
  void *v215; // rcx
  __m128i *v216; // rbx
  size_t v217; // r12
  unsigned __int64 v218; // r15
  const char *v219; // r14
  const char *v220; // rdi
  unsigned __int64 v221; // r12
  __m128i *v222; // r13
  size_t v223; // rbx
  const char *v224; // r14
  const char *v225; // rdi
  _BYTE *v226; // rax
  const char *v227; // rdx
  _DWORD *v228; // rbx
  char *(__fastcall *v229)(__int64, const char *); // rax
  int v230; // eax
  char **v231; // rbx
  __int64 v232; // r8
  __int64 v233; // rdx
  char m; // al
  char v235; // dl
  __int64 v236; // rax
  __int64 *v237; // rbx
  int v238; // eax
  size_t v239; // rdx
  __int64 (__fastcall *v240)(void *); // rax
  bool v241; // bl
  int v242; // eax
  __int64 v243; // rax
  unsigned __int64 v244; // r12
  const char *v245; // r14
  __m128i *v246; // r13
  size_t v247; // rbp
  const char *v248; // rdi
  const char *v249; // rsi
  unsigned __int64 v250; // rbx
  int v251; // ecx
  _DWORD *v252; // rax
  size_t v253; // rax
  int *v254; // r8
  int v255; // r14d
  int *v256; // rdx
  int v257; // ebx
  _QWORD *v258; // rax
  size_t v259; // rdx
  __int64 v260; // rsi
  _QWORD *v261; // rcx
  int v262; // eax
  __int64 v263; // rbx
  size_t v264; // rdx
  int *v265; // rax
  __int64 v266; // rdx
  const char *v267; // rbx
  __int64 v268; // r8
  __int64 v269; // rbx
  __int64 v270; // r15
  const char *v271; // rdi
  __m128i *v272; // rbx
  _QWORD *v273; // r14
  size_t v274; // rbx
  size_t v275; // rdx
  size_t v276; // rax
  const __m128i *v277; // r14
  const char *v278; // rbx
  size_t v279; // rdx
  const char *v280; // rdx
  size_t *v281; // rdi
  __int64 v282; // rdx
  size_t v283; // rdi
  __m128i *v284; // rax
  __int64 v285; // rax
  size_t v286; // r8
  __int64 v287; // rax
  _QWORD *v288; // r14
  unsigned __int64 v289; // rdx
  __int64 v290; // rax
  double v291; // r8
  size_t v292; // rcx
  double v293; // rsi
  char *v294; // rcx
  __int64 v295; // rax
  __int64 v296; // rax
  size_t v297; // rcx
  _QWORD *v298; // rax
  size_t v299; // rdx
  __int64 v300; // rax
  __int64 v301; // r14
  size_t v302; // rdx
  void *v303; // rdi
  const void **v304; // rax
  __int64 *v305; // rax
  size_t v306; // rdi
  __int64 v307; // rbx
  __int64 v308; // r14
  __int64 v309; // rdi
  char *(__fastcall *v310)(__int64, const char *); // rax
  size_t *v311; // rax
  int v312; // eax
  __int64 v313; // r9
  char jj; // al
  char *v315; // rax
  int v316; // eax
  size_t v317; // rdx
  void *v318; // rdi
  __int64 v319; // rax
  __int64 v320; // rsi
  __int64 v321; // rax
  __m128i v322; // [rsp+8h] [rbp-6F0h] BYREF
  size_t v323; // [rsp+18h] [rbp-6E0h]
  __m128i v324; // [rsp+20h] [rbp-6D8h] BYREF
  char v325; // [rsp+37h] [rbp-6C1h]
  __int64 *v326; // [rsp+38h] [rbp-6C0h]
  double v327; // [rsp+40h] [rbp-6B8h]
  int *v328; // [rsp+48h] [rbp-6B0h]
  __int64 v329; // [rsp+50h] [rbp-6A8h]
  size_t v330; // [rsp+58h] [rbp-6A0h]
  __int64 v331; // [rsp+60h] [rbp-698h] BYREF
  __int64 *v332; // [rsp+68h] [rbp-690h]
  __int64 v333; // [rsp+70h] [rbp-688h] BYREF
  __int64 *v334; // [rsp+78h] [rbp-680h]
  void *v335; // [rsp+80h] [rbp-678h] BYREF
  __int128 v336; // [rsp+88h] [rbp-670h]
  __m128i *v337; // [rsp+A0h] [rbp-658h] BYREF
  __int128 v338; // [rsp+A8h] [rbp-650h]
  char *s1; // [rsp+C0h] [rbp-638h] BYREF
  size_t v340; // [rsp+C8h] [rbp-630h]
  int *v341; // [rsp+E0h] [rbp-618h]
  size_t v342; // [rsp+E8h] [rbp-610h]
  size_t v343; // [rsp+100h] [rbp-5F8h] BYREF
  __int128 v344; // [rsp+108h] [rbp-5F0h]
  int *v345; // [rsp+120h] [rbp-5D8h] BYREF
  __int64 v346; // [rsp+128h] [rbp-5D0h]
  unsigned __int64 v347; // [rsp+130h] [rbp-5C8h]
  __m128i v348; // [rsp+140h] [rbp-5B8h] BYREF
  __int64 v349; // [rsp+150h] [rbp-5A8h]
  __int64 v350; // [rsp+160h] [rbp-598h] BYREF
  __int128 v351; // [rsp+168h] [rbp-590h]
  __int64 v352; // [rsp+178h] [rbp-580h]
  __int64 v353; // [rsp+180h] [rbp-578h]
  __int128 v354; // [rsp+188h] [rbp-570h]
  void *v355; // [rsp+1A0h] [rbp-558h] BYREF
  size_t v356[3]; // [rsp+1A8h] [rbp-550h]
  __int64 v357; // [rsp+1C0h] [rbp-538h]
  __int64 *v358; // [rsp+1C8h] [rbp-530h]
  bool v359; // [rsp+1D0h] [rbp-528h]
  __int64 *v360; // [rsp+1D8h] [rbp-520h]
  int v361; // [rsp+1E0h] [rbp-518h] BYREF
  __m128i **v362; // [rsp+1E8h] [rbp-510h]
  const char *v363; // [rsp+1F0h] [rbp-508h] BYREF
  unsigned __int64 v364; // [rsp+1F8h] [rbp-500h]
  __int64 v365; // [rsp+208h] [rbp-4F0h] BYREF
  __int64 v366; // [rsp+210h] [rbp-4E8h]
  unsigned __int64 v367; // [rsp+218h] [rbp-4E0h]
  void *src; // [rsp+220h] [rbp-4D8h] BYREF
  size_t n[2]; // [rsp+228h] [rbp-4D0h] BYREF
  size_t v370; // [rsp+238h] [rbp-4C0h]
  __int128 v371; // [rsp+240h] [rbp-4B8h]
  void *v372; // [rsp+250h] [rbp-4A8h]
  __int64 v373; // [rsp+258h] [rbp-4A0h]
  void *v374; // [rsp+260h] [rbp-498h]
  __int64 v375; // [rsp+268h] [rbp-490h]
  __int64 v376; // [rsp+278h] [rbp-480h]
  __int64 v377; // [rsp+280h] [rbp-478h]
  __int16 v378; // [rsp+288h] [rbp-470h]
  __int64 v379; // [rsp+290h] [rbp-468h]
  __int64 v380; // [rsp+298h] [rbp-460h]
  __int16 v381; // [rsp+2A0h] [rbp-458h]
  char v382[1032]; // [rsp+2B0h] [rbp-448h] BYREF
  unsigned __int64 v383; // [rsp+6B8h] [rbp-40h]

  v323 = a1;
  v322.m128i_i64[1] = a2;
  v383 = __readfsqword(0x28u);
  v331 = 0;
  v332 = nullptr;
  v6 = qalloc_or_throw(24);
  *(_QWORD *)v6 = 0;
  v7 = (__int64 *)v6;
  *(_OWORD *)(v6 + 8) = 0;
  if ( (_DWORD)v331 )
    jvalue_t_clear(&v331);
  p_src = (__int64 *)&src;
  LODWORD(v331) = 3;
  v332 = v7;
  v350 = 0;
  v324.m128i_i64[1] = v322.m128i_i64[1] + 104;
  v352 = 0;
  v353 = 0;
  v351 = 0;
  v354 = 0;
  QT::QString::toUtf8_helper((QT::QString *)&src, (const QT::QString *)(v322.m128i_i64[1] + 104));
  v9 = (const char *)n[0];
  if ( !n[0] )
    v9 = (const char *)&QT::QByteArray::_empty;
  sub_1D0490((__int64)&v350, v9, nullptr);
  sub_17F470(&src);
  v335 = nullptr;
  v10 = BYTE1(v352);
  v11 = *(_QWORD *)(v322.m128i_i64[1] + 48);
  v336 = 0;
  LOBYTE(v326) = BYTE1(v352);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **, __int64))(*(_QWORD *)v11 + 104LL))(
          v11,
          &v335,
          v322.m128i_i64[1] + 16) )
  {
    v12 = "<l f=\"IDA View-A\"><a><v b=\"1\" o=\"v\" s=\"740200000d010000\"><v b=\"1\" o=\"h\" s=\"7f010000fe050000\"><v "
          "b=\"1\" o=\"v\" s=\"7402000000000000\"><d n=\"Functions window\" b=\"1\" m=\"0\" /><d n=\"GraphOverView\" b=\""
          "0\" m=\"0\" /></v><t i=\"0\"><d n=\"IDA View-A\" b=\"1\" m=\"t\" /><d n=\"Hex View-1\" b=\"1\" m=\"0\" /><d n="
          "\"Structures\" b=\"1\" m=\"0\" /><d n=\"Enums\" b=\"1\" m=\"0\" /><d n=\"Imports\" b=\"1\" m=\"0\" /><d n=\"Ex"
          "ports\" b=\"1\" m=\"0\" /></t></v><d n=\"Output window\" b=\"1\" m=\"0\" /></v></a><f></f></l>";
    if ( v10 == 2 )
      v12 = "<l f=\"IDA View-EIP\"><a><v b=\"1\" o=\"v\" s=\"c3010000ef000000\"><v b=\"1\" o=\"v\" s=\"c301000000000000\""
            "><t i=\"0\"><v b=\"1\" o=\"v\" s=\"2e01000070000000\"><v b=\"1\" o=\"h\" s=\"2d0300005c010000\"><d n=\"IDA V"
            "iew-EIP\" b=\"1\" m=\"g\" /><v b=\"1\" o=\"v\" s=\"320000008400000070000000\"><d n=\"General registers\" b=\""
            "1\" m=\"0\" /><d n=\"Modules\" b=\"1\" m=\"0\" /><d n=\"Threads\" b=\"1\" m=\"0\" /></v></v><v b=\"1\" o=\"h"
            "\" s=\"4502000044020000\"><d n=\"Hex View-1\" b=\"1\" m=\"0\" /><d n=\"Stack view\" b=\"1\" m=\"0\" /></v></"
            "v><d n=\"Structures\" b=\"1\" m=\"0\" /><d n=\"Enums\" b=\"1\" m=\"0\" /></t><d n=\"GraphOverView\" b=\"0\" "
            "m=\"0\" /></v><d n=\"Output window\" b=\"1\" m=\"0\" /></v></a></l>";
    sub_1CB2E0((__int64 *)&v335, v12);
  }
  v333 = 0;
  v334 = nullptr;
  v13 = operator new(0x18u);
  *(_QWORD *)v13 = 0;
  v14 = (__int64 *)v13;
  *(_OWORD *)(v13 + 8) = 0;
  if ( (_DWORD)v333 )
    jvalue_t_clear(&v333);
  v334 = v14;
  LODWORD(v333) = 4;
  sub_1CE950((QT::QString *)&src, &xmmword_8CB260);
  v325 = sub_1CF860((const __m128i *)v322.m128i_i64[1], (const QT::QString *)&src, 0);
  sub_16D970(&src);
  si128.m128i_i64[0] = 0;
  *(double *)&v337 = 0.0;
  v338 = 0;
  if ( !v325 )
    goto LABEL_12;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(v322.m128i_i64[1] + 48) + 72LL))(
         *(_QWORD *)(v322.m128i_i64[1] + 48),
         &unk_8CB200) )
  {
    v23 = *(_QWORD *)(v322.m128i_i64[1] + 48);
    v322.m128i_i64[0] = (__int64)&v355;
    (*(void (__fastcall **)(void **, __int64, void *))(*(_QWORD *)v23 + 88LL))(&v355, v23, &unk_8CB200);
    sub_1CC990((__int64)&src, "\n");
    QT::QString::split(&v348, &v355, &src, 1, 1);
    v24 = 0;
    sub_16D970(&src);
    sub_16D970(&v355);
    v324.m128i_i64[0] = (__int64)&v337;
    if ( v349 > 0 )
    {
      do
      {
        if ( !v348.m128i_i64[0] || *(int *)v348.m128i_i64[0] > 1 )
          sub_1B21C0(&v348, 0, 0, 0, v25, v26);
        QT::QString::toUtf8_helper((QT::QString *)&src, (const QT::QString *)(v348.m128i_i64[1] + 24LL * v24));
        v30 = (const char *)n[0];
        if ( !n[0] )
          v30 = (const char *)&QT::QByteArray::_empty;
        sub_1A1F60(v322.m128i_i64[0], v30);
        sub_17F470(&src);
        if ( (unsigned __int8)sub_1CAF50(v322.m128i_i64[0]) )
        {
          v20 = (char *)&src;
          sub_1A1F60((__int64)&src, "IDA View-");
          v32 = n[0];
          v33 = 2;
          v34 = *((_BYTE *)v355 + 9) + 16;
          if ( n[0] )
          {
            v33 = n[0] + 1;
            v32 = n[0] - 1;
          }
          v35 = src;
          if ( n[1] < v33 )
          {
            v20 = (char *)&src;
            *(double *)&src = COERCE_DOUBLE(qvector_reserve(&src, src, v33, 1));
            v35 = src;
          }
          n[0] = v33;
          v36 = &::s1;
          v35[v32] = v34;
          *((_BYTE *)src + v32 + 1) = 0;
          if ( v356[0] )
            v36 = (const char *)v355;
          kk = COERCE_DOUBLE(&::s1);
          if ( n[0] )
            kk = *(double *)&src;
          if ( (_DWORD)v333 != 4 )
          {
            sub_1CAD60(*(double *)si128.m128i_i64, (__int64)&src, *(__int64 *)&kk, (__int64)v36, v31);
            goto LABEL_618;
          }
          sub_1D23A0((__int64)v334, *(const char **)&kk, v36, 1);
          if ( *(double *)&src != 0.0 )
          {
            n[0] = 0;
            qfree(src, *(const char **)&kk);
          }
        }
        sub_1D2330((__int64 *)v322.m128i_i64[0]);
        v37 = v356[0];
        v38 = nullptr;
        if ( v356[0] )
        {
          v38 = (void *)qalloc_or_throw(v356[0]);
          memcpy(v38, v355, v37);
        }
        v27 = v338;
        v28 = (const char *)v337;
        if ( *((_QWORD *)&v338 + 1) < (unsigned __int64)(v338 + 1) )
        {
          *(double *)&v337 = COERCE_DOUBLE(qvector_reserve(v324.m128i_i64[0], v337, v338 + 1, 24));
          v27 = v338;
          v28 = (const char *)v337;
        }
        v29 = (char *)&v28[24 * v27];
        si128 = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
        *(_QWORD *)v29 = v38;
        *(__m128i *)(v29 + 8) = si128;
        *(_QWORD *)&v338 = v338 + 1;
        if ( v355 )
        {
          v356[0] = 0;
          qfree(v355, v28);
        }
        ++v24;
      }
      while ( v24 < v349 );
    }
    sub_1AF880((__int64)&v348);
  }
  v44 = qalloc_or_throw(24);
  *(_QWORD *)v44 = 0;
  v45 = (__int64 *)v44;
  *(_OWORD *)(v44 + 8) = 0;
  QT::QString::toUtf8_helper((QT::QString *)&src, (const QT::QString *)&unk_8CAFE0);
  v46 = (const char *)n[0];
  if ( !n[0] )
    v46 = (const char *)&QT::QByteArray::_empty;
  sub_1CECC0(v45, v322.m128i_i64[1], v46, "indent");
  sub_17F470(&src);
  QT::QString::toUtf8_helper((QT::QString *)&src, (const QT::QString *)&unk_8CB000);
  v47 = (const char *)n[0];
  if ( !n[0] )
    v47 = (const char *)&QT::QByteArray::_empty;
  sub_1CECC0(v45, v322.m128i_i64[1], v47, "opcode_bytes");
  sub_17F470(&src);
  v48 = qalloc_or_throw(24);
  *(_QWORD *)v48 = 0;
  v49 = (__int64 *)v48;
  *(_OWORD *)(v48 + 8) = 0;
  QT::QString::toUtf8_helper((QT::QString *)&src, (const QT::QString *)&unk_8CAFA0);
  v50 = (const char *)n[0];
  if ( !n[0] )
    v50 = (const char *)&QT::QByteArray::_empty;
  sub_1CECC0(v49, v322.m128i_i64[1], v50, "indent");
  sub_17F470(&src);
  QT::QString::toUtf8_helper((QT::QString *)&src, (const QT::QString *)&unk_8CAF80);
  v51 = (const char *)n[0];
  if ( !n[0] )
    v51 = (const char *)&QT::QByteArray::_empty;
  sub_1CEE70(v49, v322.m128i_i64[1], v51, "show_line_prefix");
  sub_17F470(&src);
  QT::QString::toUtf8_helper((QT::QString *)&src, (const QT::QString *)&unk_8CAFC0);
  v52 = (const char *)n[0];
  if ( !n[0] )
    v52 = (const char *)&QT::QByteArray::_empty;
  sub_1CECC0(v49, v322.m128i_i64[1], v52, "opcode_bytes");
  sub_17F470(&src);
  v53 = qalloc_or_throw(24);
  *(_QWORD *)v53 = 0;
  v54 = (__int64 *)v53;
  si128.m128i_i64[0] = 0;
  *(_OWORD *)(v53 + 8) = 0;
  sub_1CCD50((__int64 *)v53, "flat_dto", (__int64)v45);
  kk = COERCE_DOUBLE("graph_dto");
  v20 = (char *)v54;
  sub_1CCD50(v54, "graph_dto", (__int64)v49);
  if ( (_DWORD)v331 != 3 )
    goto LABEL_621;
  sub_1CCD50(v332, "inf", (__int64)v54);
  QT::QString::toUtf8_helper((QT::QString *)&src, (const QT::QString *)&unk_8CB020);
  v57 = (const char *)n[0];
  if ( !n[0] )
    v57 = (const char *)&QT::QByteArray::_empty;
  sub_1CEE70(v54, v322.m128i_i64[1], v57, "show_stack");
  sub_17F470(&src);
  QT::QString::toUtf8_helper((QT::QString *)&src, (const QT::QString *)&unk_8CAF60);
  v58 = (const char *)n[0];
  if ( !n[0] )
    v58 = (const char *)&QT::QByteArray::_empty;
  kk = *(double *)&v322.m128i_i64[1];
  sub_1CEE70(v54, v322.m128i_i64[1], v58, "show_graph_overview");
  v20 = (char *)&src;
  sub_17F470(&src);
  if ( !(_QWORD)v338 )
  {
LABEL_12:
    if ( (_BYTE)v326 == 2 )
    {
      v16 = (const char **)&off_85D8E0;
      do
      {
        sub_1A1F60((__int64)&src, *v16);
        sub_1D2330((__int64 *)&src);
        v21 = n[0];
        v22 = nullptr;
        if ( n[0] )
        {
          v22 = (void *)qalloc_or_throw(n[0]);
          memcpy(v22, src, v21);
        }
        *((_QWORD *)&v17 + 1) = v338;
        kk = *(double *)&v337;
        if ( *((_QWORD *)&v338 + 1) < (unsigned __int64)(v338 + 1) )
        {
          *(double *)&v337 = COERCE_DOUBLE(qvector_reserve(&v337, v337, v338 + 1, 24));
          *((_QWORD *)&v17 + 1) = v338;
          kk = *(double *)&v337;
        }
        v19 = (__int8 *)(*(_QWORD *)&kk + 24LL * *((_QWORD *)&v17 + 1));
        si128 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
        *(_QWORD *)v19 = v22;
        *(__m128i *)(v19 + 8) = si128;
        v20 = (char *)src;
        *(_QWORD *)&v338 = v338 + 1;
        if ( *(double *)&src != 0.0 )
        {
          n[0] = 0;
          qfree(src, *(const char **)&kk);
        }
        ++v16;
      }
      while ( algn_85D930 != (_BYTE *)v16 );
    }
    else
    {
      v39 = (const char **)&off_85D880;
      do
      {
        sub_1A1F60((__int64)&src, *v39);
        v17 = v338;
        kk = *(double *)&v337;
        v20 = (char *)(v338 + 1);
        if ( &src < (void **)v337
          || (v71 = (unsigned __int64)v337 + 24 * *((_QWORD *)&v338 + 1), (unsigned __int64)&src >= v71) )
        {
          if ( *((_QWORD *)&v338 + 1) < (unsigned __int64)v20 )
          {
            v20 = (char *)&v337;
            *(double *)&v337 = COERCE_DOUBLE(qvector_reserve(&v337, v337, v338 + 1, 24));
            kk = *(double *)&v337;
            *(_QWORD *)&v17 = v338;
          }
          *((_QWORD *)&v17 + 1) = src;
          si128 = _mm_loadu_si128((const __m128i *)n);
          *(_QWORD *)&v17 = *(_QWORD *)&kk + 24 * v17;
          *(double *)v17 = *(double *)&src;
          *(__m128i *)(v17 + 8) = si128;
          *(_QWORD *)&v338 = v338 + 1;
        }
        else
        {
          v40 = src;
          v41 = _mm_loadl_epi64((const __m128i *)n);
          *(double *)&src = 0.0;
          v42 = _mm_loadl_epi64((const __m128i *)&n[1]);
          *(_OWORD *)n = 0;
          if ( *((_QWORD *)&v338 + 1) < (unsigned __int64)v20 )
          {
            v324.m128i_i64[0] = v42.m128i_i64[0];
            v322.m128i_i64[0] = v41.m128i_i64[0];
            *(double *)&v337 = COERCE_DOUBLE(qvector_reserve(&v337, v337, v338 + 1, 24));
            kk = *(double *)&v337;
            v42 = _mm_loadl_epi64(&v324);
            *(_QWORD *)&v17 = v338;
            v41 = _mm_loadl_epi64(&v322);
          }
          si128 = _mm_unpacklo_epi64(v41, v42);
          v43 = (__int8 *)(*(_QWORD *)&kk + 24 * v17);
          *(_QWORD *)v43 = v40;
          *(__m128i *)(v43 + 8) = si128;
          v20 = (char *)src;
          *(_QWORD *)&v338 = v338 + 1;
          if ( *(double *)&src != 0.0 )
          {
            n[0] = 0;
            qfree(src, *(const char **)&kk);
          }
        }
        ++v39;
      }
      while ( algn_85D8C8 != (_BYTE *)v39 );
    }
  }
  if ( (_DWORD)v333 != 4 )
  {
LABEL_618:
    sub_1CAD60(*(double *)si128.m128i_i64, (__int64)v20, *(__int64 *)&kk, *((__int64 *)&v17 + 1), v71);
    goto LABEL_619;
  }
  if ( v334[1] )
    goto LABEL_78;
  v171 = "IDA View-A";
  sub_1A1F60((__int64)&v355, "IDA View-A");
  v172 = (unsigned __int64)v337;
  v173 = (const char *)v355;
  v174 = (__m128i *)((char *)v337 + 24 * v338);
  if ( v337 == v174 )
    goto LABEL_320;
  v175 = v356[0];
  while ( *(_QWORD *)(v172 + 8) )
  {
    v171 = *(const char **)v172;
    v176 = &::s1;
    if ( v175 )
      goto LABEL_300;
LABEL_295:
    if ( !strcmp(v176, v171) )
      goto LABEL_382;
    v172 += 24LL;
    if ( v174 == (__m128i *)v172 )
      goto LABEL_320;
  }
  if ( v175 )
  {
    v171 = &::s1;
LABEL_300:
    v176 = v173;
    goto LABEL_295;
  }
LABEL_382:
  if ( v174 == (__m128i *)v172 )
  {
LABEL_320:
    if ( v173 )
    {
      v356[0] = 0;
      qfree(v173, v171);
    }
    goto LABEL_78;
  }
  kk = COERCE_DOUBLE("Hex View-1");
  sub_1A1F60((__int64)&src, "Hex View-1");
  v214 = (unsigned __int64)v337;
  v215 = src;
  v216 = (__m128i *)((char *)v337 + 24 * v338);
  if ( v337 == v216 )
  {
    if ( *(double *)&src != 0.0 )
    {
LABEL_421:
      n[0] = 0;
      qfree(v215, *(const char **)&kk);
      goto LABEL_422;
    }
    v20 = (char *)v355;
    if ( v355 )
    {
LABEL_423:
      v356[0] = 0;
      qfree(v20, *(const char **)&kk);
      goto LABEL_424;
    }
    goto LABEL_78;
  }
  v217 = n[0];
  v218 = (unsigned __int64)v337;
  v219 = (const char *)src;
  while ( 2 )
  {
    if ( *(_QWORD *)(v218 + 8) )
    {
      kk = *(double *)v218;
      v220 = &::s1;
      if ( v217 )
        goto LABEL_391;
    }
    else
    {
      if ( !v217 )
        break;
      kk = COERCE_DOUBLE(&::s1);
LABEL_391:
      v220 = v219;
    }
    if ( strcmp(v220, *(const char **)&kk) )
    {
      v218 += 24LL;
      if ( v216 != (__m128i *)v218 )
        continue;
    }
    break;
  }
  v215 = (void *)v219;
  v214 = v218;
  p_src = (__int64 *)&src;
  if ( v215 )
    goto LABEL_421;
LABEL_422:
  v20 = (char *)v355;
  if ( v355 )
    goto LABEL_423;
LABEL_424:
  if ( v216 != (__m128i *)v214 )
  {
    if ( (_DWORD)v333 == 4 )
    {
      sub_1D23A0((__int64)v334, "IDA View-A", "Hex View-1", 1);
      goto LABEL_78;
    }
    sub_1CAD60(*(double *)si128.m128i_i64, (__int64)v20, *(__int64 *)&kk, v213, (__int64)v215);
LABEL_604:
    sub_1CAD40(*(double *)si128.m128i_i64, (__int64)v20, *(__int64 *)&kk, v86, v85);
LABEL_605:
    sub_1CAD40(*(double *)si128.m128i_i64, (__int64)v20, *(__int64 *)&kk, v86, v85);
LABEL_606:
    sub_1CAD60(*(double *)si128.m128i_i64, (__int64)v20, *(__int64 *)&kk, v88, v87);
LABEL_607:
    sub_1CAD40(*(double *)si128.m128i_i64, (__int64)v20, *(__int64 *)&kk, (__int64)v89, v87);
LABEL_608:
    sub_1CAD80(*(double *)si128.m128i_i64, (__int64)v20, *(__int64 *)&kk, (__int64)v89, v87);
  }
LABEL_78:
  kk = COERCE_DOUBLE("IDA View-EIP");
  v20 = (char *)&v345;
  v324.m128i_i64[0] = (__int64)&v345;
  sub_1A1F60((__int64)&v345, "IDA View-EIP");
  v61 = (unsigned __int64)v337;
  v62 = (__m128i *)((char *)v337 + 24 * v338);
  if ( v337 == v62 )
    goto LABEL_283;
  v63 = v346;
  v64 = v345;
  while ( 2 )
  {
    if ( *(_QWORD *)(v61 + 8) )
    {
      kk = *(double *)v61;
      v20 = (char *)&::s1;
      if ( v63 )
        goto LABEL_86;
      goto LABEL_81;
    }
    if ( v63 )
    {
      kk = COERCE_DOUBLE(&::s1);
LABEL_86:
      v20 = (char *)v64;
LABEL_81:
      if ( !strcmp(v20, *(const char **)&kk) )
        break;
      v61 += 24LL;
      if ( v62 == (__m128i *)v61 )
        goto LABEL_283;
      continue;
    }
    break;
  }
  if ( v62 != (__m128i *)v61 )
  {
    if ( v64 )
    {
      v346 = 0;
      v20 = (char *)v64;
      qfree(v64, *(const char **)&kk);
    }
LABEL_90:
    if ( (_DWORD)v333 == 4 )
    {
      sub_1D2940(v334, "reg:$IP", "view:IDA View-$IP", *(double *)si128.m128i_i64);
      goto LABEL_92;
    }
LABEL_619:
    sub_1CAD60(*(double *)si128.m128i_i64, (__int64)v20, *(__int64 *)&kk, v59, v60);
    goto LABEL_620;
  }
LABEL_283:
  kk = COERCE_DOUBLE("IDA View-RIP");
  sub_1A1F60((__int64)&v348, "IDA View-RIP");
  v166 = (unsigned __int64)v337;
  v167 = (__m128i *)((char *)v337 + 24 * v338);
  if ( v337 == v167 )
    goto LABEL_393;
  v168 = v348.m128i_i64[1];
  v169 = v348.m128i_i64[0];
  while ( 2 )
  {
    if ( *(_QWORD *)(v166 + 8) )
    {
      kk = *(double *)v166;
      v170 = &::s1;
      if ( v168 )
        goto LABEL_291;
      goto LABEL_286;
    }
    if ( v168 )
    {
      kk = COERCE_DOUBLE(&::s1);
LABEL_291:
      v170 = (const char *)v169;
LABEL_286:
      if ( !strcmp(v170, *(const char **)&kk) )
        break;
      v166 += 24LL;
      if ( v167 == (__m128i *)v166 )
        goto LABEL_393;
      continue;
    }
    break;
  }
  if ( v167 != (__m128i *)v166 )
  {
    if ( v169 )
    {
      v348.m128i_i64[1] = 0;
      qfree(v169, *(const char **)&kk);
      v20 = (char *)v345;
      if ( !v345 )
        goto LABEL_90;
      goto LABEL_319;
    }
    goto LABEL_360;
  }
LABEL_393:
  kk = COERCE_DOUBLE("IDA View-IP");
  sub_1A1F60((__int64)&v355, "IDA View-IP");
  v221 = (unsigned __int64)v337;
  v222 = (__m128i *)((char *)v337 + 24 * v338);
  if ( v337 == v222 )
    goto LABEL_447;
  v223 = v356[0];
  v224 = (const char *)v355;
  while ( 2 )
  {
    if ( *(_QWORD *)(v221 + 8) )
    {
      kk = *(double *)v221;
      v225 = &::s1;
      if ( v223 )
        goto LABEL_401;
      goto LABEL_396;
    }
    if ( v223 )
    {
      kk = COERCE_DOUBLE(&::s1);
LABEL_401:
      v225 = v224;
LABEL_396:
      if ( !strcmp(v225, *(const char **)&kk) )
        break;
      v221 += 24LL;
      if ( v222 == (__m128i *)v221 )
        goto LABEL_447;
      continue;
    }
    break;
  }
  if ( v222 != (__m128i *)v221 )
  {
    v241 = 1;
    if ( v224 )
    {
LABEL_432:
      v356[0] = 0;
      qfree(v224, *(const char **)&kk);
      goto LABEL_433;
    }
    if ( v348.m128i_i64[0] )
    {
      v348.m128i_i64[1] = 0;
      qfree(v348.m128i_i64[0], *(const char **)&kk);
      v20 = (char *)v345;
      if ( !v345 )
        goto LABEL_90;
LABEL_319:
      v346 = 0;
      qfree(v20, *(const char **)&kk);
      goto LABEL_90;
    }
LABEL_360:
    v20 = (char *)v345;
    if ( !v345 )
      goto LABEL_90;
    goto LABEL_319;
  }
LABEL_447:
  kk = COERCE_DOUBLE("IDA View-$IP");
  sub_1A1F60((__int64)&src, "IDA View-$IP");
  v244 = (unsigned __int64)v337;
  v245 = (const char *)src;
  v246 = (__m128i *)((char *)v337 + 24 * v338);
  if ( v337 == v246 )
  {
LABEL_482:
    v241 = 0;
    goto LABEL_483;
  }
  v247 = n[0];
  while ( 2 )
  {
    if ( *(_QWORD *)(v244 + 8) )
    {
      kk = *(double *)v244;
      v248 = &::s1;
      if ( v247 )
        goto LABEL_455;
      goto LABEL_450;
    }
    if ( v247 )
    {
      kk = COERCE_DOUBLE(&::s1);
LABEL_455:
      v248 = v245;
LABEL_450:
      if ( !strcmp(v248, *(const char **)&kk) )
        break;
      v244 += 24LL;
      if ( v246 == (__m128i *)v244 )
        goto LABEL_482;
      continue;
    }
    break;
  }
  v241 = v246 != (__m128i *)v244;
LABEL_483:
  if ( v245 )
  {
    n[0] = 0;
    qfree(v245, *(const char **)&kk);
  }
  v224 = (const char *)v355;
  if ( v355 )
    goto LABEL_432;
LABEL_433:
  if ( v348.m128i_i64[0] )
  {
    v348.m128i_i64[1] = 0;
    qfree(v348.m128i_i64[0], *(const char **)&kk);
  }
  v20 = (char *)v345;
  if ( v345 )
  {
    v346 = 0;
    qfree(v345, *(const char **)&kk);
  }
  if ( v241 )
    goto LABEL_90;
LABEL_92:
  kk = COERCE_DOUBLE("Stack view");
  v20 = (char *)&src;
  sub_1A1F60((__int64)&src, "Stack view");
  v67 = (unsigned __int64)v337;
  v68 = (char *)src;
  v69 = (__m128i *)((char *)v337 + 24 * v338);
  if ( v337 != v69 )
  {
    v70 = n[0];
    while ( *(_QWORD *)(v67 + 8) )
    {
      kk = *(double *)v67;
      v20 = (char *)&::s1;
      if ( v70 )
        goto LABEL_100;
LABEL_95:
      if ( !strcmp(v20, *(const char **)&kk) )
        goto LABEL_101;
      v67 += 24LL;
      if ( v69 == (__m128i *)v67 )
      {
        if ( !v68 )
          goto LABEL_106;
LABEL_102:
        n[0] = 0;
        v20 = v68;
        qfree(v68, *(const char **)&kk);
LABEL_103:
        if ( v69 == (__m128i *)v67 )
          goto LABEL_106;
        if ( (_DWORD)v333 == 4 )
        {
          sub_1D2940(v334, "reg:$SP", "view:Stack view", *(double *)si128.m128i_i64);
          goto LABEL_106;
        }
LABEL_620:
        sub_1CAD60(*(double *)si128.m128i_i64, (__int64)v20, *(__int64 *)&kk, v65, v66);
LABEL_621:
        sub_1CAD40(*(double *)si128.m128i_i64, (__int64)v20, *(__int64 *)&kk, v55, v56);
LABEL_622:
        sub_1CAD40(*(double *)si128.m128i_i64, (__int64)v20, *(__int64 *)&kk, v84, v85);
LABEL_623:
        v2 = (struct _Unwind_Exception *)sub_1CAD40(*(double *)si128.m128i_i64, (__int64)v20, *(__int64 *)&kk, i, v76);
        sub_176A30((__int64 *)&v337, *(__int64 *)&kk, v3, v4, v5);
        jvalue_t_clear(&v333);
        if ( v335 )
        {
          *(_QWORD *)&v336 = 0;
          qfree(v335, *(const char **)&kk);
        }
        if ( v353 )
        {
          *(_QWORD *)&v354 = 0;
          qfree(v353, *(const char **)&kk);
        }
        if ( v350 )
        {
          *(_QWORD *)&v351 = 0;
          qfree(v350, *(const char **)&kk);
        }
        jvalue_t_clear(&v331);
        _Unwind_Resume(v2);
      }
    }
    if ( !v70 )
    {
LABEL_101:
      if ( v68 )
        goto LABEL_102;
      goto LABEL_103;
    }
    kk = COERCE_DOUBLE(&::s1);
LABEL_100:
    v20 = v68;
    goto LABEL_95;
  }
  if ( *(double *)&src != 0.0 )
  {
    n[0] = 0;
    qfree(src, "Stack view");
  }
LABEL_106:
  QT::QString::toUtf8_helper((QT::QString *)&src, (const QT::QString *)v324.m128i_i64[1]);
  v72 = (const char *)n[0];
  if ( !n[0] )
    v72 = (const char *)&QT::QByteArray::_empty;
  sub_1D0490(v323, v72, (__int64 *)&v337);
  sub_17F470(&src);
  si128.m128i_i64[0] = 0;
  *(double *)&src = COERCE_DOUBLE(&irr::io::CXMLReaderImpl_char__irr::io::IXMLBase____vtable);
  n[0] = 0;
  n[1] = 0;
  v370 = 0;
  v372 = nullptr;
  v373 = 0x100000001LL;
  v371 = 0;
  v73 = (_BYTE *)operator new[](1u);
  *v73 = 0;
  v372 = v73;
  v374 = nullptr;
  v375 = 0x100000001LL;
  v374 = (void *)operator new[](1u);
  v74 = v336;
  *(_BYTE *)v374 = 0;
  v376 = 0;
  v377 = 0;
  v378 = 257;
  v379 = 0;
  v380 = 0;
  v381 = 257;
  HIDWORD(v371) = 1;
  if ( !v74 )
  {
    v75 = (void *)operator new[](4u);
    goto LABEL_110;
  }
  v151 = v74 + 3;
  v152 = v74 - 1;
  v75 = (void *)operator new[]((int)v74 + 3);
  if ( (int)v74 - 1 < 0 || !(_QWORD)v336 )
    goto LABEL_110;
  v153 = v336 - 1;
  if ( (__int64)v336 - 1 >= (unsigned __int64)v152 )
  {
    v153 = v152;
    if ( (_DWORD)v74 != 1 )
      goto LABEL_255;
LABEL_110:
    if ( v75 )
      operator delete[](v75);
    goto LABEL_112;
  }
  if ( (_DWORD)v336 == 1 )
    goto LABEL_110;
LABEL_255:
  v154 = (unsigned __int64 *)memcpy(v75, v335, v153);
  *((_BYTE *)v154 + v152 + 3) = 0;
  *((_BYTE *)v154 + v152 + 2) = 0;
  *((_BYTE *)v154 + (int)v74) = 0;
  *((_BYTE *)v154 + v152) = 0;
  if ( v151 > 3 )
  {
    if ( *v154 == -131072 )
    {
      DWORD2(v371) = 4;
    }
    else
    {
      if ( *v154 != 65279 )
      {
        if ( *(_WORD *)v154 == 0xFFFE )
        {
          DWORD2(v371) = 2;
        }
        else
        {
          if ( *(_WORD *)v154 != 0xFEFF )
            goto LABEL_260;
          DWORD2(v371) = 3;
        }
        sub_1D2C00((__int64)&src, (__int16 *)v154 + 1, v154, v151 >> 1);
        goto LABEL_112;
      }
      DWORD2(v371) = 5;
    }
    sub_1D2B00((__int64)&src, v154 + 1, v154, v151 >> 2);
    goto LABEL_112;
  }
LABEL_260:
  DWORD2(v371) = 0;
  v370 = (size_t)v154;
  n[0] = (size_t)v154;
  LODWORD(v371) = v74 + 3;
LABEL_112:
  sub_1D3060((__int64)&src);
  kk = COERCE_DOUBLE(&src);
  n[1] = v370;
  v20 = (char *)&v355;
  v322.m128i_i64[0] = (__int64)&v355;
  sub_1D0780((__int64)&v355, (__int64)&src, (__int64)&v337, v322.m128i_i64[1], v323);
  v77 = (__m128i *)v355;
  v78 = irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_2;
  *(double *)&v79 = COERCE_DOUBLE(irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_13);
  v80 = (__int64 (__fastcall *)(__m128i *))irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_3;
  for ( i = *(_QWORD *)v355; ; i = v77->m128i_i64[0] )
  {
    while ( 1 )
    {
      v82 = *(__int64 (__fastcall **)(__int64))(i + 16);
      if ( v82 != v78 )
      {
        v20 = (char *)v77;
        if ( !(unsigned __int8)v82((__int64)v77) )
          break;
        goto LABEL_152;
      }
      v83 = (_BYTE *)v77[1].m128i_i64[0];
      if ( !v83 )
        break;
      *(_QWORD *)&kk = v77[2].m128i_u32[0];
      v76 = (__int64)&v83[-v77[1].m128i_i64[1]];
      i = (unsigned int)(LODWORD(kk) - 1);
      if ( (unsigned int)v76 >= (unsigned int)i || !*v83 )
        break;
      v20 = (char *)v77;
      sub_1D8540((__int64)v77);
LABEL_152:
      v77 = (__m128i *)v355;
      i = *(_QWORD *)v355;
      v97 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v355 + 104LL);
      if ( v97 == v79 )
      {
        v98 = *((_BYTE **)v355 + 6);
        if ( *v98 != 108 || v98[1] )
        {
LABEL_176:
          if ( *v98 != 97 || v98[1] )
            goto LABEL_191;
LABEL_178:
          v110 = *(__int64 (__fastcall **)(__m128i *))(i + 24);
          if ( v110 == v80 )
          {
            v111 = v77[2].m128i_i32[1];
          }
          else
          {
            v20 = (char *)v77;
            v111 = v110(v77);
          }
          if ( v111 == 1 )
          {
            v143 = v355;
            v144 = *(char *(__fastcall **)(__int64, const char *))(*(_QWORD *)v355 + 56LL);
            if ( v144 != irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_7 )
            {
              v20 = (char *)v355;
              kk = COERCE_DOUBLE((__int64)v144((__int64)v355, "g"));
              goto LABEL_306;
            }
            v20 = (char *)operator new[](2u);
            *(_WORD *)v20 = 103;
            v145 = v143[31];
            if ( v145 <= 0 )
            {
              if ( !v20 )
                goto LABEL_173;
              operator delete[](v20);
              v77 = (__m128i *)v355;
              i = *(_QWORD *)v355;
            }
            else
            {
              v146 = *((_QWORD *)v143 + 14);
              v147 = v146 + 32LL * (unsigned int)(v145 - 1) + 32;
              while ( 1 )
              {
                kk = *(double *)v146;
                v148 = 0;
                v76 = 0;
                for ( j = **(_BYTE **)v146; j; j = *(_BYTE *)(*(_QWORD *)&kk + (int)v76) )
                {
                  v150 = v20[v148];
                  if ( !v150 )
                    break;
                  if ( v150 != j )
                    goto LABEL_243;
                  v76 = (unsigned int)(v76 + 1);
                  v148 = (int)v76;
                }
                if ( *(_DWORD *)(v146 + 12) == 2 )
                  break;
LABEL_243:
                v146 += 32;
                if ( v146 == v147 )
                {
                  if ( v20 )
                    operator delete[](v20);
                  goto LABEL_173;
                }
              }
              if ( v20 )
                operator delete[](v20);
              if ( !v146 )
                goto LABEL_173;
              kk = *(double *)(v146 + 16);
LABEL_306:
              if ( kk == 0.0 )
                goto LABEL_173;
              QT::QByteArray::QByteArray((QT::QByteArray *)&v348, *(const char **)&kk, -1);
              v177 = (QT::QByteArray *)v324.m128i_i64[0];
              QT::QByteArray::fromHex((QT::QByteArray *)v324.m128i_i64[0], (const QT::QByteArray *)&v348);
              sub_17F470((void **)&v348);
              v178 = (double *)sub_519560(v177);
              v179 = *((_QWORD *)v178 + 1);
              v180 = *v178;
              v181 = (__int64)v178;
              if ( v179 )
              {
                v323 = *((size_t *)v178 + 1);
                v326 = p_src;
                v182 = 0;
                v183 = v180;
                v327 = v180;
                v324.m128i_i64[1] = (__int64)v178;
                do
                {
                  if ( *(_QWORD *)(*(_QWORD *)&v183 + 8LL) )
                  {
                    kk = COERCE_DOUBLE("fullscreen");
                    if ( !strcmp(**(const char ***)&v183, "fullscreen") )
                    {
                      v184 = v183;
                      v185 = v324.m128i_i64[1];
                      p_src = v326;
                      v186 = *(_QWORD *)&v184 + 24LL;
                      goto LABEL_313;
                    }
                  }
                  ++v182;
                  *(_QWORD *)&v183 += 40LL;
                }
                while ( v323 != v182 );
                v179 = v323;
                v180 = v327;
                v181 = v324.m128i_i64[1];
                p_src = v326;
              }
              if ( *(_QWORD *)(v181 + 16) < v179 + 1 )
              {
                v323 = v181;
                *(double *)&v243 = COERCE_DOUBLE(qvector_reserve(v181, *(_QWORD *)&v180, v179 + 1, 40));
                v181 = v323;
                v180 = *(double *)&v243;
                *(double *)v323 = *(double *)&v243;
                v179 = *(_QWORD *)(v181 + 8);
              }
              si128.m128i_i64[0] = 0;
              v323 = v181;
              kk = COERCE_DOUBLE("fullscreen");
              v212 = *(_QWORD *)&v180 + 40 * v179;
              *(_QWORD *)v212 = 0;
              *(_DWORD *)(v212 + 24) = 0;
              *(_QWORD *)(v212 + 32) = 0;
              *(_OWORD *)(v212 + 8) = 0;
              ++*(_QWORD *)(v181 + 8);
              sub_1CB2E0((__int64 *)v212, "fullscreen");
              v185 = v323;
              v186 = v212 + 24;
LABEL_313:
              if ( *(_DWORD *)v186 )
              {
                v323 = v185;
                jvalue_t_clear(v186);
                v185 = v323;
              }
              *(_DWORD *)v186 = 5;
              v20 = (char *)v324.m128i_i64[0];
              *(_BYTE *)(v186 + 8) = 0;
              v360 = (__int64 *)v185;
              sub_17F470((void **)v20);
              v77 = (__m128i *)v355;
              i = *(_QWORD *)v355;
            }
          }
          else
          {
            v112 = (size_t)v360;
            if ( !v360 )
              goto LABEL_173;
            v113 = *v360;
            if ( *v360 )
            {
              if ( v360[1] )
              {
                v323 = *((size_t *)v360 + 1);
                v114 = v360;
                v324.m128i_i64[1] = (__int64)p_src;
                v115 = 0;
                do
                {
                  v116 = (__int64 *)(v113 + 40 * v115);
                  jvalue_t_clear(v116 + 3);
                  v117 = *v116;
                  if ( *v116 )
                  {
                    v116[1] = 0;
                    qfree(v117, *(const char **)&kk);
                  }
                  v113 = *v114;
                  ++v115;
                }
                while ( v323 != v115 );
                p_src = (__int64 *)v324.m128i_i64[1];
                v112 = (size_t)v114;
              }
              *(_QWORD *)(v112 + 8) = 0;
              v323 = v112;
              qfree(v113, *(const char **)&kk);
              v112 = v323;
            }
            v20 = (char *)v112;
            qfree(v112, *(const char **)&kk);
            v77 = (__m128i *)v355;
            v360 = nullptr;
            i = *(_QWORD *)v355;
          }
        }
        else
        {
LABEL_155:
          v99 = *(__int64 (__fastcall **)(__m128i *))(i + 24);
          if ( v99 == v80 )
          {
            v100 = v77[2].m128i_i32[1];
          }
          else
          {
            v20 = (char *)v77;
            v100 = v99(v77);
            v77 = (__m128i *)v355;
            i = *(_QWORD *)v355;
          }
          if ( v100 == 1 )
          {
            v101 = *(char *(__fastcall **)(__int64, const char *))(i + 64);
            if ( v101 == irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_8 )
            {
              v102 = (_WORD *)operator new[](2u);
              *v102 = 102;
              v103 = v77[7].m128i_i32[3];
              if ( v103 <= 0 )
              {
LABEL_168:
                if ( v102 )
                  operator delete[](v102);
              }
              else
              {
                v104 = v77[7].m128i_u64[0];
                v105 = v104 + 32LL * (unsigned int)(v103 - 1) + 32;
                while ( 1 )
                {
                  v106 = 0;
                  v107 = 0;
                  for ( k = **(_BYTE **)v104; k; k = *(_BYTE *)(*(_QWORD *)v104 + v107) )
                  {
                    v109 = *((_BYTE *)v102 + v106);
                    if ( !v109 )
                      break;
                    if ( v109 != k )
                      goto LABEL_167;
                    v106 = ++v107;
                  }
                  if ( *(_DWORD *)(v104 + 12) == 2 )
                    break;
LABEL_167:
                  v104 += 32LL;
                  if ( v105 == v104 )
                    goto LABEL_168;
                }
                if ( v102 )
                {
                  v323 = v104;
                  operator delete[](v102);
                  v104 = v323;
                }
                if ( v104 )
                {
                  kk = *(double *)(v104 + 16);
                  goto LABEL_171;
                }
              }
              kk = *(double *)v77[4].m128i_i64;
              goto LABEL_171;
            }
            kk = COERCE_DOUBLE((__int64)v101((__int64)v77, "f"));
LABEL_171:
            v20 = (char *)&v363;
            sub_1CB2E0((__int64 *)&v363, *(const void **)&kk);
            if ( v364 > 1 )
            {
              sub_1CAF50((__int64)&v363);
              v20 = (char *)&v363;
              sub_1D2330((__int64 *)&v363);
            }
            goto LABEL_173;
          }
        }
      }
      else
      {
        v20 = (char *)v355;
        v121 = (unsigned __int8 *)v97((__int64)v355);
        v76 = (unsigned int)*v121 - 108;
        if ( *v121 == 108 )
          v76 = v121[1];
        v77 = (__m128i *)v355;
        i = *(_QWORD *)v355;
        if ( !(_DWORD)v76 )
          goto LABEL_155;
        v122 = *(__int64 (__fastcall **)(__int64))(i + 104);
        if ( v122 == v79 )
        {
          v98 = *((_BYTE **)v355 + 6);
          goto LABEL_176;
        }
        v20 = (char *)v355;
        v123 = (unsigned __int8 *)v122((__int64)v355);
        v76 = (unsigned int)*v123 - 97;
        if ( *v123 == 97 )
          v76 = v123[1];
        v77 = (__m128i *)v355;
        i = *(_QWORD *)v355;
        if ( !(_DWORD)v76 )
          goto LABEL_178;
        v124 = *(__int64 (__fastcall **)(__int64))(i + 104);
        if ( v124 == v79 )
        {
LABEL_191:
          v118 = (_BYTE *)v77[3].m128i_i64[0];
          if ( *v118 == 102 && !v118[1] )
            goto LABEL_193;
LABEL_216:
          v133 = (_BYTE *)v77[3].m128i_i64[0];
          if ( *v133 != 118 || v133[1] )
            goto LABEL_225;
LABEL_218:
          v134 = *(__int64 (__fastcall **)(__int64))(i + 24);
          if ( v134 != irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_3 )
          {
            *(double *)&v323 = COERCE_DOUBLE(irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_3);
            v20 = (char *)v77;
            v238 = v134((__int64)v77);
            v239 = v323;
            if ( v238 == 1 )
              goto LABEL_402;
            goto LABEL_428;
          }
          v135 = v77[2].m128i_i32[1];
          if ( v135 != 1 )
            goto LABEL_220;
LABEL_402:
          v326 = (__int64 *)sub_1D1340(v322.m128i_i64[0], (__int64)v358);
          v226 = (_BYTE *)(*(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)v355 + 64LL))(v355, "o");
          if ( *v226 != 104 || v226[1] )
            v227 = "vsplit";
          else
            v227 = "hsplit";
          sub_1D0CB0(v326, "type", v227);
          v228 = v355;
          v229 = *(char *(__fastcall **)(__int64, const char *))(*(_QWORD *)v355 + 56LL);
          if ( v229 != irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_7 )
          {
            v20 = (char *)v355;
            v249 = v229((__int64)v355, "s");
LABEL_460:
            if ( v249 )
            {
              QT::QByteArray::QByteArray((QT::QByteArray *)&v348, v249, -1);
              QT::QByteArray::fromHex((QT::QByteArray *)v324.m128i_i64[0], (const QT::QByteArray *)&v348);
              sub_17F470((void **)&v348);
              if ( !v345 || *v345 > 1 )
                QT::QByteArray::reallocData(v324.m128i_i64[0], v347, 1);
              v250 = v347 >> 2;
              if ( (int)(v347 >> 2) > 1 )
              {
                v251 = 0;
                v252 = (_DWORD *)v346;
                do
                  v251 += *v252++;
                while ( (_DWORD *)(v346 + 4 + 4LL * (unsigned int)(v250 - 1)) != v252 );
                v328 = (int *)(v346 + 4);
                v324.m128i_i64[1] = v346;
                v327 = 100.0 / (double)v251;
                v253 = operator new(0x18u);
                v254 = v328;
                v255 = 0;
                v323 = v253;
                *(_QWORD *)v253 = 0;
                v256 = (int *)v324.m128i_i64[1];
                *(_OWORD *)(v253 + 8) = 0;
                v328 = &v254[(unsigned int)(v250 - 2)];
                do
                {
                  v324.m128i_i64[1] = (__int64)v256;
                  *(double *)si128.m128i_i64 = (double)*v256 * v327;
                  v257 = (int)*(double *)si128.m128i_i64;
                  v258 = sub_1D12F0((__int64 *)v323);
                  v259 = v324.m128i_u64[1];
                  v260 = (int)*(double *)si128.m128i_i64;
                  if ( *(_DWORD *)v258 )
                  {
                    v330 = v324.m128i_u64[1];
                    v329 = v257;
                    v324.m128i_i64[1] = (__int64)v258;
                    jvalue_t_clear(v258);
                    v259 = v330;
                    v260 = v329;
                    v258 = (_QWORD *)v324.m128i_i64[1];
                  }
                  *(_DWORD *)v258 = 1;
                  v255 += v257;
                  v256 = (int *)(v259 + 4);
                  v258[1] = v260;
                }
                while ( v328 != v256 );
                v324.m128i_i32[2] = 100 - v255;
                v261 = sub_1D12F0((__int64 *)v323);
                v262 = 100;
                if ( v324.m128i_i32[2] <= 100 )
                  v262 = v324.m128i_i32[2];
                if ( v262 < 0 )
                  v262 = 0;
                v263 = v262;
                if ( *(_DWORD *)v261 )
                {
                  v324.m128i_i64[1] = (__int64)v261;
                  jvalue_t_clear(v261);
                  v261 = (_QWORD *)v324.m128i_i64[1];
                }
                v261[1] = v263;
                v264 = v323;
                *(_DWORD *)v261 = 1;
                sub_1CCC30(v326, "partitions", v264);
              }
              v20 = (char *)v324.m128i_i64[0];
              sub_17F470((void **)v324.m128i_i64[0]);
            }
            goto LABEL_417;
          }
          v20 = (char *)operator new[](2u);
          *(_WORD *)v20 = 115;
          v230 = v228[31];
          if ( v230 <= 0 )
          {
LABEL_415:
            if ( v20 )
              operator delete[](v20);
            goto LABEL_417;
          }
          v231 = *((char ***)v228 + 14);
          v232 = (__int64)&v231[4 * (unsigned int)(v230 - 1) + 4];
          while ( 1 )
          {
            v233 = 0;
            v76 = 0;
            for ( m = **v231; m; m = (*v231)[(int)v76] )
            {
              v235 = v20[v233];
              if ( !v235 )
                break;
              if ( v235 != m )
                goto LABEL_414;
              v76 = (unsigned int)(v76 + 1);
              v233 = (int)v76;
            }
            if ( *((_DWORD *)v231 + 3) == 2 )
              break;
LABEL_414:
            v231 += 4;
            if ( (char **)v232 == v231 )
              goto LABEL_415;
          }
          if ( v20 )
            operator delete[](v20);
          if ( v231 )
          {
            v249 = v231[2];
            goto LABEL_460;
          }
LABEL_417:
          v236 = v366;
          v237 = v358;
          kk = *(double *)&v365;
          if ( v367 < v366 + 1 )
          {
            v20 = (char *)&v365;
            *(double *)&v365 = COERCE_DOUBLE(qvector_reserve(&v365, v365, v366 + 1, 8));
            kk = *(double *)&v365;
            v236 = v366;
          }
          *(_QWORD *)(*(_QWORD *)&kk + 8 * v236) = v237;
          v77 = (__m128i *)v355;
          ++v366;
          v358 = v326;
          i = *(_QWORD *)v355;
        }
        else
        {
          v20 = (char *)v355;
          v125 = (unsigned __int8 *)v124((__int64)v355);
          v76 = (unsigned int)*v125 - 102;
          if ( *v125 == 102 )
            v76 = v125[1];
          v77 = (__m128i *)v355;
          i = *(_QWORD *)v355;
          if ( (_DWORD)v76 )
          {
            v126 = *(__int64 (__fastcall **)(__int64))(i + 104);
            if ( v126 == v79 )
              goto LABEL_216;
            v20 = (char *)v355;
            v127 = (unsigned __int8 *)v126((__int64)v355);
            v76 = (unsigned int)*v127 - 118;
            if ( *v127 == 118 )
            {
              v77 = (__m128i *)v355;
              v76 = v127[1];
              i = *(_QWORD *)v355;
              if ( !v127[1] )
                goto LABEL_218;
            }
            else
            {
              v77 = (__m128i *)v355;
              i = *(_QWORD *)v355;
            }
            v128 = *(__int64 (__fastcall **)(__int64))(i + 104);
            if ( v128 == v79 )
            {
LABEL_225:
              v137 = (_BYTE *)v77[3].m128i_i64[0];
              if ( *v137 != 116 || v137[1] )
                goto LABEL_323;
LABEL_227:
              v138 = *(__int64 (__fastcall **)(__int64))(i + 24);
              if ( v138 == irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_3 )
              {
                v135 = v77[2].m128i_i32[1];
                if ( v135 != 1 )
                  goto LABEL_220;
LABEL_229:
                v139 = (__int64 *)sub_1D1340(v322.m128i_i64[0], (__int64)v358);
                sub_1D0CB0(v139, "type", "tabs");
                v20 = (char *)(*(__int64 (__fastcall **)(void *, char *))(*(_QWORD *)v355 + 56LL))(v355, "i");
                if ( v20 )
                {
                  v140 = strtoll(v20, nullptr, 10);
                  v20 = (char *)v139;
                  sub_1CC9F0(v139, "index", v140);
                }
                v141 = v366;
                v142 = v358;
                kk = *(double *)&v365;
                if ( v367 < v366 + 1 )
                {
                  v20 = (char *)&v365;
                  v323 = (size_t)v358;
                  *(double *)&v365 = COERCE_DOUBLE(qvector_reserve(&v365, v365, v366 + 1, 8));
                  kk = *(double *)&v365;
                  v142 = (__int64 *)v323;
                  v141 = v366;
                }
                *(_QWORD *)(*(_QWORD *)&kk + 8 * v141) = v142;
                v358 = v139;
                v77 = (__m128i *)v355;
                ++v366;
                i = *(_QWORD *)v355;
              }
              else
              {
                *(double *)&v323 = COERCE_DOUBLE(irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_3);
                v20 = (char *)v77;
                v242 = v138((__int64)v77);
                v239 = v323;
                if ( v242 == 1 )
                  goto LABEL_229;
LABEL_428:
                v77 = (__m128i *)v355;
                v240 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v355 + 24LL);
                if ( v240 == (__int64 (__fastcall *)(void *))v239 )
                {
                  v135 = *((_DWORD *)v355 + 9);
                }
                else
                {
                  v20 = (char *)v355;
                  v135 = v240(v355);
                  v77 = (__m128i *)v355;
                }
LABEL_220:
                if ( v135 != 2 )
                  goto LABEL_174;
                v136 = *(__int64 **)(v365 + 8 * v366 - 8);
                if ( v366 )
                  --v366;
                v358 = v136;
                i = v77->m128i_i64[0];
              }
            }
            else
            {
              v20 = (char *)v77;
              v129 = (unsigned __int8 *)((__int64 (__fastcall *)(__m128i *, _QWORD, __int64, __int64))v128)(
                                          v77,
                                          *(_QWORD *)&kk,
                                          i,
                                          v76);
              v130 = *v129 - 116;
              if ( *v129 == 116 )
                v130 = v129[1];
              v77 = (__m128i *)v355;
              i = *(_QWORD *)v355;
              if ( !v130 )
                goto LABEL_227;
              v131 = *(__int64 (__fastcall **)(__int64))(i + 104);
              if ( v131 != v79 )
              {
                v20 = (char *)v355;
                v132 = (_BYTE *)v131((__int64)v355);
                v77 = (__m128i *)v355;
                i = *(_QWORD *)v355;
                goto LABEL_324;
              }
LABEL_323:
              v132 = (_BYTE *)v77[3].m128i_i64[0];
LABEL_324:
              if ( *v132 == 100 && !v132[1] )
              {
                v187 = *(__int64 (__fastcall **)(__int64))(i + 24);
                if ( v187 == irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_3 )
                {
                  v188 = v77[2].m128i_i32[1];
                }
                else
                {
                  v20 = (char *)v77;
                  v188 = v187((__int64)v77);
                  v77 = (__m128i *)v355;
                }
                if ( v188 != 1 || !v358 )
                  goto LABEL_174;
                v189 = *(char *(__fastcall **)(__int64, const char *))(v77->m128i_i64[0] + 64);
                if ( v189 != irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_8 )
                  goto LABEL_601;
                v190 = (_WORD *)operator new[](2u);
                *v190 = 110;
                v191 = v77[7].m128i_i32[3];
                if ( v191 <= 0 )
                {
LABEL_340:
                  if ( v190 )
                    operator delete[](v190);
                }
                else
                {
                  v192 = v77[7].m128i_u64[0];
                  v193 = v192 + 32LL * (unsigned int)(v191 - 1) + 32;
                  while ( 1 )
                  {
                    v194 = 0;
                    v195 = 0;
                    for ( ii = **(_BYTE **)v192; ii; ii = *(_BYTE *)(*(_QWORD *)v192 + v194) )
                    {
                      v197 = *((_BYTE *)v190 + v195);
                      if ( !v197 )
                        break;
                      if ( v197 != ii )
                        goto LABEL_339;
                      v195 = ++v194;
                    }
                    if ( *(_DWORD *)(v192 + 12) == 2 )
                      break;
LABEL_339:
                    v192 += 32LL;
                    if ( v193 == v192 )
                      goto LABEL_340;
                  }
                  if ( v190 )
                  {
                    v323 = v192;
                    operator delete[](v190);
                    v192 = v323;
                  }
                  if ( v192 )
                  {
                    kk = *(double *)(v192 + 16);
                    goto LABEL_343;
                  }
                }
                kk = *(double *)v77[4].m128i_i64;
                goto LABEL_343;
              }
            }
          }
          else
          {
LABEL_193:
            v119 = *(__int64 (__fastcall **)(__m128i *))(i + 24);
            if ( v119 == v80 )
            {
              v120 = v77[2].m128i_i32[1];
            }
            else
            {
              v20 = (char *)v77;
              v120 = v119(v77);
              v77 = (__m128i *)v355;
            }
            v359 = v120 == 1;
            i = v77->m128i_i64[0];
          }
        }
      }
    }
    if ( (_DWORD)v331 != 3 )
      goto LABEL_623;
    v20 = (char *)v332;
    kk = COERCE_DOUBLE("layout");
    sub_1CCD50(v332, "layout", v357);
    if ( v361 != 3 )
      goto LABEL_622;
    v86 = (__int64)v362;
    if ( v362[1] )
    {
      if ( (_DWORD)v331 != 3 )
        goto LABEL_604;
      v20 = (char *)v332;
      kk = COERCE_DOUBLE("widgets_config");
      v362 = nullptr;
      v361 = 0;
      sub_1CCD50(v332, "widgets_config", v86);
    }
    if ( v364 > 1 )
    {
      if ( (_DWORD)v331 != 3 )
        goto LABEL_605;
      kk = COERCE_DOUBLE("focus");
      sub_1D0CB0(v332, "focus", v363);
    }
    if ( *(double *)&v365 != 0.0 )
    {
      v366 = 0;
      qfree(v365, *(const char **)&kk);
    }
    if ( v363 )
    {
      v364 = 0;
      qfree(v363, *(const char **)&kk);
    }
    jvalue_t_clear(&v361);
    irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_0((__int64)p_src);
    v20 = (char *)v322.m128i_i64[1];
    kk = *(double *)&qword_8CB330;
    v77 = (__m128i *)qword_8CB328;
    v88 = *(_QWORD *)(v322.m128i_i64[1] + 24);
    if ( qword_8CB330 != *(_QWORD *)(v322.m128i_i64[1] + 32) )
      break;
    v20 = (char *)qword_8CB330;
    kk = *(double *)(v322.m128i_i64[1] + 24);
    if ( !(unsigned __int8)QT::QtPrivate::equalStrings(qword_8CB330, *(_QWORD *)&kk, qword_8CB330, qword_8CB328) )
      break;
    if ( !(unsigned __int8)netnode_inited() )
      goto LABEL_599;
    v157 = v324.m128i_i64[0];
    kk = COERCE_DOUBLE("$ ea_sync_groups");
    netnode_check(v324.m128i_i64[0], "$ ea_sync_groups", 0, 0);
    v20 = (char *)v157;
    if ( !(unsigned __int8)netnode_exist(v157) )
      break;
    v20 = (char *)v345;
    *(_QWORD *)&kk = 83;
    *(double *)&v79 = COERCE_DOUBLE(netnode_supfirst(v345, 83));
    v78 = (__int64 (__fastcall *)(__int64))";";
    *(double *)&v323 = COERCE_DOUBLE(v382);
    while ( 1 )
    {
      if ( *(double *)&v79 == NAN )
        goto LABEL_130;
      if ( netnode_supstr(v345, v79, v323, 1024, 83) > 0 )
        break;
LABEL_268:
      v20 = (char *)v345;
      kk = *(double *)&v79;
      *(double *)&v79 = COERCE_DOUBLE(netnode_supnext(v345, v79, 83));
    }
    v77 = &v348;
    v158 = v323;
    *(_OWORD *)v356 = 0;
    v355 = nullptr;
    for ( *(double *)&v159 = COERCE_DOUBLE(qstrtok(v323, ";", &v348));
          ;
          *(double *)&v159 = COERCE_DOUBLE(qstrtok(0, ";", &v348)) )
    {
      kk = *(double *)&v159;
      if ( *(double *)&v159 == 0.0 )
        break;
      sub_1A1F60((__int64)p_src, v159);
      v211 = v356[0];
      v210 = (const char *)v355;
      v164 = v356[0] + 1;
      if ( p_src < v355 || p_src >= (__int64 *)((char *)v355 + 24 * v356[1]) )
      {
        if ( v356[1] < v164 )
        {
          v355 = (void *)qvector_reserve(v322.m128i_i64[0], v355, v356[0] + 1, 24);
          v210 = (const char *)v355;
          v211 = v356[0];
        }
        si128 = _mm_loadu_si128((const __m128i *)n);
        v165 = (char *)&v210[24 * v211];
        *(double *)v165 = *(double *)&src;
        *(__m128i *)(v165 + 8) = si128;
        ++v356[0];
      }
      else
      {
        v80 = (__int64 (__fastcall *)(__m128i *))src;
        v161 = _mm_loadl_epi64((const __m128i *)n);
        *(double *)&src = 0.0;
        v162 = _mm_loadl_epi64((const __m128i *)&n[1]);
        *(_OWORD *)n = 0;
        if ( v356[1] < v164 )
        {
          v324.m128i_i64[1] = v162.m128i_i64[0];
          v324.m128i_i64[0] = v161.m128i_i64[0];
          v355 = (void *)qvector_reserve(v322.m128i_i64[0], v355, v356[0] + 1, 24);
          v210 = (const char *)v355;
          v162 = _mm_loadl_epi64((const __m128i *)&v324.m128i_u64[1]);
          v211 = v356[0];
          v161 = _mm_loadl_epi64(&v324);
        }
        si128 = _mm_unpacklo_epi64(v161, v162);
        v163 = (char *)&v210[24 * v211];
        *(_QWORD *)v163 = v80;
        *(__m128i *)(v163 + 8) = si128;
        ++v356[0];
        if ( *(double *)&src != 0.0 )
        {
          n[0] = 0;
          qfree(src, v210);
        }
      }
      v158 = 0;
    }
    if ( v356[0] != 2 )
      goto LABEL_371;
    v205 = &::s1;
    if ( *((_QWORD *)v355 + 4) )
      v205 = *((const char **)v355 + 3);
    kk = COERCE_DOUBLE(&::s1);
    if ( *((_QWORD *)v355 + 1) )
      kk = *(double *)v355;
    if ( (_DWORD)v333 == 4 )
    {
      sub_1D23A0((__int64)v334, *(const char **)&kk, v205, 0);
LABEL_371:
      v206 = (char *)v355;
      if ( v355 )
      {
        v80 = (__int64 (__fastcall *)(__m128i *))v356[0];
        if ( v356[0] )
        {
          v207 = nullptr;
          do
          {
            v208 = &v206[24 * (_QWORD)v207];
            v209 = *(_QWORD *)v208;
            if ( *(_QWORD *)v208 )
            {
              *((_QWORD *)v208 + 1) = 0;
              qfree(v209, *(const char **)&kk);
              v206 = (char *)v355;
            }
            v207 = (__int64 (__fastcall *)(__m128i *))((char *)v207 + 1);
          }
          while ( v80 != v207 );
        }
        v356[0] = 0;
        qfree(v206, *(const char **)&kk);
      }
      goto LABEL_268;
    }
    sub_1CAD60(*(double *)si128.m128i_i64, v158, *(__int64 *)&kk, (__int64)v205, v160);
LABEL_599:
    if ( under_debugger )
LABEL_630:
      BUG();
    v189 = (char *(__fastcall *)(__int64, const char *))interr(
                                                          40607,
                                                          *(_QWORD *)&kk,
                                                          v155,
                                                          v156,
                                                          *(double *)si128.m128i_i64);
LABEL_601:
    kk = COERCE_DOUBLE((__int64)v189((__int64)v77, "n"));
LABEL_343:
    sub_1A1F60((__int64)&s1, *(const char **)&kk);
    v341 = nullptr;
    v342 = 0;
    if ( v340 )
    {
      v323 = v340;
      v265 = (int *)qalloc_or_throw(v340);
      kk = *(double *)&s1;
      v341 = v265;
      memcpy(v265, s1, v323);
      v342 = v323;
    }
    sub_1CAF50((__int64)&s1);
    sub_1D2330((__int64 *)&s1);
    if ( v340 )
    {
      v323 = (size_t)s1;
      v198 = strcmp(s1, "GraphOverView");
      v199 = (const char *)v323;
      if ( v198 )
      {
LABEL_349:
        kk = COERCE_DOUBLE("Segmentation");
        if ( !strcmp(v199, "Segmentation") )
        {
          kk = COERCE_DOUBLE("Program Segmentation");
          sub_1CB2E0((__int64 *)&s1, "Program Segmentation");
        }
      }
      else
      {
        kk = COERCE_DOUBLE("Graph overview");
        sub_1CB2E0((__int64 *)&s1, "Graph overview");
        if ( v340 )
        {
          v199 = s1;
          goto LABEL_349;
        }
      }
    }
    v200 = *(__int64 **)v356[0];
    v201 = *(_QWORD *)v356[0] + 24LL * *(_QWORD *)(v356[0] + 8);
    if ( *(_QWORD *)v356[0] == v201 )
      goto LABEL_494;
    v76 = v340;
    v323 = (size_t)p_src;
    v202 = (char *)v201;
    p_src = v200;
    v324.m128i_i64[1] = (__int64)s1;
    v203 = v340;
    while ( 2 )
    {
      if ( p_src[1] )
      {
        kk = *(double *)p_src;
        v204 = &::s1;
        if ( v203 )
          goto LABEL_359;
      }
      else
      {
        if ( !v203 )
          goto LABEL_584;
        kk = COERCE_DOUBLE(&::s1);
LABEL_359:
        v204 = (const char *)v324.m128i_i64[1];
      }
      if ( strcmp(v204, *(const char **)&kk) )
      {
        p_src += 3;
        if ( v202 == (char *)p_src )
        {
          p_src = (__int64 *)v323;
          goto LABEL_494;
        }
        continue;
      }
      break;
    }
    v266 = (__int64)p_src;
    v76 = v203;
    p_src = (__int64 *)v323;
    v267 = (const char *)v324.m128i_i64[1];
    if ( v202 == (char *)v266 )
      goto LABEL_494;
    if ( !v76 )
      v267 = &::s1;
LABEL_504:
    v268 = v358[1];
    if ( !v268 )
      goto LABEL_582;
    v266 = *v358;
    v76 = 0;
    v324.m128i_i64[1] = (__int64)v267;
    v323 = (size_t)p_src;
    v269 = 0;
    v270 = v268;
    v202 = (char *)v266;
    while ( 1 )
    {
      if ( *((_QWORD *)v202 + 1) )
      {
        v271 = *(const char **)v202;
        kk = COERCE_DOUBLE("children");
        if ( !strcmp(*(const char **)v202, "children") )
          break;
      }
      ++v269;
      v202 += 40;
      if ( v270 == v269 )
      {
        p_src = (__int64 *)v323;
LABEL_582:
        if ( under_debugger )
          goto LABEL_630;
        interr(40603, *(_QWORD *)&kk, v266, v76, *(double *)si128.m128i_i64);
LABEL_584:
        v266 = (__int64)p_src;
        v267 = &::s1;
        p_src = (__int64 *)v323;
        if ( v202 == (char *)v266 )
        {
LABEL_494:
          if ( v341 )
            qfree(v341, *(const char **)&kk);
          v20 = s1;
          if ( *(double *)&s1 != 0.0 )
            goto LABEL_497;
          goto LABEL_173;
        }
        goto LABEL_504;
      }
    }
    v272 = (__m128i *)v324.m128i_i64[1];
    p_src = (__int64 *)v323;
    if ( *((_DWORD *)v202 + 6) != 4 )
    {
      v285 = sub_1CAD60(*(double *)si128.m128i_i64, (__int64)v271, (__int64)"children", v266, v76);
      goto LABEL_587;
    }
    v273 = sub_1D12F0(*((__int64 **)v202 + 4));
    *(double *)&v323 = COERCE_DOUBLE(operator new(0x18u));
    sub_1A1F60(v323, v272->m128i_i8);
    if ( *(_DWORD *)v273 )
      jvalue_t_clear(v273);
    v274 = v323;
    *(_DWORD *)v273 = 2;
    LOBYTE(v275) = 0;
    v276 = v342;
    v343 = 0;
    v273[1] = v274;
    v277 = (const __m128i *)v356[1];
    v344 = 0;
    v328 = v341;
    v278 = &::s1;
    if ( v276 )
    {
      v275 = --v276 >> 63;
      v278 = (const char *)v328;
    }
    if ( !v278 || (_BYTE)v275 )
    {
      v276 = 0;
      if ( v278 )
        v276 = strlen(v278);
    }
    QT::QString::fromUtf8(v324.m128i_i64[0], v276, v278);
    si128 = _mm_load_si128(&xmmword_8CB260);
    v349 = qword_8CB270;
    v348 = si128;
    if ( si128.m128i_i64[0] )
      _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
    v272 = &v348;
    QT::QString::append((QT::QString *)&v348, (const QT::QString *)v324.m128i_i64[0]);
    kk = COERCE_DOUBLE(&v348);
    LOBYTE(v323) = sub_1CF860(v277, (const QT::QString *)&v348, 0);
    sub_16D970((void **)&v348);
    sub_16D970((void **)v324.m128i_i64[0]);
    v279 = v340;
    if ( (_BYTE)v323 )
    {
      if ( v340 )
      {
        v323 = (size_t)s1;
        if ( !strncmp(s1, "IDA View-", 9u) )
        {
          QT::QString::toUtf8_helper((QT::QString *)&v348, (const QT::QString *)&unk_8CB0E0);
          v280 = (const char *)v348.m128i_i64[1];
          if ( !v348.m128i_i64[1] )
            v280 = (const char *)&QT::QByteArray::_empty;
          kk = *(double *)&v356[1];
          sub_1CECC0((__int64 *)&v343, v356[1], v280, "arrows_width");
          sub_17F470((void **)&v348);
        }
        else
        {
          kk = COERCE_DOUBLE("Hex View-");
          if ( !strncmp((const char *)v323, "Hex View-", 9u) )
          {
            v272 = (__m128i *)&v343;
            sub_1CECC0((__int64 *)&v343, v356[1], "IS", "bytes_per_token");
            sub_1CECC0((__int64 *)&v343, v356[1], "NC", "tokens_per_line");
            sub_1CECC0((__int64 *)&v343, v356[1], "EI", "text_encoding");
            sub_1CEE70((__int64 *)&v343, v356[1], "ST", "show_text");
            sub_1CECC0((__int64 *)&v343, v356[1], "DK", "data_kind");
            sub_1CECC0((__int64 *)&v343, v356[1], "IF", "int_format");
            kk = *(double *)&v356[1];
            sub_1CECC0((__int64 *)&v343, v356[1], "LA", "label");
          }
        }
      }
      (*(void (__fastcall **)(_QWORD, double, size_t))(**(_QWORD **)(v356[1] + 48) + 40LL))(
        *(_QWORD *)(v356[1] + 48),
        COERCE_DOUBLE(*(_QWORD *)&kk),
        v279);
LABEL_525:
      if ( v340 )
      {
        v281 = (size_t *)s1;
        goto LABEL_527;
      }
      goto LABEL_559;
    }
    if ( !v340 )
      goto LABEL_559;
    v323 = (size_t)s1;
    v316 = strcmp(s1, "Stack view");
    v281 = (size_t *)v323;
    if ( !v316 )
    {
      v272 = (__m128i *)&v343;
      sub_1CC9F0((__int64 *)&v343, "tokens_per_line", 1);
      sub_1CCB10((__int64 *)&v343, "show_text", 1u);
      sub_1CC9F0((__int64 *)&v343, "data_kind", 4);
      kk = COERCE_DOUBLE("int_format");
      sub_1CC9F0((__int64 *)&v343, "int_format", 0);
      goto LABEL_525;
    }
LABEL_527:
    kk = COERCE_DOUBLE("Graph overview");
    if ( strcmp((const char *)v281, "Graph overview") )
    {
LABEL_559:
      v272 = (__m128i *)v355;
      v310 = *(char *(__fastcall **)(__int64, const char *))(*(_QWORD *)v355 + 64LL);
      if ( v310 == irr::io::CXMLReaderImpl_char__irr::io::IXMLBase___::vfunc_8 )
      {
        v311 = (size_t *)operator new[](2u);
        v76 = 98;
        v281 = v311;
        *(_WORD *)v311 = 98;
        v312 = v272[7].m128i_i32[3];
        if ( v312 <= 0 )
        {
LABEL_569:
          if ( v281 )
            operator delete[](v281);
        }
        else
        {
          kk = *(double *)v272[7].m128i_i64;
          v313 = *(_QWORD *)&kk + 32LL * (unsigned int)(v312 - 1) + 32;
          while ( 1 )
          {
            v76 = 0;
            v282 = 0;
            for ( jj = ***(_BYTE ***)&kk; jj; jj = *(_BYTE *)(**(_QWORD **)&kk + (int)v76) )
            {
              v282 = *((unsigned __int8 *)v281 + v282);
              if ( !(_BYTE)v282 )
                break;
              if ( (_BYTE)v282 != jj )
                goto LABEL_568;
              v76 = (unsigned int)(v76 + 1);
              v282 = (int)v76;
            }
            if ( *(_DWORD *)(*(_QWORD *)&kk + 12LL) == 2 )
              break;
LABEL_568:
            *(_QWORD *)&kk += 32LL;
            if ( v313 == *(_QWORD *)&kk )
              goto LABEL_569;
          }
          if ( v281 )
          {
            *(double *)&v323 = kk;
            operator delete[](v281);
            kk = *(double *)&v323;
          }
          if ( kk != 0.0 )
          {
            v315 = *(char **)(*(_QWORD *)&kk + 16LL);
            goto LABEL_572;
          }
        }
        v315 = (char *)v272[4].m128i_i64[0];
      }
      else
      {
        kk = COERCE_DOUBLE("b");
        v281 = (size_t *)v355;
        v315 = v310((__int64)v355, "b");
      }
LABEL_572:
      if ( v315 && *v315 == 48 && !v315[1] )
      {
        v281 = &v343;
        kk = COERCE_DOUBLE("hidden");
        sub_1CCB10((__int64 *)&v343, "hidden", 1u);
      }
    }
    if ( !(_QWORD)v344 )
    {
      v306 = v343;
      if ( v343 )
        goto LABEL_552;
      goto LABEL_553;
    }
    *(double *)&v202 = COERCE_DOUBLE(&::s1);
    if ( v340 )
      v202 = s1;
    if ( v361 != 3 )
    {
      v285 = sub_1CAD40(*(double *)si128.m128i_i64, (__int64)v281, *(__int64 *)&kk, v282, v76);
LABEL_590:
      v320 = v272->m128i_i64[0];
      v324.m128i_i64[1] = v285;
      v323 = v317;
      v321 = qvector_reserve(v272, v320, v317, 1);
      v286 = v324.m128i_u64[1];
      v317 = v323;
      v272->m128i_i64[0] = v321;
      goto LABEL_588;
    }
    v283 = (size_t)v362;
    v284 = v362[1];
    kk = *(double *)v362;
    if ( v362[2] < (__m128i *)&v284->m128i_i8[1] )
    {
      v323 = (size_t)v362;
      *(double *)&v319 = COERCE_DOUBLE(qvector_reserve(v362, *(_QWORD *)&kk, &v284->m128i_i8[1], 40));
      v283 = v323;
      kk = *(double *)&v319;
      *(double *)v323 = *(double *)&v319;
      v284 = *(__m128i **)(v283 + 8);
    }
    v272 = (__m128i *)(*(_QWORD *)&kk + 40LL * (_QWORD)v284);
    v272->m128i_i64[0] = 0;
    v272[1].m128i_i32[2] = 0;
    v272[2].m128i_i64[0] = 0;
    *(__m128i *)((char *)v272 + 8) = 0;
    ++*(_QWORD *)(v283 + 8);
    if ( *(double *)&v202 == 0.0 || (v285 = strlen(v202), (v286 = v285) == 0) )
    {
      v272->m128i_i64[1] = 0;
      goto LABEL_537;
    }
LABEL_587:
    v317 = v285 + 1;
    if ( v272[1].m128i_i64[0] < (unsigned __int64)(v285 + 1) )
      goto LABEL_590;
LABEL_588:
    v272->m128i_i64[1] = v317;
    v318 = (void *)v272->m128i_i64[0];
    kk = *(double *)&v202;
    v323 = v286;
    memmove(v318, v202, v286);
    *(_BYTE *)(v272->m128i_i64[0] + v323) = 0;
LABEL_537:
    v287 = qalloc_or_throw(24);
    si128.m128i_i64[0] = 0;
    v326 = (__int64 *)v287;
    v288 = (_QWORD *)v287;
    *(_QWORD *)v287 = 0;
    *(_OWORD *)(v287 + 8) = 0;
    *(_QWORD *)&v327 = 40 * v344;
    v289 = 0xCCCCCCCCCCCCCCCDLL * ((40 * (__int64)v344) >> 3);
    v329 = v289;
    if ( v289 )
    {
      v323 = v343;
      v290 = qvector_reserve(v287, 0, v289, 40);
      v291 = v327;
      v292 = v323;
      v324.m128i_i64[1] = v290;
      *v288 = v290;
      *(_QWORD *)&v293 = v292 + *(_QWORD *)&v291;
      v294 = (char *)v290;
      v295 = v288[1];
      v327 = v293;
      memmove(&v294[*(_QWORD *)&v291], v294, 40 * v295);
      for ( kk = v327; *(_QWORD *)&v327 != v323; v324.m128i_i64[1] += 40 )
      {
        v298 = (_QWORD *)v324.m128i_i64[1];
        *(_OWORD *)(v324.m128i_i64[1] + 8) = 0;
        *v298 = 0;
        v299 = *(_QWORD *)(v323 + 8);
        if ( v299 )
        {
          v330 = *(_QWORD *)(v323 + 8);
          v300 = qalloc_or_throw(v330);
          v301 = v324.m128i_i64[1];
          v302 = v330;
          v303 = (void *)v300;
          *(_QWORD *)v324.m128i_i64[1] = v300;
          v304 = (const void **)v323;
          *(_QWORD *)(v301 + 16) = v302;
          memcpy(v303, *v304, v302);
          v299 = v330;
          *(_QWORD *)(v301 + 8) = v330;
        }
        v296 = v324.m128i_i64[1];
        v297 = v323;
        *(_DWORD *)(v324.m128i_i64[1] + 24) = 0;
        *(_QWORD *)&kk = v297 + 24;
        jvalue_t_copy(v296 + 24, v297 + 24, v299, v297);
        v323 += 40LL;
      }
      v76 = v329;
      v326[1] += v329;
    }
    if ( v272[1].m128i_i32[2] )
      jvalue_t_clear(&v272[1].m128i_u64[1]);
    v305 = v326;
    v306 = v343;
    v272[1].m128i_i32[2] = 3;
    v272[2].m128i_i64[0] = (__int64)v305;
    if ( v306 )
    {
      if ( (_QWORD)v344 )
      {
        v307 = 0;
        v308 = v344;
        do
        {
          v323 = v306 + 40 * v307;
          jvalue_t_clear(v323 + 24);
          v309 = *(_QWORD *)v323;
          if ( *(_QWORD *)v323 )
          {
            *(_QWORD *)(v323 + 8) = 0;
            qfree(v309, *(const char **)&kk);
          }
          ++v307;
          v306 = v343;
        }
        while ( v308 != v307 );
      }
LABEL_552:
      *(_QWORD *)&v344 = 0;
      qfree(v306, *(const char **)&kk);
    }
LABEL_553:
    if ( v328 )
      qfree(v328, *(const char **)&kk);
    v20 = s1;
    if ( *(double *)&s1 != 0.0 )
    {
LABEL_497:
      v340 = 0;
      qfree(v20, *(const char **)&kk);
    }
LABEL_173:
    v77 = (__m128i *)v355;
LABEL_174:
    ;
  }
LABEL_130:
  if ( (_DWORD)v333 != 4 )
    goto LABEL_606;
  v89 = v334;
  if ( !v334[1] )
    goto LABEL_134;
  if ( (_DWORD)v331 != 3 )
    goto LABEL_607;
  v20 = (char *)v332;
  kk = COERCE_DOUBLE("synced");
  v334 = nullptr;
  LODWORD(v333) = 0;
  sub_1CCC30(v332, "synced", (__int64)v89);
LABEL_134:
  if ( v325 )
  {
    v20 = *(char **)(v322.m128i_i64[1] + 48);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v20 + 40LL))(v20);
  }
  if ( (_DWORD)v331 != 3 )
    goto LABEL_608;
  v90 = (unsigned __int64)v337;
  v91 = v332;
  LODWORD(v331) = 0;
  v332 = nullptr;
  if ( *(double *)&v337 != 0.0 )
  {
    v92 = v338;
    if ( (_QWORD)v338 )
    {
      v93 = 0;
      do
      {
        v94 = (__int64 *)(v90 + 24 * v93);
        v95 = *v94;
        if ( *v94 )
        {
          v94[1] = 0;
          qfree(v95, *(const char **)&kk);
          v90 = (unsigned __int64)v337;
        }
        ++v93;
      }
      while ( v92 != v93 );
    }
    *(_QWORD *)&v338 = 0;
    qfree(v90, *(const char **)&kk);
  }
  jvalue_t_clear(&v333);
  if ( v335 )
  {
    *(_QWORD *)&v336 = 0;
    qfree(v335, *(const char **)&kk);
  }
  if ( v353 )
  {
    *(_QWORD *)&v354 = 0;
    qfree(v353, *(const char **)&kk);
  }
  if ( v350 )
  {
    *(_QWORD *)&v351 = 0;
    qfree(v350, *(const char **)&kk);
  }
  jvalue_t_clear(&v331);
  return v91;
}
