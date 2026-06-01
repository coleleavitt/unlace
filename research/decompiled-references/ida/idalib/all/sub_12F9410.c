__int64 __fastcall sub_12F9410(_QWORD *a1, _BYTE *a2, signed __int64 a3, __int64 a4)
{
  __int64 v5; // r14
  size_t v6; // rax
  __m128i *v7; // rax
  size_t v8; // rax
  __m128i *v9; // rax
  __int64 v10; // rcx
  void *v11; // rsi
  __int128 *v12; // r13
  unsigned __int8 v13; // al
  __int64 v14; // r12
  _QWORD *v15; // rax
  __int64 v16; // r11
  _QWORD *v17; // r15
  __int64 v18; // r12
  __int64 v19; // r14
  _QWORD *v20; // rax
  __int64 v21; // rdi
  _BYTE *v22; // rsi
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  unsigned int v28; // r15d
  _QWORD *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v33; // rdi
  __int64 v34; // [rsp-10h] [rbp-1D8h]
  __int64 v35; // [rsp-8h] [rbp-1D0h]
  void *v38; // [rsp+10h] [rbp-1B8h]
  unsigned __int8 v39; // [rsp+10h] [rbp-1B8h]
  __int64 v41; // [rsp+20h] [rbp-1A8h]
  __int64 v42; // [rsp+20h] [rbp-1A8h]
  void *v43[2]; // [rsp+30h] [rbp-198h] BYREF
  _BYTE v44[16]; // [rsp+40h] [rbp-188h] BYREF
  void *v45; // [rsp+50h] [rbp-178h]
  __int64 v46; // [rsp+58h] [rbp-170h]
  __m128i v47; // [rsp+60h] [rbp-168h] BYREF
  void *v48[2]; // [rsp+70h] [rbp-158h] BYREF
  _BYTE v49[16]; // [rsp+80h] [rbp-148h] BYREF
  void *v50; // [rsp+90h] [rbp-138h] BYREF
  __int64 v51; // [rsp+98h] [rbp-130h]
  _OWORD v52[4]; // [rsp+A0h] [rbp-128h] BYREF
  __int128 v53; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v54; // [rsp+F0h] [rbp-D8h]
  __int64 v55; // [rsp+F8h] [rbp-D0h]
  __int64 v56; // [rsp+100h] [rbp-C8h]
  __int128 v57; // [rsp+108h] [rbp-C0h]
  __int64 v58; // [rsp+118h] [rbp-B0h]
  __int64 v59; // [rsp+120h] [rbp-A8h]
  __int64 v60; // [rsp+128h] [rbp-A0h]
  char *v61; // [rsp+130h] [rbp-98h]
  __int64 v62; // [rsp+138h] [rbp-90h]
  char v63; // [rsp+140h] [rbp-88h] BYREF
  char *v64; // [rsp+150h] [rbp-78h]
  __int64 v65; // [rsp+158h] [rbp-70h]
  char v66; // [rsp+160h] [rbp-68h] BYREF
  __int16 v67; // [rsp+170h] [rbp-58h]
  __int128 v68; // [rsp+178h] [rbp-50h]
  __int64 v69; // [rsp+188h] [rbp-40h]

  v5 = a1[19];
  v53 = 0;
  v57 = 0;
  v61 = &v63;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v62 = 0;
  v63 = 0;
  v64 = &v66;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  if ( !v5 )
    goto LABEL_39;
  v48[0] = v49;
  if ( a2 )
  {
    sub_12E9400(v48, a2, (__int64)&a2[a3]);
  }
  else
  {
    v48[1] = nullptr;
    v49[0] = 0;
  }
  v6 = j__strlen("Preloading ");
  v7 = (__m128i *)sub_99BDC0(v48, 0, 0, "Preloading ", v6);
  v50 = v52;
  if ( (__m128i *)v7->m128i_i64[0] == &v7[1] )
  {
    v52[0] = _mm_loadu_si128(v7 + 1);
  }
  else
  {
    v50 = (void *)v7->m128i_i64[0];
    *(_QWORD *)&v52[0] = v7[1].m128i_i64[0];
  }
  v51 = v7->m128i_i64[1];
  v7->m128i_i64[0] = (__int64)v7[1].m128i_i64;
  v7->m128i_i64[1] = 0;
  v7[1].m128i_i8[0] = 0;
  v38 = v50;
  v41 = v51;
  v43[0] = v44;
  if ( a2 )
  {
    sub_12E9400(v43, a2, (__int64)&a2[a3]);
  }
  else
  {
    v43[1] = nullptr;
    v44[0] = 0;
  }
  v8 = j__strlen("preloading.");
  v9 = (__m128i *)sub_99BDC0(v43, 0, 0, "preloading.", v8);
  v45 = &v47;
  if ( (__m128i *)v9->m128i_i64[0] == &v9[1] )
  {
    v47 = _mm_loadu_si128(v9 + 1);
  }
  else
  {
    v45 = (void *)v9->m128i_i64[0];
    v47.m128i_i64[0] = v9[1].m128i_i64[0];
  }
  v10 = v9->m128i_i64[1];
  v9[1].m128i_i8[0] = 0;
  v46 = v10;
  v9->m128i_i64[0] = (__int64)v9[1].m128i_i64;
  v11 = v45;
  v9->m128i_i64[1] = 0;
  sub_2253190(&v53, v11, v46, v38, v41, v5);
  if ( v45 != &v47 )
    operator delete(v45);
  if ( v43[0] != v44 )
    operator delete(v43[0]);
  if ( v50 != v52 )
    operator delete(v50);
  if ( v48[0] != v49 )
    operator delete(v48[0]);
  if ( a1[19] )
  {
    v12 = &v53;
    sub_224E010(&v53);
    if ( a1[21] )
      goto LABEL_20;
  }
  else
  {
LABEL_39:
    v12 = nullptr;
    if ( a1[21] )
      goto LABEL_20;
  }
  sub_12F6500(a1);
LABEL_20:
  v13 = sub_FD3E40(*(_QWORD *)(a1[4] + 32LL), 0x34Cu, 0, a1[4]);
  v14 = a1[12];
  v39 = v13;
  v15 = (_QWORD *)operator new(0x120u);
  v16 = a1[21];
  v17 = v15;
  *v15 = &off_2BAFAE0;
  v15[1] = v14;
  v18 = v16;
  v15[2] = v15 + 4;
  v19 = *(_QWORD *)(v16 + 56);
  v15[3] = 0x800000000LL;
  *(_QWORD *)(v16 + 56) = 0;
  if ( v19 )
  {
    v42 = v16;
    v20 = (_QWORD *)operator new(0x18u);
    v20[1] = v17;
    v20[2] = v19;
    v21 = *(_QWORD *)(v42 + 56);
    *v20 = &off_2BE44F8;
    *(_QWORD *)(v42 + 56) = v20;
    LOBYTE(v19) = 1;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    v16 = a1[21];
  }
  else
  {
    *(_QWORD *)(v16 + 56) = v15;
  }
  v22 = a2;
  v23 = sub_1F15770(v16, (_DWORD)a2, a3, 1, 0, 8 * (unsigned int)(v39 < 4u), a4);
  v25 = v34;
  v26 = v35;
  if ( v23 )
  {
    if ( v23 == 5 )
    {
      sub_FC70B0((__int64)&v50, a1[4], 0, 844);
      v22 = a2;
      sub_AEC220((unsigned __int8 **)&v50, a2, a3);
      sub_AEA040((__int64)&v50);
      v27 = (__int64)v17;
      v28 = 1;
      sub_12E89A0(v27);
    }
    else
    {
      v28 = 0;
    }
  }
  else
  {
    v33 = (__int64)v17;
    v28 = 1;
    sub_12F09D0(v33);
  }
  v29 = *(_QWORD **)(v18 + 56);
  *(_QWORD *)(v18 + 56) = 0;
  if ( (_BYTE)v19 )
  {
    v30 = v29[2];
    v29[2] = 0;
    v31 = *(_QWORD *)(v18 + 56);
    *(_QWORD *)(v18 + 56) = v30;
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
    goto LABEL_30;
  }
  if ( v29 )
LABEL_30:
    (*(void (__fastcall **)(_QWORD *))(*v29 + 8LL))(v29);
  if ( v12 )
    sub_224E0F0(v12, v22, v25, v26, v24);
  sub_224F490(&v53);
  return v28;
}
