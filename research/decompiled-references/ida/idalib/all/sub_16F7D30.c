void __fastcall sub_16F7D30(__int64 *a1, unsigned int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 *v8; // r8
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  char v15; // r15
  void *v16; // rdi
  size_t v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r13
  __int64 v25; // rbx
  size_t v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  size_t v29; // rcx
  size_t v30; // r13
  _QWORD *v31; // r15
  unsigned __int64 v32; // r14
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rsi
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rsi
  size_t v45; // rdx
  _QWORD *v46; // rax
  __int64 v47; // rdi
  unsigned __int8 v48; // dl
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r13
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // rax
  __int64 v66; // [rsp+10h] [rbp-178h] BYREF
  char *v67; // [rsp+18h] [rbp-170h]
  unsigned __int64 v68; // [rsp+20h] [rbp-168h]
  __int64 *v69; // [rsp+28h] [rbp-160h]
  __int64 v70; // [rsp+34h] [rbp-154h]
  char v71; // [rsp+3Ch] [rbp-14Ch]
  void *dest; // [rsp+40h] [rbp-148h] BYREF
  __m128 v73; // [rsp+48h] [rbp-140h] BYREF
  __int64 v74[3]; // [rsp+60h] [rbp-128h] BYREF
  void *v75; // [rsp+78h] [rbp-110h]
  __int64 v76; // [rsp+88h] [rbp-100h] BYREF
  void *src; // [rsp+A0h] [rbp-E8h] BYREF
  size_t n; // [rsp+A8h] [rbp-E0h]
  __int64 v79; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-D0h] BYREF
  unsigned __int8 *v81[7]; // [rsp+C0h] [rbp-C8h] BYREF
  __int128 v82; // [rsp+F8h] [rbp-90h]
  __int64 v83; // [rsp+108h] [rbp-80h]
  __int64 *v84; // [rsp+110h] [rbp-78h]
  __int64 v85; // [rsp+118h] [rbp-70h]
  unsigned int v86; // [rsp+120h] [rbp-68h]
  char v87; // [rsp+124h] [rbp-64h]
  __int64 v88; // [rsp+128h] [rbp-60h] BYREF
  __m128i si128; // [rsp+130h] [rbp-58h]
  __int64 v90; // [rsp+140h] [rbp-48h]

  dest = &v73.m128_u16[4];
  v7 = a1[29];
  v66 = a5;
  v73.m128_u64[0] = 0;
  v73.m128_i8[8] = 0;
  if ( (*(_BYTE *)(v7 + 1) & 8) != 0 )
  {
    v8 = (__int64 *)(a5 & 0xFFFFFFFFFFFFFFF0LL);
    v9 = *v8;
    v10 = v8;
    v69 = v8;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 14 )
    {
      v17 = j__strlen("std::abs");
      sub_99BDC0(&dest, 0, 0, "std::abs", v17);
      v21 = *v10;
      v22 = *(_QWORD *)(*(_QWORD *)(*v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v23 = *(unsigned __int8 *)(v22 + 16);
      switch ( (_BYTE)v23 )
      {
        case 0xD:
          if ( (((*(_WORD *)(v22 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
            break;
LABEL_61:
          v67 = "cstdlib";
          v24 = sub_183D350(a1);
          if ( v24 )
            goto LABEL_25;
          goto LABEL_62;
        case 0x2F:
          v46 = sub_F60F10(v22, 0, v23, v18, v19, v20);
          if ( (*((_BYTE *)v46 + 74) & 1) != 0 || (v46[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            goto LABEL_61;
          v21 = *v69;
          break;
        case 0xA:
          goto LABEL_61;
      }
      sub_F58100(v21);
      v67 = "cmath";
      v24 = sub_183D350(a1);
      if ( v24 )
      {
LABEL_25:
        v25 = *(_QWORD *)(a1[31] + 17504);
        v26 = j__strlen("abs");
        v27 = sub_6F3470(v25, "abs", v26);
        v79 = 0x800000000LL;
        n = (size_t)&v80;
        v86 = a2;
        v82 = 0;
        v85 = v27;
        src = nullptr;
        v83 = 0;
        v84 = a1;
        sub_B85890(&v88, v27);
        v90 = 0x101010000LL;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA920);
        sub_1A395A0(&src);
        *(_WORD *)((char *)&v90 + 3) = 0;
        sub_1A48440(a1, &src, v24 + 48, 0);
        v29 = n;
        v30 = n + 8LL * (unsigned int)v79;
        if ( v30 == n )
          goto LABEL_12;
        v31 = (_QWORD *)n;
        while ( 1 )
        {
          v32 = *v31 & 0xFFFFFFFFFFFFFFF8LL;
          v35 = *(_BYTE *)(v32 + 28) & 0x7F;
          v36 = (unsigned int)(v35 - 53);
          if ( (unsigned int)v36 <= 1 )
          {
            v32 = *(_QWORD *)(v32 + 64);
            if ( (*(_BYTE *)(v32 + 28) & 0x7Fu) - 34 > 5 || (unsigned int)sub_B76070(v32, v36, v28, v29) != 1 )
              goto LABEL_29;
          }
          else if ( (unsigned int)(v35 - 34) > 5
                 || (unsigned int)sub_B76070(*v31 & 0xFFFFFFFFFFFFFFF8LL, v36, v28, v29) != 1 )
          {
            goto LABEL_29;
          }
          v37 = *(_QWORD *)(**(_QWORD **)(v32 + 120) + 48LL);
          LODWORD(v68) = sub_16B95E0(v66, v36, v28, v29, v33, v34);
          if ( (_DWORD)v68 == (unsigned int)sub_16B95E0(v37, v36, v38, v39, v40, v41) )
          {
            v42 = sub_A97D20(a1[31], *v69);
            v43 = a1[31];
            v44 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL);
            v68 = v42;
            if ( v42 <= sub_A97D20(v43, v44) )
              goto LABEL_35;
          }
LABEL_29:
          if ( (_QWORD *)v30 == ++v31 )
            goto LABEL_12;
        }
      }
LABEL_62:
      v15 = 1;
      goto LABEL_14;
    }
  }
  sub_FBD280((__int64)&src, *(_QWORD *)(a1[31] + 17520), a4);
  v11 = (__int64 *)dest;
  if ( src == &v79 )
  {
    v45 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v79;
      else
        memcpy(dest, src, n);
      v45 = n;
      v11 = (__int64 *)dest;
    }
    v73.m128_u64[0] = v45;
    *((_BYTE *)v11 + v45) = 0;
    v11 = (__int64 *)src;
    goto LABEL_7;
  }
  if ( dest == &v73.m128_u16[4] )
  {
    v66 = v79;
    dest = src;
    v73 = _mm_loadh_ps((const double *)&v66);
    goto LABEL_67;
  }
  v66 = v79;
  v12 = v73.m128_i64[1];
  dest = src;
  v73 = _mm_loadh_ps((const double *)&v66);
  if ( !v11 )
  {
LABEL_67:
    v11 = &v79;
    src = &v79;
    goto LABEL_7;
  }
  src = v11;
  v79 = v12;
LABEL_7:
  n = 0;
  *(_BYTE *)v11 = 0;
  if ( src != &v79 )
    operator delete(src);
  sub_FBD1A0(*(__int64 **)(a1[31] + 17520), a4);
  v67 = sub_FBCFC0((_WORD *)(v13 + 16));
  if ( v67 )
  {
    v14 = sub_6F3470(*(_QWORD *)(a1[31] + 17504), dest, v73.m128_u64[0]);
    v79 = 0x800000000LL;
    n = (size_t)&v80;
    v86 = a2;
    v82 = 0;
    v85 = v14;
    src = nullptr;
    v83 = 0;
    v84 = a1;
    sub_B85890(&v88, v14);
    v90 = 0x101010000LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA920);
    sub_1A395A0(&src);
    *(_WORD *)((char *)&v90 + 3) = 0;
    sub_1A49A10(a1, &src, a1[76], 0, 0);
    if ( (_DWORD)src == 2 )
    {
      v47 = *(_QWORD *)n & 0xFFFFFFFFFFFFFFF8LL;
      v48 = *(_BYTE *)(v47 + 28) & 0x7F;
      v49 = v48;
      if ( ((v48 + 52) & 0x7Fu) <= 1 || (unsigned int)v48 - 53 <= 1 )
      {
        v47 = sub_B72ED0(v47);
        v49 = *(_BYTE *)(v47 + 28) & 0x7F;
      }
      if ( (unsigned int)(v49 - 34) <= 5 && (unsigned int)sub_B75A50(v47, 0) == a4 )
      {
LABEL_35:
        v15 = 0;
        goto LABEL_13;
      }
    }
    else if ( !(_DWORD)v79 )
    {
LABEL_12:
      v15 = 1;
LABEL_13:
      sub_169D230((__int64)&src);
      goto LABEL_14;
    }
    sub_169D230((__int64)&src);
    goto LABEL_19;
  }
  v15 = 0;
LABEL_14:
  sub_168B9F0((__int64)&src, a1 + 1, a2, 0x18D2u, 0);
  if ( (_BYTE)v85 )
  {
    sub_AEC220(v81, dest, v73.m128_i64[0]);
  }
  else if ( v87 )
  {
    v57 = sub_168B9E0(&src);
    v61 = v79;
    if ( v79 )
    {
      v62 = *(_QWORD *)v79;
      v66 = v57;
      v61 = (*(__int64 (__fastcall **)(__int64))(v62 + 32))(v79);
      v57 = v66;
    }
    v74[0] = v61;
    v63 = sub_1587BC0(v57, v74, v57, v58, v59, v60);
    sub_AEC220((unsigned __int8 **)(*v63 + 32LL * v86 + 8), dest, v73.m128_i64[0]);
  }
  v71 = 1;
  v70 = a3;
  sub_16BA3D0((__int64)v74, a3, 1, dest, v73.m128_i64[0]);
  sub_1589170((__int64)&src, v74);
  if ( v75 != &v76 )
    operator delete(v75);
  sub_15F7200(&src);
  if ( !v15 )
  {
LABEL_19:
    v16 = dest;
    if ( dest == &v73.m128_u16[4] )
      return;
    goto LABEL_20;
  }
  sub_168B9F0((__int64)&src, a1 + 1, a2, 0x1797u, 0);
  if ( (_BYTE)v85 )
  {
    sub_16B7630(v81, (__int64)v67);
  }
  else if ( v87 )
  {
    v54 = sub_168B9E0(&src);
    v55 = v79;
    if ( v79 )
      v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v79 + 32LL))(v79);
    v74[0] = v55;
    v56 = sub_1587BC0(v54, v74, v50, v51, v52, v53);
    sub_16B7630((unsigned __int8 **)(*v56 + 32LL * v86 + 8), (__int64)v67);
  }
  sub_1682A40((__int64)&src, (__int64)&dest);
  sub_15F7200(&src);
  v16 = dest;
  if ( dest != &v73.m128_u16[4] )
LABEL_20:
    operator delete(v16);
}
