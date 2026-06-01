_WORD *__fastcall sub_6E4510(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  char v9; // dl
  char v10; // al
  unsigned __int64 *v11; // rsi
  unsigned __int64 *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 *v15; // r13
  __int64 v16; // rax
  int v17; // eax
  __int64 (*v18)(); // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  _WORD *result; // rax
  unsigned __int64 v27; // rax

  v6 = *(_QWORD *)(a1 + 2160);
  *(_QWORD *)(a1 + 17288) = a2;
  *(_QWORD *)(a1 + 17296) = a3;
  if ( (*(_BYTE *)(v6 + 1) & 8) != 0 )
  {
    if ( *(_BYTE *)(v6 + 732) )
    {
      if ( *(_DWORD *)(v6 + 728) <= 9u )
        goto LABEL_4;
    }
    else if ( *(_DWORD *)(a2 + 340) <= 9u )
    {
LABEL_4:
      v7 = sub_A31F30();
      goto LABEL_5;
    }
    v7 = sub_A5DE20();
  }
  else
  {
    v7 = 0;
  }
LABEL_5:
  v8 = *(_QWORD *)(a1 + 17272);
  *(_QWORD *)(a1 + 17272) = v7;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = 1;
  v10 = (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 200LL) >> 4) & 3;
  if ( v10 != 1 )
  {
    v9 = 0;
    if ( v10 != 2 )
      v9 = *(_BYTE *)(a2 + 488);
  }
  *(_BYTE *)(a1 + 17280) = v9;
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18472), 434);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18480), 435);
  v11 = (unsigned __int64 *)(a1 + 18488);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 46LL) & 0x40) != 0 )
    sub_6BB050(a1, v11, 447);
  else
    sub_6BB050(a1, v11, 436);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18544), 448);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18552), 450);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18560), 451);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18568), 452);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18576), 453);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18592), 437);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18600), 442);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18608), 443);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18616), 444);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18624), 445);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18640), 480);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18648), 481);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18656), 482);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18664), 485);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18672), 486);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18888), 483);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18680), 455);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18688), 456);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18696), 457);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18704), 458);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18712), 459);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18720), 460);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18728), 461);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18736), 462);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18744), 463);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18752), 464);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18760), 465);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18768), 466);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18776), 467);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18784), 468);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18792), 469);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18800), 470);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18808), 471);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18816), 472);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18824), 473);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18832), 474);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18840), 475);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18848), 476);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18856), 477);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18864), 478);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18584), 454);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18632), 446);
  v12 = (unsigned __int64 *)(a1 + 18496);
  if ( (unsigned __int8)sub_CB8020(*(unsigned int *)(a2 + 152)) )
    sub_6BB050(a1, v12, 449);
  else
    sub_6BB050(a1, v12, 438);
  if ( (~**(_DWORD **)(a1 + 2160) & 0x10000800) != 0 )
    *(_QWORD *)(a1 + 18504) = sub_6CD020((_QWORD *)a1, *(_DWORD *)(a2 + 152));
  else
    *(_QWORD *)(a1 + 18504) = *(_QWORD *)(a1 + 18496);
  *(_QWORD *)(a1 + 18512) = sub_6CD020((_QWORD *)a1, *(_DWORD *)(a2 + 156));
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18520), 439);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 1LL) & 8) != 0 )
  {
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 18528), 440);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 1LL) & 8) == 0 )
      goto LABEL_18;
  }
  else
  {
    *(_QWORD *)(a1 + 18528) = sub_6CD020((_QWORD *)a1, *(_DWORD *)(a2 + 160));
    if ( (*(_BYTE *)(v13 + 1) & 8) == 0 )
    {
LABEL_18:
      *(_QWORD *)(a1 + 18536) = sub_6CD020((_QWORD *)a1, *(_DWORD *)(a2 + 164));
      goto LABEL_19;
    }
  }
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18536), 441);
LABEL_19:
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18912), 496);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18920), 497);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18928), 498);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18936), 499);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18960), 500);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18944), 501);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18968), 503);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18952), 502);
  v14 = *(_QWORD *)(a1 + 2160);
  if ( !*(_DWORD *)(v14 + 64) )
  {
    v15 = (unsigned __int64 *)(a1 + 19344);
    if ( (*(_BYTE *)(v14 + 97) & 4) == 0 )
      goto LABEL_21;
    goto LABEL_65;
  }
  v15 = (unsigned __int64 *)(a1 + 19344);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 19344), 505);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 19352), 506);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 19360), 507);
  v14 = *(_QWORD *)(a1 + 2160);
  if ( (*(_BYTE *)(v14 + 97) & 4) != 0 && !*(_DWORD *)(v14 + 64) )
  {
LABEL_65:
    sub_6BB050(a1, v15, 505);
    v14 = *(_QWORD *)(a1 + 2160);
  }
LABEL_21:
  if ( (*(_BYTE *)(v14 + 164) & 8) != 0 )
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19336), 504);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18976), 488);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18984), 489);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18992), 490);
  v16 = *(_QWORD *)(a1 + 2160);
  if ( (*(_BYTE *)(v16 + 47) & 0x20) != 0 )
  {
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19008), 0);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19016), 1);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19024), 2);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19032), 3);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19040), 4);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19048), 5);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19056), 6);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19064), 7);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19072), 8);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19080), 9);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19088), 10);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19096), 11);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19104), 12);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19112), 13);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19120), 14);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19128), 15);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19136), 16);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19144), 17);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19152), 18);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19160), 19);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19168), 20);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19176), 21);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19184), 22);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19192), 23);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19200), 24);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19208), 25);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19216), 26);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19224), 27);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19232), 28);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19240), 29);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19248), 30);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19256), 31);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19264), 32);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19272), 33);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19280), 34);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19288), 35);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19296), 491);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19304), 492);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19312), 493);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19320), 494);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19328), 495);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19368), 36);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19376), 37);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19384), 38);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19392), 39);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19400), 40);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19408), 41);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19416), 42);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19424), 43);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19432), 44);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19440), 45);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19448), 46);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19456), 47);
    v16 = *(_QWORD *)(a1 + 2160);
  }
  if ( (*(_BYTE *)(v16 + 89) & 1) != 0 )
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22544), 433);
  if ( (*(_BYTE *)(a2 + 385) & 2) != 0 || a3 && (*(_BYTE *)(a3 + 385) & 2) != 0 )
  {
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19464), 48);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19472), 49);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19480), 50);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19488), 51);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19496), 52);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19504), 53);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19512), 54);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19520), 55);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19528), 56);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19536), 57);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19544), 58);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19552), 59);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19560), 60);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19568), 61);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19576), 62);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19584), 63);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19592), 64);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19600), 65);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19608), 66);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19616), 67);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19624), 68);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19632), 69);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19640), 70);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19648), 71);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19656), 72);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19664), 73);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19672), 74);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19680), 75);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19688), 76);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19696), 77);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19704), 78);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19712), 79);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19720), 80);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19728), 81);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19736), 82);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19744), 83);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19752), 84);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19760), 85);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19768), 86);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19776), 87);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19784), 88);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19792), 89);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19800), 90);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19808), 91);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19816), 92);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19824), 93);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19832), 94);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19840), 95);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19848), 96);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19856), 97);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19864), 98);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19872), 99);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19880), 100);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19888), 101);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19896), 102);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19904), 103);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19912), 104);
  }
  if ( (unsigned int)(*(_DWORD *)(a2 + 248) - 23) <= 1 )
  {
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19920), 105);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19928), 106);
  }
  if ( (*(_BYTE *)(a2 + 385) & 4) != 0 )
  {
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19936), 107);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19944), 108);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19952), 109);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19960), 110);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19968), 111);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19976), 112);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19984), 113);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 19992), 114);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20000), 115);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20008), 116);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20016), 117);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20024), 118);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20032), 119);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20040), 120);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20048), 121);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20056), 122);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20064), 123);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20072), 124);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20080), 125);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20088), 126);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20096), 127);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20104), 128);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20112), 129);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20120), 130);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20128), 131);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20136), 132);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20144), 133);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20152), 134);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20160), 135);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20168), 136);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20176), 137);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20184), 138);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20192), 139);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20200), 140);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20208), 141);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20216), 142);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20224), 143);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20232), 144);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20240), 145);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20248), 146);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20256), 147);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20264), 148);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20272), 149);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20280), 150);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20288), 151);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20296), 152);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20304), 153);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20312), 154);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20320), 155);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20328), 156);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20336), 157);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20344), 158);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20352), 159);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20360), 160);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20368), 161);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20376), 162);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20384), 163);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20392), 164);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20400), 165);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20408), 166);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20416), 167);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20424), 168);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20432), 169);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20440), 170);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20448), 171);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20456), 172);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20464), 173);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20472), 174);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20480), 175);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20488), 176);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20496), 177);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20504), 178);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20512), 179);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20520), 180);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20528), 181);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20536), 182);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20544), 183);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20552), 184);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20560), 185);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20568), 186);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20576), 187);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20584), 188);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20592), 189);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20600), 190);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20608), 191);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20616), 192);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20624), 193);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20632), 194);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20640), 195);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20648), 196);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20656), 197);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20664), 198);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20672), 199);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20680), 200);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20688), 201);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20696), 202);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20704), 203);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20712), 204);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20720), 205);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20728), 206);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20736), 207);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20744), 208);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20752), 209);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20760), 210);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20768), 211);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20776), 212);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20784), 213);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20792), 214);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20800), 215);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20808), 216);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20816), 217);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20824), 218);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20832), 219);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20840), 220);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20848), 221);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20856), 222);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20864), 223);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20872), 224);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20880), 225);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20888), 226);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20896), 227);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20904), 228);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20912), 229);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20920), 230);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20928), 231);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20936), 232);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20944), 233);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20952), 234);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20960), 235);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20968), 236);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20976), 237);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20984), 238);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 20992), 239);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21000), 240);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21008), 241);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21016), 242);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21024), 243);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21032), 244);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21040), 245);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21048), 246);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21056), 247);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21064), 248);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21072), 249);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21080), 250);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21088), 251);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21096), 252);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21104), 253);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21112), 254);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21120), 255);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21128), 256);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21136), 257);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21144), 258);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21152), 259);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21160), 260);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21168), 261);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21176), 262);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21184), 263);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21192), 264);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21200), 265);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21208), 266);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21216), 267);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21224), 268);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21232), 269);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21240), 270);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21248), 271);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21256), 272);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21264), 273);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21272), 274);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21280), 275);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21288), 276);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21296), 277);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21304), 278);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21312), 279);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21320), 280);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21328), 281);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21336), 282);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21344), 283);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21352), 284);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21360), 285);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21368), 286);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21376), 287);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21384), 288);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21392), 289);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21400), 290);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21408), 291);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21416), 292);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21424), 293);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21432), 294);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21440), 295);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21448), 296);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21456), 297);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21464), 298);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21472), 299);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21480), 300);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21488), 301);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21496), 302);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21504), 303);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21512), 304);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21520), 305);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21528), 306);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21536), 307);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21544), 308);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21552), 309);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21560), 310);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21568), 311);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21576), 312);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21584), 313);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21592), 314);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21600), 315);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21608), 316);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21616), 317);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21624), 318);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21632), 319);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21640), 320);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21648), 321);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21656), 322);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21664), 323);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21672), 324);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21680), 325);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21688), 326);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21696), 327);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21704), 328);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21712), 329);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21720), 330);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21728), 331);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21736), 332);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21744), 333);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21752), 334);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21760), 335);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21768), 336);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21776), 337);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21784), 338);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21792), 339);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21800), 340);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21808), 341);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21816), 342);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21824), 343);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21832), 344);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21840), 345);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21848), 346);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21856), 347);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21864), 348);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21872), 349);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21880), 350);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21888), 351);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21896), 352);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21904), 353);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21912), 354);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21920), 355);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21928), 356);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21936), 357);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21944), 358);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21952), 359);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21960), 360);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21968), 361);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21976), 362);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21984), 363);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 21992), 364);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22000), 365);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22008), 366);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22016), 367);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22024), 368);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22032), 369);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22040), 370);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22048), 371);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22056), 372);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22064), 373);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22072), 374);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22080), 375);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22088), 376);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22096), 377);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22104), 378);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22112), 379);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22120), 380);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22128), 381);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22136), 382);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22144), 383);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22152), 384);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22160), 385);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22168), 386);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22176), 387);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22184), 388);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22192), 389);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22200), 390);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22208), 391);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22216), 392);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22224), 393);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22232), 394);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22240), 395);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22248), 396);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22256), 397);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22264), 398);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22272), 399);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22280), 400);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22288), 401);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22296), 402);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22304), 403);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22312), 404);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22320), 405);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22328), 406);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22336), 407);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22344), 408);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22352), 409);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22360), 410);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22368), 411);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22376), 412);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22384), 413);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22392), 414);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22400), 415);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22408), 416);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22416), 417);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22424), 418);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22432), 419);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22440), 420);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22448), 421);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22456), 422);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22464), 423);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22472), 424);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22480), 425);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22488), 426);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22496), 427);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22504), 428);
    sub_6BB050(a1, (unsigned __int64 *)(a1 + 22512), 429);
  }
  v17 = *(_DWORD *)(a2 + 248);
  if ( (unsigned int)(v17 - 55) <= 1 )
  {
    v18 = *(__int64 (**)())(*(_QWORD *)a2 + 584LL);
    if ( v18 == sub_6A6820 )
    {
LABEL_37:
      if ( !a3 || (unsigned int)(*(_DWORD *)(a3 + 248) - 25) > 1 )
        goto LABEL_40;
      goto LABEL_39;
    }
    if ( ((unsigned __int8 (__fastcall *)(__int64, char *, __int64))v18)(a2, "reference-types", 15) )
      sub_6BB050(a1, (unsigned __int64 *)(a1 + 22520), 430);
    v17 = *(_DWORD *)(a2 + 248);
  }
  if ( (unsigned int)(v17 - 25) > 1 )
    goto LABEL_37;
LABEL_39:
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 22528), 431);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 22536), 432);
LABEL_40:
  if ( (*(_BYTE *)(a2 + 184) & 1) != 0 )
    v19 = *(_QWORD *)(a1 + 18544);
  else
    v19 = *(_QWORD *)(a1 + 18480);
  *(_QWORD *)(a1 + 19000) = v19;
  v20 = *(_QWORD *)(a1 + 2160);
  *(_QWORD *)(a1 + 1520) = 0;
  *(_QWORD *)(a1 + 1544) = 0;
  if ( (*(_BYTE *)(v20 + 60) & 1) != 0 )
  {
    v21 = *(_QWORD *)(a1 + 18472);
    LOWORD(v22) = 0;
    if ( (v21 & 8) != 0 )
      v22 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)(a1 + 18472) & 0xFFFFFFFFFFFFFFF0LL));
    v23 = v22 & 0x1FF | v21 & 7;
    BYTE1(v23) |= 0xAu;
    v24 = sub_6C3980(
            (_QWORD *)a1,
            *(_QWORD *)(*(_QWORD *)(a1 + 18472) & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL,
            v23);
    v25 = sub_6C4160(a1, *(_QWORD *)&byte_8[v24 & 0xFFFFFFFFFFFFFFF0LL] | v24 & 7);
  }
  else
  {
    v25 = sub_6C4160(a1, *(_QWORD *)(a1 + 18472));
  }
  *(_QWORD *)(a1 + 18896) = v25;
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18904), 487);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18872), 479);
  sub_6BB050(a1, (unsigned __int64 *)(a1 + 18880), 484);
  result = *(_WORD **)(a1 + 2160);
  *(_QWORD *)(a1 + 22568) = 0;
  if ( (*result & 0x480) != 0 )
  {
    *(_QWORD *)(a1 + 22576) = sub_6BAA70((_QWORD *)a1, "_GUID", 5u, 0);
    v27 = sub_6E2C00(
            (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 2112) + 80LL) + 72LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 2112) + 80LL));
    return (_WORD *)sub_7A0AA0(v27 + 40, *(_QWORD *)(a1 + 22576));
  }
  return result;
}

