unsigned __int64 __fastcall sub_33E2C0(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 *v5; // rdi
  void *v6; // rdi
  _QWORD *v7; // rdi
  unsigned __int64 **v8; // rdi
  void *v9; // rdi
  unsigned __int64 **v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  _QWORD *v13; // rdi
  unsigned __int64 **v14; // rdi
  void *v15; // rdi
  _QWORD **v16; // rbp
  _QWORD **v17; // rbp
  __int64 v18; // rdi
  __int64 i; // rax
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  _QWORD *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rdi
  _QWORD *v27; // rdi
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // rbp
  unsigned __int64 *v30; // rax
  unsigned __int64 v31; // rbp
  __int64 v32; // r12
  __int64 v33; // rbp
  __int64 *v35; // r12
  __int64 v36; // rdx
  __int64 *v37; // r13
  __int64 v38; // rax
  __int64 *v39; // rdi
  __int64 *v40; // rdi
  __int64 *v41; // r13
  __int64 *v42; // rdi
  __int64 *v43; // rdi
  __int64 v44; // rax
  __int64 *v45; // r12
  __int64 v46; // rdx
  __int64 *v47; // r13
  __int64 v48; // rax
  __int64 *v49; // rdi
  __int64 *v50; // rdi
  __int64 *v51; // r13
  __int64 *v52; // rdi
  __int64 *v53; // rdi
  __int64 v54; // rax
  __int64 (__fastcall **v55[3])(_QWORD); // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v56; // [rsp+18h] [rbp-30h]

  v56 = __readfsqword(0x28u);
  *(_QWORD *)a1 = off_4E3C78;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 840) + 286LL) & 2) != 0 )
  {
    set_hexdsp();
    v55[1] = (__int64 (__fastcall **)(_QWORD))a1;
    v55[0] = (__int64 (__fastcall **)(_QWORD))off_4E3C58;
    sub_33E220(v55);
  }
  sub_3AD580(*(_QWORD *)(a1 + 1400));
  v3 = *(void **)(a1 + 1392);
  *(_QWORD *)(a1 + 1400) = 0;
  sub_3B13B0(v3);
  v4 = *(_QWORD *)(a1 + 1360);
  *(_QWORD *)(a1 + 1392) = 0;
  sub_3A5AA0(v4);
  v5 = *(__int64 **)(a1 + 768);
  *(_QWORD *)(a1 + 1360) = 0;
  sub_BB680(v5);
  v6 = *(void **)(a1 + 784);
  *(_QWORD *)(a1 + 768) = 0;
  sub_413840(v6);
  v7 = *(_QWORD **)(a1 + 776);
  *(_QWORD *)(a1 + 784) = 0;
  sub_D04A0(v7);
  v8 = *(unsigned __int64 ***)(a1 + 792);
  *(_QWORD *)(a1 + 776) = 0;
  sub_140B50(v8, a2);
  v9 = *(void **)(a1 + 800);
  *(_QWORD *)(a1 + 792) = 0;
  sub_35ECD0(v9);
  v10 = *(unsigned __int64 ***)(a1 + 808);
  *(_QWORD *)(a1 + 800) = 0;
  sub_2799A0(v10);
  v11 = *(void **)(a1 + 816);
  *(_QWORD *)(a1 + 808) = 0;
  sub_260430(v11);
  v12 = *(void **)(a1 + 824);
  *(_QWORD *)(a1 + 816) = 0;
  sub_23FA90(v12);
  v13 = *(_QWORD **)(a1 + 832);
  *(_QWORD *)(a1 + 824) = 0;
  sub_1D5B90(v13);
  v14 = *(unsigned __int64 ***)(a1 + 840);
  *(_QWORD *)(a1 + 832) = 0;
  if ( v14 )
    sub_33B240(v14);
  *(_QWORD *)(a1 + 840) = 0;
  sub_374060(*(void **)(a1 + 1128));
  v15 = *(void **)(a1 + 112);
  *(_QWORD *)(a1 + 1128) = 0;
  sub_40B710(v15);
  v16 = *(_QWORD ***)(a1 + 1136);
  if ( v16 )
  {
    sub_33B070(v16[2]);
    operator delete(v16, 0x30u);
  }
  v17 = *(_QWORD ***)(a1 + 1144);
  *(_QWORD *)(a1 + 1136) = 0;
  if ( v17 )
  {
    sub_33B070(v17[2]);
    operator delete(v17, 0x30u);
  }
  v18 = *(_QWORD *)(a1 + 1152);
  *(_QWORD *)(a1 + 1144) = 0;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
  *(_QWORD *)(a1 + 1152) = 0;
  for ( i = *(_QWORD *)(a1 + 120); i; i = *(_QWORD *)(a1 + 120) )
    sub_33E040(a1, *(_QWORD *)(i + 8), *(_QWORD *)(i + 16));
  *(_QWORD *)(a1 + 192) = 0;
  v20 = *(void **)(a1 + 880);
  *(_QWORD *)(a1 + 872) = 0;
  sub_3C0E60(v20);
  v21 = *(void **)(a1 + 1008);
  *(_OWORD *)(a1 + 880) = 0;
  *(_OWORD *)(a1 + 1344) = 0;
  sub_389900(v21);
  v22 = *(void **)(a1 + 1016);
  *(_QWORD *)(a1 + 1008) = 0;
  sub_3D62B0(v22);
  v23 = *(_QWORD **)(a1 + 1024);
  *(_QWORD *)(a1 + 1016) = 0;
  sub_1AE330(v23);
  v24 = *(_QWORD *)(a1 + 1032);
  *(_QWORD *)(a1 + 1024) = 0;
  nullsub_305(v24);
  v25 = *(_QWORD *)(a1 + 1040);
  *(_QWORD *)(a1 + 1032) = 0;
  sub_284D50(v25);
  v26 = *(_QWORD *)(a1 + 1048);
  *(_QWORD *)(a1 + 1040) = 0;
  sub_284DD0(v26);
  v27 = *(_QWORD **)(a1 + 1056);
  *(_QWORD *)(a1 + 1048) = 0;
  sub_312050(v27);
  *(_QWORD *)(a1 + 1056) = 0;
  unregister_post_event_visitor();
  sub_3CD6F0(a1, a1 + 552);
  clr_module_data();
  v28 = *(unsigned __int64 **)(a1 + 1432);
  if ( v28 )
  {
    v29 = *v28;
    if ( !*(_QWORD *)(a1 + 1440) )
    {
      *v28 = (unsigned __int64)v28 & 0xFFFFFFFFFFFFFFFCLL | *v28 & 3;
      *(__m128i *)(*(_QWORD *)(a1 + 1432) + 8LL) = _mm_unpacklo_epi64(
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1432),
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1432));
      **(_QWORD **)(a1 + 1432) &= ~1uLL;
      **(_QWORD **)(a1 + 1432) |= 2uLL;
      goto LABEL_16;
    }
    v35 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
    v36 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v36 & 2) != 0 )
    {
LABEL_81:
      *v28 = (unsigned __int64)v28 & 0xFFFFFFFFFFFFFFFCLL | v29 & 3;
      *(__m128i *)(*(_QWORD *)(a1 + 1432) + 8LL) = _mm_unpacklo_epi64(
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1432),
                                                     (__m128i)*(unsigned __int64 *)(a1 + 1432));
      **(_QWORD **)(a1 + 1432) &= ~1uLL;
      **(_QWORD **)(a1 + 1432) |= 2uLL;
      *(_QWORD *)(a1 + 1440) = 0;
LABEL_16:
      if ( *(_QWORD *)(a1 + 1432) )
        qfree();
      goto LABEL_18;
    }
    v37 = (__int64 *)v35[1];
    v38 = *v37;
    if ( (*v37 & 2) != 0 )
    {
      v41 = (__int64 *)v35[2];
      if ( (*(_BYTE *)v41 & 2) != 0 )
        goto LABEL_77;
      goto LABEL_70;
    }
    v39 = (__int64 *)v37[1];
    if ( (*(_BYTE *)v39 & 2) != 0 )
    {
      v40 = (__int64 *)v37[2];
      if ( (*(_BYTE *)v40 & 2) != 0 )
      {
LABEL_108:
        *v37 = v38 | 2;
LABEL_67:
        if ( v37 )
          qfree();
        v41 = (__int64 *)v35[2];
        if ( (*(_BYTE *)v41 & 2) != 0 )
        {
LABEL_76:
          v36 = *v35;
          if ( (*v35 & 2) != 0 )
          {
LABEL_78:
            if ( v29 > 3 )
              qfree();
            v28 = *(unsigned __int64 **)(a1 + 1432);
            v29 = *v28;
            goto LABEL_81;
          }
LABEL_77:
          *v35 = v36 | 2;
          goto LABEL_78;
        }
LABEL_70:
        v42 = (__int64 *)v41[1];
        if ( (*(_BYTE *)v42 & 2) != 0 )
        {
          v43 = (__int64 *)v41[2];
          if ( (*(_BYTE *)v43 & 2) != 0 )
          {
            v44 = *v41;
LABEL_116:
            *v41 = v44 | 2;
LABEL_74:
            if ( v41 )
              qfree();
            goto LABEL_76;
          }
        }
        else
        {
          sub_33A9D0(v42);
          v43 = (__int64 *)v41[2];
          if ( (*(_BYTE *)v43 & 2) != 0 )
            goto LABEL_73;
        }
        sub_33A9D0(v43);
LABEL_73:
        v44 = *v41;
        if ( (*v41 & 2) != 0 )
          goto LABEL_74;
        goto LABEL_116;
      }
    }
    else
    {
      sub_33A9D0(v39);
      v40 = (__int64 *)v37[2];
      if ( (*(_BYTE *)v40 & 2) != 0 )
        goto LABEL_66;
    }
    sub_33A9D0(v40);
LABEL_66:
    v38 = *v37;
    if ( (*v37 & 2) != 0 )
      goto LABEL_67;
    goto LABEL_108;
  }
LABEL_18:
  if ( *(_QWORD *)(a1 + 1368) )
  {
    *(_QWORD *)(a1 + 1376) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1312) )
  {
    *(_QWORD *)(a1 + 1320) = 0;
    qfree();
  }
  clear_tinfo_t();
  if ( *(_QWORD *)(a1 + 1280) )
  {
    *(_QWORD *)(a1 + 1288) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1256) )
  {
    *(_QWORD *)(a1 + 1264) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1232) )
  {
    *(_QWORD *)(a1 + 1240) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1208) )
  {
    *(_QWORD *)(a1 + 1216) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1184) )
  {
    *(_QWORD *)(a1 + 1192) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1160) )
  {
    *(_QWORD *)(a1 + 1168) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1088) )
  {
    *(_QWORD *)(a1 + 1096) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1064) )
  {
    *(_QWORD *)(a1 + 1072) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 952) )
  {
    *(_QWORD *)(a1 + 960) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 928) )
  {
    *(_QWORD *)(a1 + 936) = 0;
    qfree();
  }
  v30 = *(unsigned __int64 **)(a1 + 904);
  if ( v30 )
  {
    v31 = *v30;
    if ( !*(_QWORD *)(a1 + 912) )
    {
      *v30 = (unsigned __int64)v30 & 0xFFFFFFFFFFFFFFFCLL | *v30 & 3;
      *(__m128i *)(*(_QWORD *)(a1 + 904) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 904),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 904));
      **(_QWORD **)(a1 + 904) &= ~1uLL;
      **(_QWORD **)(a1 + 904) |= 2uLL;
      goto LABEL_45;
    }
    v45 = (__int64 *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
    v46 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v46 & 2) != 0 )
    {
LABEL_102:
      *v30 = (unsigned __int64)v30 & 0xFFFFFFFFFFFFFFFCLL | v31 & 3;
      *(__m128i *)(*(_QWORD *)(a1 + 904) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 904),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 904));
      **(_QWORD **)(a1 + 904) &= ~1uLL;
      **(_QWORD **)(a1 + 904) |= 2uLL;
      *(_QWORD *)(a1 + 912) = 0;
LABEL_45:
      if ( *(_QWORD *)(a1 + 904) )
        qfree();
      goto LABEL_47;
    }
    v47 = (__int64 *)v45[1];
    v48 = *v47;
    if ( (*v47 & 2) != 0 )
    {
      v51 = (__int64 *)v45[2];
      if ( (*(_BYTE *)v51 & 2) != 0 )
        goto LABEL_98;
      goto LABEL_91;
    }
    v49 = (__int64 *)v47[1];
    if ( (*(_BYTE *)v49 & 2) != 0 )
    {
      v50 = (__int64 *)v47[2];
      if ( (*(_BYTE *)v50 & 2) != 0 )
      {
LABEL_110:
        *v47 = v48 | 2;
LABEL_88:
        if ( v47 )
          qfree();
        v51 = (__int64 *)v45[2];
        if ( (*(_BYTE *)v51 & 2) != 0 )
        {
LABEL_97:
          v46 = *v45;
          if ( (*v45 & 2) != 0 )
          {
LABEL_99:
            if ( v31 > 3 )
              qfree();
            v30 = *(unsigned __int64 **)(a1 + 904);
            v31 = *v30;
            goto LABEL_102;
          }
LABEL_98:
          *v45 = v46 | 2;
          goto LABEL_99;
        }
LABEL_91:
        v52 = (__int64 *)v51[1];
        if ( (*(_BYTE *)v52 & 2) != 0 )
        {
          v53 = (__int64 *)v51[2];
          if ( (*(_BYTE *)v53 & 2) != 0 )
          {
            v54 = *v51;
LABEL_113:
            *v51 = v54 | 2;
LABEL_95:
            if ( v51 )
              qfree();
            goto LABEL_97;
          }
        }
        else
        {
          sub_33A8E0(v52);
          v53 = (__int64 *)v51[2];
          if ( (*(_BYTE *)v53 & 2) != 0 )
            goto LABEL_94;
        }
        sub_33A8E0(v53);
LABEL_94:
        v54 = *v51;
        if ( (*v51 & 2) != 0 )
          goto LABEL_95;
        goto LABEL_113;
      }
    }
    else
    {
      sub_33A8E0(v49);
      v50 = (__int64 *)v47[2];
      if ( (*(_BYTE *)v50 & 2) != 0 )
        goto LABEL_87;
    }
    sub_33A8E0(v50);
LABEL_87:
    v48 = *v47;
    if ( (*v47 & 2) != 0 )
      goto LABEL_88;
    goto LABEL_110;
  }
LABEL_47:
  if ( *(_QWORD *)(a1 + 848) )
  {
    *(_QWORD *)(a1 + 856) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 688) )
  {
    *(_QWORD *)(a1 + 696) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 664) )
  {
    *(_QWORD *)(a1 + 672) = 0;
    qfree();
  }
  *(_QWORD *)(a1 + 528) = &off_4EC308;
  remove_event_listener();
  *(_QWORD *)(a1 + 504) = &off_4EC308;
  remove_event_listener();
  *(_QWORD *)(a1 + 480) = &off_4EC308;
  remove_event_listener();
  *(_QWORD *)(a1 + 456) = &off_4EC308;
  remove_event_listener();
  if ( *(_QWORD *)(a1 + 424) )
  {
    *(_QWORD *)(a1 + 432) = 0;
    qfree();
  }
  v32 = a1 + 400;
  v33 = a1 + 368;
  do
  {
    v32 -= 8;
    clear_tinfo_t();
  }
  while ( v33 != v32 );
  do
  {
    v33 -= 8;
    clear_tinfo_t();
  }
  while ( a1 + 192 != v33 );
  if ( *(_QWORD *)(a1 + 160) )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree();
  }
  return v56 - __readfsqword(0x28u);
}
