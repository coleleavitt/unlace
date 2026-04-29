unsigned __int64 __fastcall sub_339020(__int64 a1, __int64 a2)
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
  __int64 *v13; // rdi
  unsigned __int64 **v14; // rdi
  __int64 v15; // rdi
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
  __int64 *v27; // rdi
  unsigned __int64 *v28; // rax
  unsigned __int64 v29; // rbp
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rdi
  unsigned __int64 *v43; // rax
  unsigned __int64 v44; // rbp
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // r12
  __int64 v51; // rbp
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 *v56; // r12
  __int64 v57; // rdx
  __int64 *v58; // r13
  __int64 v59; // rax
  __int64 *v60; // rdi
  __int64 *v61; // rdi
  __int64 *v62; // r13
  __int64 *v63; // rdi
  __int64 *v64; // rdi
  __int64 v65; // rax
  __int64 *v66; // r12
  __int64 v67; // rdx
  __int64 *v68; // r13
  __int64 v69; // rax
  __int64 *v70; // rdi
  __int64 *v71; // rdi
  __int64 *v72; // r13
  __int64 *v73; // rdi
  __int64 *v74; // rdi
  __int64 v75; // rax
  __int64 (__fastcall **v76[3])(_QWORD); // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v77; // [rsp+18h] [rbp-30h]

  v77 = __readfsqword(0x28u);
  *(_QWORD *)a1 = off_4B6698;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 840) + 286LL) & 2) != 0 )
  {
    set_hexdsp(0);
    v76[1] = (__int64 (__fastcall **)(_QWORD))a1;
    v76[0] = (__int64 (__fastcall **)(_QWORD))off_4B6678;
    sub_338F80(v76);
  }
  sub_3A8300(*(_QWORD *)(a1 + 1400));
  v3 = *(void **)(a1 + 1392);
  *(_QWORD *)(a1 + 1400) = 0;
  sub_3AC130(v3);
  v4 = *(_QWORD *)(a1 + 1360);
  *(_QWORD *)(a1 + 1392) = 0;
  sub_3A0820(v4);
  v5 = *(__int64 **)(a1 + 768);
  *(_QWORD *)(a1 + 1360) = 0;
  sub_B71C0(v5);
  v6 = *(void **)(a1 + 784);
  *(_QWORD *)(a1 + 768) = 0;
  sub_3EE540(v6);
  v7 = *(_QWORD **)(a1 + 776);
  *(_QWORD *)(a1 + 784) = 0;
  sub_CBFE0(v7);
  v8 = *(unsigned __int64 ***)(a1 + 792);
  *(_QWORD *)(a1 + 776) = 0;
  sub_13C690(v8, a2);
  v9 = *(void **)(a1 + 800);
  *(_QWORD *)(a1 + 792) = 0;
  sub_359A50(v9);
  v10 = *(unsigned __int64 ***)(a1 + 808);
  *(_QWORD *)(a1 + 800) = 0;
  sub_274DA0(v10);
  v11 = *(void **)(a1 + 816);
  *(_QWORD *)(a1 + 808) = 0;
  sub_25B830(v11);
  v12 = *(void **)(a1 + 824);
  *(_QWORD *)(a1 + 816) = 0;
  sub_23AE90(v12);
  v13 = *(__int64 **)(a1 + 832);
  *(_QWORD *)(a1 + 824) = 0;
  sub_1D1550(v13);
  v14 = *(unsigned __int64 ***)(a1 + 840);
  *(_QWORD *)(a1 + 832) = 0;
  if ( v14 )
    sub_335FB0(v14);
  *(_QWORD *)(a1 + 840) = 0;
  sub_36EDE0(*(void **)(a1 + 1128));
  v15 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 1128) = 0;
  sub_3ECC30(v15);
  v16 = *(_QWORD ***)(a1 + 1136);
  if ( v16 )
  {
    sub_335DE0(v16[2]);
    operator delete(v16, 0x30u);
  }
  v17 = *(_QWORD ***)(a1 + 1144);
  *(_QWORD *)(a1 + 1136) = 0;
  if ( v17 )
  {
    sub_335DE0(v17[2]);
    operator delete(v17, 0x30u);
  }
  v18 = *(_QWORD *)(a1 + 1152);
  *(_QWORD *)(a1 + 1144) = 0;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
  *(_QWORD *)(a1 + 1152) = 0;
  for ( i = *(_QWORD *)(a1 + 120); i; i = *(_QWORD *)(a1 + 120) )
    sub_338DA0(a1, *(_QWORD *)(i + 8), *(_QWORD *)(i + 16));
  *(_QWORD *)(a1 + 192) = 0;
  v20 = *(void **)(a1 + 880);
  *(_QWORD *)(a1 + 872) = 0;
  sub_3BBBE0(v20);
  v21 = *(void **)(a1 + 1008);
  *(_OWORD *)(a1 + 880) = 0;
  *(_OWORD *)(a1 + 1344) = 0;
  sub_384680(v21);
  v22 = *(void **)(a1 + 1016);
  *(_QWORD *)(a1 + 1008) = 0;
  sub_3D1030(v22);
  v23 = *(_QWORD **)(a1 + 1024);
  *(_QWORD *)(a1 + 1016) = 0;
  sub_1A9D30(v23);
  v24 = *(_QWORD *)(a1 + 1032);
  *(_QWORD *)(a1 + 1024) = 0;
  nullsub_303(v24);
  v25 = *(_QWORD *)(a1 + 1040);
  *(_QWORD *)(a1 + 1032) = 0;
  sub_280150(v25);
  v26 = *(_QWORD *)(a1 + 1048);
  *(_QWORD *)(a1 + 1040) = 0;
  sub_2801D0(v26);
  v27 = *(__int64 **)(a1 + 1056);
  *(_QWORD *)(a1 + 1048) = 0;
  sub_30CF50(v27);
  *(_QWORD *)(a1 + 1056) = 0;
  unregister_post_event_visitor(3, a1 + 552);
  sub_3C8470(a1);
  clr_module_data((unsigned int)dword_4C1BB8);
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
    v56 = (__int64 *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
    v57 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v57 & 2) != 0 )
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
      v30 = *(_QWORD *)(a1 + 1432);
      if ( v30 )
        qfree(v30);
      goto LABEL_18;
    }
    v58 = (__int64 *)v56[1];
    v59 = *v58;
    if ( (*v58 & 2) != 0 )
    {
      v62 = (__int64 *)v56[2];
      if ( (*(_BYTE *)v62 & 2) != 0 )
        goto LABEL_77;
      goto LABEL_70;
    }
    v60 = (__int64 *)v58[1];
    if ( (*(_BYTE *)v60 & 2) != 0 )
    {
      v61 = (__int64 *)v58[2];
      if ( (*(_BYTE *)v61 & 2) != 0 )
      {
LABEL_108:
        *v58 = v59 | 2;
LABEL_67:
        if ( v58 )
          qfree(v58);
        v62 = (__int64 *)v56[2];
        if ( (*(_BYTE *)v62 & 2) != 0 )
        {
LABEL_76:
          v57 = *v56;
          if ( (*v56 & 2) != 0 )
          {
LABEL_78:
            if ( v29 > 3 )
              qfree(v29 & 0xFFFFFFFFFFFFFFFCLL);
            v28 = *(unsigned __int64 **)(a1 + 1432);
            v29 = *v28;
            goto LABEL_81;
          }
LABEL_77:
          *v56 = v57 | 2;
          goto LABEL_78;
        }
LABEL_70:
        v63 = (__int64 *)v62[1];
        if ( (*(_BYTE *)v63 & 2) != 0 )
        {
          v64 = (__int64 *)v62[2];
          if ( (*(_BYTE *)v64 & 2) != 0 )
          {
            v65 = *v62;
LABEL_116:
            *v62 = v65 | 2;
LABEL_74:
            if ( v62 )
              qfree(v62);
            goto LABEL_76;
          }
        }
        else
        {
          sub_335740(v63);
          v64 = (__int64 *)v62[2];
          if ( (*(_BYTE *)v64 & 2) != 0 )
            goto LABEL_73;
        }
        sub_335740(v64);
LABEL_73:
        v65 = *v62;
        if ( (*v62 & 2) != 0 )
          goto LABEL_74;
        goto LABEL_116;
      }
    }
    else
    {
      sub_335740(v60);
      v61 = (__int64 *)v58[2];
      if ( (*(_BYTE *)v61 & 2) != 0 )
        goto LABEL_66;
    }
    sub_335740(v61);
LABEL_66:
    v59 = *v58;
    if ( (*v58 & 2) != 0 )
      goto LABEL_67;
    goto LABEL_108;
  }
LABEL_18:
  v31 = *(_QWORD *)(a1 + 1368);
  if ( v31 )
  {
    *(_QWORD *)(a1 + 1376) = 0;
    qfree(v31);
  }
  v32 = *(_QWORD *)(a1 + 1312);
  if ( v32 )
  {
    *(_QWORD *)(a1 + 1320) = 0;
    qfree(v32);
  }
  clear_tinfo_t(a1 + 1304);
  v33 = *(_QWORD *)(a1 + 1280);
  if ( v33 )
  {
    *(_QWORD *)(a1 + 1288) = 0;
    qfree(v33);
  }
  v34 = *(_QWORD *)(a1 + 1256);
  if ( v34 )
  {
    *(_QWORD *)(a1 + 1264) = 0;
    qfree(v34);
  }
  v35 = *(_QWORD *)(a1 + 1232);
  if ( v35 )
  {
    *(_QWORD *)(a1 + 1240) = 0;
    qfree(v35);
  }
  v36 = *(_QWORD *)(a1 + 1208);
  if ( v36 )
  {
    *(_QWORD *)(a1 + 1216) = 0;
    qfree(v36);
  }
  v37 = *(_QWORD *)(a1 + 1184);
  if ( v37 )
  {
    *(_QWORD *)(a1 + 1192) = 0;
    qfree(v37);
  }
  v38 = *(_QWORD *)(a1 + 1160);
  if ( v38 )
  {
    *(_QWORD *)(a1 + 1168) = 0;
    qfree(v38);
  }
  v39 = *(_QWORD *)(a1 + 1088);
  if ( v39 )
  {
    *(_QWORD *)(a1 + 1096) = 0;
    qfree(v39);
  }
  v40 = *(_QWORD *)(a1 + 1064);
  if ( v40 )
  {
    *(_QWORD *)(a1 + 1072) = 0;
    qfree(v40);
  }
  v41 = *(_QWORD *)(a1 + 952);
  if ( v41 )
  {
    *(_QWORD *)(a1 + 960) = 0;
    qfree(v41);
  }
  v42 = *(_QWORD *)(a1 + 928);
  if ( v42 )
  {
    *(_QWORD *)(a1 + 936) = 0;
    qfree(v42);
  }
  v43 = *(unsigned __int64 **)(a1 + 904);
  if ( v43 )
  {
    v44 = *v43;
    if ( !*(_QWORD *)(a1 + 912) )
    {
      *v43 = (unsigned __int64)v43 & 0xFFFFFFFFFFFFFFFCLL | *v43 & 3;
      *(__m128i *)(*(_QWORD *)(a1 + 904) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 904),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 904));
      **(_QWORD **)(a1 + 904) &= ~1uLL;
      **(_QWORD **)(a1 + 904) |= 2uLL;
      goto LABEL_45;
    }
    v66 = (__int64 *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
    v67 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v67 & 2) != 0 )
    {
LABEL_102:
      *v43 = (unsigned __int64)v43 & 0xFFFFFFFFFFFFFFFCLL | v44 & 3;
      *(__m128i *)(*(_QWORD *)(a1 + 904) + 8LL) = _mm_unpacklo_epi64(
                                                    (__m128i)*(unsigned __int64 *)(a1 + 904),
                                                    (__m128i)*(unsigned __int64 *)(a1 + 904));
      **(_QWORD **)(a1 + 904) &= ~1uLL;
      **(_QWORD **)(a1 + 904) |= 2uLL;
      *(_QWORD *)(a1 + 912) = 0;
LABEL_45:
      v45 = *(_QWORD *)(a1 + 904);
      if ( v45 )
        qfree(v45);
      goto LABEL_47;
    }
    v68 = (__int64 *)v66[1];
    v69 = *v68;
    if ( (*v68 & 2) != 0 )
    {
      v72 = (__int64 *)v66[2];
      if ( (*(_BYTE *)v72 & 2) != 0 )
        goto LABEL_98;
      goto LABEL_91;
    }
    v70 = (__int64 *)v68[1];
    if ( (*(_BYTE *)v70 & 2) != 0 )
    {
      v71 = (__int64 *)v68[2];
      if ( (*(_BYTE *)v71 & 2) != 0 )
      {
LABEL_110:
        *v68 = v69 | 2;
LABEL_88:
        if ( v68 )
          qfree(v68);
        v72 = (__int64 *)v66[2];
        if ( (*(_BYTE *)v72 & 2) != 0 )
        {
LABEL_97:
          v67 = *v66;
          if ( (*v66 & 2) != 0 )
          {
LABEL_99:
            if ( v44 > 3 )
              qfree(v44 & 0xFFFFFFFFFFFFFFFCLL);
            v43 = *(unsigned __int64 **)(a1 + 904);
            v44 = *v43;
            goto LABEL_102;
          }
LABEL_98:
          *v66 = v67 | 2;
          goto LABEL_99;
        }
LABEL_91:
        v73 = (__int64 *)v72[1];
        if ( (*(_BYTE *)v73 & 2) != 0 )
        {
          v74 = (__int64 *)v72[2];
          if ( (*(_BYTE *)v74 & 2) != 0 )
          {
            v75 = *v72;
LABEL_113:
            *v72 = v75 | 2;
LABEL_95:
            if ( v72 )
              qfree(v72);
            goto LABEL_97;
          }
        }
        else
        {
          sub_335650(v73);
          v74 = (__int64 *)v72[2];
          if ( (*(_BYTE *)v74 & 2) != 0 )
            goto LABEL_94;
        }
        sub_335650(v74);
LABEL_94:
        v75 = *v72;
        if ( (*v72 & 2) != 0 )
          goto LABEL_95;
        goto LABEL_113;
      }
    }
    else
    {
      sub_335650(v70);
      v71 = (__int64 *)v68[2];
      if ( (*(_BYTE *)v71 & 2) != 0 )
        goto LABEL_87;
    }
    sub_335650(v71);
LABEL_87:
    v69 = *v68;
    if ( (*v68 & 2) != 0 )
      goto LABEL_88;
    goto LABEL_110;
  }
LABEL_47:
  v46 = *(_QWORD *)(a1 + 848);
  if ( v46 )
  {
    *(_QWORD *)(a1 + 856) = 0;
    qfree(v46);
  }
  v47 = *(_QWORD *)(a1 + 688);
  if ( v47 )
  {
    *(_QWORD *)(a1 + 696) = 0;
    qfree(v47);
  }
  v48 = *(_QWORD *)(a1 + 664);
  if ( v48 )
  {
    *(_QWORD *)(a1 + 672) = 0;
    qfree(v48);
  }
  *(_QWORD *)(a1 + 528) = &off_4BE1A0;
  remove_event_listener(a1 + 528);
  *(_QWORD *)(a1 + 504) = &off_4BE1A0;
  remove_event_listener(a1 + 504);
  *(_QWORD *)(a1 + 480) = &off_4BE1A0;
  remove_event_listener(a1 + 480);
  *(_QWORD *)(a1 + 456) = &off_4BE1A0;
  remove_event_listener(a1 + 456);
  v49 = *(_QWORD *)(a1 + 424);
  if ( v49 )
  {
    *(_QWORD *)(a1 + 432) = 0;
    qfree(v49);
  }
  v50 = a1 + 400;
  v51 = a1 + 368;
  do
  {
    v52 = v50;
    v50 -= 8;
    clear_tinfo_t(v52);
  }
  while ( v51 != v50 );
  do
  {
    v53 = v51;
    v51 -= 8;
    clear_tinfo_t(v53);
  }
  while ( a1 + 192 != v51 );
  v54 = *(_QWORD *)(a1 + 160);
  if ( v54 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree(v54);
  }
  return v77 - __readfsqword(0x28u);
}
