unsigned __int64 __fastcall sub_1ACBF80(const __m128i *a1, __int64 a2)
{
  void **v4; // r12
  _QWORD *v5; // r13
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __m128i si128; // xmm0
  char v15; // dl
  unsigned __int64 v16; // rax
  bool v17; // zf
  __int64 *v18; // rdi
  unsigned int v19; // r11d
  void *v21; // r9
  int v22; // r13d
  unsigned __int8 v23; // r12
  unsigned __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // r14
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  __int64 *v34; // r12
  unsigned int v35; // eax
  __int64 *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r12
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  char *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbp
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // r14
  unsigned __int8 *v61; // rbp
  _BYTE *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // rax
  __int64 v67; // r13
  __int64 v68; // rax
  __int64 v69; // r13
  __int64 v70; // rbx
  void *v71; // rdi
  void **v72; // [rsp+0h] [rbp-198h]
  __int64 v73; // [rsp+8h] [rbp-190h]
  unsigned __int8 **v74; // [rsp+10h] [rbp-188h]
  __int64 *v75; // [rsp+18h] [rbp-180h]
  char v76; // [rsp+36h] [rbp-162h] BYREF
  char v77; // [rsp+37h] [rbp-161h] BYREF
  __int64 v78; // [rsp+38h] [rbp-160h] BYREF
  __int64 v79; // [rsp+44h] [rbp-154h] BYREF
  int v80; // [rsp+4Ch] [rbp-14Ch]
  void *v81; // [rsp+50h] [rbp-148h] BYREF
  __m128i v82; // [rsp+58h] [rbp-140h]
  _BYTE v83[40]; // [rsp+68h] [rbp-130h] BYREF
  void *ptr[2]; // [rsp+90h] [rbp-108h] BYREF
  _BYTE v85[48]; // [rsp+A0h] [rbp-F8h] BYREF
  _QWORD v86[2]; // [rsp+D0h] [rbp-C8h] BYREF
  _QWORD *v87; // [rsp+E0h] [rbp-B8h]
  unsigned __int8 *v88; // [rsp+F0h] [rbp-A8h] BYREF
  char v89; // [rsp+148h] [rbp-50h]
  unsigned int v90; // [rsp+150h] [rbp-48h]
  char v91; // [rsp+154h] [rbp-44h]

  if ( (unsigned __int8)sub_1ACBC90((__int64)a1, a2) )
    return 0;
  if ( *(_BYTE *)a2 == 7 )
  {
    v13 = a1->m128i_i64[0];
    if ( *(_BYTE *)(a1->m128i_i64[0] + 8) != 20 )
    {
      v21 = *(void **)(v13 + 24);
      ptr[0] = *(void **)(v13 + 16);
      ptr[1] = v21;
      goto LABEL_5;
    }
LABEL_10:
    v4 = ptr;
    goto LABEL_11;
  }
  if ( (unsigned __int8)(*(_BYTE *)a2 - 9) > 2u )
    goto LABEL_10;
  *(__m128i *)ptr = _mm_load_si128(a1 + 1);
LABEL_5:
  v4 = ptr;
  v5 = sub_1AC1150((__int64)ptr);
  if ( v5 != (_QWORD *)(v6 + 8 * v7) && *(_QWORD *)(*v5 + 32LL) > 1u )
  {
    v8 = sub_1AC0ED0((__int64)a1[1].m128i_i64);
    if ( v8 != (_QWORD *)(a1[1].m128i_i64[0] + 8 * a1[1].m128i_i64[1]) )
    {
      sub_168B9F0((__int64)v86, (__int64 *)a1->m128i_i64[0], *(_DWORD *)(a2 + 4), 0xB53u, 0);
      v77 = 29;
      v9 = sub_1AA5620((__int64)v86, &v77);
      LOBYTE(v78) = 41;
      v10 = sub_1AA5620(v9, (char *)&v78);
      LOBYTE(v79) = *(_BYTE *)a2;
      v11 = sub_1AC3570(v10, (char *)&v79);
      LOBYTE(v81) = (unsigned __int8)(*(_BYTE *)a2 - 9) <= 2u;
      sub_1588420(v11, (unsigned __int8 *)&v81);
      sub_15F7200(v86);
      sub_168B9F0((__int64)v86, (__int64 *)a1->m128i_i64[0], *(_DWORD *)(*v8 + 12LL), 0x1675u, 0);
      LOBYTE(v81) = *(_BYTE *)(*v8 + 8LL);
      sub_1AA5620((__int64)v86, (char *)&v81);
      sub_15F7200(v86);
      sub_168B9F0((__int64)v86, (__int64 *)a1->m128i_i64[0], *(_DWORD *)(*v5 + 12LL), 0x1675u, 0);
      v12 = 0;
      LOBYTE(v81) = *(_BYTE *)(*v5 + 8LL);
      sub_1AA5620((__int64)v86, (char *)&v81);
      sub_15F7200(v86);
      return v12;
    }
  }
LABEL_11:
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  v15 = *(_BYTE *)(a2 + 144);
  ptr[1] = (void *)0x600000000LL;
  v16 = 0;
  v17 = *(_BYTE *)(a2 + 1) == 29;
  v81 = v83;
  v82 = si128;
  ptr[0] = v85;
  v79 = 0;
  v80 = 0;
  if ( v17 )
  {
    if ( v15 == -1 )
      goto LABEL_34;
    v22 = 0;
    v74 = (unsigned __int8 **)v86;
    v75 = &v78;
    v72 = ptr;
    while ( 1 )
    {
      if ( !v15 )
        goto LABEL_28;
      if ( v15 != 9 )
        goto LABEL_34;
      if ( *(unsigned int *)(a2 + 88) <= v16 )
      {
LABEL_28:
        v4 = v72;
        goto LABEL_14;
      }
      v23 = *(_BYTE *)(*(_QWORD *)(a2 + 16) + v16);
      v24 = sub_1ACAAD0(
              a1->m128i_i64[0],
              a1[1].m128i_i64[0],
              a1[1].m128i_i64[1],
              *(_BYTE *)a2,
              v23,
              *(_WORD **)(*(_QWORD *)(a2 + 80) + 8 * v16),
              *(double *)si128.m128i_i64,
              (int)v72,
              v73,
              (__int64)v74,
              (int)v75);
      if ( v24 > 1 )
      {
        v25 = v23;
        v26 = v23;
        v27 = v24 & 0xFFFFFFFFFFFFFFFELL;
        v28 = *((unsigned int *)&v79 + v23);
        if ( (_DWORD)v28 )
        {
          v34 = (__int64 *)a1->m128i_i64[0];
          v73 = v25;
          v35 = sub_EEB7E0(v27, v28, *(double *)si128.m128i_i64);
          v36 = v34;
          sub_168B9F0((__int64)v74, v34, v35, 0xB51u, 0);
          if ( v89 )
          {
            sub_AE9DF0(v74 + 4, v73, 3u);
          }
          else if ( v91 )
          {
            v40 = sub_168B9E0(v74);
            v44 = v73;
            v45 = v40;
            v46 = (__int64)v87;
            if ( v87 )
            {
              v46 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64, _QWORD, __int64, __int64))(*v87 + 32LL))(
                      v87,
                      v36,
                      v41,
                      *v87,
                      v43,
                      v73);
              v44 = v73;
            }
            v73 = v44;
            v78 = v46;
            v47 = sub_1587BC0(v45, v75, v41, v42, v43, v44);
            sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * v90 + 8), v73, 3u);
          }
          sub_15F7200(v74);
          sub_168B9F0((__int64)v74, (__int64 *)a1->m128i_i64[0], *((_DWORD *)&v79 + v26), 0x1676u, 0);
          sub_15F7200(v74);
        }
        else
        {
          v73 = v27;
          v29 = sub_EEB7E0(v27, v28, *(double *)si128.m128i_i64);
          v30 = v73;
          *((_DWORD *)&v79 + v23) = v29;
          v31 = v82.m128i_i64[0];
          if ( (unsigned __int64)(v82.m128i_i64[0] + 1) > v82.m128i_i64[1] )
          {
            sub_2236E10(&v81, v83, v82.m128i_i64[0] + 1, 1);
            v31 = v82.m128i_i64[0];
            v30 = v73;
          }
          *((_BYTE *)v81 + v31) = v23;
          v32 = LODWORD(ptr[1]);
          ++v82.m128i_i64[0];
          v33 = LODWORD(ptr[1]) + 1LL;
          if ( v33 > HIDWORD(ptr[1]) )
          {
            v73 = v30;
            sub_2237220(v72, v85, v33, 8);
            v32 = LODWORD(ptr[1]);
            v30 = v73;
          }
          *((_QWORD *)ptr[0] + v32) = v30;
          ++LODWORD(ptr[1]);
        }
      }
      v16 = (unsigned int)(v22 + 1);
      v15 = *(_BYTE *)(a2 + 144);
      ++v22;
      if ( *(_BYTE *)(a2 + 1) != 29 )
        break;
      if ( v15 == -1 )
        goto LABEL_34;
    }
    v4 = v72;
    if ( v15 != 3 )
LABEL_34:
      abort();
  }
  else if ( v15 != 3 )
  {
    goto LABEL_34;
  }
  if ( *(unsigned int *)(a2 + 24) > v16 )
    goto LABEL_34;
LABEL_14:
  v18 = (__int64 *)a1->m128i_i64[0];
  v19 = *(_DWORD *)(a2 + 4);
  if ( *(_BYTE *)a2 != 7 )
    goto LABEL_18;
  if ( *((_DWORD *)v18 + 68) )
  {
    sub_168B9F0((__int64)v86, (__int64 *)a1->m128i_i64[0], v19, 0xB3Eu, 0);
    v76 = 29;
    v37 = sub_1AA5620((__int64)v86, &v76);
    v77 = 29;
    v38 = sub_1AA5620(v37, &v77);
    LODWORD(v78) = 1;
    v39 = sub_1587D10(v38, (int *)&v78);
    sub_1AA3B30(v39, (char *)(a1->m128i_i64[0] + 276));
    sub_15F7200(v86);
    sub_168B9F0((__int64)v86, (__int64 *)a1->m128i_i64[0], *(_DWORD *)(a1->m128i_i64[0] + 272), 0x1675u, 0);
    if ( v89 )
    {
      sub_AE9DF0(&v88, (__int64)"gang", 1u);
    }
    else if ( v91 )
    {
      v55 = sub_168B9E0(v86);
      v58 = (__int64)v87;
      if ( v87 )
        v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v87 + 32LL))(v87);
      v78 = v58;
      v59 = sub_1587BC0(v55, &v78, v53, v54, v56, v57);
      v60 = *v59 + 32LL * v90;
      v61 = *(unsigned __int8 **)(v60 + 8);
      if ( !v61 )
      {
        v64 = *(_QWORD *)(v60 + 16);
        v65 = *(_DWORD *)(v64 + 14976);
        if ( v65 )
        {
          v66 = (unsigned int)(v65 - 1);
          *(_DWORD *)(v64 + 14976) = v66;
          v61 = *(unsigned __int8 **)(v64 + 8 * v66 + 14848);
          v67 = *((unsigned int *)v61 + 134);
          *v61 = 0;
          v68 = *((_QWORD *)v61 + 66);
          *((_DWORD *)v61 + 106) = 0;
          v69 = v68 + (v67 << 6);
          if ( v68 != v69 )
          {
            v70 = v68;
            do
            {
              while ( 1 )
              {
                v69 -= 64;
                v71 = *(void **)(v69 + 24);
                if ( v71 == (void *)(v69 + 40) )
                  break;
                operator delete(v71);
                if ( v70 == v69 )
                  goto LABEL_71;
              }
            }
            while ( v70 != v69 );
          }
LABEL_71:
          *((_DWORD *)v61 + 134) = 0;
        }
        else
        {
          v61 = (unsigned __int8 *)operator new(0x3A0u);
          *v61 = 0;
          *((_QWORD *)v61 + 12) = v61 + 112;
          *((_QWORD *)v61 + 16) = v61 + 144;
          *((_QWORD *)v61 + 20) = v61 + 176;
          *((_QWORD *)v61 + 24) = v61 + 208;
          *((_QWORD *)v61 + 28) = v61 + 240;
          *((_QWORD *)v61 + 32) = v61 + 272;
          *((_QWORD *)v61 + 36) = v61 + 304;
          *((_QWORD *)v61 + 40) = v61 + 336;
          *((_QWORD *)v61 + 44) = v61 + 368;
          *((_QWORD *)v61 + 48) = v61 + 400;
          *((_QWORD *)v61 + 52) = v61 + 432;
          v61[112] = 0;
          *((_QWORD *)v61 + 13) = 0;
          *((_QWORD *)v61 + 17) = 0;
          v61[144] = 0;
          *((_QWORD *)v61 + 21) = 0;
          v61[176] = 0;
          *((_QWORD *)v61 + 25) = 0;
          v61[208] = 0;
          *((_QWORD *)v61 + 29) = 0;
          v61[240] = 0;
          *((_QWORD *)v61 + 33) = 0;
          v61[272] = 0;
          *((_QWORD *)v61 + 37) = 0;
          v61[304] = 0;
          *((_QWORD *)v61 + 41) = 0;
          v61[336] = 0;
          *((_QWORD *)v61 + 45) = 0;
          v61[368] = 0;
          *((_QWORD *)v61 + 49) = 0;
          v61[400] = 0;
          *((_QWORD *)v61 + 53) = 0x800000000LL;
          *((_QWORD *)v61 + 66) = v61 + 544;
          *((_QWORD *)v61 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v60 + 8) = v61;
      }
      v61[*v61 + 1] = 1;
      v62 = *(_BYTE **)(v60 + 8);
      v63 = (unsigned __int8)*v62;
      *v62 = v63 + 1;
      *(_QWORD *)&v62[8 * v63 + 16] = "gang";
    }
    goto LABEL_50;
  }
  if ( *((_DWORD *)v18 + 70) )
  {
    sub_168B9F0((__int64)v86, (__int64 *)a1->m128i_i64[0], v19, 0xB3Eu, 0);
    v76 = 29;
    v48 = sub_1AA5620((__int64)v86, &v76);
    v77 = 49;
    v49 = sub_1AA5620(v48, &v77);
    LODWORD(v78) = 0;
    sub_1587D10(v49, (int *)&v78);
    sub_15F7200(v86);
    sub_168B9F0((__int64)v86, (__int64 *)a1->m128i_i64[0], *(_DWORD *)(a1->m128i_i64[0] + 280), 0x1675u, 0);
    v50 = "worker";
LABEL_55:
    sub_162BBD0((__int64)v86, (__int64)v50);
LABEL_50:
    v12 = 0;
    sub_15F7200(v86);
    goto LABEL_19;
  }
  if ( *((_DWORD *)v18 + 71) )
  {
    sub_168B9F0((__int64)v86, (__int64 *)a1->m128i_i64[0], v19, 0xB3Eu, 0);
    v76 = 29;
    v51 = sub_1AA5620((__int64)v86, &v76);
    v77 = 46;
    v52 = sub_1AA5620(v51, &v77);
    LODWORD(v78) = 0;
    sub_1587D10(v52, (int *)&v78);
    sub_15F7200(v86);
    sub_168B9F0((__int64)v86, (__int64 *)a1->m128i_i64[0], *(_DWORD *)(a1->m128i_i64[0] + 284), 0x1675u, 0);
    v50 = "vector";
    goto LABEL_55;
  }
LABEL_18:
  v12 = sub_1AC4620(
          v18,
          *(_BYTE *)a2,
          a1[1].m128i_i64[0],
          a1[1].m128i_i64[1],
          v19,
          *(_DWORD *)(a2 + 12),
          *(double *)si128.m128i_i64,
          v81,
          v82.m128i_u64[0],
          (__int64 *)ptr[0],
          LODWORD(ptr[1]),
          *(_DWORD *)(a2 + 8));
LABEL_19:
  if ( ptr[0] != v4 + 2 )
    free(ptr[0]);
  if ( v81 != v83 )
    free(v81);
  return v12;
}
