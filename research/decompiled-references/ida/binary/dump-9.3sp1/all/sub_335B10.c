__int64 __fastcall sub_335B10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  void *v25; // rax
  const void *v26; // rsi
  __int64 v27; // rax
  _BYTE *v28; // r15
  unsigned __int8 *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rbx
  void *v35; // r12
  __int64 v36; // rdi
  __m128i v37; // xmm0
  __int64 v38; // rbx
  __int64 v39; // rax
  int v40; // eax
  __m128i v42; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v43; // [rsp+10h] [rbp-D8h]
  _QWORD *v44; // [rsp+18h] [rbp-D0h]
  __int64 v45; // [rsp+20h] [rbp-C8h]
  __int64 v46; // [rsp+28h] [rbp-C0h]
  int v47; // [rsp+34h] [rbp-B4h]
  __int64 v48; // [rsp+38h] [rbp-B0h]
  int tinfo_size; // [rsp+4Ch] [rbp-9Ch] BYREF
  unsigned __int8 v50[16]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v51; // [rsp+60h] [rbp-88h]
  __int64 v52; // [rsp+68h] [rbp-80h]
  __int64 v53; // [rsp+70h] [rbp-78h]
  __m128i v54; // [rsp+78h] [rbp-70h] BYREF
  int v55; // [rsp+88h] [rbp-60h]
  int v56; // [rsp+98h] [rbp-50h]
  unsigned __int64 v57; // [rsp+A8h] [rbp-40h]

  v8 = a5;
  v48 = a1;
  v45 = a2;
  v46 = a3;
  v44 = (_QWORD *)a4;
  v47 = a7;
  v57 = __readfsqword(0x28u);
  v9 = qalloc_or_throw(312, a2, a3, a4);
  *(_QWORD *)v9 = -1;
  v12 = v9;
  *(_QWORD *)(v9 + 8) = (unsigned int)v8;
  *(_QWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_QWORD *)(v9 + 72) = 0;
  *(_QWORD *)(v9 + 80) = 0;
  *(_QWORD *)(v9 + 88) = 0;
  *(_QWORD *)(v9 + 96) = 0;
  *(_QWORD *)(v9 + 104) = 0;
  *(_QWORD *)(v9 + 112) = 0;
  *(_QWORD *)(v9 + 136) = 0;
  *(_QWORD *)(v9 + 144) = 0;
  *(_QWORD *)(v9 + 152) = 0;
  *(_QWORD *)(v9 + 176) = 0;
  *(_QWORD *)(v9 + 184) = 0;
  *(_QWORD *)(v9 + 192) = 0;
  *(_QWORD *)(v9 + 216) = 0;
  *(_QWORD *)(v9 + 240) = 0;
  *(_QWORD *)(v9 + 248) = 0;
  *(_QWORD *)(v9 + 256) = 0;
  *(_QWORD *)(v9 + 280) = 0;
  *(_QWORD *)(v9 + 288) = 0;
  *(_OWORD *)(v9 + 32) = 0;
  *(_OWORD *)(v9 + 56) = 0;
  *(_OWORD *)(v9 + 120) = 0;
  *(_OWORD *)(v9 + 160) = 0;
  *(_OWORD *)(v9 + 200) = 0;
  *(_OWORD *)(v9 + 224) = 0;
  *(_OWORD *)(v9 + 264) = 0;
  *(_OWORD *)(v9 + 296) = 0;
  if ( (int)v8 > 0 )
  {
    v42.m128i_i64[0] = a6 + 80 * v8;
    do
    {
      sub_123A40((__int64)v50, (unsigned __int8 *)a6, v10, v11);
      v21 = *(_QWORD *)(a6 + 16);
      v52 = 0;
      v51 = v21;
      copy_tinfo_t();
      v24 = *(_QWORD *)(a6 + 40);
      v53 = 0;
      v54 = 0;
      if ( v24 )
      {
        v25 = (void *)qalloc_or_throw(v24, a6 + 24, v22, v23);
        v26 = *(const void **)(a6 + 32);
        v53 = (__int64)v25;
        v54.m128i_i64[1] = v24;
        memcpy(v25, v26, v24);
        v54.m128i_i64[0] = v24;
      }
      v55 = 0;
      copy_argloc();
      v56 = *(_DWORD *)(a6 + 72);
      v14 = *(_QWORD *)(v12 + 32);
      v15 = *(_QWORD *)(v12 + 24);
      if ( *(_QWORD *)(v12 + 40) < (unsigned __int64)(v14 + 1) )
      {
        v27 = qvector_reserve(v12 + 24, v15, v14 + 1, 80);
        *(_QWORD *)(v12 + 24) = v27;
        v14 = *(_QWORD *)(v12 + 32);
        v15 = v27;
      }
      v16 = 80 * v14;
      v17 = v15 + v16;
      sub_123A40(v15 + v16, v50, v16, v13);
      v18 = v51;
      *(_QWORD *)(v17 + 24) = 0;
      *(_QWORD *)(v17 + 16) = v18;
      v43 = v17 + 24;
      copy_tinfo_t();
      v19 = v53;
      v53 = 0;
      v20 = _mm_loadu_si128(&v54);
      *(_QWORD *)(v17 + 32) = v19;
      v54 = 0;
      *(_DWORD *)(v17 + 56) = 0;
      *(__m128i *)(v17 + 40) = v20;
      copy_argloc();
      *(_DWORD *)(v17 + 72) = v56;
      ++*(_QWORD *)(v12 + 32);
      cleanup_argloc();
      if ( v53 )
      {
        v54.m128i_i64[0] = 0;
        qfree(v53);
      }
      a6 += 80;
      clear_tinfo_t();
      sub_11CDA0((__int64)v50);
    }
    while ( v42.m128i_i64[0] != a6 );
  }
  v28 = v44;
  *(_DWORD *)(v12 + 20) = 112;
  tinfo_size = 0;
  if ( !*v28 )
  {
    *(_QWORD *)v50 = 1;
    v29 = v50;
    copy_tinfo_t();
    clear_tinfo_t();
    if ( !(_BYTE)v47 )
      goto LABEL_13;
    goto LABEL_24;
  }
  copy_tinfo_t();
  v29 = (unsigned __int8 *)&word_2;
  if ( (get_tinfo_property() & 0x3F) == 1 )
  {
    if ( !(_BYTE)v47 )
    {
LABEL_13:
      v30 = (unsigned int)tinfo_size;
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  v29 = (unsigned __int8 *)*v44;
  tinfo_size = get_tinfo_size();
  if ( tinfo_size <= 0 )
  {
    if ( !under_debugger )
      sub_383060(50098);
LABEL_32:
    BUG();
  }
  if ( (_BYTE)v47 )
  {
LABEL_24:
    *(_DWORD *)(v12 + 280) |= 1u;
    goto LABEL_25;
  }
  (*(void (__fastcall **)(unsigned __int8 *, _QWORD, int *, __int64))(**(_QWORD **)(v48 + 1504) + 104LL))(
    v50,
    *(_QWORD *)(v48 + 1504),
    &tinfo_size,
    v12 + 72);
  if ( !*(_DWORD *)v50 )
  {
    if ( !under_debugger )
      sub_383060(51808);
    goto LABEL_32;
  }
  sub_1C31B0((__int64)v50, v12 + 96, tinfo_size, 0, 0);
  sub_648D0((__int64 *)(v12 + 136), (__int64 *)(v12 + 96));
  v34 = *(_QWORD *)(v12 + 120);
  v35 = nullptr;
  if ( v34 )
  {
    v35 = (void *)qalloc_or_throw(16 * v34, v12 + 96, v32, v33);
    memcpy(v35, *(const void **)(v12 + 112), 16 * v34);
  }
  v36 = *(_QWORD *)(v12 + 152);
  v37 = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v34);
  if ( v36 )
  {
    *(_QWORD *)(v12 + 160) = 0;
    v42 = v37;
    qfree(v36);
    v37 = _mm_load_si128(&v42);
  }
  *(_QWORD *)(v12 + 152) = v35;
  v29 = (unsigned __int8 *)v48;
  *(__m128i *)(v12 + 160) = v37;
  sub_330290(v12, (__int64)v29);
  cleanup_argloc();
LABEL_25:
  v38 = qalloc_or_throw(80, (__int64)v29, v30, v31);
  *(_OWORD *)(v38 + 8) = 0;
  *(_QWORD *)(v38 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v38 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v38 + 64) = 0xFFFFFFFF00000000LL;
  v39 = v45;
  *(_QWORD *)(v38 + 40) = 0;
  *(_QWORD *)(v38 + 24) = v39;
  *(_QWORD *)(v38 + 56) = 0;
  *(_QWORD *)(v38 + 72) = 0;
  *(_QWORD *)v38 = 56;
  sub_11D4A0(v38 + 32);
  v40 = tinfo_size;
  *(_BYTE *)(v38 + 64) = 8;
  *(_QWORD *)(v38 + 72) = v12;
  *(_DWORD *)(v38 + 68) = v40;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
    *(_BYTE *)(v38 + 65) |= 2u;
  return v38;
}
