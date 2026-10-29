unsigned __int64 __fastcall sub_3A84E0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  char v11; // al
  int *v13; // rdx
  unsigned __int8 (__fastcall **v14)(__int64, __int64, int *); // rax
  int v15; // r12d
  __int64 v16; // rdx
  const char *v18; // rsi
  __int16 v19; // ax
  __int16 v20; // ax
  __m128 v21; // xmm0
  __int64 v22; // rdi
  __int64 v23; // r14
  unsigned __int64 v24; // r12
  const char *v25; // rsi
  int v26; // eax
  const char *v27; // rdx
  const char *v28; // rdx
  __int64 v29; // r15
  _QWORD *v30; // r12
  __int64 v31; // rdi
  __int64 v32; // rdi
  unsigned __int64 v33; // r12
  __int16 v34; // r12
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __m128 v38; // xmm4
  __m128 v39; // xmm5
  __int64 v40; // rdx
  unsigned int v41; // eax
  const char *v42; // rax
  unsigned __int64 v43; // r12
  unsigned int v44; // eax
  const char *v45; // rax
  const void *v46; // r8
  void *v47; // rdi
  __int64 v48; // rsi
  unsigned __int16 v49; // ax
  unsigned __int16 v50; // dx
  bool v51; // cf
  unsigned __int8 (__fastcall **v52)(__int64, __int64, int *); // rax
  __int64 v53; // rsi
  __m128i si128; // xmm0
  __int64 v55; // rax
  const void *v56; // r15
  void *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rax
  const void *v61; // r8
  void *v62; // rdi
  __int64 v63; // rax
  const void *v64; // r8
  __int64 v65; // rax
  char v66; // [rsp+0h] [rbp-B8h]
  char v67; // [rsp+8h] [rbp-B0h]
  const void *v68; // [rsp+8h] [rbp-B0h]
  const void *v69; // [rsp+8h] [rbp-B0h]
  const void *v70; // [rsp+8h] [rbp-B0h]
  __int16 v71; // [rsp+12h] [rbp-A6h] BYREF
  int v72; // [rsp+14h] [rbp-A4h] BYREF
  const char *v73; // [rsp+18h] [rbp-A0h] BYREF
  const char *v74; // [rsp+20h] [rbp-98h] BYREF
  __int128 v75; // [rsp+28h] [rbp-90h]
  __int64 v76; // [rsp+40h] [rbp-78h] BYREF
  __int128 v77; // [rsp+48h] [rbp-70h]
  __int128 v78; // [rsp+58h] [rbp-60h]
  __int64 v79; // [rsp+68h] [rbp-50h]
  int v80; // [rsp+70h] [rbp-48h]
  unsigned __int64 v81; // [rsp+78h] [rbp-40h]

  v11 = *(_BYTE *)(a1 + 296);
  v81 = __readfsqword(0x28u);
  if ( v11 == 29 || (v13 = (int *)(a1 + 268), v11 != 45) && (v13 = nullptr, v11 == 13) )
    v13 = (int *)(a1 + 264);
  v14 = *(unsigned __int8 (__fastcall ***)(__int64, __int64, int *))a2;
  v15 = *v13;
  v72 = 0;
  (*v14)(a2, 100, &v72);
  *(_DWORD *)(a1 + 260) |= 0x800u;
  if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int64))a2)(a2, 10, a1 + 128) )
  {
    v18 = (const char *)(a1 + 136);
    v73 = nullptr;
    copy_tinfo_t(&v73, a1 + 136, v16);
    v74 = nullptr;
    v71 = 0;
    v75 = 0;
    switch ( v15 )
    {
      case 1:
        (**(void (__fastcall ***)(__int64, __int64, __int64))a2)(a2, 5, a1 + 64);
        (**(void (__fastcall ***)(__int64, __int64, __int64))a2)(a2, 6, a1 + 120);
        *(_WORD *)(a1 + 90) = 0;
        if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 7, &v71) && v71 )
          *(_WORD *)(a1 + 90) |= 1u;
        if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 8, &v71) && v71 )
          *(_WORD *)(a1 + 90) |= 2u;
        if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 11, &v71) && v71 )
        {
          *(_WORD *)(a1 + 88) = 0;
        }
        else if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 12, &v71) && v71 )
        {
          *(_WORD *)(a1 + 88) = 1;
        }
        else if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 13, &v71) && v71 )
        {
          *(_WORD *)(a1 + 88) = 2;
        }
        else if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 14, &v71) && v71 )
        {
          *(_WORD *)(a1 + 88) = 3;
        }
        else if ( (**(unsigned __int8 (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 15, &v71) && v71 )
        {
          *(_WORD *)(a1 + 88) = 4;
        }
        v24 = *(_QWORD *)(a1 + 72);
        if ( v24 > 1 )
        {
          v46 = *(const void **)(a1 + 64);
          v47 = *(void **)(a1 + 144);
          if ( *(_QWORD *)(a1 + 160) < v24 )
          {
            v68 = *(const void **)(a1 + 64);
            v58 = qvector_reserve(a1 + 144, *(_QWORD *)(a1 + 144), *(_QWORD *)(a1 + 72), 1);
            *(_QWORD *)(a1 + 144) = v58;
            v46 = v68;
            v47 = (void *)v58;
          }
          *(_QWORD *)(a1 + 152) = v24;
          memmove(v47, v46, v24 - 1);
          *(_BYTE *)(*(_QWORD *)(a1 + 144) + v24 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a1 + 152) = 0;
        }
        v18 = (const char *)(a1 + 64);
        if ( !(unsigned __int8)sub_3A8180((__int64)&v73, a1 + 64, (__int64 *)&v74, &v73) )
          goto LABEL_63;
        v25 = (const char *)&word_12;
        v26 = set_tinfo_property4(&v73, 18, ((int)*(unsigned __int16 *)(a1 + 90) >> 1) & 1, 0, 0, 0);
LABEL_36:
        if ( !v26 )
        {
          v25 = (const char *)&v73;
          sub_3A7380((_QWORD *)a1, (__int64)&v73, a2);
        }
LABEL_38:
        if ( v74 )
        {
          *(_QWORD *)&v75 = 0;
          qfree(v74, v25);
        }
        break;
      case 2:
        if ( !*(_QWORD *)(a1 + 224) )
        {
          if ( !(unsigned int)verify_tinfo(*(_QWORD *)(a1 + 136)) )
          {
            v43 = *(_QWORD *)(a1 + 152);
            if ( v72 == 1 )
            {
              if ( v43 > 1 )
              {
                v64 = *(const void **)(a1 + 144);
                if ( *(_QWORD *)(a1 + 80) < v43 )
                {
                  v70 = *(const void **)(a1 + 144);
                  *(_QWORD *)(a1 + 64) = qvector_reserve(a1 + 64, *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 152), 1);
                  v64 = v70;
                }
                *(_QWORD *)(a1 + 72) = v43;
                memmove(*(void **)(a1 + 64), v64, v43 - 1);
                *(_BYTE *)(*(_QWORD *)(a1 + 64) + v43 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(a1 + 72) = 0;
              }
              sub_3A5FA0(a1 + 64, (__int64 *)&v73);
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 5, a1 + 64);
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 6, a1 + 120);
              v48 = 0;
              v49 = *(_WORD *)(a1 + 88) & 7;
              v50 = v49 + 11;
              v51 = v49 < 5u;
              v52 = *(unsigned __int8 (__fastcall ***)(__int64, __int64, int *))a2;
              if ( v51 )
                v48 = v50;
              v71 = 1;
              v52[1](a2, v48, (int *)&v71);
              v71 = *(_WORD *)(a1 + 90) & 1;
              (*(void (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)a2 + 8LL))(a2, 7, &v71);
              v25 = &byte_8;
              v71 = ((int)*(unsigned __int16 *)(a1 + 90) >> 1) & 1;
              (*(void (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)a2 + 8LL))(a2, 8, &v71);
            }
            else
            {
              if ( v43 > 1 )
              {
                v61 = *(const void **)(a1 + 144);
                v62 = *(void **)(a1 + 8);
                if ( *(_QWORD *)(a1 + 24) < v43 )
                {
                  v69 = *(const void **)(a1 + 144);
                  v65 = qvector_reserve(a1 + 8, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 152), 1);
                  *(_QWORD *)(a1 + 8) = v65;
                  v61 = v69;
                  v62 = (void *)v65;
                }
                *(_QWORD *)(a1 + 16) = v43;
                memmove(v62, v61, v43 - 1);
                *(_BYTE *)(*(_QWORD *)(a1 + 8) + v43 - 1) = 0;
              }
              else
              {
                *(_QWORD *)(a1 + 16) = 0;
              }
              sub_3A7860(a1 + 8, &v73);
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 1, a1 + 8);
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 17, a1 + 32);
              if ( *(_WORD *)(a1 + 32) )
                (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 2, a1 + 40);
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 8LL))(a2, 3, a1 + 48);
              v25 = (const char *)&word_10;
              v71 = (*(_BYTE *)(a1 + 56) & 2) != 0;
              (*(void (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)a2 + 8LL))(a2, 16, &v71);
            }
            goto LABEL_38;
          }
          goto LABEL_63;
        }
        break;
      case 0:
        (**(void (__fastcall ***)(__int64, __int64, __int64))a2)(a2, 1, a1 + 8);
        (**(void (__fastcall ***)(__int64, __int64, __int64))a2)(a2, 17, a1 + 32);
        (**(void (__fastcall ***)(__int64, __int64, __int64))a2)(a2, 2, a1 + 40);
        (**(void (__fastcall ***)(__int64, __int64, __int64))a2)(a2, 3, a1 + 48);
        (**(void (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 16, &v71);
        v19 = *(_WORD *)(a1 + 56) & 0xFFFD;
        if ( v71 )
          v19 = *(_WORD *)(a1 + 56) | 2;
        *(_WORD *)(a1 + 56) = v19;
        (**(void (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 19, &v71);
        v20 = *(_WORD *)(a1 + 56) & 0xFFFB;
        if ( v71 )
          v20 = *(_WORD *)(a1 + 56) | 4;
        *(_WORD *)(a1 + 56) = v20;
        v21 = 0;
        v76 = 0;
        v79 = 0;
        v80 = 1;
        v77 = 0;
        v78 = 0;
        if ( (unsigned __int8)get_tinfo_details(v73, 13, &v76) )
        {
          sub_3A5BB0(a1 + 8, (__int64)&v76);
          v18 = byte_9 + 4;
          if ( HIBYTE(v80) )
            v18 = (_BYTE *)(&off_18 + 5);
          v67 = create_tinfo(&v73, v18, 13, &v76);
          if ( v67 )
          {
            v22 = v76;
            if ( !v76 )
              goto LABEL_52;
            v23 = v77;
            if ( !(_QWORD)v77 )
            {
              *(double *)v21.m128_u64 = qfree(v76, v18);
              goto LABEL_52;
            }
LABEL_45:
            v29 = 0;
            do
            {
              v30 = (_QWORD *)(v22 + 144 * v29);
              clear_tinfo_t(v30 + 8);
              v31 = v30[5];
              if ( v31 )
              {
                v30[6] = 0;
                qfree(v31, v18);
              }
              v32 = v30[2];
              if ( v32 )
              {
                v30[3] = 0;
                qfree(v32, v18);
              }
              ++v29;
              v22 = v76;
            }
            while ( v23 != v29 );
            *(_QWORD *)&v77 = 0;
            *(double *)v21.m128_u64 = qfree(v76, v18);
            if ( !v67 )
              goto LABEL_63;
LABEL_52:
            v33 = *(_QWORD *)(a1 + 16);
            if ( v33 > 1 )
            {
              v56 = *(const void **)(a1 + 8);
              v57 = *(void **)(a1 + 144);
              if ( *(_QWORD *)(a1 + 160) < v33 )
              {
                v63 = qvector_reserve(a1 + 144, *(_QWORD *)(a1 + 144), *(_QWORD *)(a1 + 16), 1);
                *(_QWORD *)(a1 + 144) = v63;
                v57 = (void *)v63;
              }
              *(_QWORD *)(a1 + 152) = v33;
              memmove(v57, v56, v33 - 1);
              *(_BYTE *)(*(_QWORD *)(a1 + 144) + v33 - 1) = 0;
            }
            else
            {
              *(_QWORD *)(a1 + 152) = 0;
            }
            v34 = *(_WORD *)(a1 + 32) & 1;
            if ( (_BYTE)v34 != ((get_tinfo_property(v73, 306) & 0x400) != 0) )
              set_tinfo_property4(&v73, 28, (unsigned __int8)v34, 0, 0, 0);
            if ( v34 )
            {
              v40 = *(_QWORD *)(a1 + 40);
              if ( v40 < 0 )
              {
                v53 = (__int64)v74;
                if ( *((_QWORD *)&v75 + 1) <= 0x21u )
                {
                  v74 = (const char *)qvector_reserve(&v74, v74, 34, 1);
                  v53 = (__int64)v74;
                }
                si128 = _mm_load_si128((const __m128i *)&xmmword_5DD560);
                *(_BYTE *)(v53 + 32) = 101;
                *(_QWORD *)&v75 = 34;
                *(__m128i *)v53 = si128;
                v21 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DD570);
                v55 = (__int64)v74;
                *(__m128 *)(v53 + 16) = v21;
                *(_BYTE *)(v55 + 33) = 0;
                goto LABEL_60;
              }
              v41 = set_tinfo_property4(&v73, 29, v40, 0, 0, 0);
              if ( v41 )
              {
                v42 = (const char *)tinfo_errstr(v41);
                sub_169A50((__int64 *)&v74, (__int64)"Cannot set struct size: %s", v42);
LABEL_60:
                v18 = &s1;
                if ( (_QWORD)v75 )
                  v18 = v74;
                sub_169630((int)"%s", (__int64)v18, v40, v35, v36, v37, v21, a4, a5, a6, v38, v39, a9, a10, v66);
                goto LABEL_63;
              }
            }
            v40 = *(_QWORD *)(a1 + 48);
            if ( (v40 & (v40 - 1)) != 0 )
            {
              v59 = (__int64)v74;
              if ( *((_QWORD *)&v75 + 1) <= 0x1Eu )
              {
                v74 = (const char *)qvector_reserve(&v74, v74, 31, 1);
                v59 = (__int64)v74;
              }
              *(_QWORD *)&v75 = 31;
              *(__m128i *)v59 = _mm_load_si128((const __m128i *)&xmmword_5DD580);
              v21 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DD590);
              v60 = (__int64)v74;
              *(__m128 *)(v59 + 14) = v21;
              *(_BYTE *)(v60 + 30) = 0;
              goto LABEL_60;
            }
            if ( v40 )
            {
              _BitScanReverse64((unsigned __int64 *)&v40, v40);
              v40 = (int)v40 + 1;
            }
            v25 = (_BYTE *)(&off_18 + 2);
            v44 = set_tinfo_property4(&v73, 26, v40, 0, 0, 0);
            if ( v44 )
            {
              v45 = (const char *)tinfo_errstr(v44);
              sub_169A50((__int64 *)&v74, (__int64)"Could not set alignment: %s", v45);
              goto LABEL_60;
            }
            v26 = verify_tinfo(v73);
            goto LABEL_36;
          }
        }
        v27 = "structure";
        if ( (*(_BYTE *)(a1 + 56) & 8) != 0 )
          v27 = "union";
        v18 = "Invalid %s data";
        sub_169A50((__int64 *)&v74, (__int64)"Invalid %s data", v27);
        v22 = v76;
        if ( !v76 )
          goto LABEL_63;
        v23 = v77;
        v67 = 0;
        if ( (_QWORD)v77 )
          goto LABEL_45;
        qfree(v76, "Invalid %s data", v28);
LABEL_63:
        if ( v74 )
        {
          *(_QWORD *)&v75 = 0;
          qfree(v74, v18);
        }
        break;
    }
    clear_tinfo_t(&v73);
  }
  return v81 - __readfsqword(0x28u);
}
