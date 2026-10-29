void __fastcall sub_140B4D0(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  __int64 *v6; // rsi
  void *v7; // rdi
  std::_V2 *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *v11; // r9
  __int64 v12; // r15
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r15
  size_t v21; // rax
  __int64 v22; // rax
  _BYTE *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  char v26; // dl
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __m128i *v32; // r15
  char *v33; // r15
  __int64 v34; // rdi
  unsigned __int64 *v35; // r15
  const __m128i *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  unsigned __int64 *v40; // rbx
  __int64 *v41; // [rsp+8h] [rbp-330h]
  char *v42; // [rsp+8h] [rbp-330h]
  char *v43; // [rsp+8h] [rbp-330h]
  const __m128i *v44; // [rsp+8h] [rbp-330h]
  unsigned __int64 *v45; // [rsp+10h] [rbp-328h]
  void *v46; // [rsp+20h] [rbp-318h] BYREF
  unsigned __int64 v47; // [rsp+28h] [rbp-310h]
  _BYTE v48[16]; // [rsp+30h] [rbp-308h] BYREF
  void *v49[2]; // [rsp+40h] [rbp-2F8h] BYREF
  _BYTE v50[16]; // [rsp+50h] [rbp-2E8h] BYREF
  void **v51; // [rsp+60h] [rbp-2D8h] BYREF
  __int16 v52; // [rsp+80h] [rbp-2B8h]
  int v53; // [rsp+90h] [rbp-2A8h] BYREF
  __int64 v54; // [rsp+98h] [rbp-2A0h]
  __int16 v55; // [rsp+B0h] [rbp-288h]
  char v56[8]; // [rsp+C0h] [rbp-278h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-270h]
  volatile signed __int32 *v58; // [rsp+D0h] [rbp-268h]
  __int16 v59; // [rsp+E0h] [rbp-258h]
  __m128i v60; // [rsp+F0h] [rbp-248h] BYREF
  __m128i v61; // [rsp+100h] [rbp-238h] BYREF
  _QWORD v62[2]; // [rsp+110h] [rbp-228h] BYREF
  __m128i v63; // [rsp+120h] [rbp-218h] BYREF
  __int64 v64; // [rsp+130h] [rbp-208h]
  void *ptr; // [rsp+140h] [rbp-1F8h] BYREF
  __m128i si128; // [rsp+148h] [rbp-1F0h] BYREF
  __int64 v67; // [rsp+158h] [rbp-1E0h] BYREF
  __int16 v68; // [rsp+160h] [rbp-1D8h]

  v4 = *(_BYTE **)a2;
  v5 = (__int64)&v4[*(_QWORD *)(a2 + 8)];
  v46 = v48;
  sub_13F28B0(&v46, v4, v5);
  v49[0] = v50;
  sub_13F27F0(v49, v46, (__int64)v46 + v47);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 48) + 96LL) )
  {
    sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 8), *(_DWORD *)(a2 + 16), 1094);
    v6 = *(__int64 **)(a1 + 48);
LABEL_3:
    sub_FEEE60((__int64)&v60, v6, 0);
    sub_AEC220((unsigned __int8 **)&ptr, v60.m128i_i64[0], v60.m128i_i64[1]);
    if ( (__m128i *)v60.m128i_i64[0] != &v61 )
      operator delete((void *)v60.m128i_i64[0]);
    sub_AEA040((__int64)&ptr);
    *(_BYTE *)(a1 + 41) = 1;
    goto LABEL_6;
  }
  ptr = &v46;
  v68 = 260;
  if ( (unsigned __int8)sub_228B020(&ptr, 0) )
  {
    v8 = *(std::_V2 **)(*(_QWORD *)a1 + 16LL);
    v12 = sub_1366810((__int64)v8, (char *)v46, v47, 1);
  }
  else
  {
    v28 = *(_QWORD *)(a1 + 32);
    ptr = &v67;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    sub_A1FE50(&ptr, (_BYTE *)(v28 + 32), (_BYTE *)(v28 + 32 + *(_QWORD *)v28));
    LOWORD(v62[0]) = 257;
    v51 = &v46;
    v59 = 257;
    v55 = 257;
    v52 = 260;
    sub_228A3B0(&ptr, &v51, &v53, v56, &v60);
    v29 = sub_1366810(*(_QWORD *)(*(_QWORD *)a1 + 16LL), (char *)ptr, si128.m128i_u64[0], 1);
    v8 = (std::_V2 *)ptr;
    v11 = &v67;
    v12 = v29;
    if ( ptr != &v67 )
      free(ptr);
  }
  if ( !v12 )
  {
    sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 8), *(_DWORD *)(a2 + 16), 1364);
    sub_AEC220((unsigned __int8 **)&ptr, v46, v47);
    sub_AEA040((__int64)&ptr);
    goto LABEL_6;
  }
  v13 = *(_QWORD *)(a1 + 48);
  if ( !*(_BYTE *)(a1 + 76) )
  {
    v8 = (std::_V2 *)(a1 + 56);
    if ( !sub_2236570(a1 + 56, v13) )
      goto LABEL_31;
    goto LABEL_19;
  }
  v14 = *(_QWORD **)(a1 + 56);
  v15 = (__int64)&v14[*(unsigned int *)(a1 + 68)];
  if ( v14 != (_QWORD *)v15 )
  {
    while ( v13 != *v14 )
    {
      if ( (_QWORD *)v15 == ++v14 )
        goto LABEL_31;
    }
LABEL_19:
    v53 = 0;
    v16 = v12 + 32;
    v54 = std::_V2::system_category(v8);
    ptr = &si128.m128i_u64[1];
    si128.m128i_i64[0] = 0x600000000LL;
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 8LL);
    v18 = *(_QWORD *)(v16 - 32);
    v60.m128i_i64[0] = v16;
    LOWORD(v62[0]) = 261;
    v60.m128i_i64[1] = v18;
    sub_2261190(v56, v17, &v60, &v53);
    v19 = v57;
    if ( !v57 || v53 )
    {
LABEL_37:
      if ( v58 )
        sub_4343A0(v58);
      v32 = (__m128i *)ptr;
      v42 = (char *)ptr + 72 * si128.m128i_u32[0];
      sub_13FBEB0(v60.m128i_i64, (__m128i *)ptr, (__int64)v42);
      if ( v61.m128i_i64[0] )
        sub_140B3D0(
          (__int64)v32,
          v42,
          (char *)v61.m128i_i64[0],
          v60.m128i_i64[1],
          (unsigned __int8 (__fastcall *)(const __m128i *, __int64))sub_13F2970);
      else
        sub_140A5B0(v32, v42, (unsigned __int8 (__fastcall *)(const __m128i *, __int64))sub_13F2970);
      v33 = (char *)v61.m128i_i64[0];
      v43 = (char *)(v61.m128i_i64[0] + 72 * v60.m128i_i64[1]);
      if ( (char *)v61.m128i_i64[0] != v43 )
      {
        do
        {
          v34 = (__int64)v33;
          v33 += 72;
          sub_13F29E0(v34);
        }
        while ( v43 != v33 );
        v43 = (char *)v61.m128i_i64[0];
      }
      operator delete(v43, (const std::nothrow_t *)&std::nothrow);
      v35 = (unsigned __int64 *)((char *)ptr + 72 * si128.m128i_u32[0]);
      if ( ptr != v35 )
      {
        v36 = (const __m128i *)((char *)ptr + 16);
        v45 = (unsigned __int64 *)((char *)ptr + ((72LL * si128.m128i_u32[0] - 72) & 0xFFFFFFFFFFFFFFF8LL) + 88);
        do
        {
          v60.m128i_i64[0] = (__int64)&v61;
          v39 = *(_QWORD *)(a1 + 16);
          if ( (const __m128i *)v36[-1].m128i_i64[0] == v36 )
          {
            v61 = _mm_loadu_si128(v36);
          }
          else
          {
            v60.m128i_i64[0] = v36[-1].m128i_i64[0];
            v61.m128i_i64[0] = v36->m128i_i64[0];
          }
          v60.m128i_i64[1] = v36[-1].m128i_i64[1];
          v36[-1].m128i_i64[0] = (__int64)v36;
          v36[-1].m128i_i64[1] = 0;
          v36->m128i_i8[0] = 0;
          v62[0] = &v63;
          if ( (const __m128i *)v36[1].m128i_i64[0] == &v36[2] )
          {
            v63 = _mm_loadu_si128(v36 + 2);
          }
          else
          {
            v62[0] = v36[1].m128i_i64[0];
            v63.m128i_i64[0] = v36[2].m128i_i64[0];
          }
          v44 = v36;
          v62[1] = v36[1].m128i_i64[1];
          v36[1].m128i_i64[0] = (__int64)v36[2].m128i_i64;
          v37 = v36[3].m128i_i64[0];
          v36[2].m128i_i8[0] = 0;
          v38 = *(_QWORD *)(a1 + 48);
          v36[1].m128i_i64[1] = 0;
          v64 = v37;
          sub_1400A10(v39, v38, &v60, 2u, 0);
          sub_13F29E0((__int64)&v60);
          v36 = (const __m128i *)((char *)v44 + 72);
        }
        while ( &v44[4].m128i_u64[1] != v45 );
        v40 = (unsigned __int64 *)ptr;
        v35 = (unsigned __int64 *)((char *)ptr + 72 * si128.m128i_u32[0]);
        if ( ptr != v35 )
        {
          do
          {
            v35 -= 9;
            sub_13F29E0((__int64)v35);
          }
          while ( v40 != v35 );
          v35 = (unsigned __int64 *)ptr;
        }
      }
      if ( v35 != &si128.m128i_u64[1] )
        free(v35);
LABEL_6:
      v7 = v49[0];
      if ( v49[0] == v50 )
        goto LABEL_8;
      goto LABEL_7;
    }
    while ( 1 )
    {
      sub_FD9C70(
        (__int64)&v60,
        *(_QWORD *)(*(_QWORD *)a1 + 16LL),
        *(const void **)(*(_QWORD *)(*(_QWORD *)(v19 + 8) - 16LL) + 8LL),
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) - 16LL) + 16LL),
        0,
        1,
        1);
      if ( (v60.m128i_i8[8] & 1) == 0 )
        break;
      v25 = sub_13F8200(&v60);
      if ( v26 )
      {
        v20 = v25;
LABEL_23:
        sub_A04D90(v60.m128i_i64);
        if ( v20 )
        {
          v60.m128i_i64[0] = (__int64)&v61;
          v21 = j__strlen(&byte_22F0C30);
          sub_13F28B0(&v60, &byte_22F0C30, (__int64)(&byte_22F0C30 + v21));
          v22 = *(_QWORD *)(*(_QWORD *)(v57 + 8) - 16LL);
          v23 = *(_BYTE **)(v22 + 8);
          v24 = *(_QWORD *)(v22 + 16);
          v62[0] = &v63;
          sub_13F28B0(v62, v23, (__int64)&v23[v24]);
          v64 = v20;
          sub_1400880((__int64)&ptr, &v60);
          sub_13F29E0((__int64)&v60);
        }
        goto LABEL_25;
      }
      sub_A04D90(v60.m128i_i64);
LABEL_25:
      sub_2260F50(v56, &v53);
      v19 = v57;
      if ( !v57 || v53 )
        goto LABEL_37;
    }
    v20 = v60.m128i_i64[0];
    goto LABEL_23;
  }
LABEL_31:
  v27 = *(_QWORD *)(a1 + 16) + 440LL;
  ptr = *(void **)(v12 + 8);
  v41 = (__int64 *)*sub_13FDE80(v27, (__int64 *)&ptr, v15, v9, v10, (__int64)v11);
  if ( v41 )
  {
    sub_FC70B0((__int64)&ptr, *(_QWORD *)(a1 + 8), *(_DWORD *)(a2 + 16), 1094);
    v6 = v41;
    goto LABEL_3;
  }
  v30 = *(_QWORD *)(a1 + 16);
  v31 = *(_QWORD *)(a1 + 48);
  LOWORD(v62[0]) = 260;
  v60.m128i_i64[0] = (__int64)v49;
  v68 = 260;
  ptr = &v46;
  sub_13FDFD0(v30, v31, v12, (__int64)&v60, (__int64)&ptr);
  v7 = v49[0];
  if ( v49[0] != v50 )
LABEL_7:
    operator delete(v7);
LABEL_8:
  if ( v46 != v48 )
    operator delete(v46);
}
