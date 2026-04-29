__int64 __fastcall sub_127FE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // r12
  __int64 v13; // rbp
  __int64 (__fastcall *v14)(); // rax
  __int64 v15; // r12
  int v16; // r15d
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r15
  int v21; // r8d
  char v22; // al
  __int64 v23; // rdx
  _BYTE *v24; // r15
  __int64 result; // rax
  __int64 v26; // rdx
  __int64 v27; // rsi
  unsigned int v28; // edx
  __int64 v29; // rsi
  _DWORD *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // r15
  __int64 *v33; // rsi
  unsigned __int64 v34; // r13
  size_t v35; // rcx
  __m128i si128; // xmm0
  __int64 v37; // r13
  __int64 v38; // rcx
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // r13
  __int64 v42; // r15
  __int64 v43; // rax
  __m128i v44; // xmm0
  size_t v45; // r11
  unsigned __int64 v46; // r8
  void *v47; // rax
  size_t n[2]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v49; // [rsp+10h] [rbp-B8h]
  char v50; // [rsp+17h] [rbp-B1h]
  size_t v51; // [rsp+18h] [rbp-B0h]
  __int64 *v52; // [rsp+20h] [rbp-A8h]
  size_t *v53; // [rsp+28h] [rbp-A0h]
  __int64 v54[2]; // [rsp+30h] [rbp-98h] BYREF
  size_t v55; // [rsp+40h] [rbp-88h] BYREF
  __m128i v56; // [rsp+48h] [rbp-80h]
  _BYTE v57[24]; // [rsp+60h] [rbp-68h] BYREF
  __int128 v58; // [rsp+78h] [rbp-50h]
  unsigned __int64 v59; // [rsp+88h] [rbp-40h]

  v11 = a3;
  v49 = a4;
  v59 = __readfsqword(0x28u);
  while ( 2 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    v14 = *(__int64 (__fastcall **)())(*(_QWORD *)v13 + 64LL);
    if ( v14 != sub_11B410
      && ((unsigned __int8 (__fastcall *)(_QWORD, __int64, __int64, __int64, _QWORD))v14)(
           *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
           a2,
           a1,
           v11,
           v49) )
    {
      return v59 - __readfsqword(0x28u);
    }
    switch ( *(_BYTE *)v11 )
    {
      case 1:
        v26 = *(unsigned int *)(v11 + 4);
        v27 = *(unsigned int *)(v11 + 8);
        *(_OWORD *)v57 = 0u;
        sub_63E80(v57, v27, v26);
        *(_QWORD *)&v57[16] = 0;
        v58 = 0;
        sub_64280(a2, v57);
        sub_316CB0(a2 + 16, &v57[16]);
        if ( *(_QWORD *)&v57[16] )
        {
          *(_QWORD *)&v58 = 0;
          qfree(*(_QWORD *)&v57[16]);
        }
        goto LABEL_34;
      case 4:
        sub_127A20(v57, a1, *(_QWORD *)(v11 + 8), v49);
        sub_64280(a2, v57);
        sub_316CB0(a2 + 16, &v57[16]);
        if ( *(_QWORD *)&v57[16] )
        {
          *(_QWORD *)&v58 = 0;
          ((void (*)(void))qfree)();
        }
LABEL_34:
        qfree(*(_QWORD *)v57);
        return v59 - __readfsqword(0x28u);
      case 5:
        a4 = *(_DWORD *)(v11 + 4);
        v28 = a4;
        v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 8) + 1496LL) + 24LL) + 16LL)
            & (*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + *(_QWORD *)(**(_QWORD **)(v11 + 8) + 1440LL));
        goto LABEL_39;
      case 6:
        if ( (v49 & 0x400) != 0
          && (unsigned __int8)sub_342B40(*(_QWORD *)(a1 + 480), *(_QWORD *)(v11 + 8), *(int *)(v11 + 4)) )
        {
          return v59 - __readfsqword(0x28u);
        }
        v28 = *(_DWORD *)(v11 + 4);
        v29 = *(_QWORD *)(v11 + 8);
LABEL_39:
        result = sub_122B20(a2, v29, v28, a4, a5, a6, a7, a8, a9, a10, a11);
        break;
      case 8:
        v15 = *(_QWORD *)(v11 + 8);
        v54[0] = 0;
        v54[1] = 0;
        v56 = 0;
        v55 = 0;
        v16 = v49 & 0x4000;
        v17 = v49 & 1;
        v50 = v16 != 0;
        if ( (v49 & 1) != 0 )
        {
          v33 = (__int64 *)(v15 + 136);
          v52 = v54;
          sub_648D0(v54, v15 + 136, a3, v17);
          v34 = *(_QWORD *)(v15 + 160);
          v35 = 0;
          if ( v34 )
          {
            n[0] = 16 * v34;
            v47 = (void *)qalloc_or_throw(16 * v34, v33, 16 * v34, 0);
            v33 = *(__int64 **)(v15 + 152);
            v35 = (size_t)memcpy(v47, v33, 16 * v34);
          }
          si128 = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v34);
          if ( v55 )
          {
            v51 = v35;
            *(__m128i *)n = si128;
            v56.m128i_i64[0] = 0;
            qfree(v55);
            v35 = v51;
            si128 = _mm_load_si128((const __m128i *)n);
          }
          v55 = v35;
          v56 = si128;
          if ( (v49 & 0x4000) != 0 )
          {
            v43 = *(_QWORD *)(a1 + 64);
            v44 = _mm_loadu_si128((const __m128i *)(v43 + 664));
            v45 = *(_QWORD *)(v43 + 568);
            memset(v57, 0, sizeof(v57));
            v46 = _mm_add_epi64(v44, _mm_srli_si128(v44, 8)).m128i_u64[0];
            if ( v46 - 1 >= v45 )
            {
              v51 = v45;
              n[0] = v46;
              *(_QWORD *)v57 = qvector_reserve(v57, 0, 1, 16);
              *(__m128i *)(*(_QWORD *)v57 + 16LL * (*(_QWORD *)&v57[8])++) = _mm_unpacklo_epi64(
                                                                               (__m128i)v51,
                                                                               (__m128i)(n[0] - v51));
            }
            v53 = &v55;
            sub_3180C0(&v55, v57);
            if ( *(_QWORD *)v57 )
            {
              *(_QWORD *)&v57[8] = 0;
              qfree(*(_QWORD *)v57);
            }
            sub_64640(v52, v15 + 96);
            v33 = (__int64 *)(v15 + 112);
            sub_317C60(v53, v15 + 112);
          }
          if ( (v49 & 0x2000) == 0 )
          {
            v37 = *(_QWORD *)(a1 + 64);
            memset(v57, 0, sizeof(v57));
            v38 = *(_QWORD *)(v37 + 216);
            if ( v38 )
            {
              n[0] = *(_QWORD *)(v37 + 216);
              v51 = 16 * v38;
              *(_QWORD *)v57 = qalloc_or_throw(16 * v38, v33, 16 * v38, v38);
              *(_QWORD *)&v57[16] = n[0];
              memcpy(*(void **)v57, *(const void **)(v37 + 208), v51);
              *(_QWORD *)&v57[8] = n[0];
            }
            sub_317BD0(v57, v37 + 600);
            v33 = (__int64 *)v57;
            sub_317C60(&v55, v57);
            if ( *(_QWORD *)v57 )
            {
              *(_QWORD *)&v57[8] = 0;
              qfree(*(_QWORD *)v57);
            }
            if ( !v16 )
            {
              v33 = v52;
              sub_11E5D0(
                v15,
                (_DWORD)v52,
                *(_QWORD *)(a1 + 64),
                v35,
                v39,
                v40,
                n[0],
                n[1],
                v49,
                v51,
                (_DWORD)v52,
                (_DWORD)v53,
                v54[0]);
            }
          }
          v41 = *(_QWORD *)(a1 + 64);
          memset(v57, 0, sizeof(v57));
          v42 = *(_QWORD *)(v41 + 192);
          if ( v42 )
          {
            n[0] = 16 * v42;
            *(_QWORD *)v57 = qalloc_or_throw(16 * v42, v33, 16 * v42, v35);
            *(_QWORD *)&v57[16] = v42;
            memcpy(*(void **)v57, *(const void **)(v41 + 184), n[0]);
            *(_QWORD *)&v57[8] = v42;
            v41 = *(_QWORD *)(a1 + 64);
          }
          sub_317C60(v57, v41 + 208);
          v53 = &v55;
          sub_317C60(&v55, v57);
          if ( (v49 & 0x80u) != 0 && (!(unsigned __int8)sub_64880(v15 + 176) || *(_QWORD *)(v15 + 200)) )
          {
            sub_64640(v52, v15 + 176);
            sub_317C60(v53, v15 + 192);
          }
          if ( *(_QWORD *)v57 )
          {
            *(_QWORD *)&v57[8] = 0;
            qfree(*(_QWORD *)v57);
          }
        }
        else
        {
          v52 = v54;
          if ( (v49 & 0x40) != 0 )
            sub_11E5D0(
              v15,
              (unsigned int)v54,
              *(_QWORD *)(a1 + 64),
              v17,
              a5,
              a6,
              n[0],
              n[1],
              v49,
              v51,
              (_DWORD)v52,
              (_DWORD)v53,
              v54[0]);
          v18 = v15 + 96;
          if ( (v49 & 0x1000) != 0 )
          {
            sub_64000(v57, v18, a3, v17);
            *(_QWORD *)&v57[16] = 0;
            v58 = 0;
            v32 = *(_QWORD *)(v15 + 120);
            if ( v32 )
            {
              n[0] = 16 * v32;
              *(_QWORD *)&v57[16] = qalloc_or_throw(16 * v32, v18, 16 * v32, v31);
              *((_QWORD *)&v58 + 1) = v32;
              memcpy(*(void **)&v57[16], *(const void **)(v15 + 112), 16 * v32);
              *(_QWORD *)&v58 = v32;
            }
          }
          else
          {
            sub_64000(v57, v18, a3, v17);
            *(_QWORD *)&v57[16] = 0;
            v58 = 0;
            v20 = *(_QWORD *)(v15 + 120);
            if ( v20 )
            {
              n[0] = 16 * v20;
              *(_QWORD *)&v57[16] = qalloc_or_throw(16 * v20, v18, 16 * v20, v19);
              *((_QWORD *)&v58 + 1) = v20;
              memcpy(*(void **)&v57[16], *(const void **)(v15 + 112), 16 * v20);
              *(_QWORD *)&v58 = v20;
            }
            sub_64640(v57, v15 + 240);
            sub_317C60(&v57[16], v15 + 256);
          }
          sub_64280(v52, v57);
          v53 = &v55;
          sub_316CB0(&v55, &v57[16]);
          if ( *(_QWORD *)&v57[16] )
          {
            *(_QWORD *)&v58 = 0;
            qfree(*(_QWORD *)&v57[16]);
          }
          qfree(*(_QWORD *)v57);
        }
        if ( *(_QWORD *)(v15 + 32) )
        {
          v21 = 0;
          v22 = 0;
          v23 = 0;
          do
          {
            v24 = (_BYTE *)(*(_QWORD *)(v15 + 24) + 80 * v23);
            if ( *v24 == 4 || *v24 == 10 )
            {
              LODWORD(v51) = v21;
              LOBYTE(n[0]) = v22;
              sub_127FE0(a1, a2, v24, v49);
              v21 = v51;
              v22 = n[0];
            }
            if ( v22 != 1 && v50 )
            {
              LODWORD(n[0]) = v21;
              v22 = sub_151D70(v24, v13);
              v21 = n[0];
            }
            v23 = ++v21;
          }
          while ( (unsigned __int64)v21 < *(_QWORD *)(v15 + 32) );
          v50 &= v22 ^ 1;
        }
        if ( v50 )
        {
          *(__m128 *)v57 = _mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 64) + 128LL));
          sub_317BD0(v53, v57);
        }
        sub_64280(a2, v52);
        sub_316CB0(a2 + 16, v53);
        sub_32FE70(v15, a2, a1, v49);
        if ( v55 )
        {
          v56.m128i_i64[0] = 0;
          qfree(v55);
        }
        qfree(v54[0]);
        return v59 - __readfsqword(0x28u);
      case 9:
        v30 = **(_DWORD ***)(v11 + 8);
        if ( (*v30 & 4) != 0 || (*v30 & 0xC0000) == 0x40000 )
          return v59 - __readfsqword(0x28u);
        result = sub_11BCA0(v30, a2, v11, 4294901760LL);
        break;
      case 0xA:
        if ( *(int *)(*(_QWORD *)(v11 + 8) + 20LL) > 0 && ((v49 & 1) == 0 || (v49 & 0x80u) == 0) )
        {
          sub_123A40(v57);
          *(_DWORD *)&v57[4] = *(_DWORD *)(*(_QWORD *)(v11 + 8) + 20LL);
          sub_127FE0(a1, a2, v57, v49);
          sub_11CDA0(v57);
        }
        return v59 - __readfsqword(0x28u);
      case 0xE:
        sub_127FE0(a1, a2, *(_QWORD *)(v11 + 8), v49);
        v11 = *(_QWORD *)(v11 + 8) + 16LL;
        continue;
      case 0xF:
        *(_QWORD *)&v57[8] = a1;
        *(_QWORD *)v57 = &off_4DD5E8;
        *(_QWORD *)&v57[16] = a2;
        LODWORD(v58) = v49;
        sub_11E540(v11, v57);
        return v59 - __readfsqword(0x28u);
      default:
        return v59 - __readfsqword(0x28u);
    }
    return result;
  }
}
