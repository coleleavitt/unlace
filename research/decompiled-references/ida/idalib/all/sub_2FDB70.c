int __fastcall sub_2FDB70(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rbp
  void **v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __m128 v7; // xmm2
  __m128 v8; // xmm0
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm4
  __m128 v18; // xmm0
  size_t v19; // rax
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  size_t v24; // rax
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __m128i si128; // xmm5
  void **v30; // r14
  unsigned int v31; // eax
  void **v32; // r14
  unsigned int v33; // eax
  void **v34; // r14
  unsigned int v35; // eax
  void **v36; // r14
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // eax
  unsigned int v62; // eax
  unsigned int v63; // eax
  unsigned int v64; // eax
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // eax
  unsigned int v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // eax
  void **v72; // r14
  __int64 v73; // rbx
  void **v74; // rsi
  __int64 v75; // rdi
  void **v76; // r14
  void **v77; // rax
  void *v78; // rdi
  void **v79; // rbx
  unsigned int v80; // eax
  void **v81; // rbx
  unsigned int v82; // eax
  void **v84; // [rsp+0h] [rbp-1838h] BYREF
  void **v85; // [rsp+8h] [rbp-1830h]
  void **v86; // [rsp+10h] [rbp-1828h]
  char *v87; // [rsp+18h] [rbp-1820h] BYREF
  __m128 v88; // [rsp+20h] [rbp-1818h] BYREF
  __m128i v89; // [rsp+30h] [rbp-1808h] BYREF
  void **v90; // [rsp+40h] [rbp-17F8h]
  void **v91; // [rsp+48h] [rbp-17F0h]
  void **v92; // [rsp+50h] [rbp-17E8h]
  void **v93; // [rsp+58h] [rbp-17E0h]
  void **v94; // [rsp+60h] [rbp-17D8h]
  void **v95; // [rsp+68h] [rbp-17D0h]
  void **v96; // [rsp+70h] [rbp-17C8h]
  void **v97; // [rsp+78h] [rbp-17C0h]
  void **v98; // [rsp+80h] [rbp-17B8h]
  void **v99; // [rsp+88h] [rbp-17B0h]
  void **v100; // [rsp+90h] [rbp-17A8h]
  void **v101; // [rsp+98h] [rbp-17A0h]
  void **v102; // [rsp+A0h] [rbp-1798h]
  void **v103; // [rsp+A8h] [rbp-1790h]
  void **v104; // [rsp+B0h] [rbp-1788h]
  void **v105; // [rsp+B8h] [rbp-1780h]
  void **v106; // [rsp+C0h] [rbp-1778h]
  void **v107; // [rsp+C8h] [rbp-1770h]
  void **v108; // [rsp+D0h] [rbp-1768h]
  void **v109; // [rsp+D8h] [rbp-1760h]
  void **v110; // [rsp+E0h] [rbp-1758h]
  void **v111; // [rsp+E8h] [rbp-1750h]
  void **v112; // [rsp+F0h] [rbp-1748h]
  void **v113; // [rsp+F8h] [rbp-1740h]
  void **v114; // [rsp+100h] [rbp-1738h]
  void **v115; // [rsp+108h] [rbp-1730h]
  void **v116; // [rsp+110h] [rbp-1728h]
  void **v117; // [rsp+118h] [rbp-1720h]
  void **v118; // [rsp+120h] [rbp-1718h]
  void **v119; // [rsp+128h] [rbp-1710h]
  __int64 v120; // [rsp+130h] [rbp-1708h] BYREF
  __int64 v121; // [rsp+138h] [rbp-1700h] BYREF
  __int64 v122; // [rsp+140h] [rbp-16F8h] BYREF
  __int64 v123; // [rsp+148h] [rbp-16F0h] BYREF
  __int64 v124; // [rsp+150h] [rbp-16E8h] BYREF
  __int64 v125; // [rsp+158h] [rbp-16E0h] BYREF
  __int64 v126; // [rsp+160h] [rbp-16D8h] BYREF
  __int64 v127; // [rsp+168h] [rbp-16D0h] BYREF
  __int64 v128; // [rsp+170h] [rbp-16C8h] BYREF
  __int64 v129; // [rsp+178h] [rbp-16C0h] BYREF
  __int64 v130; // [rsp+180h] [rbp-16B8h] BYREF
  __int64 v131; // [rsp+188h] [rbp-16B0h] BYREF
  __int64 v132; // [rsp+190h] [rbp-16A8h] BYREF
  __int64 v133; // [rsp+198h] [rbp-16A0h] BYREF
  __int64 v134; // [rsp+1A0h] [rbp-1698h] BYREF
  __int64 v135; // [rsp+1A8h] [rbp-1690h] BYREF
  __int64 v136; // [rsp+1B0h] [rbp-1688h] BYREF
  __int64 v137; // [rsp+1B8h] [rbp-1680h] BYREF
  __int64 v138; // [rsp+1C0h] [rbp-1678h] BYREF
  __int64 v139; // [rsp+1C8h] [rbp-1670h] BYREF
  __int64 v140; // [rsp+1D0h] [rbp-1668h] BYREF
  __int64 v141; // [rsp+1D8h] [rbp-1660h] BYREF
  __int64 v142; // [rsp+1E0h] [rbp-1658h] BYREF
  __int64 v143; // [rsp+1E8h] [rbp-1650h] BYREF
  __int64 v144; // [rsp+1F0h] [rbp-1648h] BYREF
  __int64 v145; // [rsp+1F8h] [rbp-1640h] BYREF
  __int64 v146; // [rsp+200h] [rbp-1638h] BYREF
  __int64 v147; // [rsp+208h] [rbp-1630h] BYREF
  __int64 v148; // [rsp+210h] [rbp-1628h] BYREF
  __int64 v149; // [rsp+218h] [rbp-1620h] BYREF
  __int64 v150; // [rsp+220h] [rbp-1618h] BYREF
  __int64 v151; // [rsp+228h] [rbp-1610h] BYREF
  __int64 v152; // [rsp+230h] [rbp-1608h] BYREF
  __int64 v153; // [rsp+238h] [rbp-1600h] BYREF
  __int64 v154; // [rsp+240h] [rbp-15F8h] BYREF
  __int64 v155; // [rsp+248h] [rbp-15F0h] BYREF
  __int64 v156; // [rsp+250h] [rbp-15E8h] BYREF
  __int64 v157; // [rsp+258h] [rbp-15E0h] BYREF
  void *v158[2]; // [rsp+260h] [rbp-15D8h] BYREF
  __int64 v159; // [rsp+270h] [rbp-15C8h]
  void *v160[2]; // [rsp+280h] [rbp-15B8h] BYREF
  __int64 v161; // [rsp+290h] [rbp-15A8h]
  void *v162[2]; // [rsp+2A0h] [rbp-1598h] BYREF
  __int64 v163; // [rsp+2B0h] [rbp-1588h]
  void *v164[2]; // [rsp+2C0h] [rbp-1578h] BYREF
  __int64 v165; // [rsp+2D0h] [rbp-1568h]
  void *v166[2]; // [rsp+2E0h] [rbp-1558h] BYREF
  __int64 v167; // [rsp+2F0h] [rbp-1548h]
  void *v168[2]; // [rsp+300h] [rbp-1538h] BYREF
  __int64 v169; // [rsp+310h] [rbp-1528h]
  void *v170[2]; // [rsp+320h] [rbp-1518h] BYREF
  __int64 v171; // [rsp+330h] [rbp-1508h]
  void *v172[2]; // [rsp+340h] [rbp-14F8h] BYREF
  __int64 v173; // [rsp+350h] [rbp-14E8h]
  void *v174[2]; // [rsp+360h] [rbp-14D8h] BYREF
  __int64 v175; // [rsp+370h] [rbp-14C8h]
  void *v176[2]; // [rsp+380h] [rbp-14B8h] BYREF
  __int64 v177; // [rsp+390h] [rbp-14A8h]
  void *v178[2]; // [rsp+3A0h] [rbp-1498h] BYREF
  __int64 v179; // [rsp+3B0h] [rbp-1488h]
  void *v180[2]; // [rsp+3C0h] [rbp-1478h] BYREF
  __int64 v181; // [rsp+3D0h] [rbp-1468h]
  void *v182[2]; // [rsp+3E0h] [rbp-1458h] BYREF
  __int64 v183; // [rsp+3F0h] [rbp-1448h]
  void *v184[2]; // [rsp+400h] [rbp-1438h] BYREF
  __int64 v185; // [rsp+410h] [rbp-1428h]
  void *v186[2]; // [rsp+420h] [rbp-1418h] BYREF
  __int64 v187; // [rsp+430h] [rbp-1408h]
  void *v188[2]; // [rsp+440h] [rbp-13F8h] BYREF
  __int64 v189; // [rsp+450h] [rbp-13E8h]
  void *v190[2]; // [rsp+460h] [rbp-13D8h] BYREF
  __int64 v191; // [rsp+470h] [rbp-13C8h]
  void *v192[2]; // [rsp+480h] [rbp-13B8h] BYREF
  __int64 v193; // [rsp+490h] [rbp-13A8h]
  void *v194[2]; // [rsp+4A0h] [rbp-1398h] BYREF
  __int64 v195; // [rsp+4B0h] [rbp-1388h]
  void *v196[2]; // [rsp+4C0h] [rbp-1378h] BYREF
  __int64 v197; // [rsp+4D0h] [rbp-1368h]
  void *v198[2]; // [rsp+4E0h] [rbp-1358h] BYREF
  __int64 v199; // [rsp+4F0h] [rbp-1348h]
  void *v200[2]; // [rsp+500h] [rbp-1338h] BYREF
  __int64 v201; // [rsp+510h] [rbp-1328h]
  void *v202[2]; // [rsp+520h] [rbp-1318h] BYREF
  __int64 v203; // [rsp+530h] [rbp-1308h]
  void *v204[2]; // [rsp+540h] [rbp-12F8h] BYREF
  __int64 v205; // [rsp+550h] [rbp-12E8h]
  void *v206[2]; // [rsp+560h] [rbp-12D8h] BYREF
  __int64 v207; // [rsp+570h] [rbp-12C8h]
  void *v208[2]; // [rsp+580h] [rbp-12B8h] BYREF
  __int64 v209; // [rsp+590h] [rbp-12A8h]
  void *v210[2]; // [rsp+5A0h] [rbp-1298h] BYREF
  __int64 v211; // [rsp+5B0h] [rbp-1288h]
  void *v212[2]; // [rsp+5C0h] [rbp-1278h] BYREF
  __int64 v213; // [rsp+5D0h] [rbp-1268h]
  void *v214[2]; // [rsp+5E0h] [rbp-1258h] BYREF
  __int64 v215; // [rsp+5F0h] [rbp-1248h]
  void *v216[2]; // [rsp+600h] [rbp-1238h] BYREF
  __int64 v217; // [rsp+610h] [rbp-1228h]
  void *v218[2]; // [rsp+620h] [rbp-1218h] BYREF
  __int64 v219; // [rsp+630h] [rbp-1208h]
  void *v220[2]; // [rsp+640h] [rbp-11F8h] BYREF
  __int64 v221; // [rsp+650h] [rbp-11E8h]
  void *v222[2]; // [rsp+660h] [rbp-11D8h] BYREF
  __int64 v223; // [rsp+670h] [rbp-11C8h]
  void *v224[2]; // [rsp+680h] [rbp-11B8h] BYREF
  __int64 v225; // [rsp+690h] [rbp-11A8h]
  void *v226[2]; // [rsp+6A0h] [rbp-1198h] BYREF
  __int64 v227; // [rsp+6B0h] [rbp-1188h]
  void *v228[2]; // [rsp+6C0h] [rbp-1178h] BYREF
  __int64 v229; // [rsp+6D0h] [rbp-1168h]
  void *v230[2]; // [rsp+6E0h] [rbp-1158h] BYREF
  __int64 v231; // [rsp+6F0h] [rbp-1148h]
  void *v232[2]; // [rsp+700h] [rbp-1138h] BYREF
  __int64 v233; // [rsp+710h] [rbp-1128h]
  void *v234[2]; // [rsp+720h] [rbp-1118h] BYREF
  __int64 v235; // [rsp+730h] [rbp-1108h] BYREF
  void *v236[2]; // [rsp+740h] [rbp-10F8h] BYREF
  __int64 v237; // [rsp+750h] [rbp-10E8h] BYREF
  void *v238[2]; // [rsp+760h] [rbp-10D8h] BYREF
  __int64 v239; // [rsp+770h] [rbp-10C8h] BYREF
  void *v240[4]; // [rsp+780h] [rbp-10B8h] BYREF
  void *v241[4]; // [rsp+7A0h] [rbp-1098h] BYREF
  void *v242[4]; // [rsp+7C0h] [rbp-1078h] BYREF
  void *v243[4]; // [rsp+7E0h] [rbp-1058h] BYREF
  void *v244[4]; // [rsp+800h] [rbp-1038h] BYREF
  void *v245[4]; // [rsp+820h] [rbp-1018h] BYREF
  void *v246[4]; // [rsp+840h] [rbp-FF8h] BYREF
  void *v247[4]; // [rsp+860h] [rbp-FD8h] BYREF
  void *v248[4]; // [rsp+880h] [rbp-FB8h] BYREF
  void *v249[4]; // [rsp+8A0h] [rbp-F98h] BYREF
  void *v250[4]; // [rsp+8C0h] [rbp-F78h] BYREF
  void *v251[4]; // [rsp+8E0h] [rbp-F58h] BYREF
  void *v252[4]; // [rsp+900h] [rbp-F38h] BYREF
  void *v253[4]; // [rsp+920h] [rbp-F18h] BYREF
  void *v254[4]; // [rsp+940h] [rbp-EF8h] BYREF
  void *v255[4]; // [rsp+960h] [rbp-ED8h] BYREF
  void *v256[4]; // [rsp+980h] [rbp-EB8h] BYREF
  void *v257[4]; // [rsp+9A0h] [rbp-E98h] BYREF
  void *v258[4]; // [rsp+9C0h] [rbp-E78h] BYREF
  void *v259[4]; // [rsp+9E0h] [rbp-E58h] BYREF
  void *v260[4]; // [rsp+A00h] [rbp-E38h] BYREF
  void *v261[4]; // [rsp+A20h] [rbp-E18h] BYREF
  void *v262[4]; // [rsp+A40h] [rbp-DF8h] BYREF
  void *v263[4]; // [rsp+A60h] [rbp-DD8h] BYREF
  void *v264[4]; // [rsp+A80h] [rbp-DB8h] BYREF
  void *v265[4]; // [rsp+AA0h] [rbp-D98h] BYREF
  void *v266[4]; // [rsp+AC0h] [rbp-D78h] BYREF
  void *v267[4]; // [rsp+AE0h] [rbp-D58h] BYREF
  void *v268[4]; // [rsp+B00h] [rbp-D38h] BYREF
  void *v269[4]; // [rsp+B20h] [rbp-D18h] BYREF
  void *v270[4]; // [rsp+B40h] [rbp-CF8h] BYREF
  void *v271[4]; // [rsp+B60h] [rbp-CD8h] BYREF
  __int16 v272; // [rsp+B80h] [rbp-CB8h]
  void *v273; // [rsp+B90h] [rbp-CA8h] BYREF
  __int16 v274; // [rsp+BB0h] [rbp-C88h]
  void *v275[6]; // [rsp+BC0h] [rbp-C78h] BYREF
  void *v276[2]; // [rsp+BF0h] [rbp-C48h] BYREF
  __int64 v277; // [rsp+C00h] [rbp-C38h]
  __int16 v278; // [rsp+C10h] [rbp-C28h]
  void *ptr[2]; // [rsp+C20h] [rbp-C18h] BYREF
  _QWORD v280[2]; // [rsp+C30h] [rbp-C08h] BYREF
  int v281; // [rsp+C40h] [rbp-BF8h]
  char *v282; // [rsp+C48h] [rbp-BF0h]
  __int64 v283; // [rsp+C50h] [rbp-BE8h]
  const char *v284; // [rsp+C58h] [rbp-BE0h]
  __int64 v285; // [rsp+C60h] [rbp-BD8h]
  int v286; // [rsp+C68h] [rbp-BD0h]
  _QWORD v287[10]; // [rsp+C70h] [rbp-BC8h] BYREF
  __int64 v288; // [rsp+CC0h] [rbp-B78h] BYREF
  __int64 v289; // [rsp+D10h] [rbp-B28h] BYREF
  __int64 v290; // [rsp+D60h] [rbp-AD8h] BYREF
  __int64 v291; // [rsp+DB0h] [rbp-A88h] BYREF
  __int64 v292; // [rsp+E00h] [rbp-A38h] BYREF
  __int64 v293; // [rsp+E50h] [rbp-9E8h] BYREF
  __int64 v294; // [rsp+EA0h] [rbp-998h] BYREF
  __int64 v295; // [rsp+EF0h] [rbp-948h] BYREF
  __int64 v296; // [rsp+F40h] [rbp-8F8h] BYREF
  __int64 v297; // [rsp+F90h] [rbp-8A8h] BYREF
  __int64 v298; // [rsp+FE0h] [rbp-858h] BYREF
  __int64 v299; // [rsp+1030h] [rbp-808h] BYREF
  __int64 v300; // [rsp+1080h] [rbp-7B8h] BYREF
  __int64 v301; // [rsp+10D0h] [rbp-768h] BYREF
  __int64 v302; // [rsp+1120h] [rbp-718h] BYREF
  __int64 v303; // [rsp+1170h] [rbp-6C8h] BYREF
  __int64 v304; // [rsp+11C0h] [rbp-678h] BYREF
  __int64 v305; // [rsp+1210h] [rbp-628h] BYREF
  __int64 v306; // [rsp+1260h] [rbp-5D8h] BYREF
  __int64 v307; // [rsp+12B0h] [rbp-588h] BYREF
  __int64 v308; // [rsp+1300h] [rbp-538h] BYREF
  __int64 v309; // [rsp+1350h] [rbp-4E8h] BYREF
  __int64 v310; // [rsp+13A0h] [rbp-498h] BYREF
  __int64 v311; // [rsp+13F0h] [rbp-448h] BYREF
  __int64 v312; // [rsp+1440h] [rbp-3F8h] BYREF
  __int64 v313; // [rsp+1490h] [rbp-3A8h] BYREF
  __int64 v314; // [rsp+14E0h] [rbp-358h] BYREF
  __int64 v315; // [rsp+1530h] [rbp-308h] BYREF
  __int64 v316; // [rsp+1580h] [rbp-2B8h] BYREF
  __int64 v317; // [rsp+15D0h] [rbp-268h] BYREF
  __int64 v318; // [rsp+1620h] [rbp-218h] BYREF
  __int64 v319; // [rsp+1670h] [rbp-1C8h] BYREF
  __int64 v320; // [rsp+16C0h] [rbp-178h] BYREF
  __int64 v321; // [rsp+1710h] [rbp-128h] BYREF
  __int64 v322; // [rsp+1760h] [rbp-D8h] BYREF
  _BYTE v323[80]; // [rsp+17B0h] [rbp-88h] BYREF
  char v324; // [rsp+1800h] [rbp-38h] BYREF

  v2 = j__strlen(
         "Base file path for the interactive mode. The incoming filename should have the name <inliner-interactive-channe"
         "l-base>.in, while the outgoing name should be <inliner-interactive-channel-base>.out");
  qword_2CE0710 = 0;
  v3 = v2;
  qword_2CE0718 = 0;
  qword_2CE0720 = 0;
  qword_2CE0700 = (__int64)&off_2C758B0;
  qword_2CE0708 = (unsigned int)qword_2CE0708 & 0x80000000;
  qword_2CE0748 = 0x100000000LL;
  qword_2CE0728 = 0;
  qword_2CE0730 = 0;
  qword_2CE0738 = 0;
  qword_2CE0740 = (__int64)&unk_2CE0750;
  qword_2CE0758 = (__int64)&unk_2CE0770;
  qword_2CE0760 = 1;
  dword_2CE0768 = 0;
  byte_2CE076C = 1;
  v4 = (void **)sub_2210FF0(
                  "Base file path for the interactive mode. The incoming filename should have the name <inliner-interacti"
                  "ve-channel-base>.in, while the outgoing name should be <inliner-interactive-channel-base>.out",
                  a2);
  v5 = (unsigned int)qword_2CE0748;
  v6 = (unsigned int)qword_2CE0748 + 1LL;
  if ( v6 > HIDWORD(qword_2CE0748) )
  {
    v84 = v4;
    sub_2237220((char *)&unk_2CE0750 - 16, &unk_2CE0750, v6, 8);
    v5 = (unsigned int)qword_2CE0748;
    v4 = v84;
  }
  v87 = (char *)off_2BEAAE8;
  v7 = _mm_loadh_ps((const double *)off_2C77938);
  v89 = (__m128i)v7;
  *(_QWORD *)(qword_2CE0740 + 8 * v5) = v4;
  qword_2CE0778 = (__int64)&byte_2CE0788;
  v84 = (void **)&byte_2CE07B0;
  qword_2CE0700 = (__int64)off_2C757E0;
  xmmword_2CE07E0 = (__int128)v7;
  v8 = _mm_loadh_ps((const double *)&v84);
  LODWORD(qword_2CE0748) = qword_2CE0748 + 1;
  xmmword_2CE0798 = (__int128)v8;
  qword_2CE07C8 = (__int64)off_2BEAC58;
  qword_2CE0780 = 0;
  byte_2CE0788 = 0;
  qword_2CE07A8 = 0;
  byte_2CE07B0 = 0;
  byte_2CE07C0 = 0;
  sub_2217250(&qword_2CE0700, "inliner-interactive-channel-base", 32);
  qword_2CE0728 = v3;
  BYTE2(qword_2CE0708) = BYTE2(qword_2CE0708) & 0x9F | 0x20;
  qword_2CE0720 = (__int64)"Base file path for the interactive mode. The incoming filename should have the name <inliner-"
                           "interactive-channel-base>.in, while the outgoing name should be <inliner-interactive-channel-base>.out";
  sub_2218140(&qword_2CE0700);
  __cxa_atexit(sub_1FED2E0, &qword_2CE0700, &off_2B25620);
  v276[0] = ".";
  v273 = "inlining_default";
  v271[0] = "In interactive mode, also send the default policy decision: ";
  v278 = 259;
  v274 = 259;
  v90 = v271;
  v272 = 259;
  v84 = v275;
  v86 = &v273;
  sub_A41580(v275, v271);
  v85 = v276;
  sub_A41580(ptr, v275);
  sub_2253560(&qword_2CE06E0, ptr);
  __cxa_atexit(sub_2015AC0, &qword_2CE06E0, &off_2B25620);
  v9 = qword_2CE06E0;
  v10 = qword_2CE06E8;
  qword_2CE0620 = (__int64)&off_2C758B0;
  qword_2CE0628 = (unsigned int)qword_2CE0628 & 0x80000000;
  qword_2CE0668 = 0x100000000LL;
  qword_2CE0630 = 0;
  qword_2CE0638 = 0;
  qword_2CE0640 = 0;
  qword_2CE0648 = 0;
  qword_2CE0650 = 0;
  qword_2CE0658 = 0;
  qword_2CE0660 = (__int64)&unk_2CE0670;
  qword_2CE0678 = (__int64)&unk_2CE0690;
  qword_2CE0680 = 1;
  dword_2CE0688 = 0;
  byte_2CE068C = 1;
  v11 = sub_2210FF0(sub_2015AC0, &qword_2CE06E0);
  v12 = (unsigned int)qword_2CE0668;
  v13 = (unsigned int)qword_2CE0668 + 1LL;
  if ( v13 > HIDWORD(qword_2CE0668) )
  {
    v88.m128_u64[0] = v11;
    sub_2237220((char *)&unk_2CE0670 - 16, &unk_2CE0670, v13, 8);
    v12 = (unsigned int)qword_2CE0668;
    v11 = v88.m128_u64[0];
  }
  *(_QWORD *)(qword_2CE0660 + 8 * v12) = v11;
  qword_2CE06A0 = (__int64)off_2C714E8;
  v88 = _mm_loadh_ps((const double *)off_2C78368);
  word_2CE06A8 = 0;
  qword_2CE0620 = (__int64)off_2C75848;
  xmmword_2CE06C8 = (__int128)v88;
  LODWORD(qword_2CE0668) = qword_2CE0668 + 1;
  qword_2CE06B0 = (__int64)off_2BEAB08;
  byte_2CE0698 = 0;
  sub_2217250(&qword_2CE0620, "inliner-interactive-include-default", 35);
  qword_2CE0648 = v10;
  qword_2CE0640 = v9;
  BYTE2(qword_2CE0628) = BYTE2(qword_2CE0628) & 0x9F | 0x20;
  sub_2218140(&qword_2CE0620);
  __cxa_atexit(sub_200E190, &qword_2CE0620, &off_2B25620);
  v280[0] = "never";
  v282 = "never";
  v284 = "if-caller-not-cold";
  v287[0] = "if the caller is not cold";
  ptr[1] = (void *)0x400000002LL;
  ptr[0] = v280;
  v280[1] = 5;
  v281 = 0;
  v283 = 5;
  v285 = 18;
  v286 = 1;
  v287[1] = 25;
  LODWORD(v275[0]) = 0;
  v276[0] = v84;
  LODWORD(v273) = 1;
  sub_20160A0(&unk_2CE03C0, "ml-inliner-skip-policy", v86, v85, ptr);
  if ( ptr[0] != v280 )
    free(ptr[0]);
  __cxa_atexit(sub_2015E00, &unk_2CE03C0, &off_2B25620);
  qword_2CE02D0 = 0;
  qword_2CE02C0 = (__int64)&off_2C758B0;
  qword_2CE02C8 = (unsigned int)qword_2CE02C8 & 0x80000000;
  qword_2CE0308 = 0x100000000LL;
  qword_2CE02D8 = 0;
  qword_2CE02E0 = 0;
  qword_2CE02E8 = 0;
  qword_2CE02F0 = 0;
  qword_2CE02F8 = 0;
  qword_2CE0300 = (__int64)&unk_2CE0310;
  qword_2CE0318 = (__int64)&unk_2CE0330;
  qword_2CE0320 = 1;
  dword_2CE0328 = 0;
  byte_2CE032C = 1;
  v14 = sub_2210FF0(sub_2015E00, &unk_2CE03C0);
  v15 = (unsigned int)qword_2CE0308;
  v16 = (unsigned int)qword_2CE0308 + 1LL;
  if ( v16 > HIDWORD(qword_2CE0308) )
  {
    v91 = (void **)v14;
    sub_2237220((char *)&unk_2CE0310 - 16, &unk_2CE0310, v16, 8);
    v15 = (unsigned int)qword_2CE0308;
    v14 = (__int64)v91;
  }
  v17 = _mm_load_si128(&v89);
  *(_QWORD *)(qword_2CE0300 + 8 * v15) = v14;
  qword_2CE0338 = (__int64)&byte_2CE0348;
  v87 = &byte_2CE0370;
  qword_2CE02C0 = (__int64)off_2C757E0;
  xmmword_2CE03A0 = (__int128)v17;
  v18 = _mm_loadh_ps((const double *)&v87);
  LODWORD(qword_2CE0308) = qword_2CE0308 + 1;
  xmmword_2CE0358 = (__int128)v18;
  qword_2CE0388 = (__int64)off_2BEAC58;
  qword_2CE0340 = 0;
  byte_2CE0348 = 0;
  qword_2CE0368 = 0;
  byte_2CE0370 = 0;
  byte_2CE0380 = 0;
  sub_2217250(&qword_2CE02C0, "ml-inliner-model-selector", 25);
  BYTE2(qword_2CE02C8) = BYTE2(qword_2CE02C8) & 0x9F | 0x20;
  sub_2016000(ptr, &byte_22F0C30);
  sub_9EE8A0(&qword_2CE0338, ptr);
  byte_2CE0380 = 1;
  sub_9EE8A0((char *)&xmmword_2CE0358 + 8, ptr);
  if ( ptr[0] != v280 )
    operator delete(ptr[0]);
  sub_2218140(&qword_2CE02C0);
  __cxa_atexit(sub_1FED2E0, &qword_2CE02C0, &off_2B25620);
  v19 = j__strlen("Maximum factor by which expected native size may increase before blocking any further inlining.");
  qword_2CE0240 = (__int64)&unk_2CE0250;
  v20 = v19;
  qword_2CE0210 = 0;
  qword_2CE0200 = (__int64)&off_2C758B0;
  qword_2CE0208 = (unsigned int)qword_2CE0208 & 0x80000000;
  qword_2CE0248 = 0x100000000LL;
  qword_2CE0218 = 0;
  qword_2CE0220 = 0;
  qword_2CE0228 = 0;
  qword_2CE0230 = 0;
  qword_2CE0238 = 0;
  qword_2CE0258 = (__int64)&unk_2CE0270;
  qword_2CE0260 = 1;
  dword_2CE0268 = 0;
  byte_2CE026C = 1;
  v21 = sub_2210FF0(
          "Maximum factor by which expected native size may increase before blocking any further inlining.",
          &qword_2CE02C0);
  v22 = (unsigned int)qword_2CE0248;
  v23 = (unsigned int)qword_2CE0248 + 1LL;
  if ( v23 > HIDWORD(qword_2CE0248) )
  {
    v87 = (char *)v21;
    sub_2237220((char *)&unk_2CE0250 - 16, &unk_2CE0250, v23, 8);
    v22 = (unsigned int)qword_2CE0248;
    v21 = (__int64)v87;
  }
  *(_QWORD *)(qword_2CE0240 + 8 * v22) = v21;
  xmmword_2CE02A8 = (__int128)_mm_loadh_ps((const double *)off_2C780C0);
  LODWORD(qword_2CE0248) = qword_2CE0248 + 1;
  qword_2CE0280 = (__int64)off_2C719C8;
  dword_2CE0278 = 0;
  byte_2CE028C = 0;
  qword_2CE0200 = (__int64)off_2C719E8;
  dword_2CE0288 = 0;
  qword_2CE0290 = (__int64)off_2BEAC28;
  sub_2217250(&qword_2CE0200, "ml-advisor-size-increase-threshold", 34);
  qword_2CE0228 = v20;
  dword_2CE0278 = 0x40000000;
  dword_2CE0288 = 0x40000000;
  BYTE2(qword_2CE0208) = BYTE2(qword_2CE0208) & 0x9F | 0x20;
  qword_2CE0220 = (__int64)"Maximum factor by which expected native size may increase before blocking any further inlining.";
  byte_2CE028C = 1;
  sub_2218140(&qword_2CE0200);
  __cxa_atexit(sub_2012C10, &qword_2CE0200, &off_2B25620);
  v24 = j__strlen("For test - keep the ML Inline advisor's FunctionPropertiesInfo cache");
  byte_2CE01AC = 1;
  qword_2CE0150 = 0;
  v25 = v24;
  qword_2CE0140 = (__int64)&off_2C758B0;
  qword_2CE0148 = (unsigned int)qword_2CE0148 & 0x80000000;
  qword_2CE0188 = 0x100000000LL;
  qword_2CE0158 = 0;
  qword_2CE0160 = 0;
  qword_2CE0168 = 0;
  qword_2CE0170 = 0;
  qword_2CE0178 = 0;
  qword_2CE0180 = (__int64)&unk_2CE0190;
  qword_2CE0198 = (__int64)&unk_2CE01B0;
  qword_2CE01A0 = 1;
  dword_2CE01A8 = 0;
  v26 = sub_2210FF0("For test - keep the ML Inline advisor's FunctionPropertiesInfo cache", &qword_2CE0200);
  v27 = (unsigned int)qword_2CE0188;
  v28 = (unsigned int)qword_2CE0188 + 1LL;
  if ( v28 > HIDWORD(qword_2CE0188) )
  {
    v87 = (char *)v26;
    sub_2237220((char *)&unk_2CE0190 - 16, &unk_2CE0190, v28, 8);
    v27 = (unsigned int)qword_2CE0188;
    v26 = (__int64)v87;
  }
  si128 = _mm_load_si128((const __m128i *)&v88);
  *(_QWORD *)(qword_2CE0180 + 8 * v27) = v26;
  word_2CE01C8 = 0;
  qword_2CE01C0 = (__int64)off_2C714E8;
  xmmword_2CE01E8 = (__int128)si128;
  LODWORD(qword_2CE0188) = qword_2CE0188 + 1;
  qword_2CE0140 = (__int64)off_2C75848;
  byte_2CE01B8 = 0;
  qword_2CE01D0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CE0140, "ml-advisor-keep-fpi-cache", 25);
  qword_2CE0168 = v25;
  word_2CE01C8 = 256;
  byte_2CE01B8 = 0;
  BYTE2(qword_2CE0148) = BYTE2(qword_2CE0148) & 0x9F | 0x20;
  qword_2CE0160 = (__int64)"For test - keep the ML Inline advisor's FunctionPropertiesInfo cache";
  sub_2218140(&qword_2CE0140);
  __cxa_atexit(sub_200E190, &qword_2CE0140, &off_2B25620);
  *(_OWORD *)v232 = 0;
  v157 = 1;
  v233 = 0;
  sub_2FDB00(v232, &v157, v158);
  v30 = v85;
  sub_2016000(v85, "sroa_savings");
  v31 = sub_201A4F0();
  sub_201A500(ptr, v30, 0, v31, 8, v232);
  *(_OWORD *)v230 = 0;
  v156 = 1;
  v231 = 0;
  sub_2FDB00(v230, &v156, &v157);
  v32 = v84;
  sub_2016000(v84, "sroa_losses");
  v33 = sub_201A4F0();
  sub_201A500(v287, v32, 0, v33, 8, v230);
  *(_OWORD *)v228 = 0;
  v155 = 1;
  v229 = 0;
  sub_2FDB00(v228, &v155, &v156);
  v34 = v86;
  sub_2016000(v86, "load_elimination");
  v35 = sub_201A4F0();
  sub_201A500(&v288, v34, 0, v35, 8, v228);
  *(_OWORD *)v226 = 0;
  v154 = 1;
  v227 = 0;
  sub_2FDB00(v226, &v154, &v155);
  v36 = v90;
  sub_2016000(v90, "call_penalty");
  v37 = sub_201A4F0();
  sub_201A500(&v289, v36, 0, v37, 8, v226);
  *(_OWORD *)v224 = 0;
  v153 = 1;
  v225 = 0;
  sub_2FDB00(v224, &v153, &v154);
  v99 = v270;
  sub_2016000(v270, "call_argument_setup");
  v38 = sub_201A4F0();
  sub_201A500(&v290, v270, 0, v38, 8, v224);
  *(_OWORD *)v222 = 0;
  v152 = 1;
  v223 = 0;
  sub_2FDB00(v222, &v152, &v153);
  v97 = v269;
  sub_2016000(v269, "load_relative_intrinsic");
  v39 = sub_201A4F0();
  sub_201A500(&v291, v269, 0, v39, 8, v222);
  *(_OWORD *)v220 = 0;
  v151 = 1;
  v221 = 0;
  sub_2FDB00(v220, &v151, &v152);
  v95 = v268;
  sub_2016000(v268, "lowered_call_arg_setup");
  v40 = sub_201A4F0();
  sub_201A500(&v292, v268, 0, v40, 8, v220);
  *(_OWORD *)v218 = 0;
  v150 = 1;
  v219 = 0;
  sub_2FDB00(v218, &v150, &v151);
  v93 = v267;
  sub_2016000(v267, "indirect_call_penalty");
  v41 = sub_201A4F0();
  sub_201A500(&v293, v267, 0, v41, 8, v218);
  *(_OWORD *)v216 = 0;
  v149 = 1;
  v217 = 0;
  sub_2FDB00(v216, &v149, &v150);
  v91 = v266;
  sub_2016000(v266, "jump_table_penalty");
  v42 = sub_201A4F0();
  sub_201A500(&v294, v266, 0, v42, 8, v216);
  *(_OWORD *)v214 = 0;
  v148 = 1;
  v215 = 0;
  sub_2FDB00(v214, &v148, &v149);
  v119 = v265;
  sub_2016000(v265, "case_cluster_penalty");
  v43 = sub_201A4F0();
  sub_201A500(&v295, v265, 0, v43, 8, v214);
  *(_OWORD *)v212 = 0;
  v147 = 1;
  v213 = 0;
  sub_2FDB00(v212, &v147, &v148);
  v117 = v264;
  sub_2016000(v264, "switch_default_dest_penalty");
  v44 = sub_201A4F0();
  sub_201A500(&v296, v264, 0, v44, 8, v212);
  *(_OWORD *)v210 = 0;
  v146 = 1;
  v211 = 0;
  sub_2FDB00(v210, &v146, &v147);
  v116 = v263;
  sub_2016000(v263, "switch_penalty");
  v45 = sub_201A4F0();
  sub_201A500(&v297, v263, 0, v45, 8, v210);
  *(_OWORD *)v208 = 0;
  v145 = 1;
  v209 = 0;
  sub_2FDB00(v208, &v145, &v146);
  v114 = v262;
  sub_2016000(v262, "unsimplified_common_instructions");
  v46 = sub_201A4F0();
  sub_201A500(&v298, v262, 0, v46, 8, v208);
  *(_OWORD *)v206 = 0;
  v144 = 1;
  v207 = 0;
  sub_2FDB00(v206, &v144, &v145);
  v112 = v261;
  sub_2016000(v261, "num_loops");
  v47 = sub_201A4F0();
  sub_201A500(&v299, v261, 0, v47, 8, v206);
  *(_OWORD *)v204 = 0;
  v143 = 1;
  v205 = 0;
  sub_2FDB00(v204, &v143, &v144);
  v111 = v260;
  sub_2016000(v260, "dead_blocks");
  v48 = sub_201A4F0();
  sub_201A500(&v300, v260, 0, v48, 8, v204);
  *(_OWORD *)v202 = 0;
  v142 = 1;
  v203 = 0;
  sub_2FDB00(v202, &v142, &v143);
  v110 = v259;
  sub_2016000(v259, "simplified_instructions");
  v49 = sub_201A4F0();
  sub_201A500(&v301, v259, 0, v49, 8, v202);
  *(_OWORD *)v200 = 0;
  v141 = 1;
  v201 = 0;
  sub_2FDB00(v200, &v141, &v142);
  v109 = v258;
  sub_2016000(v258, "constant_args");
  v50 = sub_201A4F0();
  sub_201A500(&v302, v258, 0, v50, 8, v200);
  *(_OWORD *)v198 = 0;
  v140 = 1;
  v199 = 0;
  sub_2FDB00(v198, &v140, &v141);
  v108 = v257;
  sub_2016000(v257, "constant_offset_ptr_args");
  v51 = sub_201A4F0();
  sub_201A500(&v303, v257, 0, v51, 8, v198);
  *(_OWORD *)v196 = 0;
  v139 = 1;
  v197 = 0;
  sub_2FDB00(v196, &v139, &v140);
  v107 = v256;
  sub_2016000(v256, "callsite_cost");
  v52 = sub_201A4F0();
  sub_201A500(&v304, v256, 0, v52, 8, v196);
  *(_OWORD *)v194 = 0;
  v138 = 1;
  v195 = 0;
  sub_2FDB00(v194, &v138, &v139);
  v106 = v255;
  sub_2016000(v255, "cold_cc_penalty");
  v53 = sub_201A4F0();
  sub_201A500(&v305, v255, 0, v53, 8, v194);
  *(_OWORD *)v192 = 0;
  v137 = 1;
  v193 = 0;
  sub_2FDB00(v192, &v137, &v138);
  v105 = v254;
  sub_2016000(v254, "last_call_to_static_bonus");
  v54 = sub_201A4F0();
  sub_201A500(&v306, v254, 0, v54, 8, v192);
  *(_OWORD *)v190 = 0;
  v136 = 1;
  v191 = 0;
  sub_2FDB00(v190, &v136, &v137);
  v104 = v253;
  sub_2016000(v253, "is_multiple_blocks");
  v55 = sub_201A4F0();
  sub_201A500(&v307, v253, 0, v55, 8, v190);
  *(_OWORD *)v188 = 0;
  v135 = 1;
  v189 = 0;
  sub_2FDB00(v188, &v135, &v136);
  v103 = v252;
  sub_2016000(v252, "nested_inlines");
  v56 = sub_201A4F0();
  sub_201A500(&v308, v252, 0, v56, 8, v188);
  *(_OWORD *)v186 = 0;
  v134 = 1;
  v187 = 0;
  sub_2FDB00(v186, &v134, &v135);
  v102 = v251;
  sub_2016000(v251, "nested_inline_cost_estimate");
  v57 = sub_201A4F0();
  sub_201A500(&v309, v251, 0, v57, 8, v186);
  *(_OWORD *)v184 = 0;
  v133 = 1;
  v185 = 0;
  sub_2FDB00(v184, &v133, &v134);
  v101 = v250;
  sub_2016000(v250, "threshold");
  v58 = sub_201A4F0();
  sub_201A500(&v310, v250, 0, v58, 8, v184);
  *(_OWORD *)v182 = 0;
  v132 = 1;
  v183 = 0;
  sub_2FDB00(v182, &v132, &v133);
  v100 = v249;
  sub_2016000(v249, "callee_basic_block_count");
  v59 = sub_201A4F0();
  sub_201A500(&v311, v249, 0, v59, 8, v182);
  *(_OWORD *)v180 = 0;
  v131 = 1;
  v181 = 0;
  sub_2FDB00(v180, &v131, &v132);
  v98 = v248;
  sub_2016000(v248, "callsite_height");
  v60 = sub_201A4F0();
  sub_201A500(&v312, v248, 0, v60, 8, v180);
  *(_OWORD *)v178 = 0;
  v130 = 1;
  v179 = 0;
  sub_2FDB00(v178, &v130, &v131);
  v96 = v247;
  sub_2016000(v247, "node_count");
  v61 = sub_201A4F0();
  sub_201A500(&v313, v247, 0, v61, 8, v178);
  *(_OWORD *)v176 = 0;
  v129 = 1;
  v177 = 0;
  sub_2FDB00(v176, &v129, &v130);
  v94 = v246;
  sub_2016000(v246, "nr_ctant_params");
  v62 = sub_201A4F0();
  sub_201A500(&v314, v246, 0, v62, 8, v176);
  *(_OWORD *)v174 = 0;
  v128 = 1;
  v175 = 0;
  sub_2FDB00(v174, &v128, &v129);
  v92 = v245;
  sub_2016000(v245, "cost_estimate");
  v63 = sub_201A4F0();
  sub_201A500(&v315, v245, 0, v63, 8, v174);
  *(_OWORD *)v172 = 0;
  v127 = 1;
  v173 = 0;
  sub_2FDB00(v172, &v127, &v128);
  v89.m128i_i64[0] = (__int64)v244;
  sub_2016000(v244, "edge_count");
  v64 = sub_201A4F0();
  sub_201A500(&v316, v244, 0, v64, 8, v172);
  *(_OWORD *)v170 = 0;
  v126 = 1;
  v171 = 0;
  sub_2FDB00(v170, &v126, &v127);
  v118 = v243;
  sub_2016000(v243, "caller_users");
  v65 = sub_201A4F0();
  sub_201A500(&v317, v243, 0, v65, 8, v170);
  *(_OWORD *)v168 = 0;
  v125 = 1;
  v169 = 0;
  sub_2FDB00(v168, &v125, &v126);
  v88.m128_u64[0] = (unsigned __int64)v242;
  sub_2016000(v242, "caller_conditionally_executed_blocks");
  v66 = sub_201A4F0();
  sub_201A500(&v318, v242, 0, v66, 8, v168);
  *(_OWORD *)v166 = 0;
  v124 = 1;
  v167 = 0;
  sub_2FDB00(v166, &v124, &v125);
  v115 = v241;
  sub_2016000(v241, "caller_basic_block_count");
  v67 = sub_201A4F0();
  sub_201A500(&v319, v241, 0, v67, 8, v166);
  *(_OWORD *)v164 = 0;
  v123 = 1;
  v165 = 0;
  sub_2FDB00(v164, &v123, &v124);
  v113 = v240;
  sub_2016000(v240, "callee_conditionally_executed_blocks");
  v68 = sub_201A4F0();
  sub_201A500(&v320, v240, 0, v68, 8, v164);
  *(_OWORD *)v162 = 0;
  v122 = 1;
  v163 = 0;
  sub_2FDB00(v162, &v122, &v123);
  sub_2016000(v238, "callee_users");
  v69 = sub_201A4F0();
  sub_201A500(&v321, v238, 0, v69, 8, v162);
  *(_OWORD *)v160 = 0;
  v121 = 1;
  v161 = 0;
  sub_2FDB00(v160, &v121, &v122);
  sub_2016000(v236, "is_callee_avail_external");
  v70 = sub_201A4F0();
  sub_201A500(&v322, v236, 0, v70, 8, v160);
  *(_OWORD *)v158 = 0;
  v120 = 1;
  v159 = 0;
  sub_2FDB00(v158, &v120, &v121);
  sub_2016000(v234, "is_caller_avail_external");
  v71 = sub_201A4F0();
  v72 = ptr;
  sub_201A500(v323, v234, 0, v71, 8, v158);
  *(_QWORD *)&xmmword_2CE0110[1] = 0;
  xmmword_2CE0110[0] = 0;
  v73 = operator new(0xBE0u);
  *(_QWORD *)&xmmword_2CE0110[0] = v73;
  v87 = (char *)(v73 + 3040);
  *(_QWORD *)&xmmword_2CE0110[1] = v73 + 3040;
  do
  {
    v74 = v72;
    v75 = v73;
    v72 += 10;
    v73 += 80;
    sub_2016490(v75, v74);
  }
  while ( v72 != (void **)&v324 );
  v76 = (void **)v323;
  *((_QWORD *)&xmmword_2CE0110[0] + 1) = v87;
  while ( 1 )
  {
    v78 = v76[5];
    if ( v78 )
      operator delete(v78);
    if ( *v76 == v76 + 2 )
      break;
    operator delete(*v76);
    v77 = v76 - 10;
    if ( ptr == v76 )
      goto LABEL_24;
LABEL_19:
    v76 = v77;
  }
  v77 = v76 - 10;
  if ( ptr != v76 )
    goto LABEL_19;
LABEL_24:
  if ( v234[0] != &v235 )
    operator delete(v234[0]);
  if ( v158[0] )
    operator delete(v158[0]);
  if ( v236[0] != &v237 )
    operator delete(v236[0]);
  if ( v160[0] )
    operator delete(v160[0]);
  if ( v238[0] != &v239 )
    operator delete(v238[0]);
  if ( v162[0] )
    operator delete(v162[0]);
  if ( v240[0] != v113 + 2 )
    operator delete(v240[0]);
  if ( v164[0] )
    operator delete(v164[0]);
  if ( v241[0] != v115 + 2 )
    operator delete(v241[0]);
  if ( v166[0] )
    operator delete(v166[0]);
  if ( v242[0] != (void *)(v88.m128_u64[0] + 16) )
    operator delete(v242[0]);
  if ( v168[0] )
    operator delete(v168[0]);
  if ( v243[0] != v118 + 2 )
    operator delete(v243[0]);
  if ( v170[0] )
    operator delete(v170[0]);
  if ( v244[0] != (void *)(v89.m128i_i64[0] + 16) )
    operator delete(v244[0]);
  if ( v172[0] )
    operator delete(v172[0]);
  if ( v245[0] != v92 + 2 )
    operator delete(v245[0]);
  if ( v174[0] )
    operator delete(v174[0]);
  if ( v246[0] != v94 + 2 )
    operator delete(v246[0]);
  if ( v176[0] )
    operator delete(v176[0]);
  if ( v247[0] != v96 + 2 )
    operator delete(v247[0]);
  if ( v178[0] )
    operator delete(v178[0]);
  if ( v248[0] != v98 + 2 )
    operator delete(v248[0]);
  if ( v180[0] )
    operator delete(v180[0]);
  if ( v249[0] != v100 + 2 )
    operator delete(v249[0]);
  if ( v182[0] )
    operator delete(v182[0]);
  if ( v250[0] != v101 + 2 )
    operator delete(v250[0]);
  if ( v184[0] )
    operator delete(v184[0]);
  if ( v251[0] != v102 + 2 )
    operator delete(v251[0]);
  if ( v186[0] )
    operator delete(v186[0]);
  if ( v252[0] != v103 + 2 )
    operator delete(v252[0]);
  if ( v188[0] )
    operator delete(v188[0]);
  if ( v253[0] != v104 + 2 )
    operator delete(v253[0]);
  if ( v190[0] )
    operator delete(v190[0]);
  if ( v254[0] != v105 + 2 )
    operator delete(v254[0]);
  if ( v192[0] )
    operator delete(v192[0]);
  if ( v255[0] != v106 + 2 )
    operator delete(v255[0]);
  if ( v194[0] )
    operator delete(v194[0]);
  if ( v256[0] != v107 + 2 )
    operator delete(v256[0]);
  if ( v196[0] )
    operator delete(v196[0]);
  if ( v257[0] != v108 + 2 )
    operator delete(v257[0]);
  if ( v198[0] )
    operator delete(v198[0]);
  if ( v258[0] != v109 + 2 )
    operator delete(v258[0]);
  if ( v200[0] )
    operator delete(v200[0]);
  if ( v259[0] != v110 + 2 )
    operator delete(v259[0]);
  if ( v202[0] )
    operator delete(v202[0]);
  if ( v260[0] != v111 + 2 )
    operator delete(v260[0]);
  if ( v204[0] )
    operator delete(v204[0]);
  if ( v261[0] != v112 + 2 )
    operator delete(v261[0]);
  if ( v206[0] )
    operator delete(v206[0]);
  if ( v262[0] != v114 + 2 )
    operator delete(v262[0]);
  if ( v208[0] )
    operator delete(v208[0]);
  if ( v263[0] != v116 + 2 )
    operator delete(v263[0]);
  if ( v210[0] )
    operator delete(v210[0]);
  if ( v264[0] != v117 + 2 )
    operator delete(v264[0]);
  if ( v212[0] )
    operator delete(v212[0]);
  if ( v265[0] != v119 + 2 )
    operator delete(v265[0]);
  if ( v214[0] )
    operator delete(v214[0]);
  if ( v266[0] != v91 + 2 )
    operator delete(v266[0]);
  if ( v216[0] )
    operator delete(v216[0]);
  if ( v267[0] != v93 + 2 )
    operator delete(v267[0]);
  if ( v218[0] )
    operator delete(v218[0]);
  if ( v268[0] != v95 + 2 )
    operator delete(v268[0]);
  if ( v220[0] )
    operator delete(v220[0]);
  if ( v269[0] != v97 + 2 )
    operator delete(v269[0]);
  if ( v222[0] )
    operator delete(v222[0]);
  if ( v270[0] != v99 + 2 )
    operator delete(v270[0]);
  if ( v224[0] )
    operator delete(v224[0]);
  if ( v271[0] != v90 + 2 )
    operator delete(v271[0]);
  if ( v226[0] )
    operator delete(v226[0]);
  if ( v273 != v86 + 2 )
    operator delete(v273);
  if ( v228[0] )
    operator delete(v228[0]);
  if ( v275[0] != v84 + 2 )
    operator delete(v275[0]);
  if ( v230[0] )
    operator delete(v230[0]);
  if ( v276[0] != v85 + 2 )
    operator delete(v276[0]);
  if ( v232[0] )
    operator delete(v232[0]);
  __cxa_atexit(sub_2015CF0, xmmword_2CE0110, &off_2B25620);
  v79 = v85;
  *(_OWORD *)v276 = 0;
  v275[0] = &dword_0 + 1;
  v277 = 0;
  sub_2FDB00(v85, v84, (_BYTE *)v84 + 8);
  sub_2016000(ptr, "inlining_decision");
  v80 = sub_201A4F0();
  sub_201A500(&unk_2CE00C0, ptr, 0, v80, 8, v79);
  if ( ptr[0] != v280 )
    operator delete(ptr[0]);
  if ( v276[0] )
    operator delete(v276[0]);
  __cxa_atexit(sub_2015AE0, &unk_2CE00C0, &off_2B25620);
  v81 = v85;
  *(_OWORD *)v276 = 0;
  v275[0] = &dword_0 + 1;
  v277 = 0;
  sub_2FDB00(v85, v84, (_BYTE *)v84 + 8);
  sub_2016000(ptr, "inlining_default");
  v82 = sub_201A4F0();
  sub_201A500(&unk_2CE0060, ptr, 0, v82, 8, v81);
  if ( ptr[0] != v280 )
    operator delete(ptr[0]);
  if ( v276[0] )
    operator delete(v276[0]);
  return __cxa_atexit(sub_2015AE0, &unk_2CE0060, &off_2B25620);
}
