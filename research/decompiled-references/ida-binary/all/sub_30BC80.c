unsigned __int64 __fastcall sub_30BC80(__int64 a1, const char *a2)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 ash; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  const char *v8; // rsi
  void *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  void *v14; // r15
  __int64 v15; // rdi
  __m128i si128; // xmm0
  __int64 v17; // r15
  unsigned __int64 v18; // rcx
  int *v19; // rdi
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // r12
  __int64 v27; // rdi
  _QWORD *v28; // rdi
  unsigned __int64 v29; // rdx
  const __m128i *v30; // rax
  __m128i *v31; // rax
  __m128i *v32; // rdx
  __m128i *v33; // rcx
  __m128i *v34; // rdx
  __m128i *v35; // rcx
  __int64 v36; // rdx
  char v37; // al
  _QWORD **v38; // rbx
  void *v39; // rdi
  _QWORD *v40; // rbx
  _QWORD *v41; // rbp
  __int64 v42; // rdi
  void *v44; // rax
  size_t n[2]; // [rsp+0h] [rbp-118h] BYREF
  __int64 v46; // [rsp+10h] [rbp-108h]
  __int64 v47; // [rsp+18h] [rbp-100h]
  __int64 v48; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v49; // [rsp+28h] [rbp-F0h]
  __m128i v50; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-D8h]
  void *src; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v53; // [rsp+58h] [rbp-C0h]
  char v54; // [rsp+68h] [rbp-B0h] BYREF
  int v55; // [rsp+70h] [rbp-A8h] BYREF
  void *v56; // [rsp+78h] [rbp-A0h]
  int *v57; // [rsp+80h] [rbp-98h]
  int *v58; // [rsp+88h] [rbp-90h]
  __int64 v59; // [rsp+90h] [rbp-88h]
  char v60; // [rsp+98h] [rbp-80h] BYREF
  int v61; // [rsp+A0h] [rbp-78h] BYREF
  void *v62; // [rsp+A8h] [rbp-70h]
  int *v63; // [rsp+B0h] [rbp-68h]
  int *v64; // [rsp+B8h] [rbp-60h]
  __int64 v65; // [rsp+C0h] [rbp-58h]
  __int64 v66; // [rsp+C8h] [rbp-50h]
  int v67; // [rsp+D0h] [rbp-48h]
  char v68; // [rsp+D4h] [rbp-44h]
  unsigned __int64 v69; // [rsp+D8h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  *(_QWORD *)a1 = get_ph(a1, a2);
  v3 = a1 + 48;
  v4 = a1 + 96;
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
  v46 = a1 + 16;
  *(_QWORD *)(a1 + 16) = qvector_reserve(a1 + 16, 0, 1000, 8);
  QT::QObject::QObject((QT::QObject *)(a1 + 152), nullptr);
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 152) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)(a1 + 152), n[0]);
  *(_QWORD *)(a1 + 184) = 96;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 232) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 216) = -1;
  *(_QWORD *)(a1 + 264) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 240) = -1;
  *(_QWORD *)(a1 + 248) = 4;
  *(_QWORD *)(a1 + 256) = 9;
  *(_QWORD *)(a1 + 272) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  v47 = a1 + 280;
  sub_3A6AA0(a1 + 280, 0);
  v6 = a1 + 576;
  v48 = v6;
  sub_3A7260(v6);
  *(_DWORD *)(a1 + 896) = 0;
  *(_QWORD *)(a1 + 904) = sub_244F90(v6, 0);
  *(_QWORD *)(a1 + 912) = sub_193AB0();
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 24LL))(QT::QCoreApplication::self + 2);
  v8 = nullptr;
  v57 = &v55;
  v58 = &v55;
  v66 = v7;
  src = nullptr;
  v55 = 0;
  v56 = nullptr;
  v59 = 0;
  v61 = 0;
  v62 = nullptr;
  v63 = &v61;
  v64 = &v61;
  v65 = 0;
  v67 = 0;
  v68 = 1;
  v53 = 0;
  v9 = (void *)qvector_reserve(&src, 0, 1000, 8);
  v13 = v53;
  src = v9;
  v14 = nullptr;
  if ( (_QWORD)v53 )
  {
    v49 = v53;
    n[0] = 8 * v53;
    v44 = (void *)qalloc_or_throw(8 * v53);
    v8 = (const char *)src;
    v14 = v44;
    memcpy(v44, src, n[0]);
    v13 = v49;
  }
  v15 = *(_QWORD *)(a1 + 16);
  si128 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v15, v8, v10, v13, v11, v12, *(_OWORD *)&si128, v46);
    si128 = _mm_load_si128((const __m128i *)n);
  }
  *(_QWORD *)(a1 + 16) = v14;
  *(__m128i *)(a1 + 24) = si128;
  if ( (char *)(a1 + 40) != &v54 )
  {
    v17 = *(_QWORD *)(a1 + 56);
    v18 = *(_QWORD *)(a1 + 72);
    v51 = a1 + 40;
    v50 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)v18);
    if ( v17 )
    {
      *(_QWORD *)(v17 + 8) = 0;
      if ( *(_QWORD *)(v18 + 16) )
        v50.m128i_i64[1] = *(_QWORD *)(v18 + 16);
      v19 = (int *)v56;
      *(_QWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 64) = v3;
      *(_QWORD *)(a1 + 72) = v3;
      *(_QWORD *)(a1 + 80) = 0;
      if ( !v19 )
      {
        do
        {
LABEL_15:
          v26 = (_QWORD *)v17;
          sub_3002A0(*(_QWORD **)(v17 + 24), v8);
          v27 = *(_QWORD *)(v17 + 32);
          v17 = *(_QWORD *)(v17 + 16);
          if ( v27 )
          {
            v26[5] = 0;
            qfree(v27, v8);
          }
          v8 = (_BYTE *)dword_40;
          operator delete(v26, 0x40u);
        }
        while ( v17 );
        goto LABEL_18;
      }
    }
    else
    {
      v19 = (int *)v56;
      *(_QWORD *)(a1 + 64) = v3;
      v50.m128i_i64[1] = 0;
      *(_QWORD *)(a1 + 72) = v3;
      *(_QWORD *)(a1 + 80) = 0;
      if ( !v19 )
        goto LABEL_18;
    }
    v8 = (const char *)(a1 + 48);
    v20 = sub_30BA60(v19, a1 + 48, &v50);
    v21 = v20;
    do
    {
      v22 = v21;
      v21 = (_QWORD *)v21[2];
    }
    while ( v21 );
    *(_QWORD *)(a1 + 64) = v22;
    v23 = v20;
    do
    {
      v24 = v23;
      v23 = (_QWORD *)v23[3];
    }
    while ( v23 );
    v25 = v59;
    v17 = v50.m128i_i64[0];
    *(_QWORD *)(a1 + 72) = v24;
    *(_QWORD *)(a1 + 56) = v20;
    *(_QWORD *)(a1 + 80) = v25;
    if ( !v17 )
      goto LABEL_18;
    goto LABEL_15;
  }
LABEL_18:
  if ( (char *)(a1 + 88) != &v60 )
  {
    v28 = *(_QWORD **)(a1 + 104);
    v29 = *(_QWORD *)(a1 + 120);
    v51 = a1 + 88;
    v50 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)v29);
    if ( v28 )
    {
      v28[1] = 0;
      if ( *(_QWORD *)(v29 + 16) )
        v50.m128i_i64[1] = *(_QWORD *)(v29 + 16);
    }
    else
    {
      v50.m128i_i64[1] = 0;
    }
    v30 = (const __m128i *)v62;
    *(_QWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 112) = v4;
    *(_QWORD *)(a1 + 120) = v4;
    *(_QWORD *)(a1 + 128) = 0;
    if ( v30 )
    {
      v8 = (const char *)(a1 + 96);
      v31 = sub_2FFFA0(v30, a1 + 96, &v50);
      v32 = v31;
      do
      {
        v33 = v32;
        v32 = (__m128i *)v32[1].m128i_i64[0];
      }
      while ( v32 );
      *(_QWORD *)(a1 + 112) = v33;
      v34 = v31;
      do
      {
        v35 = v34;
        v34 = (__m128i *)v34[1].m128i_i64[1];
      }
      while ( v34 );
      v36 = v65;
      v28 = (_QWORD *)v50.m128i_i64[0];
      *(_QWORD *)(a1 + 120) = v35;
      *(_QWORD *)(a1 + 104) = v31;
      *(_QWORD *)(a1 + 128) = v36;
    }
    sub_2FFDC0(v28);
  }
  *(_QWORD *)(a1 + 136) = v66;
  *(_DWORD *)(a1 + 144) = v67;
  v37 = v68;
  *(_BYTE *)(a1 + 148) = v68;
  if ( v37 )
    sub_533CA0(&src);
  v38 = (_QWORD **)v62;
  if ( v62 )
  {
    do
    {
      sub_2FFDC0(v38[3]);
      v39 = v38;
      v38 = (_QWORD **)v38[2];
      v8 = (const char *)&dword_30;
      operator delete(v39, 0x30u);
    }
    while ( v38 );
  }
  v40 = v56;
  if ( v56 )
  {
    do
    {
      v41 = v40;
      sub_3002A0((_QWORD *)v40[3], v8);
      v42 = v40[4];
      v40 = (_QWORD *)v40[2];
      if ( v42 )
      {
        v41[5] = 0;
        qfree(v42, v8);
      }
      v8 = (_BYTE *)dword_40;
      operator delete(v41, 0x40u);
    }
    while ( v40 );
  }
  if ( src )
  {
    *(_QWORD *)&v53 = 0;
    qfree(src, v8);
  }
  return v69 - __readfsqword(0x28u);
}
