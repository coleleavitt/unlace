void __fastcall sub_14B6F90(const __m128i *a1, unsigned int a2, __m128i a3, __m128 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // r13
  signed __int64 v8; // r10
  __int64 v9; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // rsi
  signed __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  char *v14; // r14
  char *v15; // r8
  __int64 v16; // r11
  unsigned int v17; // r9d
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  char *v23; // r14
  char *v24; // rdi
  size_t v25; // r9
  size_t v26; // rax
  char *v27; // r11
  unsigned __int64 v28; // rdx
  __int64 i; // rax
  char *v31; // [rsp+8h] [rbp-C60h]
  int v32; // [rsp+8h] [rbp-C60h]
  signed __int64 v33; // [rsp+10h] [rbp-C58h]
  __int64 v34; // [rsp+10h] [rbp-C58h]
  __int64 v35; // [rsp+10h] [rbp-C58h]
  signed __int64 v36; // [rsp+10h] [rbp-C58h]
  __int64 v37; // [rsp+10h] [rbp-C58h]
  char *v38; // [rsp+18h] [rbp-C50h]
  __int64 v39; // [rsp+18h] [rbp-C50h]
  char *v40; // [rsp+18h] [rbp-C50h]
  __int64 v41; // [rsp+18h] [rbp-C50h]
  signed __int64 v42; // [rsp+18h] [rbp-C50h]
  __int64 v43; // [rsp+20h] [rbp-C48h]
  signed __int64 v44; // [rsp+20h] [rbp-C48h]
  char *v45; // [rsp+20h] [rbp-C48h]
  size_t v46; // [rsp+28h] [rbp-C40h]
  size_t v47; // [rsp+28h] [rbp-C40h]
  char *v48; // [rsp+30h] [rbp-C38h]
  size_t v49; // [rsp+38h] [rbp-C30h]
  __int64 v50; // [rsp+40h] [rbp-C28h] BYREF
  void *v51; // [rsp+48h] [rbp-C20h]
  __int64 v52; // [rsp+50h] [rbp-C18h]
  _BYTE v53[16]; // [rsp+58h] [rbp-C10h] BYREF
  __int8 *v54; // [rsp+68h] [rbp-C00h] BYREF
  void *v55; // [rsp+70h] [rbp-BF8h]
  __int64 v56; // [rsp+78h] [rbp-BF0h]
  _BYTE v57[16]; // [rsp+80h] [rbp-BE8h] BYREF
  _QWORD v58[5]; // [rsp+90h] [rbp-BD8h] BYREF
  void *v59; // [rsp+B8h] [rbp-BB0h]
  __int64 v60; // [rsp+C0h] [rbp-BA8h]
  _BYTE v61[16]; // [rsp+C8h] [rbp-BA0h] BYREF
  __int8 *v62; // [rsp+D8h] [rbp-B90h] BYREF
  void *ptr; // [rsp+E0h] [rbp-B88h]
  __int64 v64; // [rsp+E8h] [rbp-B80h]
  _QWORD v65[4]; // [rsp+F0h] [rbp-B78h] BYREF
  void *v66; // [rsp+110h] [rbp-B58h]
  __int64 v67; // [rsp+118h] [rbp-B50h]
  __int64 v68; // [rsp+120h] [rbp-B48h]
  __int64 v69; // [rsp+128h] [rbp-B40h]
  __int64 v70; // [rsp+130h] [rbp-B38h]
  __int64 v71; // [rsp+138h] [rbp-B30h]
  __int64 v72; // [rsp+140h] [rbp-B28h]
  __int64 v73; // [rsp+148h] [rbp-B20h]
  __int64 v74; // [rsp+150h] [rbp-B18h]
  __int64 v75; // [rsp+158h] [rbp-B10h]
  __int64 v76; // [rsp+160h] [rbp-B08h]
  __int64 v77; // [rsp+168h] [rbp-B00h]
  __int64 v78; // [rsp+170h] [rbp-AF8h]
  __int64 v79; // [rsp+178h] [rbp-AF0h]
  __int64 v80; // [rsp+180h] [rbp-AE8h]
  __int64 v81; // [rsp+188h] [rbp-AE0h]
  __int64 v82; // [rsp+190h] [rbp-AD8h]
  __int64 v83; // [rsp+198h] [rbp-AD0h]
  __int64 v84; // [rsp+1A0h] [rbp-AC8h]
  __int16 v85; // [rsp+1A8h] [rbp-AC0h]
  __int64 v86; // [rsp+1B0h] [rbp-AB8h]
  _QWORD v87[2]; // [rsp+1C0h] [rbp-AA8h] BYREF
  __int128 v88; // [rsp+1D0h] [rbp-A98h]
  __int64 v89; // [rsp+1E0h] [rbp-A88h]
  __int64 v90; // [rsp+1E8h] [rbp-A80h]
  __int64 v91; // [rsp+1F0h] [rbp-A78h]
  int v92; // [rsp+1F8h] [rbp-A70h]
  __int64 v93; // [rsp+200h] [rbp-A68h]
  __int64 v94; // [rsp+210h] [rbp-A58h]
  __int64 v95; // [rsp+218h] [rbp-A50h]
  int v96; // [rsp+220h] [rbp-A48h]
  __int64 v97; // [rsp+228h] [rbp-A40h]
  __int64 v98; // [rsp+230h] [rbp-A38h]
  int v99; // [rsp+238h] [rbp-A30h]
  __int64 *v100; // [rsp+240h] [rbp-A28h]
  __int64 v101; // [rsp+248h] [rbp-A20h]
  __int64 v102; // [rsp+250h] [rbp-A18h] BYREF
  __int16 v103; // [rsp+490h] [rbp-7D8h]
  __int64 v104; // [rsp+498h] [rbp-7D0h]
  void *src; // [rsp+4A0h] [rbp-7C8h] BYREF
  __int64 v106; // [rsp+4A8h] [rbp-7C0h]
  _BYTE v107[16]; // [rsp+4B0h] [rbp-7B8h] BYREF
  _QWORD v108[3]; // [rsp+4C0h] [rbp-7A8h] BYREF
  _QWORD v109[242]; // [rsp+4D8h] [rbp-790h] BYREF

  if ( a1[2].m128i_i16[0] == 3 )
  {
    v5 = a1->m128i_i64[1];
    if ( *(_QWORD *)(v5 + 760) )
    {
      *(_BYTE *)(v5 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v5 + 48) + 6LL) = 1;
    }
    v6 = a1[6].m128i_i64[0];
    a1[2].m128i_i16[0] = 1;
    sub_172A9A0(*(_QWORD *)(v6 + 656), *(_QWORD *)(v6 + 608), 12);
  }
  else
  {
    v58[0] &= 0xFFFFFFC000000000LL;
    v59 = v61;
    ptr = v65;
    memset(&v58[2], 0, 24);
    v60 = 0x200000000LL;
    v62 = &a1[31].m128i_i8[8];
    v64 = 0x200000000LL;
    v65[2] = 0;
    v65[3] = 0;
    v66 = nullptr;
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    v72 = 0;
    v73 = 0;
    v74 = 0;
    v75 = 0;
    v76 = 0;
    v77 = 0;
    v78 = 0;
    v79 = 0;
    v80 = 0;
    v81 = 0;
    v82 = 0;
    v83 = 0;
    v84 = 0;
    v85 &= 0xF000u;
    v86 = 0;
    sub_148B330((__int64)a1, (__int64)v58, 0, 3u, 0, a3, a4);
    if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
    {
      qword_2CD8AE0[2] = 0x200000000LL;
      qword_2CD8AE0[0] = 0;
      qword_2CD8AE0[1] = &qword_2CD8AE0[3];
      __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
      __cxa_guard_release(&qword_2CD8AC8);
    }
    v88 = 0;
    v95 = v70;
    v100 = &v102;
    v101 = 0x400000000LL;
    v108[0] = v62;
    v108[1] = v109;
    v87[0] = v58;
    v87[1] = 0;
    v89 = 0;
    v90 = 0;
    v91 = 0;
    LOBYTE(v103) = (((LODWORD(v58[0]) >> 12) & 0x7F) == 69) | v103 & 0xFE;
    v106 = 0x200000000LL;
    v108[2] = 0x200000000LL;
    HIBYTE(v103) = (unsigned __int16)(v103 & 0xFC0D) >> 8;
    v92 = 0;
    v93 = 0;
    v94 = 0;
    v96 = 16;
    v97 = 0;
    v98 = 0;
    v99 = 0;
    v104 = 0;
    src = v107;
    v109[2] = qword_2CD8AE0;
    memset(&v109[3], 0, 40);
    v109[232] = 0;
    LOBYTE(v103) = v103 & 1 | 4;
    sub_147E3E0((__int64)a1, (__int64)v87);
    if ( a1[2].m128i_i16[0] == 189 )
    {
      v52 = 0x200000000LL;
      v56 = 0x200000000LL;
      v51 = v53;
      v54 = &a1[31].m128i_i8[8];
      v55 = v57;
      v50 = 0;
      sub_1490230(a1, (__int64)&v50, 0, (__int64)v87, (__m128i)0LL, a4);
      v7 = (char *)v51;
      v8 = 8LL * (unsigned int)v52;
      v31 = (char *)v51 + v8;
      v9 = (unsigned int)v106;
      v10 = v8 >> 3;
      v11 = (unsigned int)v106;
      v12 = 8LL * (unsigned int)v106;
      if ( v12 )
      {
        v13 = (unsigned int)v106 + v10;
        if ( v13 > HIDWORD(v106) )
        {
          v39 = (8LL * (unsigned int)v52) >> 3;
          v34 = 8LL * (unsigned int)v52;
          sub_2237220(&src, v107, v13, 8);
          v10 = v39;
          v8 = v34;
          v11 = (unsigned int)v106;
          v14 = (char *)src;
          v12 = 8LL * (unsigned int)v106;
        }
        else
        {
          v14 = (char *)src;
        }
        v15 = (char *)src + v12;
        v16 = v12 >> 3;
        if ( v12 >> 3 >= v10 )
        {
          v24 = (char *)src + v12;
          v25 = v12 - v8;
          v26 = v8;
          v27 = &v14[v12 - v8];
          v35 = v8 >> 3;
          v28 = v11 + (v8 >> 3);
          if ( v28 > HIDWORD(v106) )
          {
            v49 = v8;
            v48 = &v14[v12 - v8];
            v47 = v12 - v8;
            v45 = (char *)src + v12;
            v42 = v8;
            sub_2237220(&src, v107, v28, 8);
            v26 = v49;
            v27 = v48;
            LODWORD(v11) = v106;
            v25 = v47;
            v15 = v45;
            v24 = (char *)src + 8 * (unsigned int)v106;
            v8 = v42;
          }
          if ( v27 != v15 )
          {
            v46 = v25;
            v44 = v8;
            v40 = v27;
            memmove(v24, v27, v26);
            v25 = v46;
            v8 = v44;
            LODWORD(v11) = v106;
            v27 = v40;
          }
          LODWORD(v106) = v35 + v11;
          if ( v27 != v14 )
          {
            v36 = v8;
            memmove(&v14[v8], v14, v25);
            v8 = v36;
          }
          if ( v7 != v31 )
            memmove(v14, v7, v8);
        }
        else
        {
          v17 = v11 + v10;
          LODWORD(v106) = v17;
          if ( v14 != v15 )
          {
            v43 = v12 >> 3;
            v38 = (char *)src + v12;
            v33 = v12;
            memcpy(&v14[8 * v17 - v12], v14, v12);
            v16 = v43;
            v15 = v38;
            v12 = v33;
          }
          if ( v16 )
          {
            if ( (v14 >= v7 + 16 || v7 >= v14 + 16) && (unsigned __int64)(v16 - 1) > 3 )
            {
              v18 = 0;
              v19 = 0;
              v20 = ((unsigned __int64)(v16 - 2) >> 1) + 1;
              do
              {
                ++v19;
                *(__m128i *)&v14[v18] = _mm_loadu_si128((const __m128i *)&v7[v18]);
                v18 += 16;
              }
              while ( v19 < v20 );
              v21 = 2 * v20;
              v22 = 16 * v20;
              v23 = &v14[v22];
              if ( v21 != v16 )
                *(_QWORD *)v23 = *(_QWORD *)&v7[v22];
            }
            else
            {
              for ( i = 0; i != v16; ++i )
                *(_QWORD *)&v14[8 * i] = *(_QWORD *)&v7[8 * i];
            }
            v7 += v12;
          }
          if ( v31 != v7 )
            memcpy(v15, v7, v31 - v7);
        }
      }
      else
      {
        if ( (unsigned int)v106 + v10 > HIDWORD(v106) )
        {
          v41 = (8LL * (unsigned int)v52) >> 3;
          v37 = 8LL * (unsigned int)v52;
          sub_2237220(&src, v107, (unsigned int)v106 + v10, 8);
          LODWORD(v10) = v41;
          v8 = v37;
          v9 = (unsigned int)v106;
        }
        if ( v7 != v31 )
        {
          v32 = v10;
          memcpy((char *)src + 8 * v9, v7, v8);
          LODWORD(v9) = v106;
          LODWORD(v10) = v32;
        }
        LODWORD(v106) = v10 + v9;
      }
      LODWORD(v52) = 0;
      sub_15D8C50(v108, &v54);
      LODWORD(v56) = 0;
      if ( HIDWORD(v50) )
        HIDWORD(v95) = HIDWORD(v50);
      sub_15DCED0(v54, &v54);
      if ( v55 != v57 )
        free(v55);
      if ( v51 != v53 )
        free(v51);
    }
    sub_18C4CC0(a1[6].m128i_i64[0], a2, v87, *(_QWORD *)(a1[6].m128i_i64[0] + 608));
    sub_147A7A0((char *)v87);
    if ( HIDWORD(v67) )
      free(v66);
    sub_15DCED0(v62, &v62);
    if ( ptr != v65 )
      free(ptr);
    if ( v59 != v61 )
      free(v59);
  }
}
