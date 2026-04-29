__int64 __fastcall sub_185500(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  char tinfo_property; // al
  int tinfo_size; // eax
  __int64 v15; // r14
  int i; // eax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int128 v19; // rdi
  __int64 *v20; // rax
  int v21; // eax
  int v22; // eax
  char *v23; // rax
  __m128i v24; // xmm1
  int v25; // eax
  int v26; // eax
  char *v27; // rbx
  __int64 v28; // rdi
  size_t v29; // r8
  unsigned __int64 v30; // r9
  int v31; // eax
  __int64 v32; // [rsp+0h] [rbp-238h]
  size_t v33; // [rsp+0h] [rbp-238h]
  __int64 v34; // [rsp+8h] [rbp-230h]
  int v35; // [rsp+10h] [rbp-228h]
  unsigned __int64 v36; // [rsp+10h] [rbp-228h]
  int v37; // [rsp+1Ch] [rbp-21Ch]
  int v38; // [rsp+28h] [rbp-210h]
  size_t na; // [rsp+30h] [rbp-208h]
  size_t n; // [rsp+30h] [rbp-208h]
  size_t nb; // [rsp+30h] [rbp-208h]
  void *src; // [rsp+38h] [rbp-200h]
  size_t v43; // [rsp+40h] [rbp-1F8h]
  unsigned __int64 v44; // [rsp+40h] [rbp-1F8h]
  unsigned __int8 v45; // [rsp+57h] [rbp-1E1h] BYREF
  __int64 v46; // [rsp+58h] [rbp-1E0h] BYREF
  _QWORD v47[2]; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned __int64 v48; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v49; // [rsp+78h] [rbp-1C0h]
  int v50; // [rsp+80h] [rbp-1B8h]
  char v51; // [rsp+84h] [rbp-1B4h]
  unsigned __int64 v52; // [rsp+88h] [rbp-1B0h] BYREF
  __int128 v53; // [rsp+90h] [rbp-1A8h] BYREF
  __int128 v54; // [rsp+A0h] [rbp-198h]
  __int64 v55; // [rsp+B0h] [rbp-188h]
  __int128 v56; // [rsp+B8h] [rbp-180h]
  __int128 v57; // [rsp+C8h] [rbp-170h]
  __int128 v58; // [rsp+D8h] [rbp-160h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-150h]
  int v60; // [rsp+F8h] [rbp-140h]
  char v61[16]; // [rsp+100h] [rbp-138h] BYREF
  __int64 v62; // [rsp+110h] [rbp-128h]
  char v63[8]; // [rsp+118h] [rbp-120h] BYREF
  void *dest; // [rsp+120h] [rbp-118h] BYREF
  unsigned __int64 v65; // [rsp+128h] [rbp-110h]
  unsigned __int64 v66; // [rsp+130h] [rbp-108h]
  char v67[16]; // [rsp+138h] [rbp-100h] BYREF
  int v68; // [rsp+148h] [rbp-F0h]
  char v69[24]; // [rsp+150h] [rbp-E8h] BYREF
  __int64 v70[7]; // [rsp+168h] [rbp-D0h] BYREF
  char v71[24]; // [rsp+1A0h] [rbp-98h] BYREF
  __int64 v72[7]; // [rsp+1B8h] [rbp-80h] BYREF
  char v73; // [rsp+1F0h] [rbp-48h] BYREF
  unsigned __int64 v74; // [rsp+1F8h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(v3 + 312) <= 5 )
    return 0;
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 1344) + 8LL) )
  {
    v12 = *(_QWORD *)(a2 + 24);
    LODWORD(v49) = 0;
    v48 = v12;
    if ( (sub_133C30(v3, (__int64)&v48) & 7) != 0 )
      return 0;
  }
  v53 = 0;
  v54 = 0;
  v56 = 0;
  v58 = 0;
  v48 = 0xFFFFFFFF00000000LL;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0xFFFFFFFF00000000LL;
  v55 = 0;
  v60 = 16;
  v57 = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_411C10);
  v4 = sub_182E00((__int64)&v48, a1, a2, 1);
  if ( !(_BYTE)v4 )
    goto LABEL_9;
  if ( (_BYTE)v52 == 4 )
    goto LABEL_9;
  if ( !BYTE8(v58) )
    goto LABEL_9;
  v34 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
  if ( (get_tinfo_property(*((_QWORD *)&v58 + 1), 2) & 0xF) == 9 )
    goto LABEL_9;
  tinfo_property = get_tinfo_property(*((_QWORD *)&v58 + 1), 2);
  if ( (tinfo_property & 0x3E) != 0 && (tinfo_property & 0xFu) <= 8 )
    goto LABEL_9;
  v46 = -1;
  if ( !(unsigned __int8)sub_32AEE0(&v52, &v46) || v46 + SHIDWORD(v52) <= *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) )
  {
LABEL_27:
    tinfo_size = get_tinfo_size(0, *((_QWORD *)&v58 + 1), 0);
    v37 = 0;
    v15 = a2;
    v38 = tinfo_size - v58;
    for ( i = sub_180B50(*(_QWORD *)(v34 + 96), &v45, a1, a2);
          i && (a2 == v15 || v45 == si128.m128i_i32[3]);
          i = sub_180B50(*(_QWORD *)(v34 + 96), &v45, a1, v15) )
    {
      v35 = v37 + i;
      if ( v46 != -1 && v37 + i + v46 > *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) )
        goto LABEL_9;
      if ( v38 < v35 )
        break;
      if ( (unsigned int)(*(_DWORD *)v15 - 56) <= 1 )
      {
        v22 = 32;
        if ( *(_BYTE *)(v15 + 32) == 11 )
          v22 = (*(_DWORD *)(*(_QWORD *)(v15 + 72) + 280LL) & 0x80) == 0 ? 64 : 32;
        v60 |= v22;
      }
      if ( a2 != v15 )
      {
        v17 = v54;
        v18 = *((_QWORD *)&v53 + 1);
        if ( *((_QWORD *)&v54 + 1) < (unsigned __int64)(v54 + 1) )
        {
          *((_QWORD *)&v53 + 1) = qvector_reserve((char *)&v53 + 8, *((_QWORD *)&v53 + 1), v54 + 1, 8);
          v18 = *((_QWORD *)&v53 + 1);
          v17 = v54;
        }
        *(_QWORD *)(v18 + 8 * v17) = v15;
        *(_QWORD *)&v54 = v54 + 1;
      }
      si128.m128i_i32[3] = v45;
      if ( !(unsigned __int8)sub_17FFE0(v34, (unsigned __int64)&v52, HIDWORD(v52)) )
        goto LABEL_9;
      *((_QWORD *)&v19 + 1) = a2;
      *(_QWORD *)&v19 = a1;
      v20 = sub_182190(v19, (__int64)&v52, 1);
      v15 = (__int64)v20;
      if ( !v20 || (*((_BYTE *)v20 + 4) & 0x10) != 0 )
        goto LABEL_50;
      v47[1] = 0;
      v47[0] = 0xFFFFFFFF00000000LL;
      if ( !(unsigned __int8)sub_180840((__int64)v47, a1, (__int64)v20, 0, 1)
        || (v21 = sub_17F9C0(v34, (__int64)&v52, (__int64)v47), v21 == -1) )
      {
        sub_119360((__int64)v47);
LABEL_50:
        v37 = v35;
        break;
      }
      if ( v35 <= v21 )
      {
        if ( !under_debugger )
          sub_37EEE0(52546);
        BUG();
      }
      v37 = v35 - v21;
      sub_121740((__int64)&v52, (unsigned __int8 *)v47);
      sub_119360((__int64)v47);
    }
    if ( !(_QWORD)v54 )
      goto LABEL_9;
    if ( (v60 & 0x60) == 0 && *(_DWORD *)(v34 + 88) + 1 > v37 )
    {
      if ( (get_tinfo_property(*((_QWORD *)&v58 + 1), 2) & 0xF) != 0xB )
        goto LABEL_9;
      if ( v37 != get_tinfo_size(0, *((_QWORD *)&v58 + 1), 0) )
        goto LABEL_9;
      if ( (int)get_tinfo_property(*((_QWORD *)&v58 + 1), 12) <= 2 )
        goto LABEL_9;
      v31 = get_tinfo_property(*((_QWORD *)&v58 + 1), 14);
      if ( (__int64)v54 + 1 >= (unsigned __int64)(v37 / v31) )
        goto LABEL_9;
    }
    v23 = v61;
    v24 = _mm_load_si128((const __m128i *)&xmmword_411BF0);
    do
    {
      *((_DWORD *)v23 + 1) = -1;
      v23 += 80;
      *((_WORD *)v23 - 40) = 0;
      *((_WORD *)v23 - 39) = 0;
      *((_QWORD *)v23 - 9) = 0;
      *((__m128i *)v23 - 4) = v24;
      *((_QWORD *)v23 - 6) = 0;
      *(_OWORD *)(v23 - 40) = 0;
      *((_DWORD *)v23 - 6) = 0;
      *((_QWORD *)v23 - 2) = 0;
      *((_DWORD *)v23 - 2) = 0;
    }
    while ( v23 != &v73 );
    if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
    {
      v33 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 24LL);
      sub_121740((__int64)v61, (unsigned __int8 *)v33);
      v62 = *(_QWORD *)(v33 + 16);
      copy_tinfo_t(v63, v33 + 24);
      v29 = v33;
      if ( &dest != (void **)(v33 + 32) )
      {
        v30 = *(_QWORD *)(v33 + 40);
        if ( v30 && (n = v30 - 1, v30 != 1) )
        {
          src = *(void **)(v33 + 32);
          if ( v66 < v30 )
          {
            v44 = *(_QWORD *)(v33 + 40);
            dest = (void *)qvector_reserve(&dest, dest, v30, 1);
            v29 = v33;
            v30 = v44;
          }
          v43 = v29;
          v65 = v30;
          v36 = v30;
          memmove(dest, src, n);
          v29 = v43;
          *((char *)dest + v36 - 1) = 0;
        }
        else
        {
          v65 = 0;
        }
      }
      nb = v29;
      copy_argloc(v67, v29 + 56);
      v68 = *(_DWORD *)(nb + 72);
    }
    else
    {
      if ( !(unsigned __int8)sub_182060(a1, a2) )
      {
        v4 = 0;
LABEL_62:
        v27 = &v73;
        do
        {
          v27 -= 80;
          cleanup_argloc(v27 + 56);
          v28 = *((_QWORD *)v27 + 4);
          if ( v28 )
          {
            *((_QWORD *)v27 + 5) = 0;
            qfree(v28);
          }
          clear_tinfo_t(v27 + 24);
          sub_119360((__int64)v27);
        }
        while ( v27 != v61 );
        goto LABEL_10;
      }
      sub_118FD0(v61, (char *)(a2 + 64));
      if ( *(_DWORD *)a2 != 1 )
        sub_118F10(v61, v34);
      v62 = *(_QWORD *)(a2 + 24);
    }
    copy_tinfo_t(v63, *(_QWORD *)(a1 + 480) + 232LL);
    v47[0] = 7;
    copy_tinfo_t(v70, v47);
    clear_tinfo_t(v47);
    na = *(_QWORD *)(a2 + 24);
    v25 = get_tinfo_size(0, v70[0], 0);
    sub_11CFD0((__int64)v69, v34, si128.m128i_i32[3], v25, na, 1);
    v47[0] = 7;
    copy_tinfo_t(v72, v47);
    clear_tinfo_t(v47);
    v32 = *(_QWORD *)(a2 + 24);
    v26 = get_tinfo_size(0, v72[0], 0);
    sub_11CFD0((__int64)v71, v34, v37, v26, v32, 2);
    sub_1826E0(a1, a2, (__int64)&v48, 3, v61, 2u);
    goto LABEL_62;
  }
  if ( (get_tinfo_property(*((_QWORD *)&v58 + 1), 2) & 0x2F) == 0xD )
  {
    v46 = -1;
    goto LABEL_27;
  }
LABEL_9:
  v4 = 0;
LABEL_10:
  clear_tinfo_t((char *)&v58 + 8);
  v7 = v55;
  if ( v55 )
  {
    v8 = v56;
    if ( (_QWORD)v56 )
    {
      v9 = 0;
      do
      {
        v10 = (__int64 *)(v7 + 40 * v9);
        v11 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v11);
          v7 = v55;
        }
        ++v9;
      }
      while ( v8 != v9 );
    }
    *(_QWORD *)&v56 = 0;
    qfree(v7);
  }
  if ( *((_QWORD *)&v53 + 1) )
  {
    *(_QWORD *)&v54 = 0;
    qfree(*((_QWORD *)&v53 + 1));
  }
  sub_119360((__int64)&v52);
  sub_119360((__int64)&v48);
  return v4;
}
