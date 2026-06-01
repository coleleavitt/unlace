__int64 __fastcall sub_1EC0940(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  const __m128i *v9; // rsi
  __m128i v10; // xmm2
  __m128i v11; // xmm3
  __m128i v12; // xmm4
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  bool v18; // zf
  double v19; // rax
  __int64 v20; // r13
  __int64 v21; // rsi
  _QWORD *v22; // rcx
  __m128i si128; // xmm0
  bool v24; // r9
  bool v25; // r10
  __int64 v26; // rdx
  bool v27; // di
  bool v28; // r11
  __int64 v29; // rbx
  __int64 v30; // rdx
  void *v31; // rcx
  _QWORD *v32; // rdx
  _QWORD *v33; // rdx
  _QWORD *v34; // rdx
  void *v35; // rdx
  void *v36; // [rsp+8h] [rbp-310h]
  __m128 v37; // [rsp+10h] [rbp-308h] BYREF
  __int64 v38; // [rsp+20h] [rbp-2F8h]
  double v39; // [rsp+28h] [rbp-2F0h] BYREF
  bool v40; // [rsp+34h] [rbp-2E4h]
  bool v41; // [rsp+35h] [rbp-2E3h]
  bool v42; // [rsp+36h] [rbp-2E2h]
  bool v43; // [rsp+37h] [rbp-2E1h]
  void *v44; // [rsp+38h] [rbp-2E0h]
  __int64 *v45; // [rsp+40h] [rbp-2D8h]
  __int64 *v46; // [rsp+48h] [rbp-2D0h]
  _QWORD *v47; // [rsp+58h] [rbp-2C0h] BYREF
  _QWORD v48[2]; // [rsp+60h] [rbp-2B8h] BYREF
  void *v49; // [rsp+70h] [rbp-2A8h] BYREF
  char v50; // [rsp+78h] [rbp-2A0h]
  __int64 v51; // [rsp+80h] [rbp-298h] BYREF
  unsigned __int64 v52; // [rsp+88h] [rbp-290h]
  _QWORD *v53; // [rsp+90h] [rbp-288h] BYREF
  char v54; // [rsp+98h] [rbp-280h]
  _QWORD *v55; // [rsp+A0h] [rbp-278h] BYREF
  char v56; // [rsp+A8h] [rbp-270h]
  void *v57; // [rsp+B0h] [rbp-268h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-260h]
  void *v59; // [rsp+C0h] [rbp-258h]
  __int64 v60; // [rsp+C8h] [rbp-250h]
  void *ptr; // [rsp+D0h] [rbp-248h] BYREF
  __int64 v62; // [rsp+D8h] [rbp-240h]
  _BYTE v63[568]; // [rsp+E0h] [rbp-238h] BYREF

  if ( a3 && (v5 = *(_QWORD *)(a2 + 1248), a3 <= (unsigned __int64)((*(_QWORD *)(a2 + 1256) - v5) >> 6)) )
  {
    v7 = a3 - 1;
    v8 = v7 << 6;
    v9 = (const __m128i *)((v7 << 6) + v5);
    if ( v9->m128i_i64[1] )
    {
      v10 = _mm_loadu_si128(v9 + 1);
      v11 = _mm_loadu_si128(v9 + 2);
      v12 = _mm_loadu_si128(v9 + 3);
      *(__m128i *)a1 = _mm_loadu_si128(v9);
      *(__m128i *)(a1 + 16) = v10;
      *(__m128i *)(a1 + 32) = v11;
      *(__m128i *)(a1 + 48) = v12;
    }
    else
    {
      v13 = *(_QWORD *)(a2 + 880);
      v14 = *(unsigned int *)(a2 + 896);
      v48[0] = a2 + 864;
      v15 = 8 * v13 - v14;
      v16 = *(_QWORD *)(a2 + 1216);
      v48[1] = v15;
      sub_1EAF7C0((__int64 *)&v57, a2 + 864, *(_QWORD *)(v16 + 8 * v7) + *(_QWORD *)(a2 + 1208));
      if ( v57 )
      {
        ptr = v57;
        v57 = nullptr;
        sub_A0E8E0((_QWORD **)&ptr);
        if ( ptr )
          (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
        if ( v57 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v57 + 8LL))(v57);
      }
      v45 = (__int64 *)&v49;
      sub_1EAF8B0((__int64)&v49, a2 + 864);
      if ( (v50 & 1) != 0 )
      {
        v35 = v49;
        v49 = nullptr;
        ptr = v35;
        sub_A0E8E0((_QWORD **)&ptr);
        if ( ptr )
          (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
      }
      ptr = v63;
      v62 = 0x4000000000LL;
      v51 = 0;
      v52 = 0;
      sub_2027F10(&v57, a2 + 864, (unsigned int)v49, &ptr, &v51);
      if ( (v58 & 1) != 0 )
      {
        v34 = v57;
        v57 = nullptr;
        v55 = v34;
        sub_A0E8E0(&v55);
        if ( v55 )
          (*(void (__fastcall **)(_QWORD *))(*v55 + 8LL))(v55);
      }
      sub_A0AE90((__int64 *)&v57);
      v17 = *((_QWORD *)ptr + 1);
      v40 = *((_QWORD *)ptr + 3) != 0;
      v41 = *((_QWORD *)ptr + 4) != 0;
      v18 = *((_QWORD *)ptr + 5) == 0;
      v37.m128_u64[0] = v17;
      v19 = *((double *)ptr + 2);
      v42 = !v18;
      v18 = *((_QWORD *)ptr + 6) == 0;
      v39 = v19;
      v43 = !v18;
      sub_1EA7C00(&v57, (__int64 *)&ptr, v51, v52);
      v20 = v60;
      v36 = v57;
      v38 = v58;
      if ( v60 )
      {
        v44 = v59;
      }
      else
      {
        v20 = v58;
        v44 = v57;
      }
      v46 = (__int64 *)&v53;
      sub_1EAFE10((__int64)&v53, a2 + 864);
      if ( (v54 & 1) != 0 )
      {
        v33 = v53;
        v53 = nullptr;
        v55 = v33;
        sub_A0E8E0(&v55);
        if ( v55 )
          (*(void (__fastcall **)(_QWORD *))(*v55 + 8LL))(v55);
      }
      LODWORD(v62) = 0;
      sub_2027F10(&v55, a2 + 864, HIDWORD(v53), &ptr, 0);
      if ( (v56 & 1) != 0 )
      {
        v32 = v55;
        v55 = nullptr;
        v47 = v32;
        sub_A0E8E0(&v47);
        if ( v47 )
          (*(void (__fastcall **)(_QWORD *))(*v47 + 8LL))(v47);
      }
      v37 = _mm_loadh_ps(&v39);
      sub_A0AE90((__int64 *)&v55);
      v21 = v38;
      *(_QWORD *)(a1 + 24) = v20;
      v22 = ptr;
      si128 = _mm_load_si128((const __m128i *)&v37);
      v24 = v41;
      v25 = v42;
      *(_QWORD *)a1 = v36;
      v26 = v22[1];
      v27 = v40;
      *(_QWORD *)(a1 + 8) = v21;
      v28 = v43;
      v29 = *(_QWORD *)(a2 + 1248) + v8;
      *(__m128i *)(a1 + 40) = si128;
      v30 = *v22 | (v26 << 32);
      v31 = v44;
      *(_QWORD *)v29 = v36;
      *(_QWORD *)(v29 + 8) = v21;
      *(_QWORD *)(v29 + 16) = v31;
      *(_QWORD *)(v29 + 32) = v30;
      *(__m128i *)(v29 + 40) = si128;
      *(_BYTE *)(v29 + 57) = v24;
      *(_BYTE *)(v29 + 58) = v25;
      *(_BYTE *)(v29 + 59) = v28;
      *(_QWORD *)(a1 + 16) = v31;
      *(_QWORD *)(a1 + 32) = v30;
      *(_BYTE *)(a1 + 57) = v24;
      *(_BYTE *)(a1 + 58) = v25;
      *(_BYTE *)(a1 + 59) = v28;
      *(_QWORD *)(v29 + 24) = v20;
      *(_BYTE *)(v29 + 56) = v27;
      *(_BYTE *)(a1 + 56) = v27;
      sub_A0B030(v46);
      if ( ptr != v63 )
        free(ptr);
      sub_A0AE90(v45);
      sub_1EAF840((__int64)v48);
    }
  }
  else
  {
    *(_OWORD *)a1 = 0;
    *(_OWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 32) = 0;
    *(_OWORD *)(a1 + 48) = 0;
  }
  return a1;
}
