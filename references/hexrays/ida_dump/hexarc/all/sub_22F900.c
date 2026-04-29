unsigned __int64 __fastcall sub_22F900(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __m128i v5; // xmm0
  _QWORD *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // rsi
  const char *v11; // r8
  _QWORD *v12; // r12
  _QWORD *v13; // r15
  _QWORD *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r12
  __int64 v17; // r15
  char i; // al
  const char *v19; // r9
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  _QWORD *v29; // r14
  __int64 func; // rax
  unsigned __int64 v31; // r12
  int v32; // eax
  bool v33; // zf
  int v34; // ebp
  __int64 tinfo_property; // rax
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdi
  unsigned __int64 v39; // r15
  size_t v40; // r8
  void *v41; // rdi
  __int64 v42; // r14
  __int64 tinfo_property4; // rax
  signed __int64 v44; // rdi
  __int64 v45; // r13
  __int64 v46; // r12
  _QWORD *v47; // rbp
  __int64 v48; // rdi
  __int64 v49; // rdi
  const void *v50; // r9
  void *v51; // rdi
  int v52; // edx
  __int64 v54; // rax
  _QWORD *v55; // [rsp+8h] [rbp-118h]
  size_t nb; // [rsp+10h] [rbp-110h]
  size_t n; // [rsp+10h] [rbp-110h]
  size_t na; // [rsp+10h] [rbp-110h]
  __int64 v59; // [rsp+20h] [rbp-100h]
  _QWORD *v60; // [rsp+20h] [rbp-100h]
  unsigned int v61; // [rsp+28h] [rbp-F8h]
  __int64 v62; // [rsp+28h] [rbp-F8h]
  int v63; // [rsp+30h] [rbp-F0h]
  char v64; // [rsp+30h] [rbp-F0h]
  char v65; // [rsp+38h] [rbp-E8h]
  const void *v66; // [rsp+38h] [rbp-E8h]
  const char *src; // [rsp+40h] [rbp-E0h]
  __int64 v68; // [rsp+48h] [rbp-D8h] BYREF
  __int64 v69; // [rsp+50h] [rbp-D0h] BYREF
  signed __int64 v70; // [rsp+58h] [rbp-C8h] BYREF
  __int128 v71; // [rsp+60h] [rbp-C0h]
  __int128 v72; // [rsp+70h] [rbp-B0h]
  __int64 v73; // [rsp+80h] [rbp-A0h]
  int v74; // [rsp+88h] [rbp-98h]
  void *dest; // [rsp+98h] [rbp-88h] BYREF
  __int128 v76; // [rsp+A0h] [rbp-80h]
  __int64 v77; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-68h]
  __int64 v79; // [rsp+C0h] [rbp-60h]
  unsigned __int64 v80; // [rsp+C8h] [rbp-58h]
  int v81; // [rsp+D0h] [rbp-50h]
  unsigned __int64 v82; // [rsp+E0h] [rbp-40h]

  v82 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  v5 = _mm_loadl_epi64((const __m128i *)(a2 + 1496));
  *(_WORD *)(a1 + 84) = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(__m128i *)(a1 + 48) = _mm_unpacklo_epi64(v5, (__m128i)a3);
  *(_QWORD *)a1 = off_4AC038;
  *(_QWORD *)(a1 + 64) = a4;
  *(_QWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 80) = -1;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 128) = -1;
  *(_DWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = -1;
  *(_QWORD *)(a1 + 184) = -1;
  *(_QWORD *)(a1 + 192) = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = -1;
  *(_QWORD *)(a1 + 248) = -1;
  *(_QWORD *)(a1 + 256) = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_DWORD *)(a1 + 300) = 1;
  *(_BYTE *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 296) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 280) = 0;
  dest = nullptr;
  v77 = 0;
  v78 = -1;
  v79 = -1;
  v80 = 0xFFFFFFFFLL;
  v81 = 0;
  v76 = 0;
  copy_tinfo_t(a1 + 168, &v77);
  *(_QWORD *)(a1 + 176) = v78;
  *(_QWORD *)(a1 + 184) = v79;
  *(_QWORD *)(a1 + 192) = v80;
  *(_DWORD *)(a1 + 200) = v81;
  clear_tinfo_t(&v77);
  if ( dest )
  {
    *(_QWORD *)&v76 = 0;
    qfree(dest);
  }
  if ( !*(_DWORD *)(a1 + 296) )
    *(_DWORD *)(a1 + 300) = 1;
  v6 = *(_QWORD **)(a1 + 8);
  v7 = v6[157];
  v8 = *(_QWORD *)(a1 + 8);
  v9 = v7 + 96LL * v6[158];
  if ( v7 != v9 )
  {
    do
    {
      v10 = *(_QWORD *)(v7 + 80);
      v11 = s1;
      if ( v10 < 0 )
        LODWORD(v10) = 0;
      if ( *(_QWORD *)(v7 + 32) )
        v11 = *(const char **)(v7 + 24);
      sub_22F330(a1, v7, (((_DWORD)v10 != 0) << 29) | (((*(_BYTE *)(v7 + 88) & 2) != 0) << 6) | 0x28, v10, v11, v7 + 48);
      v7 += 96;
    }
    while ( v9 != v7 );
    v6 = *(_QWORD **)(a1 + 8);
    v8 = (__int64)v6;
  }
  v12 = (_QWORD *)v6[160];
  if ( v12 )
  {
    if ( v6[161] )
    {
      v13 = (_QWORD *)v12[1];
      if ( v12 != v13 )
      {
        while ( 1 )
        {
LABEL_15:
          if ( *((_DWORD *)v13 + 6) == 1 )
          {
            na = v13[4];
            if ( (unsigned __int8)sub_1E8630((__int64)v6, na, 1) )
            {
              v24 = v13[5];
              v78 = na;
              v79 = v24;
              dest = nullptr;
              v77 = 0;
              v80 = 0xFFFFFFFFLL;
              v81 = 40;
              v76 = 0;
              if ( get_tinfo_size(0, 0, 0) <= 0
                || (get_tinfo_property(v77, 2) & 0x3F) == 1
                || (get_tinfo_property(v77, 2) & 0xF) == 0xC )
              {
                clear_tinfo_t(&v77);
              }
              sub_22ED40((__m128i *)(a1 + 88), (__int64)&dest, nullptr);
              clear_tinfo_t(&v77);
              if ( dest )
              {
                *(_QWORD *)&v76 = 0;
                qfree(dest);
              }
            }
            v6 = *(_QWORD **)(a1 + 8);
          }
          if ( *((_DWORD *)v13 + 12) == 1 )
          {
            n = v13[7];
            if ( (unsigned __int8)sub_1E8630((__int64)v6, n, 1) )
            {
              v23 = v13[8];
              v78 = n;
              v79 = v23;
              dest = nullptr;
              v77 = 0;
              v80 = 0xFFFFFFFFLL;
              v81 = 40;
              v76 = 0;
              if ( get_tinfo_size(0, 0, 0) <= 0
                || (get_tinfo_property(v77, 2) & 0x3F) == 1
                || (get_tinfo_property(v77, 2) & 0xF) == 0xC )
              {
                clear_tinfo_t(&v77);
              }
              sub_22ED40((__m128i *)(a1 + 88), (__int64)&dest, nullptr);
              clear_tinfo_t(&v77);
              if ( dest )
              {
                *(_QWORD *)&v76 = 0;
                qfree(dest);
              }
            }
            v6 = *(_QWORD **)(a1 + 8);
          }
          if ( (*v13 & 2) != 0 )
            goto LABEL_20;
          v14 = (_QWORD *)v13[2];
          if ( (*(_BYTE *)v14 & 2) != 0 )
          {
            v25 = (_QWORD *)(*v13 & 0xFFFFFFFFFFFFFFFCLL);
            v26 = *v25;
            if ( (*v25 & 2) == 0 )
            {
              while ( (_QWORD *)v25[2] == v13 )
              {
                v13 = v25;
                v27 = v26 & 0xFFFFFFFFFFFFFFFCLL;
                v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v26 & 2) != 0 )
                {
                  v13 = (_QWORD *)v27;
                  if ( (_QWORD *)v27 != v12 )
                    goto LABEL_15;
                  goto LABEL_21;
                }
                v25 = (_QWORD *)v27;
              }
            }
            v13 = v25;
            if ( v25 == v12 )
            {
LABEL_21:
              v8 = (__int64)v6;
              break;
            }
          }
          else
          {
            do
            {
              v13 = v14;
              v14 = (_QWORD *)v14[1];
            }
            while ( (*(_BYTE *)v14 & 2) == 0 );
LABEL_20:
            if ( v13 == v12 )
              goto LABEL_21;
          }
        }
      }
    }
  }
  v15 = v6[54];
  v16 = v15 + 104LL * v6[55];
  if ( v16 != v15 )
  {
    v17 = v6[54];
    for ( i = sub_1BCC60(v17, &v69, &v70, *(_DWORD *)(v17 + 88)); ; i = sub_1BCC60(
                                                                          v17,
                                                                          &v69,
                                                                          &v70,
                                                                          *(_DWORD *)(v17 + 88)) )
    {
      if ( i )
      {
        v21 = v69;
        v22 = *(_QWORD *)(v17 + 16);
        v61 = *(_DWORD *)(v17 + 92);
        v63 = v70;
        if ( (*(_BYTE *)(v17 + 24) & 2) != 0 )
        {
          v19 = s1;
          if ( *(_QWORD *)(v17 + 40) )
            v19 = *(const char **)(v17 + 32);
          dest = nullptr;
          v59 = v17 + 80;
          v76 = 0;
          if ( v19 )
          {
            src = v19;
            nb = strlen(v19);
            dest = (void *)qvector_reserve(&dest, 0, nb + 1, 1);
            *(_QWORD *)&v76 = nb + 1;
            memmove(dest, src, nb);
            *((_BYTE *)dest + nb) = 0;
          }
        }
        else
        {
          dest = nullptr;
          v59 = v17 + 80;
          v76 = 0;
        }
        v77 = 0;
        copy_tinfo_t(&v77, v59);
        v20 = *(_QWORD *)(a1 + 8);
        v78 = v21;
        v79 = v22;
        v81 = 4;
        v80 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v61), _mm_cvtsi32_si128(v63 - (int)v21)).m128i_u64[0];
        if ( *(_BYTE *)(v20 + 320) && (*(_BYTE *)(v17 + 25) & 1) != 0 )
          v81 = 12;
        if ( *(_DWORD *)v17 == 2 )
          v81 |= 0x80u;
        if ( (*(_BYTE *)(v17 + 26) & 1) != 0 )
          v81 |= 0x40u;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 936) + 56LL))(*(_QWORD *)(v20 + 936))
          && !(unsigned int)lexcompare_tinfo(*(_QWORD *)(v17 + 80), *(_QWORD *)(*(_QWORD *)(a1 + 48) + 248LL), 0) )
        {
          v81 |= 0x30000000u;
        }
        sub_22ED40((__m128i *)(a1 + 88), (__int64)&dest, nullptr);
        clear_tinfo_t(&v77);
        if ( dest )
        {
          *(_QWORD *)&v76 = 0;
          qfree(dest);
        }
      }
      v17 += 104;
      if ( v16 == v17 )
        break;
    }
    v8 = *(_QWORD *)(a1 + 8);
  }
  if ( (unsigned __int8)sub_225EB0(v8, (_QWORD *)(a1 + 240), (_DWORD *)(a1 + 260), a1 + 232) )
  {
    *(_DWORD *)(a1 + 264) = 805310464;
    sub_22ED40((__m128i *)(a1 + 88), a1 + 208, nullptr);
  }
  v28 = *(_QWORD *)(a1 + 8);
  v29 = *(_QWORD **)(v28 + 1472);
  v60 = &v29[5 * *(_QWORD *)(v28 + 1480)];
  if ( v60 != v29 )
  {
    v55 = *(_QWORD **)(v28 + 1472);
    while ( 1 )
    {
      v68 = 0;
      func = get_func(*v55);
      get_func_frame(&v68, func);
      if ( !(_BYTE)v68 )
        goto LABEL_72;
      v70 = 0;
      v73 = 0;
      v74 = 1;
      v71 = 0;
      v72 = 0;
      get_tinfo_details(v68, 13, &v70);
      if ( !(_QWORD)v71 )
      {
        v44 = v70;
        if ( v70 )
          goto LABEL_119;
        goto LABEL_72;
      }
      v62 = -1;
      v31 = 0;
      do
      {
        v42 = v70 + 144 * v31;
        tinfo_property4 = get_tinfo_property4(v68, 297, v31, 0, 0, 0);
        if ( *(_QWORD *)(v42 + 48) > 1u || (get_aflags(tinfo_property4) & 0x2000000) != 0 )
          v32 = 10;
        else
          v32 = 2;
        v33 = (*(_BYTE *)(v42 + 133) & 0x30) == 0;
        v69 = 0;
        v34 = v32 | (16 * !v33);
        tinfo_property = get_tinfo_property(*(_QWORD *)(v42 + 64), 289);
        v69 = tinfo_property;
        if ( *(_BYTE *)(v42 + 64) <= 0x3Fu
          && (unsigned __int8)tinfo_property <= 0x3Fu
          && (!(_BYTE)tinfo_property
           || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0
           || (v65 = tinfo_property,
               dest = nullptr,
               dest = (void *)get_tinfo_property(tinfo_property, 9),
               v64 = get_tinfo_property(dest, 2),
               clear_tinfo_t(&dest),
               (v64 & 0x3F) == 0x30)
           || (v65 & 0xEF) == 9
           || (v65 & 0xEF) == 0x29) )
        {
          clear_tinfo_t(&v69);
        }
        else
        {
          v34 |= 0x400u;
          clear_tinfo_t(&v69);
        }
        v36 = v55[4] + (*(_QWORD *)v42 >> 3);
        v37 = *(_QWORD *)(v42 + 8) >> 3;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 24LL) != 8 )
          v36 = (int)v36;
        v38 = *(_QWORD *)(a1 + 8);
        dest = nullptr;
        v77 = 0;
        v78 = v36;
        v79 = -1;
        LODWORD(v80) = -1;
        HIDWORD(v80) = v37;
        v81 = v34;
        v76 = 0;
        if ( *(_QWORD *)(v38 + 136) == v36 && (_DWORD)v37 == *(_DWORD *)(v38 + 116) )
        {
          v81 = v34 | 0x30000210;
        }
        else if ( (v34 & 0x1018) == 0 && sub_21FC50(v38, v36, v37) )
        {
          v62 = v31;
          clear_tinfo_t(&v77);
          v41 = dest;
          if ( dest )
            goto LABEL_98;
          goto LABEL_99;
        }
        copy_tinfo_t(&v77, v42 + 64);
        if ( &dest != (void **)(v42 + 16) )
        {
          v39 = *(_QWORD *)(v42 + 24);
          if ( v39 && (v40 = v39 - 1, v39 != 1) )
          {
            v50 = *(const void **)(v42 + 16);
            v51 = dest;
            if ( *((_QWORD *)&v76 + 1) < v39 )
            {
              v66 = *(const void **)(v42 + 16);
              dest = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(v42 + 24), 1);
              v50 = v66;
              v51 = dest;
              v40 = v39 - 1;
            }
            *(_QWORD *)&v76 = v39;
            memmove(v51, v50, v40);
            *((char *)dest + v39 - 1) = 0;
          }
          else
          {
            *(_QWORD *)&v76 = 0;
          }
        }
        if ( get_tinfo_size(0, v77, 0) <= 0
          || (get_tinfo_property(v77, 2) & 0x3F) == 1
          || (get_tinfo_property(v77, 2) & 0xF) == 0xC )
        {
          clear_tinfo_t(&v77);
        }
        sub_22ED40((__m128i *)(a1 + 88), (__int64)&dest, nullptr);
        clear_tinfo_t(&v77);
        v41 = dest;
        if ( dest )
        {
LABEL_98:
          *(_QWORD *)&v76 = 0;
          qfree(v41);
        }
LABEL_99:
        ++v31;
      }
      while ( v31 < (unsigned __int64)v71 );
      if ( v62 != -1 )
        set_tinfo_property4(&v68, 10, v62, v62 + 1, 0, 0);
      v44 = v70;
      if ( v70 )
      {
        v45 = v71;
        if ( (_QWORD)v71 )
        {
          v46 = 0;
          do
          {
            v47 = (_QWORD *)(v44 + 144 * v46);
            clear_tinfo_t(v47 + 8);
            v48 = v47[5];
            if ( v48 )
            {
              v47[6] = 0;
              qfree(v48);
            }
            v49 = v47[2];
            if ( v49 )
            {
              v47[3] = 0;
              qfree(v49);
            }
            ++v46;
            v44 = v70;
          }
          while ( v45 != v46 );
        }
LABEL_119:
        *(_QWORD *)&v71 = 0;
        qfree(v44);
      }
LABEL_72:
      clear_tinfo_t(&v68);
      v55 += 5;
      if ( v60 == v55 )
      {
        v28 = *(_QWORD *)(a1 + 8);
        break;
      }
    }
  }
  v52 = *(_DWORD *)(v28 + 116);
  if ( v52 )
  {
    v54 = *(_QWORD *)(v28 + 136);
    HIDWORD(v80) = v52;
    dest = nullptr;
    v77 = 0;
    v78 = v54;
    v79 = -1;
    LODWORD(v80) = -1;
    v81 = 805306896;
    v76 = 0;
    sub_22ED40((__m128i *)(a1 + 88), (__int64)&dest, nullptr);
    clear_tinfo_t(&v77);
    if ( dest )
    {
      *(_QWORD *)&v76 = 0;
      qfree(dest);
    }
  }
  return v82 - __readfsqword(0x28u);
}
