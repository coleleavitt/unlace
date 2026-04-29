__int64 __fastcall sub_32FDB0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, __int64 a6, int a7)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rax
  void *v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  size_t v18; // rbx
  void *v19; // rax
  const void *v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // r15
  unsigned __int64 v23; // rbx
  void *v24; // r12
  __int64 v25; // rdi
  __m128i v26; // xmm0
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rax
  signed int v33; // eax
  __m128i v35; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v36; // [rsp+10h] [rbp-D8h]
  _QWORD *v37; // [rsp+18h] [rbp-D0h]
  __int64 v38; // [rsp+20h] [rbp-C8h]
  __int64 v39; // [rsp+28h] [rbp-C0h]
  int v40; // [rsp+34h] [rbp-B4h]
  __int64 v41; // [rsp+38h] [rbp-B0h]
  signed int tinfo_size; // [rsp+4Ch] [rbp-9Ch] BYREF
  unsigned __int8 v43[16]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v44; // [rsp+60h] [rbp-88h]
  __int64 v45; // [rsp+68h] [rbp-80h] BYREF
  void *v46; // [rsp+70h] [rbp-78h]
  __m128i v47; // [rsp+78h] [rbp-70h] BYREF
  _DWORD v48[4]; // [rsp+88h] [rbp-60h] BYREF
  int v49; // [rsp+98h] [rbp-50h]
  unsigned __int64 v50; // [rsp+A8h] [rbp-40h]

  v8 = a5;
  v41 = a1;
  v38 = a2;
  v39 = a3;
  v37 = a4;
  v40 = a7;
  v50 = __readfsqword(0x28u);
  v9 = qalloc_or_throw(312);
  *(_QWORD *)v9 = -1;
  v10 = v9;
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
    v35.m128i_i64[0] = a6 + 80 * v8;
    do
    {
      sub_11EE80((__int64)v43, (unsigned __int8 *)a6);
      v17 = *(_QWORD *)(a6 + 16);
      v45 = 0;
      v44 = v17;
      copy_tinfo_t(&v45, a6 + 24);
      v18 = *(_QWORD *)(a6 + 40);
      v46 = nullptr;
      v47 = 0;
      if ( v18 )
      {
        v19 = (void *)qalloc_or_throw(v18);
        v20 = *(const void **)(a6 + 32);
        v46 = v19;
        v47.m128i_i64[1] = v18;
        memcpy(v19, v20, v18);
        v47.m128i_i64[0] = v18;
      }
      v48[0] = 0;
      copy_argloc(v48, a6 + 56);
      v49 = *(_DWORD *)(a6 + 72);
      v11 = *(_QWORD *)(v10 + 32);
      v12 = *(_QWORD *)(v10 + 24);
      if ( *(_QWORD *)(v10 + 40) < (unsigned __int64)(v11 + 1) )
      {
        v21 = qvector_reserve(v10 + 24, v12, v11 + 1, 80);
        *(_QWORD *)(v10 + 24) = v21;
        v11 = *(_QWORD *)(v10 + 32);
        v12 = v21;
      }
      v13 = v12 + 80 * v11;
      sub_11EE80(v13, v43);
      v14 = v44;
      *(_QWORD *)(v13 + 24) = 0;
      *(_QWORD *)(v13 + 16) = v14;
      v36 = v13 + 24;
      copy_tinfo_t(v13 + 24, &v45);
      v15 = v46;
      v46 = nullptr;
      v16 = _mm_loadu_si128(&v47);
      *(_QWORD *)(v13 + 32) = v15;
      v47 = 0;
      *(_DWORD *)(v13 + 56) = 0;
      *(__m128i *)(v13 + 40) = v16;
      copy_argloc(v13 + 56, v48);
      *(_DWORD *)(v13 + 72) = v49;
      ++*(_QWORD *)(v10 + 32);
      cleanup_argloc(v48);
      if ( v46 )
      {
        v47.m128i_i64[0] = 0;
        qfree(v46);
      }
      a6 += 80;
      clear_tinfo_t(&v45);
      sub_1181E0((__int64)v43);
    }
    while ( v35.m128i_i64[0] != a6 );
  }
  v22 = v37;
  *(_DWORD *)(v10 + 20) = 112;
  tinfo_size = 0;
  if ( *(_BYTE *)v22 )
  {
    copy_tinfo_t(v10 + 72, v22);
    if ( (get_tinfo_property(*v22, 2) & 0x3F) == 1 )
    {
      if ( !(_BYTE)v40 )
        goto LABEL_25;
LABEL_24:
      *(_DWORD *)(v10 + 280) |= 1u;
      goto LABEL_25;
    }
    tinfo_size = get_tinfo_size(0, *v37, 0);
    if ( tinfo_size <= 0 )
    {
      if ( !under_debugger )
        sub_37CFE0(50098);
    }
    else
    {
      if ( (_BYTE)v40 )
        goto LABEL_24;
      (*(void (__fastcall **)(unsigned __int8 *, _QWORD, signed int *, __int64))(**(_QWORD **)(v41 + 1504) + 104LL))(
        v43,
        *(_QWORD *)(v41 + 1504),
        &tinfo_size,
        v10 + 72);
      if ( *(_DWORD *)v43 )
      {
        sub_1BE430((__int64)v43, (__int64 *)(v10 + 96), tinfo_size, 0, nullptr);
        sub_5FE50((__int64 *)(v10 + 136), (__int64 *)(v10 + 96));
        v23 = *(_QWORD *)(v10 + 120);
        v24 = nullptr;
        if ( v23 )
        {
          v24 = (void *)qalloc_or_throw(16 * v23);
          memcpy(v24, *(const void **)(v10 + 112), 16 * v23);
        }
        v25 = *(_QWORD *)(v10 + 152);
        v26 = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v23);
        if ( v25 )
        {
          *(_QWORD *)(v10 + 160) = 0;
          v35 = v26;
          qfree(v25);
          v26 = _mm_load_si128(&v35);
        }
        *(_QWORD *)(v10 + 152) = v24;
        v27 = v41;
        *(__m128i *)(v10 + 160) = v26;
        sub_32A700(v10, v27);
        cleanup_argloc(v43);
        goto LABEL_25;
      }
      if ( !under_debugger )
        sub_37CFE0(51808);
    }
    BUG();
  }
  *(_QWORD *)v43 = 1;
  copy_tinfo_t(v10 + 72, v43);
  clear_tinfo_t(v43);
  if ( (_BYTE)v40 )
    goto LABEL_24;
LABEL_25:
  v28 = qalloc_or_throw(80);
  v29 = v39;
  v30 = v28;
  *(_OWORD *)(v28 + 8) = 0;
  *(_QWORD *)(v28 + 32) = 0xFFFFFFFF00000000LL;
  v31 = v28 + 32;
  *(_QWORD *)(v28 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v28 + 64) = 0xFFFFFFFF00000000LL;
  v32 = v38;
  *(_QWORD *)(v30 + 40) = 0;
  *(_QWORD *)(v30 + 24) = v32;
  *(_QWORD *)(v30 + 56) = 0;
  *(_QWORD *)(v30 + 72) = 0;
  *(_QWORD *)v30 = 56;
  sub_1188E0(v31, v29);
  v33 = tinfo_size;
  *(_BYTE *)(v30 + 64) = 8;
  *(_QWORD *)(v30 + 72) = v10;
  *(_DWORD *)(v30 + 68) = v33;
  if ( (get_tinfo_property(*(_QWORD *)(v10 + 72), 2) & 0x2F) == 0xD )
    *(_BYTE *)(v30 + 65) |= 2u;
  return v30;
}
