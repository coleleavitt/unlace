__int64 __fastcall sub_4D2940(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r12
  __int64 v4; // r13
  std::chrono::_V2::steady_clock *v5; // r14
  int v6; // eax
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  char v10; // al
  std::chrono::_V2::steady_clock *v11; // rdi
  __int64 v12; // rax
  __m128i v13; // xmm0
  _DWORD *v14; // rax
  _OWORD *v15; // rax
  _OWORD *v16; // rax
  _DWORD *v17; // rax
  _OWORD *v18; // rax
  int v19; // edi
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  void *v26; // rsi
  double v27; // xmm0_8
  int v28; // eax
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // rdi
  unsigned int v33; // ebx
  __int64 v35; // rdi
  int v36; // eax
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rbp
  __int64 v42; // rbx
  char *v43; // r12
  char *v44; // r14
  __int64 v45; // rdi
  int v46; // eax
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  int v50; // [rsp+0h] [rbp-508h]
  void *v51; // [rsp+8h] [rbp-500h] BYREF
  int v52[2]; // [rsp+10h] [rbp-4F8h]
  __int64 v53; // [rsp+18h] [rbp-4F0h]
  void *v54; // [rsp+20h] [rbp-4E8h]
  int v55; // [rsp+28h] [rbp-4E0h]
  bool v56; // [rsp+2Fh] [rbp-4D9h]
  int v57[4]; // [rsp+30h] [rbp-4D8h] BYREF
  int v58[2]; // [rsp+40h] [rbp-4C8h] BYREF
  int v59; // [rsp+48h] [rbp-4C0h]
  int v60; // [rsp+50h] [rbp-4B8h]
  int v61; // [rsp+58h] [rbp-4B0h]
  char *v62; // [rsp+60h] [rbp-4A8h] BYREF
  int v63; // [rsp+68h] [rbp-4A0h]
  int v64; // [rsp+70h] [rbp-498h]
  int v65; // [rsp+78h] [rbp-490h]
  int v66; // [rsp+80h] [rbp-488h]
  int v67; // [rsp+88h] [rbp-480h]
  int v68; // [rsp+90h] [rbp-478h]
  int v69; // [rsp+98h] [rbp-470h]
  int v70; // [rsp+A0h] [rbp-468h]
  void *v71; // [rsp+A8h] [rbp-460h]
  int v72; // [rsp+B0h] [rbp-458h]
  __int64 v73; // [rsp+B8h] [rbp-450h]
  _QWORD v74[28]; // [rsp+158h] [rbp-3B0h] BYREF
  __int16 v75; // [rsp+238h] [rbp-2D0h]
  __int128 v76; // [rsp+240h] [rbp-2C8h]
  __int128 v77; // [rsp+250h] [rbp-2B8h]
  int v78[4]; // [rsp+260h] [rbp-2A8h] BYREF
  std::chrono::_V2::steady_clock *v79; // [rsp+270h] [rbp-298h]
  void *v80; // [rsp+278h] [rbp-290h]
  __int64 v81; // [rsp+280h] [rbp-288h]
  int v82; // [rsp+288h] [rbp-280h]
  __int64 *v83; // [rsp+290h] [rbp-278h]
  void *v84; // [rsp+298h] [rbp-270h]
  __int64 v85; // [rsp+2A0h] [rbp-268h]
  int v86; // [rsp+2A8h] [rbp-260h]
  void *v87; // [rsp+2B0h] [rbp-258h]
  __int64 v88; // [rsp+2B8h] [rbp-250h]
  int v89; // [rsp+2C0h] [rbp-248h]
  void *v90; // [rsp+2C8h] [rbp-240h]
  __int64 v91; // [rsp+2D0h] [rbp-238h]
  int v92; // [rsp+2D8h] [rbp-230h]
  __m128 v93; // [rsp+2E0h] [rbp-228h]
  __int64 v94; // [rsp+2F0h] [rbp-218h]
  void *v95; // [rsp+2F8h] [rbp-210h]
  __int64 v96; // [rsp+300h] [rbp-208h]
  int v97; // [rsp+308h] [rbp-200h]
  __int128 v98; // [rsp+310h] [rbp-1F8h]

  v2 = a2;
  v4 = a1 + 296;
  v5 = (std::chrono::_V2::steady_clock *)(a1 + 408);
  sub_64E850(*(_QWORD *)(a1 + 48));
  v6 = sub_64B1E0(*(_QWORD *)(a1 + 48));
  v7 = *(_QWORD *)(a1 + 48);
  HIDWORD(v53) = v6;
  v55 = v6;
  LODWORD(v8) = sub_64B240(v7);
  *(_OWORD *)v57 = 0;
  while ( 1 )
  {
    sub_4DA030(v4);
    sub_4DB5F0(v5);
    sub_4DB5F0(v57);
    sub_64E850(*(_QWORD *)(a1 + 48));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 336LL))(a1);
    v9 = **(_QWORD **)(a1 + 48);
    v51 = *(void **)(a1 + 48);
    v10 = sub_18290A0(v9);
    v11 = *(std::chrono::_V2::steady_clock **)(a1 + 48);
    if ( !v10 )
    {
      *((_DWORD *)v51 + 747) = 6;
      v33 = 0;
      goto LABEL_42;
    }
    v12 = sub_64B030(v11);
    if ( v12 && (v12 & 7) != 1 && *(_BYTE *)v12 )
    {
      *(_QWORD *)v78 = sub_64B030(*(_QWORD *)(a1 + 48));
      sub_180CE20(
        (int)v58,
        (int)v78,
        v37,
        v38,
        v39,
        v40,
        v50,
        v78,
        (int)v58,
        v53,
        (int)v54,
        v55,
        v57[0],
        v57[2],
        v58[0],
        v59,
        v60,
        v61,
        (int)v62,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      v41 = a1 + 288;
      v42 = *(_QWORD *)(a1 + 48);
      sub_654110(v42, v78);
      sub_54F310(v51, v42 + 2360, v42, v41);
      std::ios_base::ios_base((std::ios_base *)v74);
      v75 = 0;
      v76 = 0;
      v74[0] = (char *)&`vtable for'std::ios + 16;
      v77 = 0;
      v43 = (char *)`VTT for'std::ofstream[1];
      v44 = (char *)`VTT for'std::ofstream[2];
      v74[27] = 0;
      v45 = *((_QWORD *)v43 - 3);
      v62 = v43;
      *(char **)((char *)&v62 + v45) = v44;
      std::ios::init();
      v62 = (char *)&`vtable for'std::ofstream + 24;
      v74[0] = (char *)&`vtable for'std::ofstream + 64;
      std::filebuf::basic_filebuf();
      std::ios::init();
      std::filebuf::open();
      std::ios::clear();
      sub_5502E0(v51, &v62);
      exit(0);
    }
    v54 = (void *)std::chrono::_V2::steady_clock::now(v11);
    v51 = *(void **)(a1 + 48);
    sub_654110(v51, a2);
    v13 = _mm_loadl_epi64((const __m128i *)(a1 + 48));
    v79 = v5;
    *(__m128i *)v78 = _mm_unpacklo_epi64(v13, (__m128i)((unsigned __int64)v51 + 2360));
    v14 = (_DWORD *)sub_186B270(0x80u);
    *(_QWORD *)v14 = 0;
    v14[2] = 0;
    *((_QWORD *)v14 + 2) = 0;
    v14[6] = 0;
    *((_QWORD *)v14 + 4) = 0;
    v14[10] = 0;
    *((_QWORD *)v14 + 6) = 0;
    v14[14] = 0;
    *((_QWORD *)v14 + 8) = 0;
    v14[18] = 0;
    *((_QWORD *)v14 + 10) = 0;
    v14[22] = 0;
    *((_QWORD *)v14 + 12) = 0;
    v14[26] = 0;
    *((_QWORD *)v14 + 14) = 0;
    v14[30] = 0;
    v80 = v14;
    v82 = 0;
    v81 = 8;
    v83 = nullptr;
    v15 = (_OWORD *)sub_186B270(0xC0u);
    *((_DWORD *)v15 + 5) = 0;
    *((_DWORD *)v15 + 11) = 0;
    *((_DWORD *)v15 + 17) = 0;
    *((_DWORD *)v15 + 23) = 0;
    *((_DWORD *)v15 + 29) = 0;
    *((_DWORD *)v15 + 35) = 0;
    *((_DWORD *)v15 + 41) = 0;
    *((_DWORD *)v15 + 47) = 0;
    v84 = v15;
    *v15 = 0;
    *(_OWORD *)((char *)v15 + 24) = 0;
    v15[3] = 0;
    *(_OWORD *)((char *)v15 + 72) = 0;
    v15[6] = 0;
    *(_OWORD *)((char *)v15 + 120) = 0;
    v15[9] = 0;
    *(_OWORD *)((char *)v15 + 168) = 0;
    v86 = 0;
    v85 = 8;
    v16 = (_OWORD *)sub_186B270(0xC0u);
    *((_DWORD *)v16 + 5) = 0;
    *((_DWORD *)v16 + 11) = 0;
    *((_DWORD *)v16 + 17) = 0;
    *((_DWORD *)v16 + 23) = 0;
    *((_DWORD *)v16 + 29) = 0;
    *((_DWORD *)v16 + 35) = 0;
    *((_DWORD *)v16 + 41) = 0;
    *((_DWORD *)v16 + 47) = 0;
    v87 = v16;
    *v16 = 0;
    *(_OWORD *)((char *)v16 + 24) = 0;
    v16[3] = 0;
    *(_OWORD *)((char *)v16 + 72) = 0;
    v16[6] = 0;
    *(_OWORD *)((char *)v16 + 120) = 0;
    v16[9] = 0;
    *(_OWORD *)((char *)v16 + 168) = 0;
    v89 = 0;
    v88 = 8;
    v17 = (_DWORD *)sub_186B270(0x80u);
    *(_QWORD *)v17 = 0;
    v17[2] = 0;
    *((_QWORD *)v17 + 2) = 0;
    v17[6] = 0;
    *((_QWORD *)v17 + 4) = 0;
    v17[10] = 0;
    *((_QWORD *)v17 + 6) = 0;
    v17[14] = 0;
    *((_QWORD *)v17 + 8) = 0;
    v17[18] = 0;
    *((_QWORD *)v17 + 10) = 0;
    v17[22] = 0;
    *((_QWORD *)v17 + 12) = 0;
    v17[26] = 0;
    *((_QWORD *)v17 + 14) = 0;
    v17[30] = 0;
    v90 = v17;
    v92 = 0;
    v91 = 8;
    v51 = v78;
    v94 = 0;
    v93 = _mm_loadh_ps((const double *)&v51);
    v18 = (_OWORD *)sub_186B270(0x40u);
    v19 = (int)v51;
    *v18 = 0;
    v18[1] = 0;
    v18[2] = 0;
    v18[3] = 0;
    v95 = v18;
    v96 = 8;
    v97 = 0;
    v98 = 0;
    sub_52BC10(v19, v50, (int)v51, v52[0], v53, v54);
    if ( *((_QWORD *)&v98 + 1) )
      sub_186B220((void *)(*((_QWORD *)&v98 + 1) - 8LL));
    if ( (_QWORD)v98 )
      sub_186B220((void *)(v98 - 8));
    if ( v95 )
      sub_186B220(v95);
    if ( v90 )
      sub_186B220(v90);
    if ( v87 )
      sub_186B220(v87);
    if ( v84 )
      sub_186B220(v84);
    v20 = v83;
    if ( v83 )
    {
      v21 = *((unsigned int *)v83 - 1);
      if ( (_DWORD)v21 )
      {
        v51 = &v83[v21];
        do
        {
          while ( 1 )
          {
            v22 = *v20;
            if ( !*v20 )
              break;
            *(_QWORD *)v52 = v20;
            sub_186B220((void *)(v22 - 8));
            v20 = (__int64 *)(*(_QWORD *)v52 + 8LL);
            if ( v51 == (void *)(*(_QWORD *)v52 + 8LL) )
              goto LABEL_23;
          }
          ++v20;
        }
        while ( v51 != v20 );
LABEL_23:
        v20 = v83;
      }
      sub_186B220(v20 - 1);
    }
    if ( v80 )
      sub_186B220(v80);
    if ( HIDWORD(v53) )
    {
      v23 = (unsigned int)v55;
      if ( v55 > (unsigned int)v8 )
        v23 = (unsigned int)v8;
      v56 = (unsigned int)v8 >= v55 || (_DWORD)v8 == 0;
      if ( !(_DWORD)v8 )
        v23 = (unsigned int)v55;
      goto LABEL_32;
    }
    if ( (_DWORD)v8 )
    {
      v56 = 0;
      v23 = (unsigned int)v8;
LABEL_32:
      sub_4DA3A0(v4, v23);
      goto LABEL_33;
    }
    v56 = 0;
LABEL_33:
    LOBYTE(v51) = sub_4DB670(v5, v4);
    sub_4DA430(v4);
    if ( !(unsigned __int8)sub_4DB670(v57, v4) )
    {
      v24 = **(_QWORD **)(a1 + 48);
      *(_QWORD *)v52 = *(_QWORD *)(a1 + 48);
      if ( (unsigned __int8)sub_18290A0(v24) )
      {
        sub_1872CE0("");
        sub_1873130(114, 183);
      }
      *(_DWORD *)(*(_QWORD *)v52 + 2988LL) = 6;
    }
    sub_4DB7E0(v5);
    v25 = std::chrono::_V2::steady_clock::now(v5);
    v26 = v54;
    v27 = (double)(int)((v25 - (__int64)v54) / 1000000) / 1000.0 + *(double *)(a1 + 424);
    *(double *)(a1 + 424) = v27;
    if ( (unsigned int)sub_180B130(v5) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(v27) )
      {
        sub_186A4C0(v27);
        v28 = sub_180B150(v5, v26);
        sub_4DBD20(v4, 1000, v28, v29, v30, v31, v50, v51);
        sub_186A500(v4, 1000);
      }
      else
      {
        v46 = sub_180B150(v5, v26);
        sub_4DBD20(v4, 1000, v46, v47, v48, v49, v50, v51);
      }
    }
    v32 = **(_QWORD **)(a1 + 48);
    *(_QWORD *)v52 = *(_QWORD *)(a1 + 48);
    if ( !(unsigned __int8)sub_18290A0(v32) )
    {
      v11 = *(std::chrono::_V2::steady_clock **)(a1 + 48);
      v33 = 0;
      *(_DWORD *)(*(_QWORD *)v52 + 2988LL) = 6;
      goto LABEL_42;
    }
    if ( (_BYTE)v51 )
    {
      v11 = *(std::chrono::_V2::steady_clock **)(a1 + 48);
      v33 = 1;
      *((_DWORD *)v11 + 747) = 0;
      goto LABEL_42;
    }
    if ( (unsigned __int8)sub_186AF30() )
    {
      v11 = *(std::chrono::_V2::steady_clock **)(a1 + 48);
      v33 = 0;
      *((_DWORD *)v11 + 747) = 2;
      goto LABEL_42;
    }
    if ( v56 )
      break;
    v35 = *(_QWORD *)(a1 + 48);
    v36 = v55 - v8;
    if ( !HIDWORD(v53) )
      v36 = v55;
    v55 = v36;
    v8 = (unsigned int)sub_64B240(v35) * (unsigned __int64)(unsigned int)v8;
    if ( v8 > 0xFFFFFFFF )
      LODWORD(v8) = -1;
    sub_64C350(*v2);
    sub_64B510(*v2, v2 + 32);
    a2 = v2 + 1;
    sub_64C430(*v2, v2 + 1);
    sub_64DCE0(*v2);
  }
  v11 = *(std::chrono::_V2::steady_clock **)(a1 + 48);
  v33 = 0;
  *((_DWORD *)v11 + 747) = 1;
LABEL_42:
  sub_64C470(v11);
  sub_4DB560(v57);
  return v33;
}

