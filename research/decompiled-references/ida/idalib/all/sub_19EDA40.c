__int64 __fastcall sub_19EDA40(__int64 a1, __int64 a2)
{
  __m128i *v3; // rax
  size_t v4; // rcx
  size_t v5; // r12
  unsigned __int64 v6; // rdx
  __m128i *v7; // rsi
  signed __int64 v8; // rdx
  __m128i *v9; // rax
  size_t v10; // rcx
  size_t v11; // r15
  size_t v12; // rax
  unsigned __int64 v13; // rcx
  __m128i *v14; // rsi
  signed __int64 v15; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  void *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned __int8 *v30; // rax
  unsigned __int8 *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdx
  void *v45; // rdi
  __int64 v46; // [rsp+8h] [rbp-1B0h]
  __int64 v47; // [rsp+8h] [rbp-1B0h]
  size_t v48; // [rsp+8h] [rbp-1B0h]
  __int64 v49; // [rsp+8h] [rbp-1B0h]
  unsigned __int8 *v50; // [rsp+10h] [rbp-1A8h]
  __int64 v51; // [rsp+28h] [rbp-190h] BYREF
  void *v52[2]; // [rsp+30h] [rbp-188h] BYREF
  __int64 v53; // [rsp+40h] [rbp-178h] BYREF
  void *v54; // [rsp+50h] [rbp-168h] BYREF
  size_t v55; // [rsp+58h] [rbp-160h]
  __m128i v56; // [rsp+60h] [rbp-158h] BYREF
  void *v57; // [rsp+70h] [rbp-148h]
  signed __int64 v58; // [rsp+78h] [rbp-140h]
  __m128i v59; // [rsp+80h] [rbp-138h] BYREF
  void *v60[2]; // [rsp+90h] [rbp-128h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-118h] BYREF
  void *v62; // [rsp+B0h] [rbp-108h] BYREF
  size_t v63; // [rsp+B8h] [rbp-100h]
  __m128i v64; // [rsp+C0h] [rbp-F8h] BYREF
  void *v65; // [rsp+D0h] [rbp-E8h] BYREF
  signed __int64 v66; // [rsp+D8h] [rbp-E0h]
  __m128i v67; // [rsp+E0h] [rbp-D8h] BYREF
  _QWORD v68[2]; // [rsp+F0h] [rbp-C8h] BYREF
  void *v69; // [rsp+100h] [rbp-B8h]
  unsigned __int8 *v70; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v71; // [rsp+118h] [rbp-A0h]
  char v72; // [rsp+168h] [rbp-50h]
  unsigned int v73; // [rsp+170h] [rbp-48h]
  char v74; // [rsp+174h] [rbp-44h]

  sub_168B9F0((__int64)v68, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL), **(_DWORD **)a1, 0xCADu, 0);
  sub_F60C70(v52, *(_QWORD *)(a1 + 16));
  v3 = (__m128i *)sub_99BDC0(v52, 0, 0, "'", 1u);
  v54 = &v56;
  if ( (__m128i *)v3->m128i_i64[0] == &v3[1] )
  {
    v56 = _mm_loadu_si128(v3 + 1);
  }
  else
  {
    v54 = (void *)v3->m128i_i64[0];
    v56.m128i_i64[0] = v3[1].m128i_i64[0];
  }
  v4 = v3->m128i_u64[1];
  v3[1].m128i_i8[0] = 0;
  v55 = v4;
  v3->m128i_i64[0] = (__int64)v3[1].m128i_i64;
  v3->m128i_i64[1] = 0;
  v5 = v55;
  if ( v55 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_66;
  v6 = v54 == &v56 ? 15LL : v56.m128i_i64[0];
  if ( v55 + 1 > v6 )
    sub_998B30((__int64)&v54, v55, 0, "'", 1u);
  else
    *((_BYTE *)v54 + v55) = 39;
  v55 = v5 + 1;
  *((_BYTE *)v54 + v5 + 1) = 0;
  v7 = (__m128i *)v54;
  v57 = &v59;
  if ( v54 == &v56 )
  {
    v7 = &v59;
    v59 = _mm_load_si128(&v56);
  }
  else
  {
    v57 = v54;
    v59.m128i_i64[0] = v56.m128i_i64[0];
  }
  v8 = v55;
  v56.m128i_i8[0] = 0;
  v54 = &v56;
  v58 = v55;
  v55 = 0;
  if ( v72 )
  {
    sub_AEC220(&v70, v7, v8);
  }
  else if ( v74 )
  {
    v21 = sub_168B9E0(v68);
    v22 = v69;
    if ( v69 )
      v22 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v69 + 32LL))(v69);
    v65 = v22;
    v23 = sub_1587BC0(v21, (__int64 *)&v65, v17, v18, v19, v20);
    sub_AEC220((unsigned __int8 **)(*v23 + 32LL * v73 + 8), v57, v58);
  }
  sub_F60C70(v60, a2);
  v9 = (__m128i *)sub_99BDC0(v60, 0, 0, "'", 1u);
  v62 = &v64;
  if ( (__m128i *)v9->m128i_i64[0] == &v9[1] )
  {
    v64 = _mm_loadu_si128(v9 + 1);
  }
  else
  {
    v62 = (void *)v9->m128i_i64[0];
    v64.m128i_i64[0] = v9[1].m128i_i64[0];
  }
  v10 = v9->m128i_u64[1];
  v9[1].m128i_i8[0] = 0;
  v63 = v10;
  v9->m128i_i64[0] = (__int64)v9[1].m128i_i64;
  v9->m128i_i64[1] = 0;
  v11 = v63;
  if ( v63 == 0x7FFFFFFFFFFFFFFFLL )
LABEL_66:
    std::__throw_length_error("basic_string::append");
  v12 = v63 + 1;
  if ( v62 == &v64 )
    v13 = 15;
  else
    v13 = v64.m128i_i64[0];
  if ( v12 > v13 )
  {
    v48 = v63 + 1;
    sub_998B30((__int64)&v62, v63, 0, "'", 1u);
    v12 = v48;
  }
  else
  {
    *((_BYTE *)v62 + v63) = 39;
  }
  v63 = v12;
  *((_BYTE *)v62 + v11 + 1) = 0;
  v14 = (__m128i *)v62;
  v65 = &v67;
  if ( v62 == &v64 )
  {
    v14 = &v67;
    v67 = _mm_load_si128(&v64);
  }
  else
  {
    v65 = v62;
    v67.m128i_i64[0] = v64.m128i_i64[0];
  }
  v15 = v63;
  v63 = 0;
  v62 = &v64;
  v66 = v15;
  v64.m128i_i8[0] = 0;
  if ( !v72 )
  {
    if ( !v74 )
      goto LABEL_23;
    v24 = sub_168B9E0(v68);
    v28 = (__int64)v69;
    if ( v69 )
    {
      v46 = v24;
      v28 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v69 + 32LL))(v69);
      v24 = v46;
    }
    v51 = v28;
    v29 = sub_1587BC0(v24, &v51, v24, v25, v26, v27);
    sub_AEC220((unsigned __int8 **)(*v29 + 32LL * v73 + 8), v65, v66);
    if ( v72 )
      goto LABEL_42;
LABEL_47:
    if ( v74 )
    {
      v33 = sub_168B9E0(v68);
      v37 = (__int64)v69;
      if ( v69 )
      {
        v47 = v33;
        v37 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v69 + 32LL))(v69);
        v33 = v47;
      }
      v51 = v37;
      v38 = sub_1587BC0(v33, &v51, v33, v34, v35, v36);
      sub_AE9DF0((unsigned __int8 **)(*v38 + 32LL * v73 + 8), 0, 2u);
    }
    goto LABEL_23;
  }
  sub_AEC220(&v70, v14, v15);
  if ( !v72 )
    goto LABEL_47;
LABEL_42:
  v30 = v70;
  if ( !v70 )
  {
    v39 = v71;
    v40 = *(_DWORD *)(v71 + 14976);
    if ( v40 )
    {
      v41 = (unsigned int)(v40 - 1);
      *(_DWORD *)(v71 + 14976) = v41;
      v30 = *(unsigned __int8 **)(v39 + 8 * v41 + 14848);
      v42 = *((unsigned int *)v30 + 134);
      *v30 = 0;
      v43 = *((_QWORD *)v30 + 66);
      *((_DWORD *)v30 + 106) = 0;
      v44 = v43 + (v42 << 6);
      while ( v43 != v44 )
      {
        while ( 1 )
        {
          v44 -= 64;
          v45 = *(void **)(v44 + 24);
          if ( v45 == (void *)(v44 + 40) )
            break;
          v50 = v30;
          v49 = v44;
          operator delete(v45);
          v44 = v49;
          v30 = v50;
          if ( v43 == v49 )
            goto LABEL_63;
        }
      }
LABEL_63:
      *((_DWORD *)v30 + 134) = 0;
    }
    else
    {
      v30 = (unsigned __int8 *)operator new(0x3A0u);
      *v30 = 0;
      *((_QWORD *)v30 + 12) = v30 + 112;
      *((_QWORD *)v30 + 16) = v30 + 144;
      *((_QWORD *)v30 + 20) = v30 + 176;
      *((_QWORD *)v30 + 24) = v30 + 208;
      *((_QWORD *)v30 + 28) = v30 + 240;
      *((_QWORD *)v30 + 32) = v30 + 272;
      *((_QWORD *)v30 + 36) = v30 + 304;
      *((_QWORD *)v30 + 40) = v30 + 336;
      *((_QWORD *)v30 + 44) = v30 + 368;
      *((_QWORD *)v30 + 48) = v30 + 400;
      *((_QWORD *)v30 + 52) = v30 + 432;
      *((_QWORD *)v30 + 13) = 0;
      v30[112] = 0;
      *((_QWORD *)v30 + 17) = 0;
      v30[144] = 0;
      *((_QWORD *)v30 + 21) = 0;
      v30[176] = 0;
      *((_QWORD *)v30 + 25) = 0;
      v30[208] = 0;
      *((_QWORD *)v30 + 29) = 0;
      v30[240] = 0;
      *((_QWORD *)v30 + 33) = 0;
      v30[272] = 0;
      *((_QWORD *)v30 + 37) = 0;
      v30[304] = 0;
      *((_QWORD *)v30 + 41) = 0;
      v30[336] = 0;
      *((_QWORD *)v30 + 45) = 0;
      v30[368] = 0;
      *((_QWORD *)v30 + 49) = 0;
      v30[400] = 0;
      *((_QWORD *)v30 + 53) = 0x800000000LL;
      *((_QWORD *)v30 + 66) = v30 + 544;
      *((_QWORD *)v30 + 67) = 0x600000000LL;
    }
    v70 = v30;
  }
  v30[*v30 + 1] = 2;
  v31 = v70;
  v32 = *v70;
  *v70 = v32 + 1;
  *(_QWORD *)&v31[8 * v32 + 16] = 0;
LABEL_23:
  if ( v65 != &v67 )
    operator delete(v65);
  if ( v62 != &v64 )
    operator delete(v62);
  if ( v60[0] != &v61 )
    operator delete(v60[0]);
  if ( v57 != &v59 )
    operator delete(v57);
  if ( v54 != &v56 )
    operator delete(v54);
  if ( v52[0] != &v53 )
    operator delete(v52[0]);
  sub_15F7200(v68);
  return 1;
}
