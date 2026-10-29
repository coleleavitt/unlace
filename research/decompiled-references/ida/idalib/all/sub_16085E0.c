__int64 __fastcall sub_16085E0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(__int64),
        __m128i a6,
        double a7)
{
  char v7; // r14
  unsigned int v8; // r13d
  unsigned __int64 v11; // rbx
  char v12; // dl
  unsigned __int64 v14; // rdx
  __int16 v15; // ax
  bool v16; // r15
  _BYTE *v17; // rdx
  _BYTE *v18; // r14
  __int64 v19; // rsi
  bool v20; // r15
  int v21; // eax
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int16 v24; // ax
  _BYTE *v25; // rdx
  _BYTE *v26; // r13
  __int64 v27; // rax
  __int64 v28; // rcx
  __int16 v29; // ax
  size_t v30; // rax
  int v31; // ecx
  _BYTE *v32; // rdi
  void **v33; // r9
  unsigned __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 *v52; // rax
  __int64 v53; // rsi
  _QWORD *v54; // rax
  size_t v55; // rdx
  __int64 v57; // [rsp+0h] [rbp-1A8h]
  __int64 v58; // [rsp+0h] [rbp-1A8h]
  __int64 v59; // [rsp+0h] [rbp-1A8h]
  __int64 v60; // [rsp+0h] [rbp-1A8h]
  __int64 v61; // [rsp+0h] [rbp-1A8h]
  __int64 v62; // [rsp+0h] [rbp-1A8h]
  unsigned int v64; // [rsp+10h] [rbp-198h]
  unsigned __int8 v65; // [rsp+17h] [rbp-191h]
  void **p_src; // [rsp+18h] [rbp-190h] BYREF
  _QWORD *v67; // [rsp+20h] [rbp-188h]
  __int8 *v68; // [rsp+28h] [rbp-180h]
  int v69; // [rsp+3Ch] [rbp-16Ch] BYREF
  __int64 v70; // [rsp+40h] [rbp-168h] BYREF
  __int64 v71; // [rsp+48h] [rbp-160h] BYREF
  void *src; // [rsp+50h] [rbp-158h] BYREF
  size_t n; // [rsp+58h] [rbp-150h]
  _QWORD v74[2]; // [rsp+60h] [rbp-148h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-138h] BYREF
  _BYTE v76[32]; // [rsp+80h] [rbp-128h] BYREF
  __int64 v77[3]; // [rsp+A0h] [rbp-108h] BYREF
  void *dest; // [rsp+B8h] [rbp-F0h]
  __m128 v79; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 v80; // [rsp+D0h] [rbp-D8h]
  _BYTE v81[16]; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v82; // [rsp+F0h] [rbp-B8h]
  unsigned __int8 *v83[11]; // [rsp+100h] [rbp-A8h] BYREF
  char v84; // [rsp+158h] [rbp-50h]
  unsigned int v85; // [rsp+160h] [rbp-48h]
  char v86; // [rsp+164h] [rbp-44h]

  v7 = a4;
  v8 = a4;
  v11 = *a2 & 0xFFFFFFFFFFFFFFFELL;
  v64 = sub_C00A40(v11, (__int64)a2, a3, a4, (__int64)a5);
  v71 = sub_EEC8C0(v11, (__int64)a2, *(double *)a6.m128i_i64);
  ptr[0] = v76;
  ptr[1] = (void *)0x400000000LL;
  sub_1DBADC0(a1);
  if ( !v12 )
  {
    v19 = *a2;
    v20 = 0;
    v70 = 0;
    v65 = sub_15F2730(a1, v19 & 0xFFFFFFFFFFFFFFFELL, &v70, (__int64)ptr);
    if ( v65 )
    {
      if ( (v70 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (!a5 || a5(v70)) )
      {
        v21 = sub_13DC060(SHIDWORD(v71), 0, *(__int64 **)(a1 + 272), *(_QWORD *)(a1 + 232), a6, a7);
        v22 = *a2;
        LODWORD(p_src) = v21;
        v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
        v24 = *(_WORD *)v23 & 0x1FF;
        if ( v24 == 4 )
        {
          v23 = *(_QWORD *)(v23 + 16);
          v24 = *(_WORD *)v23 & 0x1FF;
        }
        if ( v24 == 24 )
        {
          if ( *(_DWORD *)(v23 + 4) )
          {
            v25 = (_BYTE *)(*(_QWORD *)(v23 + 64) & 0xFFFFFFFFFFFFFFF8LL);
            v26 = v25;
            if ( (v25[28] & 0x7Fu) - 34 <= 5 )
            {
              v20 = sub_B753F0(v25);
              if ( !v20 )
                v20 = sub_B754A0(v26);
            }
          }
        }
        sub_168CDE0(v81, a1 + 8, v64, a3, 0);
        v69 = 1;
        v27 = sub_1587D10((__int64)v81, &v69);
        v28 = v27;
        if ( *(_BYTE *)(v27 + 120) )
        {
          v60 = v27;
          sub_AE9DF0((unsigned __int8 **)(v27 + 32), v20, 2u);
          v28 = v60;
        }
        else if ( *(_BYTE *)(v27 + 132) )
        {
          v61 = v27;
          v47 = sub_168B9E0(v27);
          v50 = v61;
          v51 = v47;
          v52 = *(__int64 **)(v61 + 16);
          if ( v52 )
          {
            v53 = *v52;
            v67 = (_QWORD *)v51;
            v52 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(v53 + 32))(v52);
            v51 = (__int64)v67;
            v50 = v61;
          }
          v62 = v50;
          v77[0] = (__int64)v52;
          v54 = sub_1587BC0(v51, v77, v51, v50, v48, v49);
          sub_AE9DF0((unsigned __int8 **)(*v54 + 32LL * *(unsigned int *)(v62 + 128) + 8), v20, 2u);
          v28 = v62;
        }
        v57 = sub_15884C0(v28, &v71);
        v29 = *(_WORD *)sub_BFB900(*a2 & 0xFFFFFFFFFFFFFFFELL) & 0x1FF;
        if ( ((v29 + 425) & 0x1FB) == 0 || v29 == 4 || ((v29 + 394) & 0x1FFu) <= 1 )
        {
          v79 = 0;
          memset(v77, 0, sizeof(v77));
          v80 = 0;
          dest = &v79.m128_u16[4];
          v79.m128_i8[8] = 0;
LABEL_41:
          sub_1589170(v57, v77);
          if ( dest != &v79.m128_u16[4] )
            operator delete(dest);
          sub_15F7200(v81);
          if ( !v20 )
            sub_1607430(a1, v64, (__int64)ptr, (unsigned __int64)a5);
          v8 = v65;
          *a2 = sub_192A5E0(a1, HIDWORD(v71) + 1, 0, 0, 0);
          goto LABEL_3;
        }
        v30 = j__strlen("()");
        v31 = (int)p_src;
        p_src = &src;
        LODWORD(v77[0]) = v31;
        HIDWORD(v77[0]) = v31;
        dest = &v79.m128_u16[4];
        v68 = &v79.m128_i8[8];
        src = v74;
        v67 = v74;
        *(__int64 *)((char *)&v77[1] + 4) = 0;
        BYTE4(v77[2]) = 0;
        v79.m128_u64[0] = 0;
        v79.m128_i8[8] = 0;
        BYTE8(v80) = 0;
        LOBYTE(v77[1]) = 0;
        sub_15F0740(&src, "()", (__int64)&aUnbalanced_1[v30 + 11]);
        v32 = dest;
        v33 = &src;
        if ( src == v74 )
        {
          v55 = n;
          if ( n )
          {
            if ( n == 1 )
            {
              *(_BYTE *)dest = v74[0];
              v55 = n;
            }
            else
            {
              memcpy(dest, src, n);
              v55 = n;
              v33 = p_src;
            }
            v32 = dest;
          }
          v79.m128_u64[0] = v55;
          v32[v55] = 0;
          v32 = src;
          goto LABEL_38;
        }
        if ( dest == v68 )
        {
          p_src = (void **)v74[0];
          dest = src;
          v79 = _mm_loadh_ps((const double *)&p_src);
        }
        else
        {
          p_src = (void **)v74[0];
          v34 = v79.m128_u64[1];
          dest = src;
          v79 = _mm_loadh_ps((const double *)&p_src);
          if ( v32 )
          {
            src = v32;
            v74[0] = v34;
LABEL_38:
            n = 0;
            *v32 = 0;
            if ( src != v33 + 2 )
              operator delete(src);
            BYTE8(v80) = 0;
            goto LABEL_41;
          }
        }
        v32 = v74;
        src = v74;
        goto LABEL_38;
      }
    }
  }
  if ( !v7 )
    goto LABEL_3;
  v14 = *a2 & 0xFFFFFFFFFFFFFFFELL;
  v15 = *(_WORD *)v14 & 0x1FF;
  if ( v15 == 4 )
  {
    v14 = *(_QWORD *)(v14 + 16);
    v15 = *(_WORD *)v14 & 0x1FF;
  }
  v16 = 0;
  if ( v15 == 24 )
  {
    if ( *(_DWORD *)(v14 + 4) )
    {
      v17 = (_BYTE *)(*(_QWORD *)(v14 + 64) & 0xFFFFFFFFFFFFFFF8LL);
      v18 = v17;
      if ( (v17[28] & 0x7Fu) - 34 <= 5 )
      {
        v16 = sub_B753F0(v17);
        if ( !v16 )
          v16 = sub_B754A0(v18);
      }
    }
  }
  sub_168CDE0(v81, a1 + 8, v64, a3, 0);
  if ( v84 )
  {
    sub_AE9DF0(v83, 0, 2u);
    if ( !v84 )
    {
LABEL_51:
      if ( v86 )
      {
        v42 = sub_168B9E0(v81);
        v45 = v82;
        if ( v82 )
        {
          v59 = v42;
          v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v82 + 32LL))(v82);
          v42 = v59;
        }
        v77[0] = v45;
        v46 = sub_1587BC0(v42, v77, v41, v42, v43, v44);
        sub_AE9DF0((unsigned __int8 **)(*v46 + 32LL * v85 + 8), v16, 2u);
      }
      goto LABEL_15;
    }
LABEL_47:
    sub_AE9DF0(v83, v16, 2u);
    goto LABEL_15;
  }
  if ( v86 )
  {
    v36 = sub_168B9E0(v81);
    v39 = v82;
    if ( v82 )
    {
      v58 = v36;
      v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v82 + 32LL))(v82);
      v36 = v58;
    }
    v77[0] = v39;
    v40 = sub_1587BC0(v36, v77, v35, v36, v37, v38);
    sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * v85 + 8), 0, 2u);
    if ( !v84 )
      goto LABEL_51;
    goto LABEL_47;
  }
LABEL_15:
  sub_15884C0((__int64)v81, &v71);
  sub_15F7200(v81);
  if ( !v16 )
    sub_1607430(a1, v64, (__int64)ptr, (unsigned __int64)a5);
  *a2 = 1;
LABEL_3:
  if ( ptr[0] != v76 )
    free(ptr[0]);
  return v8;
}
