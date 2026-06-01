__int64 __fastcall clang_getCursorDisplayName(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rdx
  __int64 v9; // r12
  double v11; // xmm0_8
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rbx
  int v15; // r8d
  int v16; // r9d
  __m128i v17; // xmm0
  unsigned __int8 v18; // al
  __int64 v19; // rdx
  _BYTE *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // r12
  __int64 i; // r14
  _BYTE *v24; // rax
  __int64 v25; // r12
  __int64 v26; // r14
  int v27; // ebx
  __int64 v28; // r15
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  char v31; // al
  char v32; // al
  _BYTE *v33; // rdx
  _WORD *v34; // rdx
  char *v35; // rdx
  const char *v36; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // r12
  __int64 v39; // rax
  unsigned int *v40; // rsi
  size_t v41; // r15
  const void *v42; // rsi
  __int64 v43; // rax
  __m128i v44; // [rsp+0h] [rbp-198h]
  __m128i v45; // [rsp+0h] [rbp-198h]
  __m128i v46; // [rsp+10h] [rbp-188h]
  __int64 v47; // [rsp+48h] [rbp-150h] BYREF
  __m128i v48; // [rsp+50h] [rbp-148h] BYREF
  void *v49; // [rsp+60h] [rbp-138h] BYREF
  __int64 v50; // [rsp+68h] [rbp-130h]
  _QWORD v51[2]; // [rsp+70h] [rbp-128h] BYREF
  __int64 *v52; // [rsp+80h] [rbp-118h] BYREF
  int v53; // [rsp+88h] [rbp-110h]
  __int128 v54; // [rsp+90h] [rbp-108h]
  void *dest; // [rsp+A0h] [rbp-F8h]
  char v56; // [rsp+A8h] [rbp-F0h]
  int v57; // [rsp+ACh] [rbp-ECh]
  void **p_ptr; // [rsp+B0h] [rbp-E8h]
  void *ptr; // [rsp+C0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-D0h]
  _BYTE v61[192]; // [rsp+D8h] [rbp-C0h] BYREF

  v8 = (unsigned int)(a7 - 600);
  if ( (unsigned int)v8 > 4 && (unsigned int)(a7 - 1) > 0x26 )
    return clang_getCursorSpelling(
             a1,
             a2,
             v8,
             a4,
             a5,
             a6,
             (__int128)_mm_loadu_si128((const __m128i *)&a7),
             _mm_loadu_si128((const __m128i *)&a8));
  v44 = _mm_loadu_si128((const __m128i *)&a7);
  *(_QWORD *)&v11 = _mm_loadu_si128((const __m128i *)&a8).m128i_u64[0];
  v14 = sub_63A250(a1, a2, v8, a4, a5, a6, v44.m128i_i32[0], v44.m128i_i64[1]);
  if ( v14 )
  {
    v45 = _mm_loadu_si128((const __m128i *)&a7);
    v46 = _mm_loadu_si128((const __m128i *)&a8);
    v17 = _mm_loadu_si128((const __m128i *)(sub_63A2D0(
                                              a1,
                                              a2,
                                              v12,
                                              v13,
                                              v15,
                                              v16,
                                              v45.m128i_i32[0],
                                              v45.m128i_i32[2],
                                              v46.m128i_i32[0],
                                              v46.m128i_i64[1])
                                          + 17304));
    v18 = *(_BYTE *)(v14 + 28) & 0x7F;
    v48 = v17;
    if ( v18 == 69 )
    {
      v14 = *(_QWORD *)(v14 + 48);
      v18 = *(_BYTE *)(v14 + 28) & 0x7F;
    }
    a4 = (unsigned int)v18 - 32;
    if ( (unsigned int)a4 <= 5 )
    {
      ptr = v61;
      v52 = (__int64 *)&off_49DA340;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      p_ptr = &ptr;
      v54 = 0;
      v53 = 2;
      v56 = 0;
      v57 = 1;
      dest = nullptr;
      sub_2623850(&v52, 0, 0, 0, a5, a6);
      sub_77A870(v14, &v52);
      v19 = sub_780F20(v14);
      v20 = dest;
      if ( v19 )
      {
        if ( *((_QWORD *)&v54 + 1) - (_QWORD)dest <= 1u )
        {
          sub_26240F0(&v52, "<>", 2);
          v20 = dest;
        }
        else
        {
          *(_WORD *)dest = 15932;
          v20 = (char *)dest + 2;
          dest = (char *)dest + 2;
        }
      }
      if ( v20 == *((_BYTE **)&v54 + 1) )
      {
        sub_26240F0(&v52, "(", 1);
      }
      else
      {
        *v20 = 40;
        dest = (char *)dest + 1;
      }
      v21 = sub_77F620(v14);
      if ( v21 )
      {
        v22 = v21;
        for ( i = 0; i != v22; ++i )
        {
          if ( i )
          {
            if ( *((_QWORD *)&v54 + 1) - (_QWORD)dest <= 1u )
            {
              sub_26240F0(&v52, ", ", 2);
            }
            else
            {
              *(_WORD *)dest = 8236;
              dest = (char *)dest + 2;
            }
          }
          v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 120) + 8 * i) + 48LL);
          sub_B2AE60(&v49, &v47, &v48);
          sub_26240F0(&v52, v49, v50);
          if ( v49 != v51 )
            operator delete(v49, v51[0] + 1LL);
        }
      }
      if ( (unsigned __int8)sub_77D8C0(v14) )
      {
        if ( (unsigned int)sub_77F620(v14) )
          sub_5FF0F0((__int64)&v52, ", ");
        v34 = dest;
        if ( *((_QWORD *)&v54 + 1) - (_QWORD)dest > 2u )
        {
          *((_BYTE *)dest + 2) = 46;
          *v34 = 11822;
          v24 = (char *)dest + 3;
          dest = (char *)dest + 3;
LABEL_27:
          if ( *((_BYTE **)&v54 + 1) == v24 )
          {
            sub_26240F0(&v52, ")", 1);
          }
          else
          {
            *v24 = 41;
            dest = (char *)dest + 1;
          }
          goto LABEL_29;
        }
        sub_26240F0(&v52, "...", 3);
      }
      v24 = dest;
      goto LABEL_27;
    }
    if ( v18 == 70 )
    {
      ptr = v61;
      v52 = (__int64 *)&off_49DA340;
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      p_ptr = &ptr;
      v54 = 0;
      v53 = 2;
      v56 = 0;
      v57 = 1;
      dest = nullptr;
      sub_2623850(&v52, 0, 0, 0, a5, a6);
      sub_77A870(v14, &v52);
      if ( *((void **)&v54 + 1) == dest )
      {
        sub_26240F0(&v52, "<", 1);
      }
      else
      {
        *(_BYTE *)dest = 60;
        dest = (char *)dest + 1;
      }
      v25 = *(_QWORD *)(v14 + 56);
      v26 = 0;
      v27 = *(_DWORD *)(v25 + 20) & 0x1FFFFFFF;
      if ( v27 )
      {
        do
        {
          if ( v26 )
          {
            if ( *((_QWORD *)&v54 + 1) - (_QWORD)dest <= 1u )
            {
              sub_26240F0(&v52, ", ", 2);
            }
            else
            {
              *(_WORD *)dest = 8236;
              dest = (char *)dest + 2;
            }
          }
          v28 = *(_QWORD *)(v25 + 8 * v26 + 24);
          v29 = *(_QWORD *)(v28 + 40);
          if ( (v29 & 7) == 0 && (v30 = v29 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v40 = *(unsigned int **)(v30 + 16);
            v41 = *v40;
            v42 = v40 + 4;
            if ( *((_QWORD *)&v54 + 1) - (_QWORD)dest < v41 )
            {
              sub_26240F0(&v52, v42, v41);
            }
            else if ( v41 )
            {
              memcpy(dest, v42, v41);
              dest = (char *)dest + v41;
            }
          }
          else
          {
            v31 = *(_BYTE *)(v28 + 28) & 0x7F;
            if ( v31 == 65 )
            {
              v32 = *(_BYTE *)(v28 + 60);
              if ( (v32 & 4) != 0 )
              {
                sub_7929A0(*(_QWORD *)(v28 + 88) + 24LL, &v52, v48.m128i_i64[0], v48.m128i_i64[1]);
                if ( *(_QWORD *)(*(_QWORD *)(v28 + 88) + 64LL) )
                {
                  v33 = dest;
                  if ( *((_QWORD *)&v54 + 1) - (_QWORD)dest <= 4u )
                  {
                    sub_26240F0(&v52, "<...>", 5);
                  }
                  else
                  {
                    *(_DWORD *)dest = 774778428;
                    v33[4] = 62;
                    dest = (char *)dest + 5;
                  }
                }
              }
              else
              {
                v36 = "class";
                if ( (v32 & 1) != 0 )
                {
                  v36 = "typename";
                  if ( (v32 & 2) != 0 )
                    v36 = "class";
                }
                sub_5FF0F0((__int64)&v52, v36);
              }
            }
            else if ( v31 == 45 )
            {
              v47 = *(_QWORD *)(v28 + 48);
              sub_B2AE60(&v49, &v47, &v48);
              sub_26240F0(&v52, v49, v50);
              if ( v49 != v51 )
                operator delete(v49, v51[0] + 1LL);
            }
            else
            {
              v35 = (char *)dest;
              if ( *((_QWORD *)&v54 + 1) - (_QWORD)dest <= 0x12u )
              {
                sub_26240F0(&v52, "template<...> class", 19);
              }
              else
              {
                *(__m128i *)dest = _mm_load_si128((const __m128i *)&xmmword_3C7E2E0);
                *(_DWORD *)(v35 + 15) = 1936941420;
                dest = (char *)dest + 19;
              }
            }
          }
          ++v26;
        }
        while ( v27 != (_DWORD)v26 );
      }
      if ( *((void **)&v54 + 1) == dest )
      {
        sub_26240F0(&v52, ">", 1);
      }
      else
      {
        *(_BYTE *)dest = 62;
        dest = (char *)dest + 1;
      }
      goto LABEL_29;
    }
    v8 = (unsigned int)v18 - 58;
    if ( (unsigned int)v8 > 1 )
      return clang_getCursorSpelling(
               a1,
               a2,
               v8,
               a4,
               a5,
               a6,
               (__int128)_mm_loadu_si128((const __m128i *)&a7),
               _mm_loadu_si128((const __m128i *)&a8));
    ptr = v61;
    v52 = (__int64 *)&off_49DA340;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
    p_ptr = &ptr;
    v54 = 0;
    v53 = 2;
    v56 = 0;
    v57 = 1;
    dest = nullptr;
    sub_2623850(&v52, 0, 0, 0, a5, a6);
    sub_77A870(v14, &v52);
    v37 = *(_QWORD *)(v14 + 160);
    v48.m128i_i8[2] &= ~0x40u;
    if ( !v37 )
      goto LABEL_69;
    v38 = v37 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v37 & 4) != 0 )
    {
      if ( !v38 )
        goto LABEL_69;
      v38 = *(_QWORD *)v38;
    }
    if ( v38 )
    {
      v43 = sub_7D65F0(v14);
      sub_B2C0A0(&v52, v38 + 16, *(unsigned int *)(v38 + 8), &v48, *(_QWORD *)(v43 + 56));
LABEL_29:
      v9 = sub_6905C0(*p_ptr, (size_t)p_ptr[1]);
      v52 = &qword_4A6EA70[2];
      sub_2623770(&v52);
      if ( ptr != v61 )
        free(ptr);
      return v9;
    }
LABEL_69:
    v39 = sub_7D65F0(v14);
    sub_B22390(&v52, *(_QWORD *)(v14 + 168) + 8LL, **(unsigned int **)(v14 + 168), &v48, *(_QWORD *)(v39 + 56));
    goto LABEL_29;
  }
  return sub_690460(v11);
}

