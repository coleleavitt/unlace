unsigned __int64 __fastcall sub_143C00(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 ash; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rax
  __m128i si128; // xmm0
  __int64 v11; // r15
  unsigned __int64 v12; // rcx
  int *v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // r12
  __int64 v21; // rdi
  _QWORD *v22; // rdi
  unsigned __int64 v23; // rdx
  const __m128i *v24; // rax
  __m128i *v25; // rax
  __m128i *v26; // rdx
  __m128i *v27; // rcx
  __m128i *v28; // rdx
  __m128i *v29; // rcx
  __int64 v30; // rdx
  char v31; // al
  _QWORD **v32; // rbx
  void *v33; // rdi
  _QWORD *v34; // rbx
  _QWORD *v35; // rbp
  __int64 v36; // rdi
  size_t n[2]; // [rsp+0h] [rbp-118h] BYREF
  __int64 v39; // [rsp+10h] [rbp-108h]
  __int64 v40; // [rsp+18h] [rbp-100h]
  __int64 v41; // [rsp+20h] [rbp-F8h]
  __m128i v42; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v43; // [rsp+40h] [rbp-D8h]
  void *src; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v45; // [rsp+58h] [rbp-C0h]
  char v46; // [rsp+68h] [rbp-B0h] BYREF
  int v47; // [rsp+70h] [rbp-A8h] BYREF
  void *v48; // [rsp+78h] [rbp-A0h]
  int *v49; // [rsp+80h] [rbp-98h]
  int *v50; // [rsp+88h] [rbp-90h]
  __int64 v51; // [rsp+90h] [rbp-88h]
  char v52; // [rsp+98h] [rbp-80h] BYREF
  int v53; // [rsp+A0h] [rbp-78h] BYREF
  void *v54; // [rsp+A8h] [rbp-70h]
  int *v55; // [rsp+B0h] [rbp-68h]
  int *v56; // [rsp+B8h] [rbp-60h]
  __int64 v57; // [rsp+C0h] [rbp-58h]
  __int64 v58; // [rsp+C8h] [rbp-50h]
  int v59; // [rsp+D0h] [rbp-48h]
  char v60; // [rsp+D4h] [rbp-44h]
  unsigned __int64 v61; // [rsp+D8h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  *(_QWORD *)a1 = get_ph();
  v2 = a1 + 48;
  v3 = a1 + 96;
  ash = get_ash();
  *(_QWORD *)(a1 + 64) = a1 + 48;
  *(_QWORD *)(a1 + 8) = ash;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 72) = a1 + 48;
  *(_QWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = a1 + 96;
  *(_QWORD *)(a1 + 120) = a1 + 96;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 148) = 1;
  *(_OWORD *)(a1 + 24) = 0;
  v39 = a1 + 16;
  *(_QWORD *)(a1 + 16) = qvector_reserve();
  *(_QWORD *)(a1 + 184) = a1 + 168;
  *(_QWORD *)(a1 + 192) = a1 + 168;
  *(_DWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 152) = &off_235A00;
  *(_QWORD *)(a1 + 208) = 0;
  sub_1770B0(a1 + 152, 0, v5, v6, v7, v8);
  *(_QWORD *)(a1 + 224) = 96;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 272) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 256) = -1;
  *(_QWORD *)(a1 + 304) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 280) = -1;
  *(_QWORD *)(a1 + 288) = 4;
  *(_QWORD *)(a1 + 296) = 9;
  *(_QWORD *)(a1 + 312) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  v40 = a1 + 320;
  sub_14F340(a1 + 320);
  v41 = a1 + 616;
  sub_14F550(a1 + 616);
  *(_DWORD *)(a1 + 936) = 0;
  *(_QWORD *)(a1 + 944) = sub_D7B30();
  *(_QWORD *)(a1 + 952) = sub_1210D0();
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 24LL))(TProgram::application + 136LL);
  v49 = &v47;
  v50 = &v47;
  v58 = v9;
  v47 = 0;
  v48 = nullptr;
  v51 = 0;
  v53 = 0;
  v54 = nullptr;
  v55 = &v53;
  v56 = &v53;
  v57 = 0;
  v59 = 0;
  v60 = 1;
  v45 = 0;
  src = (void *)qvector_reserve();
  si128 = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)0LL);
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    *(__m128i *)n = si128;
    qfree();
    si128 = _mm_load_si128((const __m128i *)n);
  }
  *(_QWORD *)(a1 + 16) = 0;
  *(__m128i *)(a1 + 24) = si128;
  if ( (char *)(a1 + 40) != &v46 )
  {
    v11 = *(_QWORD *)(a1 + 56);
    v12 = *(_QWORD *)(a1 + 72);
    v43 = a1 + 40;
    v42 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)v12);
    if ( v11 )
    {
      *(_QWORD *)(v11 + 8) = 0;
      if ( *(_QWORD *)(v12 + 16) )
        v42.m128i_i64[1] = *(_QWORD *)(v12 + 16);
      v13 = (int *)v48;
      *(_QWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 64) = v2;
      *(_QWORD *)(a1 + 72) = v2;
      *(_QWORD *)(a1 + 80) = 0;
      if ( !v13 )
      {
        do
        {
LABEL_13:
          v20 = (_QWORD *)v11;
          sub_141AD0(*(_QWORD **)(v11 + 24));
          v21 = *(_QWORD *)(v11 + 32);
          v11 = *(_QWORD *)(v11 + 16);
          if ( v21 )
          {
            v20[5] = 0;
            qfree();
          }
          operator delete(v20, 0x40u);
        }
        while ( v11 );
        goto LABEL_16;
      }
    }
    else
    {
      v13 = (int *)v48;
      *(_QWORD *)(a1 + 64) = v2;
      v42.m128i_i64[1] = 0;
      *(_QWORD *)(a1 + 72) = v2;
      *(_QWORD *)(a1 + 80) = 0;
      if ( !v13 )
        goto LABEL_16;
    }
    v14 = sub_1439E0(v13, a1 + 48, &v42);
    v15 = v14;
    do
    {
      v16 = v15;
      v15 = (_QWORD *)v15[2];
    }
    while ( v15 );
    *(_QWORD *)(a1 + 64) = v16;
    v17 = v14;
    do
    {
      v18 = v17;
      v17 = (_QWORD *)v17[3];
    }
    while ( v17 );
    v19 = v51;
    v11 = v42.m128i_i64[0];
    *(_QWORD *)(a1 + 72) = v18;
    *(_QWORD *)(a1 + 56) = v14;
    *(_QWORD *)(a1 + 80) = v19;
    if ( !v11 )
      goto LABEL_16;
    goto LABEL_13;
  }
LABEL_16:
  if ( (char *)(a1 + 88) != &v52 )
  {
    v22 = *(_QWORD **)(a1 + 104);
    v23 = *(_QWORD *)(a1 + 120);
    v43 = a1 + 88;
    v42 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)v23);
    if ( v22 )
    {
      v22[1] = 0;
      if ( *(_QWORD *)(v23 + 16) )
        v42.m128i_i64[1] = *(_QWORD *)(v23 + 16);
    }
    else
    {
      v42.m128i_i64[1] = 0;
    }
    v24 = (const __m128i *)v54;
    *(_QWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 112) = v3;
    *(_QWORD *)(a1 + 120) = v3;
    *(_QWORD *)(a1 + 128) = 0;
    if ( v24 )
    {
      v25 = sub_141880(v24, a1 + 96, &v42);
      v26 = v25;
      do
      {
        v27 = v26;
        v26 = (__m128i *)v26[1].m128i_i64[0];
      }
      while ( v26 );
      *(_QWORD *)(a1 + 112) = v27;
      v28 = v25;
      do
      {
        v29 = v28;
        v28 = (__m128i *)v28[1].m128i_i64[1];
      }
      while ( v28 );
      v30 = v57;
      v22 = (_QWORD *)v42.m128i_i64[0];
      *(_QWORD *)(a1 + 120) = v29;
      *(_QWORD *)(a1 + 104) = v25;
      *(_QWORD *)(a1 + 128) = v30;
    }
    sub_1416A0(v22);
  }
  *(_QWORD *)(a1 + 136) = v58;
  *(_DWORD *)(a1 + 144) = v59;
  v31 = v60;
  *(_BYTE *)(a1 + 148) = v60;
  if ( v31 )
    sub_19B8C0(&src);
  v32 = (_QWORD **)v54;
  if ( v54 )
  {
    do
    {
      sub_1416A0(v32[3]);
      v33 = v32;
      v32 = (_QWORD **)v32[2];
      operator delete(v33, 0x30u);
    }
    while ( v32 );
  }
  v34 = v48;
  if ( v48 )
  {
    do
    {
      v35 = v34;
      sub_141AD0((_QWORD *)v34[3]);
      v36 = v34[4];
      v34 = (_QWORD *)v34[2];
      if ( v36 )
      {
        v35[5] = 0;
        qfree();
      }
      operator delete(v35, 0x40u);
    }
    while ( v34 );
  }
  if ( src )
  {
    *(_QWORD *)&v45 = 0;
    qfree();
  }
  return v61 - __readfsqword(0x28u);
}

