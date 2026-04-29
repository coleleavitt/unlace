unsigned __int64 __fastcall sub_125AC0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rbp
  __int64 (*v7)(); // rax
  __int64 v8; // r12
  int v9; // r15d
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // r15
  int v16; // r8d
  char v17; // al
  __int64 v18; // rdx
  _BYTE *v19; // r15
  unsigned __int64 result; // rax
  int v21; // edx
  int v22; // esi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  __int64 v25; // rsi
  _QWORD *v26; // rdi
  __int64 v27; // r15
  unsigned __int64 v28; // r13
  size_t v29; // rcx
  __m128i si128; // xmm0
  __int64 v31; // r13
  __int64 v32; // rcx
  __int64 v33; // r13
  __int64 v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // r9d
  __int64 v39; // rax
  __m128i v40; // xmm0
  size_t v41; // r11
  unsigned __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r9d
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

  v49 = a4;
  v59 = __readfsqword(0x28u);
  while ( 2 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    v7 = *(__int64 (**)())(*(_QWORD *)v6 + 64LL);
    if ( v7 != sub_118FD0
      && ((unsigned __int8 (__fastcall *)(_QWORD, __int64 *, __int64, __int64, _QWORD))v7)(
           *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
           a2,
           a1,
           a3,
           v49) )
    {
      return v59 - __readfsqword(0x28u);
    }
    switch ( *(_BYTE *)a3 )
    {
      case 1:
        v21 = *(_DWORD *)(a3 + 4);
        v22 = *(_DWORD *)(a3 + 8);
        *(_OWORD *)v57 = 0u;
        sub_63580((__int64 *)v57, v22, v21);
        *(_QWORD *)&v57[16] = 0;
        v58 = 0;
        sub_63980(a2, (__int64 *)v57);
        sub_313730(a2 + 2, &v57[16]);
        if ( *(_QWORD *)&v57[16] )
        {
          *(_QWORD *)&v58 = 0;
          qfree();
        }
        goto LABEL_34;
      case 4:
        sub_125510((__int64)v57, a1, *(_QWORD *)(a3 + 8), v49);
        sub_63980(a2, (__int64 *)v57);
        sub_313730(a2 + 2, &v57[16]);
        if ( *(_QWORD *)&v57[16] )
        {
          *(_QWORD *)&v58 = 0;
          qfree();
        }
LABEL_34:
        qfree();
        return v59 - __readfsqword(0x28u);
      case 5:
        v23 = *(int *)(a3 + 4);
        v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a3 + 8) + 1496LL) + 24LL) + 16LL)
            & (*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL) + *(_QWORD *)(**(_QWORD **)(a3 + 8) + 1440LL));
        goto LABEL_39;
      case 6:
        if ( (v49 & 0x400) != 0
          && (unsigned __int8)sub_33F660(*(_QWORD *)(a1 + 480), *(_QWORD *)(a3 + 8), *(int *)(a3 + 4)) )
        {
          return v59 - __readfsqword(0x28u);
        }
        v23 = *(int *)(a3 + 4);
        v24 = *(_QWORD *)(a3 + 8);
LABEL_39:
        result = sub_120620(a2, v24, v23);
        break;
      case 8:
        v8 = *(_QWORD *)(a3 + 8);
        v54[0] = 0;
        v54[1] = 0;
        v56 = 0;
        v55 = 0;
        v9 = v49 & 0x4000;
        v50 = v9 != 0;
        if ( (v49 & 1) != 0 )
        {
          v52 = v54;
          sub_63FD0(v54, (__int64 *)(v8 + 136));
          v28 = *(_QWORD *)(v8 + 160);
          v29 = 0;
          if ( v28 )
          {
            n[0] = 16 * v28;
            v47 = (void *)qalloc_or_throw();
            v29 = (size_t)memcpy(v47, *(const void **)(v8 + 152), 16 * v28);
          }
          si128 = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
          if ( v55 )
          {
            v51 = v29;
            *(__m128i *)n = si128;
            v56.m128i_i64[0] = 0;
            qfree();
            v29 = v51;
            si128 = _mm_load_si128((const __m128i *)n);
          }
          v55 = v29;
          v56 = si128;
          if ( (v49 & 0x4000) != 0 )
          {
            v39 = *(_QWORD *)(a1 + 64);
            v40 = _mm_loadu_si128((const __m128i *)(v39 + 664));
            v41 = *(_QWORD *)(v39 + 568);
            memset(v57, 0, sizeof(v57));
            v42 = _mm_add_epi64(v40, _mm_srli_si128(v40, 8)).m128i_u64[0];
            if ( v42 - 1 >= v41 )
            {
              v51 = v41;
              n[0] = v42;
              *(_QWORD *)v57 = qvector_reserve();
              *(__m128i *)(*(_QWORD *)v57 + 16LL * (*(_QWORD *)&v57[8])++) = _mm_unpacklo_epi64(
                                                                               (__m128i)v51,
                                                                               (__m128i)(n[0] - v51));
            }
            v53 = &v55;
            sub_314B70(&v55, v57);
            if ( *(_QWORD *)v57 )
            {
              *(_QWORD *)&v57[8] = 0;
              qfree();
            }
            sub_63D40(v52, (__int64 *)(v8 + 96), v43, v44, v45, v46);
            sub_314710(v53, v8 + 112);
          }
          if ( (v49 & 0x2000) == 0 )
          {
            v31 = *(_QWORD *)(a1 + 64);
            memset(v57, 0, sizeof(v57));
            v32 = *(_QWORD *)(v31 + 216);
            if ( v32 )
            {
              n[0] = *(_QWORD *)(v31 + 216);
              v51 = 16 * v32;
              *(_QWORD *)v57 = qalloc_or_throw();
              *(_QWORD *)&v57[16] = n[0];
              memcpy(*(void **)v57, *(const void **)(v31 + 208), v51);
              *(_QWORD *)&v57[8] = n[0];
            }
            sub_314680(v57, v31 + 600);
            sub_314710(&v55, v57);
            if ( *(_QWORD *)v57 )
            {
              *(_QWORD *)&v57[8] = 0;
              qfree();
            }
            if ( !v9 )
              sub_11C190(v8, v52, *(_QWORD **)(a1 + 64));
          }
          v33 = *(_QWORD *)(a1 + 64);
          memset(v57, 0, sizeof(v57));
          v34 = *(_QWORD *)(v33 + 192);
          if ( v34 )
          {
            n[0] = 16 * v34;
            *(_QWORD *)v57 = qalloc_or_throw();
            *(_QWORD *)&v57[16] = v34;
            memcpy(*(void **)v57, *(const void **)(v33 + 184), n[0]);
            *(_QWORD *)&v57[8] = v34;
            v33 = *(_QWORD *)(a1 + 64);
          }
          sub_314710(v57, v33 + 208);
          v53 = &v55;
          sub_314710(&v55, v57);
          if ( (v49 & 0x80u) != 0 && (!(unsigned __int8)sub_63F80((_QWORD *)(v8 + 176)) || *(_QWORD *)(v8 + 200)) )
          {
            sub_63D40(v52, (__int64 *)(v8 + 176), v35, v36, v37, v38);
            sub_314710(v53, v8 + 192);
          }
          if ( *(_QWORD *)v57 )
          {
            *(_QWORD *)&v57[8] = 0;
            qfree();
          }
        }
        else
        {
          v52 = v54;
          if ( (v49 & 0x40) != 0 )
            sub_11C190(v8, v54, *(_QWORD **)(a1 + 64));
          v10 = v8 + 96;
          if ( (v49 & 0x1000) != 0 )
          {
            sub_63700((__int64 *)v57, v10);
            *(_QWORD *)&v57[16] = 0;
            v58 = 0;
            v27 = *(_QWORD *)(v8 + 120);
            if ( v27 )
            {
              n[0] = 16 * v27;
              *(_QWORD *)&v57[16] = qalloc_or_throw();
              *((_QWORD *)&v58 + 1) = v27;
              memcpy(*(void **)&v57[16], *(const void **)(v8 + 112), 16 * v27);
              *(_QWORD *)&v58 = v27;
            }
          }
          else
          {
            sub_63700((__int64 *)v57, v10);
            *(_QWORD *)&v57[16] = 0;
            v58 = 0;
            v15 = *(_QWORD *)(v8 + 120);
            if ( v15 )
            {
              n[0] = 16 * v15;
              *(_QWORD *)&v57[16] = qalloc_or_throw();
              *((_QWORD *)&v58 + 1) = v15;
              memcpy(*(void **)&v57[16], *(const void **)(v8 + 112), 16 * v15);
              *(_QWORD *)&v58 = v15;
            }
            sub_63D40((__int64 *)v57, (__int64 *)(v8 + 240), v11, v12, v13, v14);
            sub_314710(&v57[16], v8 + 256);
          }
          sub_63980(v52, (__int64 *)v57);
          v53 = &v55;
          sub_313730(&v55, &v57[16]);
          if ( *(_QWORD *)&v57[16] )
          {
            *(_QWORD *)&v58 = 0;
            qfree();
          }
          qfree();
        }
        if ( *(_QWORD *)(v8 + 32) )
        {
          v16 = 0;
          v17 = 0;
          v18 = 0;
          do
          {
            v19 = (_BYTE *)(*(_QWORD *)(v8 + 24) + 80 * v18);
            if ( *v19 == 4 || *v19 == 10 )
            {
              LODWORD(v51) = v16;
              LOBYTE(n[0]) = v17;
              sub_125AC0(a1, a2, v19, v49);
              v16 = v51;
              v17 = n[0];
            }
            if ( v17 != 1 && v50 )
            {
              LODWORD(n[0]) = v16;
              v17 = sub_14F9F0(v19, v6);
              v16 = n[0];
            }
            v18 = ++v16;
          }
          while ( (unsigned __int64)v16 < *(_QWORD *)(v8 + 32) );
          v50 &= v17 ^ 1;
        }
        if ( v50 )
        {
          *(__m128 *)v57 = _mm_loadh_ps((const double *)(*(_QWORD *)(a1 + 64) + 128LL));
          sub_314680(v53, v57);
        }
        sub_63980(a2, v52);
        sub_313730(a2 + 2, v53);
        sub_32CA10(v8, a2, a1, v49);
        if ( v55 )
        {
          v56.m128i_i64[0] = 0;
          qfree();
        }
        qfree();
        return v59 - __readfsqword(0x28u);
      case 9:
        v26 = **(_QWORD ***)(a3 + 8);
        if ( (*(_DWORD *)v26 & 4) != 0 || (*(_DWORD *)v26 & 0xC0000) == 0x40000 )
          return v59 - __readfsqword(0x28u);
        result = sub_119860(v26, (int)a2, a3, 0xFFFF0000);
        break;
      case 0xA:
        v25 = *(_QWORD *)(a3 + 8);
        if ( *(int *)(v25 + 20) > 0 && ((v49 & 1) == 0 || (v49 & 0x80u) == 0) )
        {
          sub_121540((__int64)v57, (unsigned __int8 *)v25);
          *(_DWORD *)&v57[4] = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 20LL);
          sub_125AC0(a1, a2, v57, v49);
          sub_11A960((__int64)v57);
        }
        return v59 - __readfsqword(0x28u);
      case 0xE:
        sub_125AC0(a1, a2, *(_QWORD *)(a3 + 8), v49);
        a3 = *(_QWORD *)(a3 + 8) + 16LL;
        continue;
      case 0xF:
        *(_QWORD *)&v57[8] = a1;
        *(_QWORD *)v57 = off_4DCD20;
        *(_QWORD *)&v57[16] = a2;
        LODWORD(v58) = v49;
        sub_11C100((_BYTE *)a3);
        return v59 - __readfsqword(0x28u);
      default:
        return v59 - __readfsqword(0x28u);
    }
    return result;
  }
}
