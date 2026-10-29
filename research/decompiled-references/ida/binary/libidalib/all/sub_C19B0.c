unsigned __int64 __fastcall sub_C19B0(__int16 a1)
{
  unsigned int v1; // edx
  int v2; // ebx
  _QWORD *v3; // rax
  _BYTE *v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  __m128i si128; // xmm0
  __m128i *v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // r13
  __m128i v14; // xmm0
  const char *v15; // r14
  char *v16; // rax
  bool v17; // zf
  __int64 v18; // rdi
  void *v19; // rdi
  _BYTE *v20; // rsi
  char *v21; // r8
  __int64 v22; // r14
  __int64 v23; // rdx
  unsigned __int64 v24; // r12
  __int64 v25; // r15
  __int64 v26; // r13
  unsigned __int64 v27; // r14
  __int64 v28; // r12
  __int64 v29; // r14
  __int64 v30; // r13
  _BYTE *v31; // rsi
  __m128i v32; // xmm0
  char *v33; // rax
  size_t v34; // r12
  __int64 v35; // rdi
  const char *v36; // rdx
  int v37; // edx
  int v38; // eax
  char *v40; // rax
  size_t v41; // r8
  void *v42; // rdi
  __int64 v43; // r12
  __int64 bpt_kernel_interface; // rax
  int v45; // [rsp+14h] [rbp-CCh]
  void *v46; // [rsp+38h] [rbp-A8h]
  unsigned __int16 v47; // [rsp+4Ah] [rbp-96h] BYREF
  __int16 v48; // [rsp+4Ch] [rbp-94h] BYREF
  unsigned __int16 v49; // [rsp+4Eh] [rbp-92h] BYREF
  void *v50; // [rsp+50h] [rbp-90h] BYREF
  __int128 v51; // [rsp+58h] [rbp-88h]
  void *src; // [rsp+70h] [rbp-70h]
  __int128 v53; // [rsp+78h] [rbp-68h]
  void *dest; // [rsp+90h] [rbp-50h]
  __int128 v55; // [rsp+98h] [rbp-48h]
  unsigned __int64 v56; // [rsp+A8h] [rbp-38h]

  v56 = __readfsqword(0x28u);
  v51 = 0;
  v50 = nullptr;
  if ( xmmword_2526F0 )
  {
    *((_QWORD *)&v51 + 1) = xmmword_2526F0;
    v50 = (void *)qalloc_or_throw();
    memcpy(v50, qword_2526E8, *((size_t *)&v51 + 1));
    *(_QWORD *)&v51 = *((_QWORD *)&v51 + 1);
  }
  v1 = ((unsigned int)dword_245190 >> 14) & 0x10
     | ((unsigned int)dword_245190 >> 12) & 8
     | ((unsigned int)dword_245190 >> 15) & 4
     | ((unsigned int)dword_245190 >> 9) & 2
     | ((unsigned int)dword_245190 >> 11) & 1;
  v2 = a1 & 0x400;
  if ( (a1 & 0x400) != 0 )
    v1 |= 32 * (((unsigned int)dword_245190 >> 19) & 1);
  v47 = ((unsigned int)dword_245190 >> 4) & 0x20
      | ((unsigned int)dword_245190 >> 3) & 0x10
      | ((unsigned int)dword_245190 >> 10) & 4
      | dword_245190 & 8
      | ((unsigned int)dword_245190 >> 15) & 2
      | ((dword_245190 & 2) != 0);
  v45 = dword_245190 & 0x6000;
  v48 = ((unsigned int)dword_245190 >> 4) & 0x10
      | ((unsigned int)dword_245190 >> 1) & 8
      | dword_245190 & 1
      | ((unsigned int)dword_245190 >> 4) & 4
      | ((unsigned int)dword_245190 >> 1) & 2;
  v49 = v1;
  v53 = 0;
  v3 = (_QWORD *)qvector_reserve();
  src = v3;
  *(_QWORD *)&v53 = 1550;
  *v3 = 0x5B333134313A3040LL;
  *(_QWORD *)((char *)v3 + 1541) = 0x3E353431433A676ELL;
  qmemcpy(
    (void *)((unsigned __int64)(v3 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)&qword_1D4CA0 - ((char *)v3 - ((unsigned __int64)(v3 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((unsigned int)v3 - (((_DWORD)v3 + 8) & 0xFFFFFFF8) + 1549) >> 3));
  v4 = src;
  *((_BYTE *)src + 1549) = 0;
  if ( (a1 & 0x400) != 0 )
  {
    v5 = v53;
    if ( (_QWORD)v53 )
    {
      v7 = v53 + 65;
      v6 = v53 + 66;
      v5 = v53 - 1;
      if ( *((_QWORD *)&v53 + 1) >= (unsigned __int64)(v53 + 66) )
        goto LABEL_8;
    }
    else
    {
      v6 = 67;
      v7 = 66;
      if ( *((_QWORD *)&v53 + 1) >= 0x43u )
      {
LABEL_8:
        *(_QWORD *)&v53 = v6;
        si128 = _mm_load_si128((const __m128i *)&xmmword_1D3010);
        v4[v7] = 0;
        v9 = (__m128i *)((char *)src + v5);
        *v9 = si128;
        v10 = _mm_load_si128((const __m128i *)&xmmword_1D3020);
        v4 = src;
        v9[4].m128i_i16[0] = 15926;
        v9[1] = v10;
        v9[2] = _mm_load_si128((const __m128i *)&xmmword_1D3030);
        v9[3] = _mm_load_si128((const __m128i *)&xmmword_1D3040);
        goto LABEL_9;
      }
    }
    src = (void *)qvector_reserve();
    v4 = src;
    goto LABEL_8;
  }
LABEL_9:
  v11 = v53;
  if ( (_QWORD)v53 )
  {
    v12 = v53 + 153;
    v13 = v53 + 154;
    v11 = v53 - 1;
    if ( *((_QWORD *)&v53 + 1) >= (unsigned __int64)(v53 + 154) )
      goto LABEL_11;
  }
  else
  {
    v13 = 155;
    v12 = 154;
    if ( *((_QWORD *)&v53 + 1) >= 0x9Bu )
      goto LABEL_11;
  }
  src = (void *)qvector_reserve();
  v4 = src;
LABEL_11:
  *(_QWORD *)&v53 = v13;
  v14 = _mm_load_si128((const __m128i *)&xmmword_1D3050);
  v4[v12] = 0;
  v15 = s1;
  v16 = (char *)src + v11;
  *(__m128i *)v16 = v14;
  v17 = (_QWORD)v53 == 0;
  dest = nullptr;
  *((__m128i *)v16 + 1) = _mm_load_si128((const __m128i *)&xmmword_1D3060);
  *((__m128i *)v16 + 2) = _mm_load_si128((const __m128i *)&xmmword_1D3070);
  *((__m128i *)v16 + 3) = _mm_load_si128((const __m128i *)&xmmword_1D3080);
  *((__m128i *)v16 + 4) = _mm_load_si128((const __m128i *)&xmmword_1D3090);
  *((__m128i *)v16 + 5) = _mm_load_si128((const __m128i *)&xmmword_1D30A0);
  *((__m128i *)v16 + 6) = _mm_load_si128((const __m128i *)&xmmword_1D30B0);
  *((__m128i *)v16 + 7) = _mm_load_si128((const __m128i *)&xmmword_1D30C0);
  *((__m128i *)v16 + 8) = _mm_load_si128((const __m128i *)&xmmword_1D30D0);
  *(__m128i *)(v16 + 138) = _mm_load_si128((const __m128i *)&xmmword_1D30E0);
  v55 = 0;
  if ( !v17 )
    v15 = (const char *)src;
  v18 = dbg;
  if ( !dbg )
    goto LABEL_27;
  if ( (unsigned int)sub_9E1E0() )
  {
    if ( (unsigned __int64)v53 < 2 )
    {
      *(_QWORD *)&v55 = 0;
      v21 = (char *)dest;
    }
    else
    {
      v19 = dest;
      if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)v53 )
      {
        dest = (void *)qvector_reserve();
        v19 = dest;
      }
      *(_QWORD *)&v55 = v53;
      memmove(v19, src, v53 - 1);
      *((char *)dest + v53 - 1) = 0;
      v20 = dest;
      v21 = (char *)dest;
      if ( (_QWORD)v55 )
      {
        v22 = v55 - 3;
        if ( (_QWORD)v55 == 3 )
        {
          if ( dest )
          {
            qfree();
            v26 = 0;
            dest = nullptr;
            v55 = 0u;
            v24 = 3;
            v25 = 2;
LABEL_69:
            dest = (void *)qvector_reserve();
            v20 = dest;
LABEL_23:
            *(_QWORD *)&v55 = v24;
            v20[v25] = 0;
            *(_WORD *)((char *)dest + v26) = 2570;
            v28 = v55;
            if ( (_QWORD)v55 )
            {
              v29 = v55 + 66;
              v30 = v55 + 67;
              v31 = dest;
              v28 = v55 - 1;
              if ( *((_QWORD *)&v55 + 1) >= (unsigned __int64)(v55 + 67) )
                goto LABEL_25;
            }
            else
            {
              v31 = dest;
              v30 = 68;
              v29 = 67;
              if ( *((_QWORD *)&v55 + 1) >= 0x44u )
                goto LABEL_25;
            }
            dest = (void *)qvector_reserve();
            v31 = dest;
LABEL_25:
            *(_QWORD *)&v55 = v30;
            v32 = _mm_load_si128((const __m128i *)&xmmword_1D30F0);
            v31[v29] = 0;
            v15 = s1;
            v33 = (char *)dest + v28;
            *(__m128i *)v33 = v32;
            v17 = (_QWORD)v55 == 0;
            *((__m128i *)v33 + 1) = _mm_load_si128((const __m128i *)&xmmword_1D3100);
            *((__m128i *)v33 + 2) = _mm_load_si128((const __m128i *)&xmmword_1D3110);
            *((__m128i *)v33 + 3) = _mm_load_si128((const __m128i *)&xmmword_1D3120);
            *(_DWORD *)(v33 + 63) = 168443450;
            v18 = dbg;
            if ( !v17 )
              v15 = (const char *)dest;
            goto LABEL_27;
          }
          v27 = *((_QWORD *)&v55 + 1);
          v43 = 3;
          goto LABEL_71;
        }
        v23 = v55 - 2;
        if ( (unsigned __int64)v55 >= 2 )
        {
LABEL_21:
          *(_QWORD *)&v55 = v23;
          v24 = 3;
          v25 = 2;
          v21[v22] = 0;
          v27 = *((_QWORD *)&v55 + 1);
          v26 = v55;
          v20 = dest;
          if ( !(_QWORD)v55 )
            goto LABEL_22;
          v43 = v55;
LABEL_71:
          v26 = v43 - 1;
          v25 = v43 + 1;
          v24 = v43 + 2;
LABEL_22:
          if ( v27 >= v24 )
            goto LABEL_23;
          goto LABEL_69;
        }
      }
    }
    v40 = v21;
    if ( *((_QWORD *)&v55 + 1) != -1 )
    {
      v40 = (char *)qvector_reserve();
      dest = v40;
    }
    v22 = -2;
    memset(&v40[v55], 0, ~(_QWORD)v55);
    v21 = (char *)dest;
    v23 = -1;
    goto LABEL_21;
  }
  v18 = dbg;
LABEL_27:
  qword_252250 = v18;
  while ( (unsigned int)sub_8F810((__int64)v15, sub_B8390, &v48, &v47, &v50, &v49, sub_BF950, sub_B9030, sub_CD0D0) )
  {
    if ( !v47 || (unsigned __int64)v51 <= 1 )
    {
      bpt_kernel_interface = get_bpt_kernel_interface();
      (*(void (__fastcall **)(__int64, __int64 *, char *))(*(_QWORD *)bpt_kernel_interface + 96LL))(
        bpt_kernel_interface,
        &qword_2526E0,
        "");
LABEL_38:
      v37 = v49 << 14;
      v38 = v37 & 0x40000
          | (v49 << 12) & 0x8000
          | (v49 << 15) & 0x20000
          | (v49 << 9) & 0x400
          | (v49 << 11) & 0x800
          | v48 & 1
          | v47 & 8
          | (16 * v47) & 0x200
          | (8 * (_BYTE)v47) & 0x80
          | (v47 << 10) & 0x1000
          | (v47 << 15) & 0x10000
          | (2 * (_BYTE)v47) & 2
          | (2 * (_BYTE)v48) & 0x14
          | (16 * v48) & 0x140;
      if ( v2 )
        v38 |= v37 & 0x80000;
      dword_245190 = v45 | v38;
      sub_B8270();
      sub_F61B0(0x2000700418000000LL, 0);
      break;
    }
    v34 = xmmword_2526F0;
    v46 = nullptr;
    if ( xmmword_2526F0 )
    {
      v46 = (void *)qalloc_or_throw();
      memcpy(v46, qword_2526E8, v34);
    }
    v35 = get_bpt_kernel_interface();
    v36 = s1;
    if ( (_QWORD)v51 )
      v36 = (const char *)v50;
    (*(void (__fastcall **)(__int64, __int64 *, const char *))(*(_QWORD *)v35 + 96LL))(v35, &qword_2526E0, v36);
    if ( (unsigned __int8)sub_98A00((__int64)&qword_2526E0, (const char *)xmmword_2528A0, "events") )
    {
      if ( v46 )
        qfree();
      goto LABEL_38;
    }
    if ( !v34 || (v41 = v34 - 1, v34 == 1) )
    {
      xmmword_2526F0 = 0;
    }
    else
    {
      v42 = qword_2526E8;
      if ( *(&xmmword_2526F0 + 1) < v34 )
      {
        qword_2526E8 = (void *)qvector_reserve();
        v41 = v34 - 1;
        v42 = qword_2526E8;
      }
      xmmword_2526F0 = v34;
      memmove(v42, v46, v41);
      *((char *)qword_2526E8 + v34 - 1) = 0;
    }
    if ( v46 )
      qfree();
  }
  if ( dest )
  {
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  if ( src )
  {
    *(_QWORD *)&v53 = 0;
    qfree();
  }
  if ( v50 )
  {
    *(_QWORD *)&v51 = 0;
    qfree();
  }
  return v56 - __readfsqword(0x28u);
}

