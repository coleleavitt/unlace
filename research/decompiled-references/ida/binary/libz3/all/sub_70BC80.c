__int64 __fastcall sub_70BC80(__int64 a1, _QWORD *a2, int a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r15
  bool v12; // zf
  __int64 (__fastcall *v13)(__int64); // rax
  char *v14; // rdi
  int v15; // esi
  char *v16; // rdx
  unsigned int v17; // ecx
  char *v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // r15
  unsigned __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdi
  _QWORD *v24; // rcx
  _QWORD *v25; // r15
  unsigned __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // rax
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  _QWORD *v39; // r14
  __int64 v40; // r15
  int v41; // esi
  _DWORD *v42; // rcx
  unsigned int v43; // r10d
  unsigned int v44; // r8d
  size_t v45; // r15
  _QWORD *v46; // r12
  _QWORD *v47; // r11
  int v48; // edx
  __int64 v49; // r8
  _QWORD *v50; // rdi
  _QWORD *v51; // rax
  _QWORD *v52; // r8
  _DWORD *v53; // r9
  _QWORD *v54; // rax
  _QWORD *v55; // r11
  _DWORD *v56; // rax
  __int64 v57; // rcx
  unsigned int v58; // r14d
  _QWORD *v59; // r13
  __int64 v60; // rax
  __int64 v61; // r12
  _QWORD *v62; // rax
  unsigned int v63; // r10d
  char *v64; // r13
  char *v65; // r9
  _QWORD *v66; // rdi
  __int64 v67; // rax
  _QWORD *v68; // rdx
  _QWORD *v69; // rax
  __int64 v70; // rdx
  _QWORD *v71; // r12
  __int64 v72; // rsi
  __int64 v73; // rdi
  _QWORD *v74; // r14
  char *v75; // r15
  unsigned int v76; // r13d
  __int64 v77; // rax
  unsigned __int8 v78; // r13
  unsigned int v79; // eax
  _QWORD *v80; // rcx
  _QWORD *v81; // rdx
  unsigned int v82; // r12d
  __int64 v83; // r14
  unsigned int v84; // eax
  __int64 v85; // rsi
  int v86; // eax
  _QWORD *v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rax
  _QWORD *v90; // rdi
  _QWORD *v91; // r13
  __int64 v92; // r15
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r12
  __int64 v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rcx
  unsigned int v99; // eax
  unsigned int v100; // r15d
  __int64 v101; // r12
  void *v102; // rcx
  unsigned int v103; // r15d
  size_t v104; // rsi
  unsigned int *v105; // rax
  __int64 v106; // rcx
  __int64 v107; // r15
  int v108; // r9d
  int v109; // eax
  int v110; // r8d
  int v111; // r9d
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // r15
  _DWORD *v115; // r15
  _QWORD *v116; // r15
  _QWORD *v117; // r13
  __int64 v118; // rdi
  __int64 v119; // r14
  unsigned __int64 v120; // r13
  unsigned int v121; // eax
  __int64 v122; // rdx
  int v123; // eax
  _QWORD *v124; // rdx
  unsigned __int64 v125; // r14
  unsigned int v126; // eax
  __int64 v127; // rdx
  int v128; // eax
  _QWORD *v129; // rdx
  __int64 v130; // r15
  unsigned int **v131; // r14
  unsigned int *v132; // rsi
  __int64 v133; // rdx
  __int64 v134; // rax
  unsigned int v135; // eax
  _QWORD *v136; // rcx
  __int64 v137; // rdx
  unsigned int v138; // r12d
  __int64 v139; // rax
  _QWORD *v140; // rax
  _QWORD *v141; // rdx
  __int64 v142; // rax
  unsigned int *v143; // rax
  __int64 v144; // r13
  _QWORD *v145; // rdx
  __int64 v146; // rcx
  int v147; // eax
  _QWORD *v148; // rax
  unsigned int v149; // eax
  unsigned int v150; // ecx
  size_t v151; // rsi
  unsigned int *v152; // rax
  __int64 v153; // rdx
  unsigned int v154; // eax
  __int64 v155; // rdx
  __int64 v156; // rax
  unsigned int **v157; // r12
  unsigned int *v158; // rax
  __int64 v159; // rdx
  _QWORD *v160; // rdx
  unsigned int v161; // edi
  unsigned int v162; // r12d
  unsigned int v163; // ecx
  size_t v164; // rsi
  unsigned int v165; // r13d
  unsigned int *v166; // rax
  unsigned int v167; // eax
  __int64 v168; // rcx
  __int64 v169; // r8
  _OWORD *v170; // rdi
  _OWORD *v171; // rax
  __int64 v172; // rsi
  unsigned __int64 v173; // rcx
  __int64 v174; // r8
  _OWORD *v175; // rsi
  _DWORD *v176; // rax
  __int64 v177; // r13
  __int64 j; // r15
  __int64 v179; // r14
  __int64 k; // r15
  __int64 *v181; // rax
  __int64 v182; // rsi
  __int64 v183; // rcx
  __int64 *v184; // r12
  unsigned int v185; // r15d
  __int64 v186; // rdx
  char *v187; // r13
  void *v188; // rdi
  _DWORD **v189; // r15
  _DWORD *v190; // r12
  void *v191; // rcx
  void *v192; // rdi
  void (__fastcall ***v193)(_QWORD); // rcx
  void *v194; // rdi
  __int64 *v195; // r13
  __int64 v196; // rax
  __int64 *v197; // r15
  __int64 *v198; // r12
  __int64 *v199; // r14
  __int64 v200; // rsi
  __int64 v201; // rdi
  _QWORD *v202; // rdi
  unsigned __int64 v203; // r12
  __int64 *v204; // r15
  __int64 v205; // rsi
  __int64 v206; // rdi
  __int64 v207; // rax
  char *v208; // r13
  char *v209; // r15
  __int64 *v210; // r12
  __int64 *v211; // r14
  __int64 v212; // rsi
  __int64 v213; // rdi
  int v214; // eax
  __int64 v215; // rax
  int v216; // eax
  __int64 v217; // rdx
  void *v218; // rcx
  void *v219; // r12
  __int64 v220; // rax
  unsigned int *v221; // r14
  unsigned int v222; // r15d
  unsigned int v223; // r13d
  unsigned int v224; // esi
  unsigned __int64 v225; // rax
  unsigned int v226; // esi
  unsigned __int64 v227; // rax
  __int64 v228; // rax
  unsigned int v229; // r14d
  __int64 v230; // rax
  unsigned __int64 v231; // rdi
  __m128 si128; // xmm0
  void *v233; // r12
  __int64 v234; // rax
  unsigned int v235; // r14d
  unsigned int v236; // r14d
  __int64 v237; // rax
  __int64 v238; // rax
  __int64 v239; // rax
  __int64 v240; // rdx
  unsigned int v241; // ecx
  unsigned int *v242; // r14
  unsigned int *v243; // r15
  unsigned int v244; // esi
  _QWORD *v245; // r13
  __int64 v246; // rcx
  unsigned int *v247; // rdx
  __int64 v248; // rax
  unsigned int *v249; // rax
  __int64 v250; // r13
  unsigned int v251; // ecx
  __int64 v252; // r8
  __m128i *v253; // rax
  __int64 v254; // rdx
  __m128i *v255; // rsi
  __m128i *v256; // rdx
  __m128i *v257; // rdi
  int v258; // ecx
  _QWORD *v259; // rax
  __m128i *v260; // rax
  __m128i *v261; // rcx
  int v262; // eax
  _QWORD *v263; // r15
  __int64 v264; // rsi
  __int64 v265; // rdi
  unsigned int v266; // r13d
  size_t v267; // rsi
  unsigned int *v268; // rax
  unsigned int v269; // ecx
  size_t v270; // rsi
  unsigned int *v271; // rax
  __int64 v272; // rax
  int v273; // r9d
  __int64 v274; // rcx
  __int64 v275; // rax
  const __m128i *v276; // r13
  __m128i *v277; // r11
  __int64 v278; // rdi
  __int64 v279; // rdx
  __m128i *v280; // rsi
  __m128i *v281; // rdx
  __m128i v282; // xmm0
  unsigned int v283; // r12d
  size_t v284; // rdi
  unsigned int *v285; // r14
  char *v286; // rdx
  char *v287; // rax
  __int64 v288; // rdi
  int v289; // r8d
  __int64 v290; // r10
  _DWORD *v291; // rcx
  char *v292; // rdi
  __int64 v293; // rsi
  __int64 v294; // rsi
  char *v295; // rbx
  __int64 *v296; // r12
  __int64 *v297; // r13
  __int64 v298; // rsi
  __int64 v299; // rdi
  _QWORD *v300; // rax
  unsigned int v301; // r12d
  unsigned int v302; // edx
  __int64 v303; // rax
  __int64 *v304; // r13
  __int64 *v305; // r15
  __int64 v306; // rsi
  __int64 *v307; // rdx
  unsigned __int64 v308; // rax
  unsigned __int64 v309; // rdx
  unsigned __int64 v310; // rax
  __m128i v311; // xmm0
  unsigned __int64 v312; // rax
  __int64 v313; // rdi
  __int64 v314; // rax
  unsigned int v315; // edx
  __int64 v316; // rax
  __int64 *v317; // r12
  __int64 *v318; // r14
  __int64 v319; // rsi
  __int64 *v320; // rdx
  unsigned __int64 v321; // rax
  unsigned __int64 v322; // rdx
  unsigned __int64 v323; // rax
  __m128i v324; // xmm0
  unsigned __int64 v325; // rax
  __int64 v326; // rdi
  __int64 *v327; // r15
  __int64 v328; // rax
  _QWORD *v329; // rax
  _QWORD *v330; // rax
  _QWORD *v331; // rax
  __int64 v332; // rax
  char v333; // si
  __int64 v334; // rax
  int v335; // r15d
  __int64 v336; // rax
  __int64 v337; // rdx
  unsigned int v338; // eax
  char *v339; // r12
  __int64 v340; // rdx
  _QWORD *v341; // rdx
  unsigned int i; // r13d
  __int64 v343; // rax
  __int64 v344; // r15
  unsigned int v345; // eax
  unsigned int v346; // r14d
  unsigned int v347; // ecx
  unsigned int *v348; // rax
  __int64 v349; // rcx
  _QWORD *v350; // rcx
  int v351; // eax
  __int64 v352; // r12
  unsigned int v353; // ebx
  __int64 v354; // rbx
  __int64 v355; // r15
  unsigned int v356; // ecx
  _QWORD *v357; // rdi
  __int64 v358; // rax
  char **v359; // r15
  __int64 v360; // rbx
  __int64 *v361; // r15
  __int64 v362; // r12
  unsigned int v363; // edx
  unsigned int v364; // ebx
  __int64 v365; // rbx
  __int64 v367; // r13
  unsigned int v368; // edx
  unsigned int v369; // ecx
  __int64 v370; // r12
  __int64 v371; // rdi
  char v372; // al
  void (__fastcall ***v373)(void *); // r15
  __int64 v374; // rax
  void (__fastcall ***v375)(void *); // r12
  __int64 v376; // r13
  __int64 v377; // rax
  __int64 v378; // rbx
  _DWORD *v379; // rcx
  _QWORD *v380; // rax
  _QWORD *v381; // rax
  __int64 v382; // rax
  __int64 v383; // r15
  unsigned int v384; // r12d
  unsigned int v385; // edx
  unsigned int *v386; // r15
  unsigned int v387; // esi
  char *v388; // rax
  _DWORD *v389; // rdx
  char *v390; // rcx
  char *v391; // rax
  __int64 v392; // rdi
  __int64 v393; // rdi
  void *v394; // rdi
  __int64 v395; // r13
  __int64 v396; // r14
  __int64 *v397; // rbx
  __int64 *v398; // r12
  __int64 v399; // rsi
  __int64 v400; // rdi
  void *v401; // r15
  void *v402; // r15
  __int64 *v403; // rax
  unsigned __int64 v404; // rdi
  __int64 v405; // r8
  __int64 *v406; // rax
  unsigned __int64 v407; // rdi
  __int64 v408; // r8
  __int64 v409; // rax
  __int64 v410; // rax
  __int64 v411; // rax
  __int64 v412; // rcx
  unsigned int v413; // edx
  unsigned int v414; // eax
  int v415; // r15d
  _QWORD *v416; // rdi
  __int64 v417; // rax
  int v418; // r15d
  _QWORD *v419; // rdi
  __int64 v420; // rax
  _QWORD *v421; // rax
  unsigned int v422; // eax
  __int64 m; // rax
  __int64 v424; // rdx
  __int64 v425; // r15
  __int64 v426; // rsi
  __int64 v427; // rax
  __int64 v428; // rdi
  unsigned int v429; // ecx
  void *v430; // r15
  __int64 ii; // rax
  __int64 n; // rax
  char **v433; // rbx
  char **exception; // rbx
  char **v435; // rbx
  char **v436; // rbx
  char **v437; // rbx
  char **v438; // rbx
  char **v439; // rbx
  char **v440; // rbx
  char **v441; // rbx
  char **v442; // rbx
  int v443; // [rsp-8h] [rbp-318h]
  int v444; // [rsp+0h] [rbp-310h]
  int v445; // [rsp+0h] [rbp-310h]
  _Unwind_Exception *v446; // [rsp+0h] [rbp-310h]
  _Unwind_Exception *v447; // [rsp+0h] [rbp-310h]
  _Unwind_Exception *v448; // [rsp+0h] [rbp-310h]
  int v449; // [rsp+8h] [rbp-308h]
  int v450; // [rsp+8h] [rbp-308h]
  int v451; // [rsp+8h] [rbp-308h]
  int v452; // [rsp+8h] [rbp-308h]
  __int64 *v453; // [rsp+8h] [rbp-308h]
  int v454; // [rsp+10h] [rbp-300h]
  int v455; // [rsp+10h] [rbp-300h]
  int v456; // [rsp+10h] [rbp-300h]
  int v457; // [rsp+10h] [rbp-300h]
  int v458; // [rsp+10h] [rbp-300h]
  void *v459; // [rsp+10h] [rbp-300h]
  int v460; // [rsp+18h] [rbp-2F8h]
  int v461; // [rsp+18h] [rbp-2F8h]
  __int64 v462; // [rsp+18h] [rbp-2F8h]
  __int64 v463; // [rsp+18h] [rbp-2F8h]
  __int64 *v464; // [rsp+18h] [rbp-2F8h]
  int v465; // [rsp+20h] [rbp-2F0h]
  int v466; // [rsp+20h] [rbp-2F0h]
  int v467; // [rsp+20h] [rbp-2F0h]
  __int64 v468; // [rsp+20h] [rbp-2F0h]
  __int64 v469; // [rsp+20h] [rbp-2F0h]
  __int64 *v470; // [rsp+20h] [rbp-2F0h]
  int v471; // [rsp+28h] [rbp-2E8h]
  int v472; // [rsp+28h] [rbp-2E8h]
  char v473; // [rsp+28h] [rbp-2E8h]
  int v474; // [rsp+28h] [rbp-2E8h]
  __int64 v475; // [rsp+28h] [rbp-2E8h]
  int v476[2]; // [rsp+30h] [rbp-2E0h]
  char v477; // [rsp+30h] [rbp-2E0h]
  int v478; // [rsp+30h] [rbp-2E0h]
  int v479; // [rsp+30h] [rbp-2E0h]
  __int64 v480; // [rsp+30h] [rbp-2E0h]
  void *v481; // [rsp+38h] [rbp-2D8h]
  int v482; // [rsp+38h] [rbp-2D8h]
  int v483; // [rsp+38h] [rbp-2D8h]
  __int64 v484; // [rsp+38h] [rbp-2D8h]
  int v485; // [rsp+40h] [rbp-2D0h]
  int v486; // [rsp+40h] [rbp-2D0h]
  int v487; // [rsp+40h] [rbp-2D0h]
  int v488[2]; // [rsp+48h] [rbp-2C8h]
  void *v489; // [rsp+48h] [rbp-2C8h]
  __int64 v490; // [rsp+48h] [rbp-2C8h]
  int v491; // [rsp+50h] [rbp-2C0h]
  __int64 v493; // [rsp+58h] [rbp-2B8h]
  int v494; // [rsp+60h] [rbp-2B0h]
  __int64 v495; // [rsp+60h] [rbp-2B0h]
  int v496; // [rsp+68h] [rbp-2A8h]
  int v497; // [rsp+68h] [rbp-2A8h]
  int v498; // [rsp+70h] [rbp-2A0h]
  int v499; // [rsp+78h] [rbp-298h]
  __m128i *v500; // [rsp+78h] [rbp-298h]
  int v501; // [rsp+80h] [rbp-290h]
  size_t v502; // [rsp+80h] [rbp-290h]
  int v503; // [rsp+88h] [rbp-288h]
  __int64 v504; // [rsp+98h] [rbp-278h]
  int v505; // [rsp+A0h] [rbp-270h]
  __int64 v506; // [rsp+A0h] [rbp-270h]
  unsigned int *v507; // [rsp+A8h] [rbp-268h]
  _QWORD *v508; // [rsp+A8h] [rbp-268h]
  _QWORD *v509; // [rsp+A8h] [rbp-268h]
  unsigned int v510; // [rsp+A8h] [rbp-268h]
  unsigned int v511; // [rsp+A8h] [rbp-268h]
  unsigned int v512; // [rsp+A8h] [rbp-268h]
  __int64 v513; // [rsp+B0h] [rbp-260h]
  __int64 v514; // [rsp+B0h] [rbp-260h]
  _DWORD *v515; // [rsp+B8h] [rbp-258h]
  unsigned int v516; // [rsp+B8h] [rbp-258h]
  unsigned int v517; // [rsp+B8h] [rbp-258h]
  char *v518; // [rsp+B8h] [rbp-258h]
  void *v519; // [rsp+B8h] [rbp-258h]
  unsigned __int8 v520; // [rsp+B8h] [rbp-258h]
  void *v521; // [rsp+B8h] [rbp-258h]
  unsigned int ptr; // [rsp+C0h] [rbp-250h]
  _DWORD *ptrc; // [rsp+C0h] [rbp-250h]
  _DWORD *ptrd; // [rsp+C0h] [rbp-250h]
  unsigned int **ptra; // [rsp+C0h] [rbp-250h]
  unsigned int ptrb; // [rsp+C0h] [rbp-250h]
  char *v527; // [rsp+C8h] [rbp-248h]
  unsigned int v528; // [rsp+C8h] [rbp-248h]
  _DWORD *v529; // [rsp+C8h] [rbp-248h]
  unsigned int *v530; // [rsp+C8h] [rbp-248h]
  _QWORD *v531; // [rsp+D0h] [rbp-240h]
  char *v532; // [rsp+D0h] [rbp-240h]
  unsigned int *v533; // [rsp+D0h] [rbp-240h]
  _DWORD *v534; // [rsp+D8h] [rbp-238h]
  _QWORD *v535; // [rsp+D8h] [rbp-238h]
  char *v536; // [rsp+D8h] [rbp-238h]
  _QWORD *v537; // [rsp+D8h] [rbp-238h]
  _QWORD *v538; // [rsp+D8h] [rbp-238h]
  unsigned int v539; // [rsp+D8h] [rbp-238h]
  unsigned int v540; // [rsp+D8h] [rbp-238h]
  int v541; // [rsp+D8h] [rbp-238h]
  int v542; // [rsp+D8h] [rbp-238h]
  __int64 v543; // [rsp+D8h] [rbp-238h]
  char *v544; // [rsp+D8h] [rbp-238h]
  char *v545; // [rsp+D8h] [rbp-238h]
  __int64 *v546; // [rsp+D8h] [rbp-238h]
  unsigned int v547; // [rsp+D8h] [rbp-238h]
  int v548; // [rsp+D8h] [rbp-238h]
  int v549; // [rsp+D8h] [rbp-238h]
  char *v550; // [rsp+D8h] [rbp-238h]
  char v551[8]; // [rsp+E0h] [rbp-230h] BYREF
  __int64 v552; // [rsp+E8h] [rbp-228h] BYREF
  char v553[8]; // [rsp+F0h] [rbp-220h] BYREF
  __int64 v554; // [rsp+F8h] [rbp-218h] BYREF
  __int64 v555; // [rsp+100h] [rbp-210h] BYREF
  void *v556; // [rsp+108h] [rbp-208h] BYREF
  int v557[2]; // [rsp+110h] [rbp-200h] BYREF
  __int64 v558; // [rsp+118h] [rbp-1F8h]
  int v559[2]; // [rsp+120h] [rbp-1F0h] BYREF
  unsigned int *v560; // [rsp+128h] [rbp-1E8h]
  int v561[2]; // [rsp+130h] [rbp-1E0h] BYREF
  _QWORD *v562; // [rsp+138h] [rbp-1D8h]
  __m128i v563; // [rsp+140h] [rbp-1D0h] BYREF
  __m128i v564[2]; // [rsp+150h] [rbp-1C0h] BYREF
  void *v565[2]; // [rsp+170h] [rbp-1A0h] BYREF
  _BYTE v566[128]; // [rsp+180h] [rbp-190h] BYREF
  void *v567; // [rsp+200h] [rbp-110h] BYREF
  __int64 *v568; // [rsp+208h] [rbp-108h]
  __int64 v569; // [rsp+210h] [rbp-100h] BYREF
  __int64 v570; // [rsp+220h] [rbp-F0h]
  void *v571; // [rsp+228h] [rbp-E8h]
  void *v572; // [rsp+240h] [rbp-D0h]
  void *v573; // [rsp+258h] [rbp-B8h]
  void *v574; // [rsp+270h] [rbp-A0h]
  __int64 v575; // [rsp+288h] [rbp-88h] BYREF
  void *v576; // [rsp+298h] [rbp-78h]
  __int64 v577; // [rsp+2A0h] [rbp-70h]
  void *v578; // [rsp+2A8h] [rbp-68h]
  void *v579; // [rsp+2C0h] [rbp-50h]

  v6 = a1;
  v465 = (int)a2;
  sub_EE4940(v551, "nlqsat-tactic", *a2);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *a2;
  v552 = 0;
  *(_QWORD *)v557 = 0;
  v558 = v7;
  sub_ED5FB0(v8, &v552);
  if ( v552 )
    v9 = *(unsigned int *)(v552 - 4);
  else
    v9 = 0;
  v10 = sub_15EC1C0(*(_QWORD *)(v6 + 16), v9);
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  sub_6FFC80(*(__int64 *)v557, v558);
  v12 = *(_DWORD *)(v6 + 408) == 1;
  *(_QWORD *)v557 = v11;
  if ( v12 )
  {
    v382 = sub_15E1A70(*(_QWORD *)(v6 + 16));
    v383 = v382;
    if ( v382 )
      ++*(_DWORD *)(v382 + 8);
    sub_6FFC80(*(__int64 *)v557, v558);
    *(_QWORD *)v557 = v383;
  }
  v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 160LL);
  if ( v13 == sub_7014C0 )
  {
    sub_700C00(v6 + 24);
    sub_1816990(v6 + 440);
    sub_1142D80(v6 + 40, v6 + 440);
    if ( !*(_DWORD *)(v6 + 468) && !*(_DWORD *)(v6 + 472) )
    {
LABEL_15:
      v19 = *(_QWORD **)(v6 + 488);
      v20 = v19;
      if ( v19 )
      {
        v21 = (unsigned __int64)&v19[*((unsigned int *)v19 - 1)];
        if ( (unsigned __int64)v19 >= v21 )
          goto LABEL_23;
        do
        {
          while ( 1 )
          {
            v22 = *v20;
            if ( *v20 )
            {
              v23 = *(_QWORD *)(v6 + 480);
              v12 = (*(_DWORD *)(v22 + 8))-- == 1;
              if ( v12 )
                break;
            }
            if ( (unsigned __int64)++v20 >= v21 )
              goto LABEL_22;
          }
          sub_15D7BC0(v23, v22);
          ++v20;
        }
        while ( (unsigned __int64)v20 < v21 );
LABEL_22:
        v20 = *(_QWORD **)(v6 + 488);
        if ( v20 )
LABEL_23:
          *((_DWORD *)v20 - 1) = 0;
      }
      sub_14E9CE0(v6 + 496);
      v24 = *(_QWORD **)(v6 + 640);
      v25 = v24;
      if ( v24 )
      {
        v26 = (unsigned __int64)&v24[*((unsigned int *)v24 - 1)];
        if ( (unsigned __int64)v24 >= v26 )
          goto LABEL_32;
        do
        {
          while ( 1 )
          {
            v27 = *v25;
            if ( *v25 )
            {
              v28 = *(_QWORD *)(v6 + 632);
              v12 = (*(_DWORD *)(v27 + 8))-- == 1;
              if ( v12 )
                break;
            }
            if ( (unsigned __int64)++v25 >= v26 )
              goto LABEL_31;
          }
          sub_15D7BC0(v28, v27);
          ++v25;
        }
        while ( (unsigned __int64)v25 < v26 );
LABEL_31:
        v25 = *(_QWORD **)(v6 + 640);
        if ( v25 )
LABEL_32:
          *((_DWORD *)v25 - 1) = 0;
      }
      goto LABEL_33;
    }
    v14 = *(char **)(v6 + 456);
    v15 = 0;
    v16 = &v14[8 * *(unsigned int *)(v6 + 464)];
    v17 = *(_DWORD *)(v6 + 464);
    v18 = v14;
    if ( v14 == v16 )
      goto LABEL_14;
    do
    {
      while ( *(_QWORD *)v18 )
      {
        *(_QWORD *)v18 = 0;
        v18 += 8;
        if ( v16 == v18 )
          goto LABEL_13;
      }
      v18 += 8;
      ++v15;
    }
    while ( v16 != v18 );
LABEL_13:
    if ( v17 <= 0x10 || 3 * v17 >= 4 * v15 )
    {
LABEL_14:
      *(_QWORD *)(v6 + 468) = 0;
      goto LABEL_15;
    }
    if ( v14 )
    {
      sub_186B220(v14);
      v100 = *(_DWORD *)(v6 + 464);
      *(_QWORD *)(v6 + 456) = 0;
      v100 >>= 1;
      *(_DWORD *)(v6 + 464) = v100;
      v101 = v100;
      v102 = (void *)sub_186B270(8LL * v100);
      if ( !v100 )
      {
LABEL_138:
        *(_QWORD *)(v6 + 456) = v102;
        goto LABEL_14;
      }
    }
    else
    {
      *(_QWORD *)(v6 + 456) = 0;
      v429 = v17 >> 1;
      *(_DWORD *)(v6 + 464) = v429;
      v101 = v429;
      v102 = (void *)sub_186B270(8LL * v429);
    }
    v102 = memset(v102, 0, 8 * v101);
    goto LABEL_138;
  }
  v13(v6);
LABEL_33:
  v29 = *(_QWORD *)(v6 + 16);
  v560 = nullptr;
  *(_QWORD *)v559 = v29;
  sub_70AF00(v6, (__int64 *)v557, (__int64)v559);
  v30 = *(_QWORD *)v559;
  v507 = v560;
  sub_1580DB0(v553, *(_QWORD *)(v6 + 16));
  v31 = *(_QWORD *)(v6 + 16);
  v562 = nullptr;
  *(_QWORD *)v561 = v31;
  sub_713400(&v567);
  *(_QWORD *)v476 = *(_QWORD *)(v6 + 16);
  if ( v507 )
    v32 = *(v507 - 1);
  else
    v32 = 0;
  v33 = sub_15EC1C0(v30, v32);
  v34 = v33;
  if ( v33 )
    ++*(_DWORD *)(v33 + 8);
  v35 = sub_15E1B70(v476[0]);
  v471 = v35;
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  sub_6FFC80(v34, v30);
  sub_7137E0(
    (int)&v567,
    v471,
    (int)v561,
    v36,
    v37,
    v38,
    (int)v551,
    (int)v559,
    v454,
    (int)&v567,
    v465,
    v471,
    v476[0],
    v481,
    v485);
  v39 = v562;
  if ( v562 )
  {
    v531 = &v562[*((unsigned int *)v562 - 1)];
    if ( v562 != v531 )
    {
      do
      {
        v40 = *(unsigned int *)(v6 + 464);
        v41 = *(_DWORD *)(v6 + 472);
        v42 = (_DWORD *)*v39;
        v43 = 2 * v40;
        if ( 3 * (int)v40 < (unsigned int)(4 * (v41 + *(_DWORD *)(v6 + 468))) )
        {
          v61 = v43;
          v515 = (_DWORD *)*v39;
          v45 = 8LL * v43;
          ptr = v43;
          v62 = (_QWORD *)sub_186B270(v45);
          v63 = ptr;
          v535 = v62;
          v42 = v515;
          if ( ptr )
          {
            v516 = ptr;
            ptrc = v42;
            memset(v62, 0, 8 * v61);
            v42 = ptrc;
            v63 = v516;
          }
          v64 = *(char **)(v6 + 456);
          v44 = v63 - 1;
          v65 = &v64[8 * *(unsigned int *)(v6 + 464)];
          v46 = &v535[v45 / 8];
          if ( v64 != v65 )
          {
            do
            {
              while ( *(_QWORD *)v64 <= 1u )
              {
                v64 += 8;
                if ( v65 == v64 )
                  goto LABEL_84;
              }
              v66 = v535;
              v67 = 8LL * (*(_DWORD *)(*(_QWORD *)v64 + 12LL) & v44);
              v68 = &v535[(unsigned __int64)v67 / 8];
              if ( v45 == v67 )
              {
LABEL_88:
                v66 = v535;
                if ( v535 == v68 )
                {
LABEL_93:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v69 = v535;
                while ( *v69 )
                {
                  if ( v68 == ++v69 )
                    goto LABEL_93;
                }
              }
              else
              {
                v69 = &v535[(unsigned __int64)v67 / 8];
                while ( *v69 )
                {
                  if ( v46 == ++v69 )
                    goto LABEL_88;
                }
              }
              v70 = *(_QWORD *)v64;
              v64 += 8;
              v535 = v66;
              *v69 = v70;
            }
            while ( v65 != v64 );
LABEL_84:
            v65 = *(char **)(v6 + 456);
          }
          if ( v65 )
          {
            LODWORD(v513) = v63;
            v517 = v63 - 1;
            ptrd = v42;
            sub_186B220(v65);
            v42 = ptrd;
            v44 = v517;
            v63 = v513;
          }
          *(_DWORD *)(v6 + 464) = v63;
          v41 = 0;
          *(_DWORD *)(v6 + 472) = 0;
          *(_QWORD *)(v6 + 456) = v535;
          v47 = v535;
        }
        else
        {
          v44 = v40 - 1;
          v45 = 8 * v40;
          v46 = (_QWORD *)(*(_QWORD *)(v6 + 456) + v45);
          v47 = *(_QWORD **)(v6 + 456);
        }
        v48 = v42[3];
        v49 = 8LL * (v48 & v44);
        v50 = &v47[(unsigned __int64)v49 / 8];
        if ( v49 == v45 )
        {
          v52 = nullptr;
          v54 = v47;
LABEL_52:
          if ( v50 == v54 )
          {
LABEL_60:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v55 = v54;
          while ( 1 )
          {
            while ( 1 )
            {
              v56 = (_DWORD *)*v55;
              if ( *v55 > 1u )
                break;
              if ( !v56 )
              {
                v51 = v55;
                goto LABEL_68;
              }
              v52 = v55++;
              if ( v50 == v55 )
                goto LABEL_60;
            }
            if ( v56[3] == v48 && v42 == v56 )
              break;
            if ( v50 == ++v55 )
              goto LABEL_60;
          }
          v51 = v55;
LABEL_95:
          *v51 = v42;
        }
        else
        {
          v51 = &v47[(unsigned __int64)v49 / 8];
          v52 = nullptr;
          while ( 1 )
          {
            while ( 1 )
            {
              v53 = (_DWORD *)*v51;
              if ( *v51 <= 1u )
                break;
              if ( v53[3] == v48 && v42 == v53 )
                goto LABEL_95;
              if ( ++v51 == v46 )
              {
LABEL_51:
                v54 = v47;
                goto LABEL_52;
              }
            }
            if ( !v53 )
              break;
            v52 = v51++;
            if ( v51 == v46 )
              goto LABEL_51;
          }
LABEL_68:
          if ( v52 )
            *(_DWORD *)(v6 + 472) = v41 - 1;
          else
            v52 = v51;
          *v52 = v42;
          ++*(_DWORD *)(v6 + 468);
        }
        ++v39;
      }
      while ( v531 != v39 );
    }
  }
  v57 = sub_186B270(0x28u);
  v534 = (_DWORD *)v57;
  v58 = 0;
  v59 = v562;
  *(_QWORD *)(v57 + 16) = 0;
  *(_QWORD *)v57 = 2;
  v532 = (char *)(v57 + 8);
  *(_QWORD *)(v57 + 8) = *(_QWORD *)v561;
  if ( v59 )
  {
    while ( v58 < *((_DWORD *)v59 - 1) )
    {
      v60 = v59[v58];
      v554 = v60;
      if ( v60 )
        ++*(_DWORD *)(v60 + 8);
      sub_6FFD30((_QWORD *)v534 + 2, &v554);
      v59 = v562;
      ++v58;
      if ( !v562 )
      {
        ++v534[1];
        goto LABEL_105;
      }
    }
    ++v534[1];
    v71 = &v59[*((unsigned int *)v59 - 1)];
    if ( v59 >= v71 )
      goto LABEL_104;
    do
    {
      while ( 1 )
      {
        v72 = *v59;
        if ( *v59 )
        {
          v73 = *(_QWORD *)v561;
          v12 = (*(_DWORD *)(v72 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v59 >= v71 )
          goto LABEL_103;
      }
      sub_15D7BC0(v73, v72);
      ++v59;
    }
    while ( v59 < v71 );
LABEL_103:
    v59 = v562;
    if ( v562 )
LABEL_104:
      *((_DWORD *)v59 - 1) = 0;
  }
  else
  {
    *(_DWORD *)(v57 + 4) = 1;
  }
LABEL_105:
  if ( *(_DWORD *)(v6 + 408) == 1 )
  {
    sub_1580ED0(v553, 1, v557, v561, 1, 1);
    v338 = v534[1];
    if ( v338 == *v534 )
    {
      v384 = (3 * v338 + 1) >> 1;
      v385 = 16 * v384 + 8;
      if ( 16 * v338 + 8 >= v385 || v338 >= v384 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_6FFCA0((__int64 *)v565, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v565);
        sub_233E40((__int64)v565);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v386 = (unsigned int *)sub_186B270(v385);
      v387 = v534[1];
      v386[1] = v387;
      v388 = &v532[16 * v387];
      if ( v532 != v388 )
      {
        v389 = v534 + 4;
        v390 = (char *)v386 + v388 - (char *)v534;
        v391 = (char *)(v386 + 2);
        do
        {
          v392 = *((_QWORD *)v389 - 1);
          v391 += 16;
          v389 += 4;
          *((_QWORD *)v391 - 2) = v392;
          v393 = *((_QWORD *)v389 - 2);
          *((_QWORD *)v389 - 2) = 0;
          *((_QWORD *)v391 - 1) = v393;
        }
        while ( v391 != v390 );
      }
      v394 = v534;
      if ( v387 )
      {
        LODWORD(v513) = v384;
        v521 = v534;
        v395 = (__int64)&v534[4 * v387 + 2];
        v550 = v532;
        v396 = v6;
        do
        {
          v397 = *((__int64 **)v550 + 1);
          if ( v397 )
          {
            v398 = &v397[*((unsigned int *)v397 - 1)];
            if ( v397 >= v398 )
              goto LABEL_572;
            do
            {
              while ( 1 )
              {
                v399 = *v397;
                if ( *v397 )
                {
                  v400 = *(_QWORD *)v550;
                  v12 = (*(_DWORD *)(v399 + 8))-- == 1;
                  if ( v12 )
                    break;
                }
                if ( ++v397 >= v398 )
                  goto LABEL_571;
              }
              sub_15D7BC0(v400, v399);
              ++v397;
            }
            while ( v397 < v398 );
LABEL_571:
            v397 = *((__int64 **)v550 + 1);
            if ( v397 )
LABEL_572:
              sub_186B220(v397 - 1);
          }
          v550 += 16;
        }
        while ( v550 != (char *)v395 );
        v384 = v513;
        v6 = v396;
        v394 = v521;
      }
      sub_186B220(v394);
      v338 = v386[1];
      *v386 = v384;
      v532 = (char *)(v386 + 2);
    }
    v74 = v562;
    v339 = &v532[16 * v338];
    v340 = *(_QWORD *)v561;
    *((_QWORD *)v339 + 1) = 0;
    *(_QWORD *)v339 = v340;
    if ( v74 )
    {
      v341 = nullptr;
      for ( i = 0; ; ++i )
      {
        if ( i >= *((_DWORD *)v74 - 1) )
        {
LABEL_492:
          v78 = 0;
          ++*((_DWORD *)v532 - 1);
          goto LABEL_365;
        }
        while ( 1 )
        {
          v343 = v74[i];
          v344 = v343;
          if ( v343 )
            ++*(_DWORD *)(v343 + 8);
          if ( !v341 )
          {
            v421 = (_QWORD *)sub_186B270(0x18u);
            v74 = v562;
            v341 = v421 + 1;
            *v421 = 2;
            v351 = 1;
            v350 = v341;
            *((_QWORD *)v339 + 1) = v341;
            goto LABEL_496;
          }
          v345 = *((_DWORD *)v341 - 1);
          if ( v345 == *((_DWORD *)v341 - 2) )
            break;
          ++i;
          v341[v345] = v344;
          *((_DWORD *)v341 - 1) = v345 + 1;
          if ( i >= *((_DWORD *)v74 - 1) )
            goto LABEL_492;
        }
        v346 = (3 * v345 + 1) >> 1;
        v347 = 8 * v346 + 8;
        if ( 8 * v345 + 8 >= v347 || v345 >= v346 )
        {
          v433 = (char **)__cxa_allocate_exception(0x28u);
          sub_6FFCA0((__int64 *)v565, "Overflow encountered when expanding vector");
          *v433 = (char *)off_1C63128;
          sub_2333C0(v433 + 1, v565);
          sub_233E40((__int64)v565);
          __cxa_throw(v433, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v348 = (unsigned int *)sub_186B300(v341 - 1, v347);
        v341 = v348 + 2;
        v349 = v348[1];
        *v348 = v346;
        *((_QWORD *)v339 + 1) = v348 + 2;
        v74 = v562;
        LODWORD(v348) = v349;
        v350 = &v341[v349];
        v351 = (_DWORD)v348 + 1;
LABEL_496:
        *v350 = v344;
        *((_DWORD *)v341 - 1) = v351;
        if ( !v74 )
          break;
      }
      ++*((_DWORD *)v532 - 1);
    }
    else
    {
      *((_DWORD *)v532 - 1) = v338 + 1;
    }
    v78 = 0;
    goto LABEL_113;
  }
  sub_1580ED0(v553, 0, v557, v561, 1, 1);
  v74 = v562;
  v75 = &v532[16 * (v534[1] - 1)];
  if ( v562 )
  {
    v76 = 0;
    do
    {
      if ( v76 >= *((_DWORD *)v74 - 1) )
      {
        v78 = 1;
        goto LABEL_365;
      }
      v77 = v74[v76];
      v555 = v77;
      if ( v77 )
        ++*(_DWORD *)(v77 + 8);
      sub_6FFD30((_QWORD *)v75 + 1, &v555);
      v74 = v562;
      ++v76;
    }
    while ( v562 );
  }
  v78 = 1;
  while ( 1 )
  {
LABEL_113:
    sub_1580ED0(v553, v78, v557, v561, 1, 1);
    v79 = *((_DWORD *)v532 - 1);
    if ( v79 == *((_DWORD *)v532 - 2) )
    {
      v283 = (3 * v79 + 1) >> 1;
      v284 = 16 * v283 + 8;
      if ( 16 * v79 + 8 >= (unsigned int)v284 || v79 >= v283 )
      {
        v439 = (char **)__cxa_allocate_exception(0x28u);
        sub_6FFCA0((__int64 *)v565, "Overflow encountered when expanding vector");
        *v439 = (char *)off_1C63128;
        sub_2333C0(v439 + 1, v565);
        sub_233E40((__int64)v565);
        __cxa_throw(v439, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v285 = (unsigned int *)sub_186B270(v284);
      v286 = (char *)(v285 + 2);
      v287 = v532;
      v288 = *((unsigned int *)v532 - 1);
      v285[1] = v288;
      v289 = v288;
      v290 = v288;
      v291 = v285 + 2;
      v292 = &v532[16 * v288];
      if ( v292 != v532 )
      {
        do
        {
          v293 = *(_QWORD *)v287;
          v287 += 16;
          v291 += 4;
          *((_QWORD *)v291 - 2) = v293;
          v294 = *((_QWORD *)v287 - 1);
          *((_QWORD *)v287 - 1) = 0;
          *((_QWORD *)v291 - 1) = v294;
        }
        while ( v292 != v287 );
      }
      if ( v289 )
      {
        ptrb = v283;
        v520 = v78;
        v544 = &v532[16 * v290];
        v513 = v6;
        v295 = v532;
        do
        {
          v296 = *((__int64 **)v295 + 1);
          if ( v296 )
          {
            v297 = &v296[*((unsigned int *)v296 - 1)];
            if ( v296 >= v297 )
              goto LABEL_414;
            do
            {
              while ( 1 )
              {
                v298 = *v296;
                if ( *v296 )
                {
                  v299 = *(_QWORD *)v295;
                  v12 = (*(_DWORD *)(v298 + 8))-- == 1;
                  if ( v12 )
                    break;
                }
                if ( ++v296 >= v297 )
                  goto LABEL_413;
              }
              sub_15D7BC0(v299, v298);
              ++v296;
            }
            while ( v296 < v297 );
LABEL_413:
            v296 = *((__int64 **)v295 + 1);
            if ( v296 )
LABEL_414:
              sub_186B220(v296 - 1);
          }
          v295 += 16;
        }
        while ( v295 != v544 );
        v283 = ptrb;
        v78 = v520;
        v286 = (char *)(v285 + 2);
        v6 = v513;
      }
      v545 = v286;
      sub_186B220(v532 - 8);
      v79 = v285[1];
      *v285 = v283;
      v532 = v545;
    }
    v80 = v562;
    v536 = &v532[16 * v79];
    *(_QWORD *)v536 = *(_QWORD *)v561;
    v74 = v80;
    *((_QWORD *)v536 + 1) = 0;
    if ( !v80 )
      break;
    v81 = nullptr;
    v82 = 0;
    while ( v82 < *((_DWORD *)v80 - 1) )
    {
      v83 = v80[v82];
      if ( v83 )
        ++*(_DWORD *)(v83 + 8);
      if ( v81 )
      {
        v84 = *((_DWORD *)v81 - 1);
        if ( v84 == *((_DWORD *)v81 - 2) )
        {
          v103 = (3 * v84 + 1) >> 1;
          v104 = 8 * v103 + 8;
          if ( 8 * v84 + 8 >= (unsigned int)v104 || v84 >= v103 )
          {
            v442 = (char **)__cxa_allocate_exception(0x28u);
            sub_6FFCA0((__int64 *)v565, "Overflow encountered when expanding vector");
            *v442 = (char *)off_1C63128;
            sub_2333C0(v442 + 1, v565);
            sub_233E40((__int64)v565);
            __cxa_throw(v442, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v105 = (unsigned int *)sub_186B300(v81 - 1, v104);
          v106 = v105[1];
          v81 = v105 + 2;
          *v105 = v103;
          LODWORD(v105) = v106;
          v87 = &v81[v106];
          *((_QWORD *)v536 + 1) = v81;
          v80 = v562;
          v86 = (_DWORD)v105 + 1;
        }
        else
        {
          v85 = v84;
          v86 = v84 + 1;
          v87 = &v81[v85];
        }
      }
      else
      {
        v300 = (_QWORD *)sub_186B270(0x18u);
        v81 = v300 + 1;
        v87 = v300 + 1;
        *v300 = 2;
        v80 = v562;
        *((_QWORD *)v536 + 1) = v300 + 1;
        v86 = 1;
      }
      *v87 = v83;
      ++v82;
      v74 = v80;
      *((_DWORD *)v81 - 1) = v86;
      if ( !v80 )
      {
        v88 = (unsigned int)(*((_DWORD *)v532 - 1) + 1);
        *((_DWORD *)v532 - 1) = v88;
        goto LABEL_124;
      }
    }
    v78 ^= 1u;
    v88 = (unsigned int)(*((_DWORD *)v532 - 1) + 1);
    *((_DWORD *)v532 - 1) = v88;
    if ( !*((_DWORD *)v80 - 1) )
      goto LABEL_124;
LABEL_365:
    v263 = &v74[*((unsigned int *)v74 - 1)];
    if ( v74 < v263 )
    {
      do
      {
        while ( 1 )
        {
          v264 = *v74;
          if ( *v74 )
          {
            v265 = *(_QWORD *)v561;
            v12 = (*(_DWORD *)(v264 + 8))-- == 1;
            if ( v12 )
              break;
          }
          if ( ++v74 >= v263 )
            goto LABEL_371;
        }
        sub_15D7BC0(v265, v264);
        ++v74;
      }
      while ( v74 < v263 );
LABEL_371:
      v74 = v562;
      if ( !v562 )
        continue;
    }
    *((_DWORD *)v74 - 1) = 0;
  }
  v88 = v79 + 1;
  *((_DWORD *)v532 - 1) = v88;
LABEL_124:
  v527 = v532;
  v518 = &v532[16 * v88];
  if ( v518 != v532 )
  {
    do
    {
      v89 = *((_QWORD *)v527 + 1);
      if ( v89 )
      {
        v90 = *((_QWORD **)v527 + 1);
        v91 = &v90[*(unsigned int *)(v89 - 4)];
        if ( v90 != v91 )
        {
          v537 = *((_QWORD **)v527 + 1);
          do
          {
            v95 = *v537;
            v96 = *v537;
            if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(v6 + 24), *v537) )
            {
              v92 = (unsigned int)sub_1144F00(v6 + 40, v96, v97, v98);
              sub_11420C0(v6 + 40, v92, v93, v94);
              sub_16238E0(v6 + 208, v95, (unsigned int)v92);
            }
            else
            {
              v99 = sub_1144BE0(v6 + 40, 0);
              sub_16238E0(v6 + 256, v95, v99);
            }
            ++v537;
          }
          while ( v91 != v537 );
        }
      }
      v527 += 16;
    }
    while ( v518 != v527 );
  }
  *(_QWORD *)v488 = *(_QWORD *)(v6 + 16);
  v107 = *(_QWORD *)(*(_QWORD *)v488 + 840LL);
  sub_180C5A0(&v556, "is_true");
  v108 = v107;
  LODWORD(v107) = v488[0];
  v109 = sub_15E3D10(
           v488[0],
           (int)&v556,
           (int)&qword_18D6CD0,
           0,
           0,
           v108,
           1,
           v443,
           v444,
           v449,
           v455,
           v460,
           v466,
           v472,
           v477,
           v482,
           v486,
           v488[0],
           v491,
           a3,
           v494,
           v496,
           v498,
           v499,
           v501,
           v503,
           (int)v561,
           (int)v553,
           v505,
           v507,
           v513,
           (__int64)v518);
  v112 = sub_15DC610(v107, v109, 0, 0, v110, v111, v445, v450, v456, v461, v467, v473, v478, v483, v487, v489);
  v495 = v112;
  if ( v112 )
    ++*(_DWORD *)(v112 + 8);
  v113 = sub_15E1B70(*(_QWORD *)(v6 + 16));
  v114 = v113;
  if ( v113 )
    ++*(_DWORD *)(v113 + 8);
  sub_6FFC80(*(__int64 *)v557, v558);
  *(_QWORD *)v557 = v114;
  v115 = (_DWORD *)sub_186B270(0x80u);
  sub_ED29A0(v115, *(_QWORD *)(v6 + 16), 1, 0);
  ++v115[8];
  v556 = v115;
  sub_EDBA20((int)v115, v557[0], 0, v446, v451, v457, v462, v468);
  if ( v508 )
  {
    v116 = &v508[*((unsigned int *)v508 - 1)];
    if ( v116 != v508 )
    {
      v117 = v508;
      do
        sub_EDBA20((int)v556, *v117++, 0, v447, v452, v458, v463, v469);
      while ( v116 != v117 );
    }
  }
  v118 = *(_QWORD *)(v6 + 424);
  v565[0] = v566;
  v565[1] = (void *)0x1000000000LL;
  (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v118 + 128LL))(v118, &v556);
  v119 = *(_QWORD *)v565[0];
  sub_77CE90(v564);
  v519 = (void *)(v6 + 40);
  v506 = v6 + 208;
  sub_77CF70(
    (unsigned int)v564,
    v119,
    v6 + 32,
    v6 + 40,
    v6 + 208,
    v6 + 256,
    (_DWORD)v447,
    v452,
    (unsigned int)v566,
    v463,
    v469,
    v474,
    v479,
    v484);
  nullsub_374(v564);
  v514 = 0;
  if ( *((_DWORD *)v532 - 1) )
  {
LABEL_152:
    v120 = *(_QWORD *)(v6 + 160);
    v528 = v514;
    if ( v120 )
    {
      v121 = *(_DWORD *)(v120 - 4);
      if ( v121 == *(_DWORD *)(v120 - 8) )
      {
        v547 = (3 * v121 + 1) >> 1;
        v315 = 8 * v547 + 8;
        if ( 8 * v121 + 8 >= v315 || v121 >= (3 * v121 + 1) >> 1 )
        {
          v441 = (char **)__cxa_allocate_exception(0x28u);
          sub_6FFCA0(v564[0].m128i_i64, "Overflow encountered when expanding vector");
          *v441 = (char *)off_1C63128;
          sub_2333C0(v441 + 1, v564);
          sub_233E40((__int64)v564);
          __cxa_throw(v441, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v316 = sub_186B270(v315);
        v317 = *(__int64 **)(v6 + 160);
        v318 = (__int64 *)v316;
        v120 = v316 + 8;
        if ( v317 )
        {
          v319 = *((unsigned int *)v317 - 1);
          *(_DWORD *)(v316 + 4) = v319;
          v320 = &v317[v319];
          if ( v317 != v320 )
          {
            v321 = 8 * v319 - 8;
            if ( v321 <= 8 || v120 < (unsigned __int64)(v317 + 2) && v317 < v318 + 3 )
            {
              v403 = v317;
              v404 = v120;
              do
              {
                v405 = *v403;
                *v403++ = 0;
                v404 += 8LL;
                *(_QWORD *)(v404 - 8) = v405;
              }
              while ( v320 != v403 );
            }
            else
            {
              v322 = (v321 >> 3) + 1;
              v323 = 0;
              do
              {
                v324 = _mm_loadu_si128((const __m128i *)&v317[v323]);
                *(_OWORD *)&v317[v323] = 0;
                *(__m128i *)&v318[v323 + 1] = v324;
                v323 += 2LL;
              }
              while ( 2 * (v322 >> 1) != v323 );
              if ( (v322 & 1) != 0 )
              {
                v325 = v322 & 0xFFFFFFFFFFFFFFFELL;
                v326 = v317[v325];
                v317[v325] = 0;
                v318[v325 + 1] = v326;
              }
            }
          }
          v327 = &v317[v319];
          if ( (_DWORD)v319 )
          {
            do
            {
              while ( 1 )
              {
                v328 = *v317;
                if ( !*v317 )
                  break;
                ++v317;
                sub_186B220((void *)(v328 - 8));
                if ( v317 == v327 )
                  goto LABEL_464;
              }
              ++v317;
            }
            while ( v317 != v327 );
LABEL_464:
            v317 = *(__int64 **)(v6 + 160);
          }
          sub_186B220(v317 - 1);
          v124 = (_QWORD *)(v120 + 8LL * *((unsigned int *)v318 + 1));
          v123 = *((_DWORD *)v318 + 1) + 1;
        }
        else
        {
          *(_DWORD *)(v316 + 4) = 0;
          v124 = (_QWORD *)(v316 + 8);
          v123 = 1;
        }
        *(_QWORD *)(v6 + 160) = v120;
        *(_DWORD *)v318 = v547;
      }
      else
      {
        v122 = v121;
        v123 = v121 + 1;
        v124 = (_QWORD *)(v120 + 8 * v122);
      }
    }
    else
    {
      v380 = (_QWORD *)sub_186B270(0x18u);
      v120 = (unsigned __int64)(v380 + 1);
      *v380 = 2;
      v124 = (_QWORD *)v120;
      v123 = 1;
      *(_QWORD *)(v6 + 160) = v120;
    }
    v125 = *(_QWORD *)(v6 + 152);
    *v124 = 0;
    *(_DWORD *)(v120 - 4) = v123;
    if ( v125 )
    {
      v126 = *(_DWORD *)(v125 - 4);
      if ( v126 == *(_DWORD *)(v125 - 8) )
      {
        v301 = (3 * v126 + 1) >> 1;
        v302 = 8 * v301 + 8;
        if ( 8 * v126 + 8 >= v302 || v126 >= v301 )
        {
          v440 = (char **)__cxa_allocate_exception(0x28u);
          sub_6FFCA0(v564[0].m128i_i64, "Overflow encountered when expanding vector");
          *v440 = (char *)off_1C63128;
          sub_2333C0(v440 + 1, v564);
          sub_233E40((__int64)v564);
          __cxa_throw(v440, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v303 = sub_186B270(v302);
        v304 = *(__int64 **)(v6 + 152);
        v305 = (__int64 *)v303;
        v125 = v303 + 8;
        if ( v304 )
        {
          v306 = *((unsigned int *)v304 - 1);
          *(_DWORD *)(v303 + 4) = v306;
          v307 = &v304[v306];
          if ( v304 != v307 )
          {
            v308 = 8 * v306 - 8;
            if ( v308 <= 8 || v125 < (unsigned __int64)(v304 + 2) && v304 < v305 + 3 )
            {
              v406 = v304;
              v407 = v125;
              do
              {
                v408 = *v406;
                *v406++ = 0;
                v407 += 8LL;
                *(_QWORD *)(v407 - 8) = v408;
              }
              while ( v406 != v307 );
            }
            else
            {
              v309 = (v308 >> 3) + 1;
              v310 = 0;
              do
              {
                v311 = _mm_loadu_si128((const __m128i *)&v304[v310]);
                *(_OWORD *)&v304[v310] = 0;
                *(__m128i *)&v305[v310 + 1] = v311;
                v310 += 2LL;
              }
              while ( v310 != 2 * (v309 >> 1) );
              if ( (v309 & 1) != 0 )
              {
                v312 = v309 & 0xFFFFFFFFFFFFFFFELL;
                v313 = v304[v312];
                v304[v312] = 0;
                v305[v312 + 1] = v313;
              }
            }
          }
          if ( (_DWORD)v306 )
          {
            v546 = &v304[v306];
            do
            {
              while ( 1 )
              {
                v314 = *v304;
                if ( !*v304 )
                  break;
                ++v304;
                sub_186B220((void *)(v314 - 8));
                if ( v546 == v304 )
                  goto LABEL_445;
              }
              ++v304;
            }
            while ( v546 != v304 );
LABEL_445:
            v304 = *(__int64 **)(v6 + 152);
          }
          sub_186B220(v304 - 1);
          v129 = (_QWORD *)(v125 + 8LL * *((unsigned int *)v305 + 1));
          v128 = *((_DWORD *)v305 + 1) + 1;
        }
        else
        {
          *(_DWORD *)(v303 + 4) = 0;
          v129 = (_QWORD *)(v303 + 8);
          v128 = 1;
        }
        *(_QWORD *)(v6 + 152) = v125;
        *(_DWORD *)v305 = v301;
      }
      else
      {
        v127 = v126;
        v128 = v126 + 1;
        v129 = (_QWORD *)(v125 + 8 * v127);
      }
    }
    else
    {
      v381 = (_QWORD *)sub_186B270(0x18u);
      v125 = (unsigned __int64)(v381 + 1);
      *v381 = 2;
      v129 = (_QWORD *)v125;
      v128 = 1;
      *(_QWORD *)(v6 + 152) = v125;
    }
    *v129 = 0;
    v130 = 0xFFFFFFFFLL;
    *(_DWORD *)(v125 - 4) = v128;
    if ( (v514 & 1) == 0 )
    {
      v130 = (unsigned int)v514;
      v528 = -1;
    }
    v131 = *(unsigned int ***)&v532[16 * v514 + 8];
    if ( !v131 )
      goto LABEL_210;
    ptra = &v131[*((unsigned int *)v131 - 1)];
    if ( v131 == ptra )
      goto LABEL_210;
    while ( 1 )
    {
      v132 = *v131;
      v133 = *(_QWORD *)(v6 + 216);
      v134 = **v131;
      if ( !v133 || (unsigned int)v134 >= *(_DWORD *)(v133 - 4) || *(_DWORD *)(v133 + 4LL * (unsigned int)v134) == -1 )
      {
        v153 = *(_QWORD *)(v6 + 264);
        if ( !v153 || (unsigned int)v134 >= *(_DWORD *)(v153 - 4) || *(_DWORD *)(v153 + 4 * v134) == -1 )
          goto LABEL_209;
        v154 = sub_16235A0(v6 + 256, v132);
        v155 = 0x7FFFFFFF8LL;
        v540 = v154;
        v156 = *(_QWORD *)(v6 + 152);
        if ( v156 )
          v155 = 8LL * (unsigned int)(*(_DWORD *)(v156 - 4) - 1);
        v157 = (unsigned int **)(v156 + v155);
        v158 = *(unsigned int **)(v156 + v155);
        if ( !v158 || (v159 = *(v158 - 1), (_DWORD)v159 == *(v158 - 2)) )
        {
          sub_2FD3F0(v157);
          v158 = *v157;
          v159 = *(*v157 - 1);
        }
        v158[v159] = v540;
        v160 = *(_QWORD **)(v6 + 176);
        ++*(v158 - 1);
        if ( v160 )
        {
          v161 = *((_DWORD *)v160 - 1);
          v510 = v161;
          if ( v540 >= v161 )
          {
            v162 = v540 + 1;
            if ( v161 >= v540 + 1 )
            {
              *((_DWORD *)v160 - 1) = v162;
              goto LABEL_208;
            }
LABEL_199:
            while ( 1 )
            {
              v167 = *((_DWORD *)v160 - 2);
              if ( v167 >= v162 )
                break;
              v163 = (3 * v167 + 1) >> 1;
              v164 = 8 * v163 + 8;
              v165 = v163;
              if ( 8 * v167 + 8 >= (unsigned int)v164 || v167 >= v163 )
              {
                v435 = (char **)__cxa_allocate_exception(0x28u);
                sub_6FFCA0(v564[0].m128i_i64, "Overflow encountered when expanding vector");
                *v435 = (char *)off_1C63128;
                sub_2333C0(v435 + 1, v564);
                sub_233E40((__int64)v564);
                __cxa_throw(v435, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v166 = (unsigned int *)sub_186B300(v160 - 1, v164);
              v160 = v166 + 2;
              *v166 = v165;
              *(_QWORD *)(v6 + 176) = v166 + 2;
            }
            *((_DWORD *)v160 - 1) = v162;
            v168 = 8LL * v162;
            v169 = 8LL * v510;
            v170 = &v160[(unsigned __int64)v169 / 8];
            if ( v169 == v168 )
              goto LABEL_208;
            v171 = &v160[(unsigned __int64)v169 / 8];
            v172 = v168 - v169;
            v173 = ((unsigned __int64)(v168 - v169 - 8) >> 3) + 1;
            if ( v172 != 8 )
            {
              v174 = v173 >> 1;
              v175 = &v170[v174];
              if ( ((v174 * 16) & 0x10) == 0 || (v171 = v170 + 1, *v170 = -1, v175 != v170 + 1) )
              {
                do
                {
                  *v171 = -1;
                  v171 += 2;
                  *(v171 - 1) = -1;
                }
                while ( v175 != v171 );
              }
              if ( (v173 & 1) == 0 )
                goto LABEL_208;
              v170 = (_OWORD *)((char *)v170 + 8 * (v173 & 0xFFFFFFFFFFFFFFFELL));
            }
            *(_QWORD *)v170 = -1;
          }
LABEL_208:
          v176 = &v160[v540];
          *v176 = v130;
          v176[1] = v528;
          goto LABEL_209;
        }
        v162 = v540 + 1;
        if ( v540 == -1 )
          goto LABEL_208;
        v329 = (_QWORD *)sub_186B270(0x18u);
        v160 = v329 + 1;
        v510 = 0;
        *(_QWORD *)(v6 + 176) = v329 + 1;
        *v329 = 2;
        goto LABEL_199;
      }
      v135 = sub_16235A0(v506, v132);
      v137 = *(_QWORD *)(v6 + 160);
      v138 = v135;
      v139 = 0x7FFFFFFF8LL;
      if ( v137 )
        v139 = 8LL * (unsigned int)(*(_DWORD *)(v137 - 4) - 1);
      v140 = (_QWORD *)(v137 + v139);
      v141 = (_QWORD *)*v140;
      v538 = v140;
      if ( *v140 )
      {
        v142 = *((unsigned int *)v141 - 1);
        if ( (_DWORD)v142 == *((_DWORD *)v141 - 2) )
        {
          v266 = (unsigned int)(3 * v142 + 1) >> 1;
          v267 = 4 * v266 + 8;
          if ( 4 * (int)v142 + 8 >= (unsigned int)v267 || (unsigned int)v142 >= v266 )
          {
            v437 = (char **)__cxa_allocate_exception(0x28u);
            sub_6FFCA0(v564[0].m128i_i64, "Overflow encountered when expanding vector");
            *v437 = (char *)off_1C63128;
            sub_2333C0(v437 + 1, v564);
            sub_233E40((__int64)v564);
            __cxa_throw(v437, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v268 = (unsigned int *)sub_186B300(v141 - 1, v267);
          v136 = v538;
          v141 = v268 + 2;
          *v538 = v268 + 2;
          *v268 = v266;
          v143 = &v268[v268[1] + 2];
        }
        else
        {
          v143 = (unsigned int *)v141 + v142;
        }
      }
      else
      {
        v331 = (_QWORD *)sub_186B270(0x10u);
        v136 = (_QWORD *)(&dword_0 + 2);
        v141 = v331 + 1;
        *v331 = 2;
        *v538 = v331 + 1;
        v143 = (unsigned int *)(v331 + 1);
      }
      *v143 = v138;
      ++*((_DWORD *)v141 - 1);
      v144 = v528;
      if ( (_DWORD)v130 != -1 )
      {
        if ( v528 < (unsigned int)v130 )
          v144 = v130;
        if ( v528 == -1 )
          v144 = v130;
      }
      v145 = *(_QWORD **)(v6 + 168);
      if ( !v145 )
        break;
LABEL_179:
      if ( (unsigned int)v144 >= *((_DWORD *)v145 - 1) )
        break;
      v245 = (_QWORD *)v145[v144];
      sub_11420C0(*v245, v138 & 0x7FFFFFFF, v145, v136);
      v247 = (unsigned int *)v245[1];
      if ( v247 )
      {
        v248 = *(v247 - 1);
        if ( (_DWORD)v248 == *(v247 - 2) )
        {
          v269 = (unsigned int)(3 * v248 + 1) >> 1;
          v270 = 4 * v269 + 8;
          if ( 4 * (int)v248 + 8 >= (unsigned int)v270 || (unsigned int)v248 >= v269 )
          {
            v438 = (char **)__cxa_allocate_exception(0x28u);
            sub_6FFCA0(v564[0].m128i_i64, "Overflow encountered when expanding vector");
            *v438 = (char *)off_1C63128;
            sub_2333C0(v438 + 1, v564);
            sub_233E40((__int64)v564);
            __cxa_throw(v438, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v511 = (unsigned int)(3 * v248 + 1) >> 1;
          v271 = (unsigned int *)sub_186B300(v247 - 2, v270);
          v246 = v511;
          v247 = v271 + 2;
          v245[1] = v271 + 2;
          *v271 = v511;
          v249 = &v271[v271[1] + 2];
        }
        else
        {
          v249 = &v247[v248];
        }
      }
      else
      {
        v330 = (_QWORD *)sub_186B270(0x10u);
        v246 = 2;
        v247 = (unsigned int *)(v330 + 1);
        *v330 = 2;
        v249 = v247;
        v245[1] = v247;
      }
      *v249 = 2 * v138;
      ++*(v247 - 1);
      sub_11420C0(v519, v138, v247, v246);
      v250 = *(unsigned int *)(v6 + 192);
      if ( 3 * (int)v250 < (unsigned int)(4 * (*(_DWORD *)(v6 + 196) + *(_DWORD *)(v6 + 200))) )
      {
        v502 = 20LL * (unsigned int)(2 * v250);
        v272 = sub_186B270(v502);
        v273 = 2 * v250;
        v543 = v272;
        v252 = v502;
        if ( 2 * (_DWORD)v250 )
        {
          v274 = v272;
          v275 = v272 + 12;
          do
          {
            *(_QWORD *)(v275 - 12) = 0;
            v275 += 40;
            *(_QWORD *)(v275 - 32) = 0;
            *(_QWORD *)(v275 - 40) = -1;
            *(_QWORD *)(v275 - 20) = -1;
          }
          while ( v274 + 40 * (v250 & 0x7FFFFFFF) + 12 != v275 );
          v543 = v274;
        }
        v276 = *(const __m128i **)(v6 + 184);
        v251 = v273 - 1;
        v277 = (__m128i *)((char *)v276 + 20 * *(unsigned int *)(v6 + 192));
        v253 = (__m128i *)(v502 + v543);
        if ( v276 != v277 )
        {
          do
          {
            while ( v276->m128i_i32[1] != 2 )
            {
              v276 = (const __m128i *)((char *)v276 + 20);
              if ( v277 == v276 )
                goto LABEL_395;
            }
            v278 = v543;
            v279 = 20LL * (v276->m128i_i32[0] & v251);
            v280 = (__m128i *)(v543 + v279);
            if ( v502 == v279 )
            {
LABEL_419:
              v278 = v543;
              if ( (__m128i *)v543 == v280 )
              {
LABEL_428:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v281 = (__m128i *)v543;
              while ( v281->m128i_i32[1] )
              {
                v281 = (__m128i *)((char *)v281 + 20);
                if ( v280 == v281 )
                  goto LABEL_428;
              }
            }
            else
            {
              v281 = (__m128i *)(v543 + v279);
              while ( v281->m128i_i32[1] )
              {
                v281 = (__m128i *)((char *)v281 + 20);
                if ( v253 == v281 )
                  goto LABEL_419;
              }
            }
            v282 = _mm_loadu_si128(v276);
            v543 = v278;
            v276 = (const __m128i *)((char *)v276 + 20);
            *v281 = v282;
            v281[1].m128i_i32[0] = v276[-1].m128i_i32[3];
          }
          while ( v277 != v276 );
LABEL_395:
          v277 = *(__m128i **)(v6 + 184);
        }
        if ( v277 )
        {
          v497 = v273;
          v500 = v253;
          v512 = v273 - 1;
          sub_186B220(v277);
          v273 = v497;
          v253 = v500;
          v252 = v502;
          v251 = v512;
        }
        *(_DWORD *)(v6 + 192) = v273;
        *(_DWORD *)(v6 + 200) = 0;
        *(_QWORD *)(v6 + 184) = v543;
      }
      else
      {
        v251 = v250 - 1;
        v252 = 20 * v250;
        v543 = *(_QWORD *)(v6 + 184);
        v253 = (__m128i *)(20 * v250 + v543);
      }
      v254 = 20LL * (v138 & v251);
      v255 = (__m128i *)(v543 + v254);
      if ( v254 == v252 )
      {
        v257 = nullptr;
        v260 = (__m128i *)v543;
        goto LABEL_355;
      }
      v256 = (__m128i *)(v543 + v254);
      v257 = nullptr;
      while ( 1 )
      {
        v258 = v256->m128i_i32[1];
        if ( v258 == 2 )
        {
          if ( v138 == v256->m128i_i32[0] && v138 == v256->m128i_i32[2] )
          {
            v256->m128i_i32[2] = v138;
            v256->m128i_i32[3] = v130;
            v256[1].m128i_i32[0] = v528;
            v256->m128i_i32[1] = 2;
            goto LABEL_209;
          }
          goto LABEL_348;
        }
        if ( !v258 )
          break;
        v257 = v256;
LABEL_348:
        v256 = (__m128i *)((char *)v256 + 20);
        if ( v256 == v253 )
        {
          v260 = (__m128i *)v543;
LABEL_355:
          if ( v255 == v260 )
          {
LABEL_399:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v261 = v260;
          while ( 1 )
          {
            v262 = v261->m128i_i32[1];
            if ( v262 == 2 )
            {
              if ( v138 == v261->m128i_i32[0] && v138 == v261->m128i_i32[2] )
              {
                v261->m128i_i32[2] = v138;
                v261->m128i_i32[3] = v130;
                v261[1].m128i_i32[0] = v528;
                v261->m128i_i32[1] = 2;
                goto LABEL_209;
              }
            }
            else
            {
              if ( !v262 )
              {
                if ( !v257 )
                {
                  v257 = v261;
                  goto LABEL_381;
                }
LABEL_380:
                --*(_DWORD *)(v6 + 200);
                goto LABEL_381;
              }
              v257 = v261;
            }
            v261 = (__m128i *)((char *)v261 + 20);
            if ( v255 == v261 )
              goto LABEL_399;
          }
        }
      }
      if ( v257 )
        goto LABEL_380;
      v257 = v256;
LABEL_381:
      v257->m128i_i32[2] = v138;
      v257->m128i_i32[3] = v130;
      v257[1].m128i_i32[0] = v528;
      v257->m128i_i32[1] = 2;
      v257->m128i_i32[0] = v138;
      ++*(_DWORD *)(v6 + 196);
LABEL_209:
      if ( ptra == ++v131 )
      {
LABEL_210:
        if ( (unsigned int)++v514 >= *((_DWORD *)v532 - 1) )
          goto LABEL_211;
        goto LABEL_152;
      }
    }
    v148 = (_QWORD *)sub_186B270(0x10u);
    v145 = *(_QWORD **)(v6 + 168);
    v509 = v148;
    v148[1] = 0;
    *v148 = v519;
    if ( v145 )
    {
      v149 = *((_DWORD *)v145 - 1);
      if ( v149 == *((_DWORD *)v145 - 2) )
      {
        v150 = (3 * v149 + 1) >> 1;
        v151 = 8 * v150 + 8;
        v539 = v150;
        if ( 8 * v149 + 8 >= (unsigned int)v151 || v149 >= v150 )
        {
          v436 = (char **)__cxa_allocate_exception(0x28u);
          sub_6FFCA0(v564[0].m128i_i64, "Overflow encountered when expanding vector");
          *v436 = (char *)off_1C63128;
          sub_2333C0(v436 + 1, v564);
          sub_233E40((__int64)v564);
          __cxa_throw(v436, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v152 = (unsigned int *)sub_186B300(v145 - 1, v151);
        v145 = v152 + 2;
        *(_QWORD *)(v6 + 168) = v152 + 2;
        *v152 = v539;
        LODWORD(v152) = v152[1];
        v136 = &v145[(unsigned int)v152];
        v147 = (_DWORD)v152 + 1;
      }
      else
      {
        v146 = v149;
        v147 = v149 + 1;
        v136 = &v145[v146];
      }
    }
    else
    {
      v259 = (_QWORD *)sub_186B270(0x18u);
      v145 = v259 + 1;
      *(_QWORD *)(v6 + 168) = v259 + 1;
      *v259 = 2;
      v136 = v259 + 1;
      v147 = 1;
    }
    *v136 = v509;
    *((_DWORD *)v145 - 1) = v147;
    goto LABEL_179;
  }
LABEL_211:
  v177 = *(_QWORD *)(v6 + 272);
  if ( v177 )
  {
    for ( j = v177 + 16LL * *(unsigned int *)(v177 - 4); j != v177; v177 += 16 )
    {
      v564[0].m128i_i32[0] = *(_DWORD *)(v177 + 8);
      v564[0].m128i_i64[1] = *(_QWORD *)v177;
      sub_704D20(v6 + 328, v564);
    }
  }
  v179 = *(_QWORD *)(v6 + 224);
  if ( v179 )
  {
    for ( k = v179 + 16LL * *(unsigned int *)(v179 - 4); k != v179; v179 += 16 )
    {
      v563.m128i_i32[0] = *(_DWORD *)(v179 + 8);
      v563.m128i_i64[1] = *(_QWORD *)v179;
      sub_704D20(v6 + 304, &v563);
    }
  }
  *(_DWORD *)(v6 + 56) = 2 * sub_16235A0(v506, v495);
  v181 = (__int64 *)sub_1142040(v519);
  v182 = v181[1];
  v183 = *v181;
  v184 = v181;
  v185 = 0;
  v186 = 0;
  if ( *v181 != v182 )
  {
    do
    {
      if ( *(_QWORD *)(v183 + 8 * v186) )
      {
        sub_705380(v6, 2 * v185);
        v183 = *v184;
        v182 = v184[1];
      }
      v186 = ++v185;
    }
    while ( v185 < (unsigned __int64)((v182 - v183) >> 3) );
  }
  v187 = (char *)v565[0] + 8 * LODWORD(v565[1]);
  v188 = v565[0];
  v189 = (_DWORD **)v565[0];
  if ( v565[0] < v187 )
  {
    do
    {
      while ( 1 )
      {
        v190 = *v189;
        if ( *v189 )
        {
          v12 = v190[8]-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v189 >= (_DWORD **)v187 )
          goto LABEL_227;
      }
      sub_ED44E0(v190);
      sub_186B220(v190);
      ++v189;
    }
    while ( v189 < (_DWORD **)v187 );
LABEL_227:
    v188 = v565[0];
  }
  if ( v188 != v459 && v188 )
    sub_186B220(v188);
  v191 = v556;
  v192 = v556;
  if ( v556 )
  {
    v541 = *((_DWORD *)v556 + 8);
    *((_DWORD *)v556 + 8) = v541 - 1;
    if ( v541 == 1 )
    {
      v402 = v191;
      sub_ED44E0(v192);
      sub_186B220(v402);
    }
  }
  sub_6FFC80(v495, v490);
  sub_6FFC80(v475, v480);
  if ( v579 )
    sub_186B220(v579);
  if ( v578 )
    sub_186B220(v578);
  if ( v577 )
    sub_186B220((void *)(v577 - 8));
  v193 = (void (__fastcall ***)(_QWORD))v576;
  v194 = v576;
  if ( v576 )
  {
    v542 = *((_DWORD *)v576 + 2);
    *((_DWORD *)v576 + 2) = v542 - 1;
    if ( v542 == 1 )
    {
      v401 = v193;
      (**v193)(v194);
      sub_186B220(v401);
    }
  }
  sub_2334C0(&v575);
  if ( v574 )
    sub_186B220(v574);
  if ( v573 )
    sub_186B220(v573);
  if ( v572 )
    sub_186B220(v572);
  if ( v571 )
    sub_186B220(v571);
  if ( v570 )
    sub_186B220((void *)(v570 - 8));
  sub_2334C0(&v569);
  v195 = v568;
  if ( v568 )
  {
    v196 = *((unsigned int *)v568 - 1);
    if ( (_DWORD)v196 )
    {
      v197 = &v568[2 * v196];
      do
      {
        v198 = (__int64 *)v195[1];
        if ( v198 )
        {
          v199 = &v198[*((unsigned int *)v198 - 1)];
          if ( v198 >= v199 )
            goto LABEL_264;
          do
          {
            while ( 1 )
            {
              v200 = *v198;
              if ( *v198 )
              {
                v201 = *v195;
                v12 = (*(_DWORD *)(v200 + 8))-- == 1;
                if ( v12 )
                  break;
              }
              if ( ++v198 >= v199 )
                goto LABEL_263;
            }
            sub_15D7BC0(v201, v200);
            ++v198;
          }
          while ( v198 < v199 );
LABEL_263:
          v198 = (__int64 *)v195[1];
          if ( v198 )
LABEL_264:
            sub_186B220(v198 - 1);
        }
        v195 += 2;
      }
      while ( v197 != v195 );
      v195 = v568;
    }
    sub_186B220(v195 - 1);
  }
  v202 = v562;
  if ( v562 )
  {
    v203 = (unsigned __int64)&v562[*((unsigned int *)v562 - 1)];
    if ( (unsigned __int64)v562 >= v203 )
      goto LABEL_276;
    v204 = v562;
    do
    {
      while ( 1 )
      {
        v205 = *v204;
        if ( *v204 )
        {
          v206 = *(_QWORD *)v561;
          v12 = (*(_DWORD *)(v205 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( (unsigned __int64)++v204 >= v203 )
          goto LABEL_275;
      }
      sub_15D7BC0(v206, v205);
      ++v204;
    }
    while ( (unsigned __int64)v204 < v203 );
LABEL_275:
    v202 = v562;
    if ( v562 )
LABEL_276:
      sub_186B220(v202 - 1);
  }
  v207 = *((unsigned int *)v532 - 1);
  if ( (_DWORD)v207 )
  {
    v208 = v532;
    v209 = &v532[16 * v207];
    do
    {
      v210 = *((__int64 **)v208 + 1);
      if ( v210 )
      {
        v211 = &v210[*((unsigned int *)v210 - 1)];
        if ( v210 >= v211 )
          goto LABEL_287;
        do
        {
          while ( 1 )
          {
            v212 = *v210;
            if ( *v210 )
            {
              v213 = *(_QWORD *)v208;
              v12 = (*(_DWORD *)(v212 + 8))-- == 1;
              if ( v12 )
                break;
            }
            if ( ++v210 >= v211 )
              goto LABEL_286;
          }
          sub_15D7BC0(v213, v212);
          ++v210;
        }
        while ( v210 < v211 );
LABEL_286:
        v210 = *((__int64 **)v208 + 1);
        if ( v210 )
LABEL_287:
          sub_186B220(v210 - 1);
      }
      v208 += 16;
    }
    while ( v208 != v209 );
  }
  sub_186B220(v532 - 8);
  sub_1580D10(v504);
  sub_2334C0(v453);
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        ++*(_DWORD *)(v6 + 432);
        sub_703E10(v6);
        v214 = sub_114A3A0(v519, v6 + 360);
        if ( !v214 )
        {
          v352 = *v470;
          if ( *v470 )
            ++*(_DWORD *)(v352 + 32);
          v353 = *(_DWORD *)(v493 + 12);
          if ( *(_DWORD *)(v493 + 8) < v353 )
          {
            v356 = *(_DWORD *)(v493 + 8);
          }
          else
          {
            v354 = 2 * v353;
            v355 = sub_186B270(8 * v354);
            v356 = *(_DWORD *)(v493 + 8);
            v357 = *(_QWORD **)v493;
            if ( v356 )
            {
              if ( v356 - 1 <= 2 || (_QWORD *)v355 == v357 + 1 )
              {
                for ( m = 0; m != v356; ++m )
                  *(_QWORD *)(v355 + m * 8) = v357[m];
              }
              else
              {
                v358 = 0;
                do
                {
                  *(__m128i *)(v355 + v358 * 8) = _mm_loadu_si128((const __m128i *)&v357[v358]);
                  v358 += 2;
                }
                while ( 2LL * (v356 >> 1) != v358 );
                if ( (v356 & 1) != 0 )
                  *(_QWORD *)(v355 + 8LL * (v356 & 0xFFFFFFFE)) = v357[v356 & 0xFFFFFFFE];
              }
            }
            if ( v357 != (_QWORD *)(v493 + 16) && v357 )
            {
              sub_186B220(v357);
              v356 = *(_DWORD *)(v493 + 8);
            }
            *(_QWORD *)v493 = v355;
            *(_DWORD *)(v493 + 12) = v354;
          }
          *(_QWORD *)(*(_QWORD *)v493 + 8LL * v356) = v352;
          *(_DWORD *)(v493 + 8) = v356 + 1;
          v359 = (char **)__cxa_allocate_exception(0x28u);
          sub_6FFCA0(v464, "search failed");
          *v359 = (char *)off_1C63670;
          sub_2333C0(v359 + 1, v464);
          sub_233E40((__int64)v464);
          __cxa_throw(v359, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
        }
        if ( v214 != 1 )
          break;
        v332 = *(_QWORD *)(v6 + 376);
        if ( v332 )
          v333 = (*(_DWORD *)(v332 - 4) & 1) == 0;
        else
          v333 = 1;
        sub_702C60(v6 + 24, v333);
        v334 = *(_QWORD *)(v6 + 368);
        if ( v334 )
          v335 = *(_DWORD *)(v334 - 4);
        else
          v335 = 0;
        v336 = *(_QWORD *)(v6 + 376);
        if ( !v336 || (v337 = *(unsigned int *)(v336 - 4), (_DWORD)v337 == *(_DWORD *)(v336 - 8)) )
        {
          sub_2FD3F0((unsigned int **)(v6 + 376));
          v336 = *(_QWORD *)(v6 + 376);
          v337 = *(unsigned int *)(v336 - 4);
        }
        *(_DWORD *)(v336 + 4 * v337) = v335;
        ++*(_DWORD *)(v336 - 4);
      }
    }
    while ( v214 != -1 );
    v215 = *(_QWORD *)(v6 + 376);
    if ( !v215 )
      break;
    v216 = *(_DWORD *)(v215 - 4);
    if ( !v216 )
      break;
    if ( v216 == 1 && !*(_DWORD *)(v6 + 408) )
    {
      sub_ED2DA0(*v470);
      *(_DWORD *)(*v470 + 120) = (*(_DWORD *)(*v470 + 120) + 1) & 0x3FFFFFF | *(_DWORD *)(*v470 + 120) & 0xFC000000;
      v367 = *v470;
      if ( *v470 )
        ++*(_DWORD *)(v367 + 32);
      v368 = *(_DWORD *)(v493 + 8);
      v369 = *(_DWORD *)(v493 + 12);
      if ( v368 >= v369 )
      {
        v418 = 2 * v369;
        v370 = sub_186B270(16LL * v369);
        v368 = *(_DWORD *)(v493 + 8);
        v419 = *(_QWORD **)v493;
        if ( v368 )
        {
          if ( v368 - 1 <= 2 || (_QWORD *)v370 == v419 + 1 )
          {
            for ( n = 0; n != v368; ++n )
              *(_QWORD *)(v370 + n * 8) = v419[n];
          }
          else
          {
            v420 = 0;
            do
            {
              *(__m128i *)(v370 + v420 * 8) = _mm_loadu_si128((const __m128i *)&v419[v420]);
              v420 += 2;
            }
            while ( v420 != 2LL * (v368 >> 1) );
            if ( (v368 & 1) != 0 )
              *(_QWORD *)(v370 + 8LL * (v368 & 0xFFFFFFFE)) = v419[v368 & 0xFFFFFFFE];
          }
        }
        if ( v419 != (_QWORD *)(v493 + 16) && v419 )
        {
          sub_186B220(v419);
          v368 = *(_DWORD *)(v493 + 8);
        }
        *(_QWORD *)v493 = v370;
        v371 = v493;
        *(_DWORD *)(v493 + 12) = v418;
      }
      else
      {
        v370 = *(_QWORD *)v493;
        v371 = v493;
      }
      *(_QWORD *)(v370 + 8LL * v368) = v367;
      *(_DWORD *)(v371 + 8) = v368 + 1;
      if ( (*(_BYTE *)(*v470 + 123) & 4) != 0 )
      {
        v567 = nullptr;
        v372 = sub_701D50(v6, (void **)v464);
        v373 = (void (__fastcall ***)(void *))v567;
        if ( !v372 )
        {
          sub_1872CE0("");
          sub_1873130(114, 895);
        }
        v374 = sub_1336AB0(*(_QWORD *)(v6 + 648), v567);
        v375 = (void (__fastcall ***)(void *))v374;
        if ( v374 )
          ++*(_DWORD *)(v374 + 8);
        if ( v373 )
        {
          v548 = *((_DWORD *)v373 + 2);
          *((_DWORD *)v373 + 2) = v548 - 1;
          if ( v548 == 1 )
          {
            (**v373)(v373);
            sub_186B220(v373);
          }
        }
        v376 = *v470;
        v377 = sub_1336AB0(*(_QWORD *)(*v470 + 8), v375);
        v378 = v377;
        if ( v377 )
          ++*(_DWORD *)(v377 + 8);
        v379 = *(_DWORD **)(v376 + 8);
        if ( v379 )
        {
          v549 = v379[2];
          v379[2] = v549 - 1;
          if ( v549 == 1 )
          {
            v430 = v379;
            (**(void (__fastcall ***)(_DWORD *))v379)(v379);
            sub_186B220(v430);
          }
        }
        *(_QWORD *)(v376 + 8) = v378;
        if ( v375 )
        {
          v12 = (*((_DWORD *)v375 + 2))-- == 1;
          if ( v12 )
          {
            (**v375)(v375);
            sub_186B220(v375);
          }
        }
      }
      goto LABEL_522;
    }
    if ( *(_BYTE *)(v6 + 144) )
    {
      if ( *(_DWORD *)(v6 + 408) == 1 )
      {
        sub_705850(v6);
      }
      else
      {
        v565[1] = nullptr;
        v565[0] = (void *)(v6 + 40);
        sub_703280(v6, v216 - 1, v565);
        v218 = v565[1];
        v219 = v565[0];
        v529 = v565[1];
        if ( v565[1] )
        {
          v220 = *((unsigned int *)v565[1] - 1);
          if ( (_DWORD)v220 )
          {
            v221 = (unsigned int *)v565[1];
            v222 = -1;
            v223 = -1;
            v533 = (unsigned int *)((char *)v565[1] + 4 * v220);
            while ( 1 )
            {
              while ( 1 )
              {
                v227 = sub_705380(v6, *v221);
                if ( v223 == -1 )
                  break;
                v224 = v227;
                if ( v223 >= (unsigned int)v227 )
                  v224 = v223;
                if ( (_DWORD)v227 != -1 )
                  v223 = v224;
                v225 = HIDWORD(v227);
                if ( v222 == -1 )
                  goto LABEL_314;
LABEL_307:
                v226 = v225;
                if ( v222 >= (unsigned int)v225 )
                  v226 = v222;
                if ( (_DWORD)v225 != -1 )
                  v222 = v226;
                if ( ++v221 == v533 )
                  goto LABEL_315;
              }
              v223 = v227;
              v225 = HIDWORD(v227);
              if ( v222 != -1 )
                goto LABEL_307;
LABEL_314:
              v222 = v225;
              if ( ++v221 == v533 )
                goto LABEL_315;
            }
          }
        }
        v222 = -1;
        v223 = -1;
LABEL_315:
        v228 = *(_QWORD *)(v6 + 376);
        v229 = *(_DWORD *)(v6 + 56);
        if ( !v228 || (*(_BYTE *)(v228 - 4) & 1) == 0 )
          v229 ^= 1u;
        sub_11420C0(v219, v229 >> 1, v217, v218);
        if ( !v529 || (v230 = (unsigned int)*(v529 - 1), (_DWORD)v230 == *(v529 - 2)) )
        {
          sub_692C60((unsigned int **)&v565[1]);
          si128 = (__m128)_mm_load_si128((const __m128i *)v565);
          a6 = _mm_movehl_ps(a6, si128);
          v231 = a6.m128_u64[0];
          v230 = *(unsigned int *)(a6.m128_u64[0] - 4);
        }
        else
        {
          v231 = (unsigned __int64)v529;
          si128 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v219, (__m128i)(unsigned __int64)v529);
        }
        *(_DWORD *)(v231 + 4 * v230) = v229;
        ++*(_DWORD *)(v231 - 4);
        *(__m128 *)v565 = si128;
        sub_703AD0(v6, v565);
        v233 = v565[0];
        v530 = (unsigned int *)v565[1];
        v234 = *(_QWORD *)(v6 + 376);
        if ( v223 == -1 )
        {
          if ( v222 == -1 )
          {
            if ( v234 )
              v236 = *(_DWORD *)(v234 - 4) & 0xFFFFFFFE;
            else
              v236 = 0;
          }
          else
          {
            if ( !v234 )
              goto LABEL_326;
            v414 = *(_DWORD *)(v234 - 4);
            v236 = v414 - v222;
            if ( v414 < v222 + 2 )
              v236 = 2;
          }
        }
        else if ( v222 == -1 )
        {
          if ( !v234 )
          {
LABEL_326:
            v236 = 2;
            goto LABEL_327;
          }
          v422 = *(_DWORD *)(v234 - 4);
          v236 = v422 - v223;
          if ( v422 < v223 + 2 )
            v236 = 2;
        }
        else
        {
          if ( v222 < v223 )
            v222 = v223;
          if ( v234 )
          {
            v235 = *(_DWORD *)(v234 - 4);
            if ( v235 < v222 + 2 )
              goto LABEL_326;
          }
          else
          {
            if ( v222 != -2 )
              goto LABEL_326;
            v235 = 0;
          }
          v236 = v235 - v222;
        }
LABEL_327:
        v237 = *(_QWORD *)(v6 + 88);
        *(_BYTE *)(v6 + 144) = 0;
        if ( v237 )
          *(_DWORD *)(v237 - 4) = 0;
        v238 = *(_QWORD *)(v6 + 96);
        if ( v238 )
          *(_DWORD *)(v238 - 4) = 0;
        sub_1144D70(v519, v6 + 64);
        v239 = *(_QWORD *)(v6 + 376);
        v240 = *(_QWORD *)(v6 + 368);
        if ( v239 )
        {
          v241 = *(_DWORD *)(v239 - 4) - v236;
          if ( v240 )
            *(_DWORD *)(v240 - 4) = *(_DWORD *)(v239 + 4LL * v241);
          *(_DWORD *)(v239 - 4) = v241;
        }
        else if ( v240 )
        {
          *(_DWORD *)(v240 - 4) = *(_DWORD *)(4LL * -v236);
        }
        if ( v530 )
        {
          v242 = v530;
          v243 = &v530[*(v530 - 1)];
          if ( v530 != v243 )
          {
            do
            {
              v244 = *v242++;
              sub_1144670(v233, v244 >> 1);
            }
            while ( v243 != v242 );
          }
          *(v530 - 1) = 0;
          sub_186B220(v530 - 2);
        }
      }
    }
    else
    {
      v409 = *(_QWORD *)(v6 + 88);
      if ( v409 )
        *(_DWORD *)(v409 - 4) = 0;
      v410 = *(_QWORD *)(v6 + 96);
      if ( v410 )
        *(_DWORD *)(v410 - 4) = 0;
      sub_1144D70(v519, v6 + 64);
      v411 = *(_QWORD *)(v6 + 376);
      v412 = *(_QWORD *)(v6 + 368);
      if ( v411 )
      {
        v413 = *(_DWORD *)(v411 - 4) - 1;
        if ( v412 )
          *(_DWORD *)(v412 - 4) = *(_DWORD *)(v411 + 4LL * v413);
        *(_DWORD *)(v411 - 4) = v413;
      }
      else if ( v412 )
      {
        *(_DWORD *)(v412 - 4) = MEMORY[0x3FFFFFFFC];
      }
    }
  }
  sub_ED2DA0(*v470);
  *(_DWORD *)(*v470 + 120) = (*(_DWORD *)(*v470 + 120) + 1) & 0x3FFFFFF | *(_DWORD *)(*v470 + 120) & 0xFC000000;
  if ( *(_DWORD *)(v6 + 408) == 1 )
  {
    v424 = *(_QWORD *)(v6 + 488);
    v425 = *(_QWORD *)(v6 + 480);
    if ( v424 )
      v426 = *(unsigned int *)(v424 - 4);
    else
      v426 = 0;
    v427 = sub_15EC1C0(*(_QWORD *)(v6 + 480), v426);
    if ( v427 )
      ++*(_DWORD *)(v427 + 8);
    v428 = *(_QWORD *)v557;
    *(_QWORD *)v557 = v427;
    sub_6FFC80(v428, v425);
    LODWORD(v360) = v557[0];
  }
  else
  {
    v360 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 864LL);
    if ( v360 )
      ++*(_DWORD *)(v360 + 8);
    sub_6FFC80(*(__int64 *)v557, v558);
    *(_QWORD *)v557 = v360;
  }
  v361 = v470;
  sub_EDBA20(*v470, v360, 0, v448, (int)v453, (int)v459, (__int64)v464, (__int64)v470);
  v362 = *v361;
  if ( *v361 )
    ++*(_DWORD *)(v362 + 32);
  v363 = *(_DWORD *)(v493 + 8);
  v364 = *(_DWORD *)(v493 + 12);
  if ( v363 >= v364 )
  {
    v415 = 2 * v364;
    v365 = sub_186B270(16LL * v364);
    v363 = *(_DWORD *)(v493 + 8);
    v416 = *(_QWORD **)v493;
    if ( v363 )
    {
      if ( v363 - 1 <= 2 || (_QWORD *)v365 == v416 + 1 )
      {
        for ( ii = 0; ii != v363; ++ii )
          *(_QWORD *)(v365 + ii * 8) = v416[ii];
      }
      else
      {
        v417 = 0;
        do
        {
          *(__m128i *)(v365 + v417 * 8) = _mm_loadu_si128((const __m128i *)&v416[v417]);
          v417 += 2;
        }
        while ( 2LL * (v363 >> 1) != v417 );
        if ( (v363 & 1) != 0 )
          *(_QWORD *)(v365 + 8LL * (v363 & 0xFFFFFFFE)) = v416[v363 & 0xFFFFFFFE];
      }
    }
    if ( v416 != (_QWORD *)(v493 + 16) && v416 )
    {
      sub_186B220(v416);
      v363 = *(_DWORD *)(v493 + 8);
    }
    *(_QWORD *)v493 = v365;
    *(_DWORD *)(v493 + 12) = v415;
  }
  else
  {
    v365 = *(_QWORD *)v493;
  }
  *(_QWORD *)(v365 + 8LL * v363) = v362;
  *(_DWORD *)(v493 + 8) = v363 + 1;
LABEL_522:
  sub_6FFC80(*(__int64 *)v557, v558);
  if ( v552 )
    sub_186B220((void *)(v552 - 8));
  return sub_EE4A00(v448);
}

