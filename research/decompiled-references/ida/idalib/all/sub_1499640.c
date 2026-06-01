void __fastcall sub_1499640(
        const __m128i *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r15
  const __m128i *v9; // rbp
  int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  __int16 v15; // ax
  unsigned int v16; // r13d
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rbx
  char *v25; // r15
  __int64 v26; // rax
  unsigned int v27; // r10d
  void *v28; // rax
  size_t v29; // rdx
  int v30; // r13d
  unsigned int v31; // eax
  unsigned int v32; // r15d
  void *v33; // rdi
  unsigned int v34; // ecx
  int v35; // eax
  char *v36; // r15
  __int64 v37; // rax
  size_t v38; // rax
  size_t v39; // rax
  __int64 v40; // [rsp+8h] [rbp-C60h]
  __int64 v41; // [rsp+10h] [rbp-C58h]
  __int32 v42; // [rsp+18h] [rbp-C50h]
  int v43; // [rsp+1Ch] [rbp-C4Ch]
  char v44; // [rsp+2Bh] [rbp-C3Dh]
  unsigned int v45; // [rsp+2Ch] [rbp-C3Ch]
  unsigned int v46; // [rsp+2Ch] [rbp-C3Ch]
  _DWORD v47[6]; // [rsp+30h] [rbp-C38h] BYREF
  __int64 *v48; // [rsp+48h] [rbp-C20h]
  __int64 v49; // [rsp+58h] [rbp-C10h] BYREF
  _DWORD v50[6]; // [rsp+70h] [rbp-BF8h] BYREF
  void *v51; // [rsp+88h] [rbp-BE0h]
  __int64 v52; // [rsp+98h] [rbp-BD0h] BYREF
  unsigned int v53; // [rsp+B0h] [rbp-BB8h] BYREF
  unsigned int v54; // [rsp+B4h] [rbp-BB4h]
  char v55; // [rsp+B8h] [rbp-BB0h]
  __int32 v56; // [rsp+BCh] [rbp-BACh]
  int v57; // [rsp+C0h] [rbp-BA8h]
  char v58; // [rsp+C4h] [rbp-BA4h]
  void *v59; // [rsp+C8h] [rbp-BA0h]
  __int64 v60; // [rsp+D0h] [rbp-B98h]
  _BYTE v61[16]; // [rsp+D8h] [rbp-B90h] BYREF
  char v62; // [rsp+E8h] [rbp-B80h]
  __int32 v63; // [rsp+F0h] [rbp-B78h] BYREF
  int v64; // [rsp+F4h] [rbp-B74h]
  char v65; // [rsp+F8h] [rbp-B70h]
  __int64 v66; // [rsp+FCh] [rbp-B6Ch]
  char v67; // [rsp+104h] [rbp-B64h]
  void *v68; // [rsp+108h] [rbp-B60h]
  __int64 v69; // [rsp+110h] [rbp-B58h]
  _BYTE v70[16]; // [rsp+118h] [rbp-B50h] BYREF
  char v71; // [rsp+128h] [rbp-B40h]
  unsigned __int8 *v72; // [rsp+130h] [rbp-B38h] BYREF
  int v73; // [rsp+138h] [rbp-B30h]
  __int64 v74; // [rsp+140h] [rbp-B28h]
  void *ptr; // [rsp+148h] [rbp-B20h]
  __int64 v76; // [rsp+150h] [rbp-B18h]
  _BYTE v77[104]; // [rsp+158h] [rbp-B10h] BYREF
  __int64 v78[2]; // [rsp+1C0h] [rbp-AA8h] BYREF
  __int128 v79; // [rsp+1D0h] [rbp-A98h]
  __int64 v80; // [rsp+1E0h] [rbp-A88h]
  __int64 v81; // [rsp+1E8h] [rbp-A80h]
  __int64 v82; // [rsp+1F0h] [rbp-A78h]
  int v83; // [rsp+1F8h] [rbp-A70h]
  __int64 v84; // [rsp+200h] [rbp-A68h]
  __int64 v85; // [rsp+210h] [rbp-A58h]
  __int64 v86; // [rsp+218h] [rbp-A50h]
  int v87; // [rsp+220h] [rbp-A48h]
  __int64 v88; // [rsp+228h] [rbp-A40h]
  __int64 v89; // [rsp+230h] [rbp-A38h]
  int v90; // [rsp+238h] [rbp-A30h]
  __int64 *v91; // [rsp+240h] [rbp-A28h]
  __int64 v92; // [rsp+248h] [rbp-A20h]
  __int64 v93; // [rsp+250h] [rbp-A18h] BYREF
  __int16 v94; // [rsp+490h] [rbp-7D8h]
  __int64 v95; // [rsp+498h] [rbp-7D0h]
  __int64 *v96; // [rsp+4A0h] [rbp-7C8h]
  __int64 v97; // [rsp+4A8h] [rbp-7C0h]
  __int64 v98; // [rsp+4B0h] [rbp-7B8h] BYREF
  _QWORD v99[3]; // [rsp+4C0h] [rbp-7A8h] BYREF
  _QWORD v100[242]; // [rsp+4D8h] [rbp-790h] BYREF

  v8 = a2;
  v9 = a1;
  v10 = *(_DWORD *)(a2 + 96);
  v42 = a1[1].m128i_i32[0];
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v11 = *(_QWORD *)a2;
  v85 = 0;
  v87 = v10;
  v12 = *(_QWORD *)(v11 + 160);
  v78[0] = v11;
  v88 = 0;
  v86 = v12;
  v91 = &v93;
  v89 = 0;
  v90 = 0;
  v92 = 0x400000000LL;
  v78[1] = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  LOBYTE(a6) = ((*(_DWORD *)v11 >> 12) & 0x7F) == 69;
  LOBYTE(v94) = a6 | v94 & 0xFE;
  v94 &= 0xFC01u;
  v13 = *(_QWORD *)(v11 + 72);
  v96 = &v98;
  v99[0] = v13;
  v14 = v100;
  v97 = 0x200000000LL;
  v99[2] = 0x200000000LL;
  v95 = 0;
  v99[1] = v100;
  v100[2] = qword_2CD8AE0;
  memset(&v100[3], 0, 40);
  v15 = a1[2].m128i_i16[0];
  for ( v100[232] = 0; v15 == 20; v15 = a1[2].m128i_i16[0] )
    sub_1498E30(a1, v78, (__m128i)0LL, a4, (__int64)v14, a6, a7, a8);
  if ( v15 == 63 )
    *(_DWORD *)(a2 + 84) = v42;
  v43 = a1[1].m128i_i32[0];
  sub_1498040(a1, a2, (char *)sub_149D2E0, 0, (__m128i)0LL, a4);
  v16 = v92;
  if ( (_DWORD)v92 )
  {
    v17 = *(unsigned int *)(a2 + 136);
    v18 = *(_QWORD *)(a2 + 128);
    v41 = a2 + 128;
    if ( (_DWORD)v17 && (v34 = *(_DWORD *)(v18 + 144LL * (unsigned int)(v17 - 1)), v34 <= 7) )
    {
      v44 = 0;
      if ( ((1LL << v34) & 0xB3) != 0 )
      {
        v35 = sub_13DC060(
                *(_DWORD *)(a2 + 92),
                0,
                *(__int64 **)(a1->m128i_i64[1] + 88),
                *(_QWORD *)(a1->m128i_i64[1] + 56),
                (__m128i)0LL,
                *(double *)a4.m128_u64);
        ptr = v77;
        v76 = 0x200000000LL;
        v74 = 0;
        HIDWORD(v72) = v43;
        LODWORD(v72) = 6;
        v73 = v35;
        sub_1497CE0(a2 + 128, (unsigned __int64)&v72);
        if ( ptr != v77 )
          free(ptr);
        v16 = v92;
        if ( !(_DWORD)v92 )
          goto LABEL_44;
        v17 = *(unsigned int *)(a2 + 136);
        v18 = *(_QWORD *)(a2 + 128);
        v44 = 1;
      }
    }
    else
    {
      v44 = 0;
    }
    v40 = a2 + 768;
    v19 = 0;
    while ( 1 )
    {
      v23 = v17 + 1;
      v24 = v18 + 144 * v17;
      v25 = (char *)&v91[18 * v19];
      if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 140) )
      {
        if ( v18 > (unsigned __int64)v25 || v24 <= (unsigned __int64)v25 )
        {
          sub_1497B50(v41, v23);
          v24 = *(_QWORD *)(a2 + 128) + 144LL * *(unsigned int *)(a2 + 136);
        }
        else
        {
          v36 = &v25[-v18];
          sub_1497B50(v41, v23);
          v37 = *(_QWORD *)(a2 + 128);
          v25 = &v36[v37];
          v24 = v37 + 144LL * *(unsigned int *)(a2 + 136);
        }
      }
      *(_DWORD *)v24 = *(_DWORD *)v25;
      *(_DWORD *)(v24 + 4) = *((_DWORD *)v25 + 1);
      *(_DWORD *)(v24 + 8) = *((_DWORD *)v25 + 2);
      v26 = *((_QWORD *)v25 + 2);
      *(_QWORD *)(v24 + 32) = 0x200000000LL;
      *(_QWORD *)(v24 + 16) = v26;
      v27 = *((_DWORD *)v25 + 8);
      v28 = (void *)(v24 + 40);
      *(_QWORD *)(v24 + 24) = v24 + 40;
      if ( v27 && (char *)(v24 + 24) != v25 + 24 )
      {
        v29 = 8LL * v27;
        if ( v27 <= 2uLL
          || (v46 = v27,
              sub_2237220(v24 + 24, v24 + 40, v27, 8),
              v28 = *(void **)(v24 + 24),
              v27 = v46,
              (v29 = 8LL * *((unsigned int *)v25 + 8)) != 0) )
        {
          v45 = v27;
          memcpy(v28, *((const void **)v25 + 3), v29);
          v27 = v45;
        }
        *(_DWORD *)(v24 + 32) = v27;
      }
      a4 = (__m128)_mm_loadu_si128((const __m128i *)(v25 + 56));
      ++v19;
      *(__m128 *)(v24 + 56) = a4;
      *(__m128i *)(v24 + 72) = _mm_loadu_si128((const __m128i *)(v25 + 72));
      *(__m128i *)(v24 + 88) = _mm_loadu_si128((const __m128i *)(v25 + 88));
      *(__m128i *)(v24 + 104) = _mm_loadu_si128((const __m128i *)(v25 + 104));
      *(__m128i *)(v24 + 120) = _mm_loadu_si128((const __m128i *)(v25 + 120));
      *(_QWORD *)(v24 + 136) = *((_QWORD *)v25 + 17);
      v21 = *(_QWORD *)(a2 + 128);
      v22 = (unsigned int)(*(_DWORD *)(a2 + 136) + 1);
      *(_DWORD *)(a2 + 136) = v22;
      sub_15D8A10(v40, v21 + 144 * v22 - 128, v99);
      if ( v16 <= (unsigned int)v19 )
        break;
      v17 = *(unsigned int *)(a2 + 136);
      v18 = *(_QWORD *)(a2 + 128);
    }
    v9 = a1;
    v8 = a2;
    if ( !*(_DWORD *)(a2 + 56) && *(_QWORD *)(a2 + 64) )
    {
      v30 = HIDWORD(v86);
      v31 = sub_13DC060(
              *(_DWORD *)(a2 + 92),
              0,
              *(__int64 **)(a1->m128i_i64[1] + 88),
              *(_QWORD *)(a1->m128i_i64[1] + 56),
              (__m128i)0LL,
              *(double *)a4.m128_u64);
      v32 = v31;
      if ( !v44 )
      {
        sub_1564820(&v72, a1, v31, 1572);
        sub_AE9DF0(&v72, (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 8) != 0, 3u);
        v60 = 0;
        v59 = v61;
        v61[0] = 0;
        v53 = v32;
        v54 = v32;
        v55 = 0;
        v56 = v42;
        v57 = v30;
        v58 = 1;
        v62 = 0;
        if ( v32 )
          sub_1480470((__int64 *)&v72, (unsigned __int64)&v53);
        v66 = 0;
        v67 = 0;
        v68 = v70;
        v69 = 0;
        v70[0] = 0;
        v71 = 0;
        v63 = v42;
        v64 = v30;
        v65 = 1;
        if ( v30 )
        {
          if ( v42 )
          {
            sub_1480470((__int64 *)&v72, (unsigned __int64)&v63);
            if ( v68 != v70 )
              operator delete(v68);
          }
        }
        v33 = v59;
        if ( v59 == v61 )
          goto LABEL_29;
        goto LABEL_28;
      }
LABEL_45:
      sub_1564820(&v72, v9, v32, 1572);
      sub_AE9DF0(&v72, (*(_BYTE *)(*(_QWORD *)(v9->m128i_i64[1] + 56) + 1LL) & 8) != 0, 3u);
      v38 = j__strlen("(");
      sub_9EC740((__int64)v47, v43, "(", v38, 0);
      if ( v47[0] && v47[1] )
        sub_1480470((__int64 *)&v72, (unsigned __int64)v47);
      v39 = j__strlen(")");
      sub_9EC740((__int64)v50, v32, ")", v39, 0);
      if ( v50[0] && v50[1] )
        sub_1480470((__int64 *)&v72, (unsigned __int64)v50);
      v61[0] = 0;
      v53 = v32;
      v59 = v61;
      v60 = 0;
      v54 = v32;
      v55 = 0;
      v56 = v42;
      v57 = v30;
      v58 = 1;
      v62 = 0;
      if ( v32 )
        sub_1480470((__int64 *)&v72, (unsigned __int64)&v53);
      v66 = 0;
      v67 = 0;
      v68 = v70;
      v69 = 0;
      v70[0] = 0;
      v71 = 0;
      v63 = v42;
      v64 = v30;
      v65 = 1;
      if ( v42 )
      {
        if ( v30 )
        {
          sub_1480470((__int64 *)&v72, (unsigned __int64)&v63);
          if ( v68 != v70 )
            operator delete(v68);
        }
      }
      if ( v59 != v61 )
        operator delete(v59);
      if ( v51 != &v52 )
        operator delete(v51);
      v33 = v48;
      if ( v48 == &v49 )
        goto LABEL_29;
LABEL_28:
      operator delete(v33);
LABEL_29:
      sub_AEA040((__int64)&v72);
      goto LABEL_30;
    }
    if ( !v44 )
      goto LABEL_30;
LABEL_44:
    v30 = HIDWORD(v86);
    v32 = sub_13DC060(
            *(_DWORD *)(v8 + 92),
            0,
            *(__int64 **)(v9->m128i_i64[1] + 88),
            *(_QWORD *)(v9->m128i_i64[1] + 56),
            (__m128i)0LL,
            *(double *)a4.m128_u64);
    goto LABEL_45;
  }
LABEL_30:
  sub_147A7A0((char *)v78);
}
