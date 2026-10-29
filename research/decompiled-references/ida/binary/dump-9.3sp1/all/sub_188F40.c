__int64 __fastcall sub_188F40(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebp
  __m128i si128; // xmm0
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  char tinfo_property; // al
  __int64 v15; // r14
  int i; // eax
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // r8d
  int v20; // r9d
  __int128 v21; // rdi
  __int64 *v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  unsigned __int8 *v26; // rax
  __m128i v27; // xmm1
  __int64 v28; // rdx
  __int64 v29; // rcx
  int tinfo_size; // eax
  int v31; // eax
  unsigned __int8 *v32; // rbx
  __int64 v33; // rdi
  size_t v34; // r8
  unsigned __int64 v35; // r9
  __int64 v36; // [rsp+0h] [rbp-238h]
  size_t v37; // [rsp+0h] [rbp-238h]
  __int64 v38; // [rsp+8h] [rbp-230h]
  int v39; // [rsp+10h] [rbp-228h]
  unsigned __int64 v40; // [rsp+10h] [rbp-228h]
  int v41; // [rsp+1Ch] [rbp-21Ch]
  int v42; // [rsp+28h] [rbp-210h]
  size_t na; // [rsp+30h] [rbp-208h]
  size_t n; // [rsp+30h] [rbp-208h]
  size_t nb; // [rsp+30h] [rbp-208h]
  void *src; // [rsp+38h] [rbp-200h]
  size_t v47; // [rsp+40h] [rbp-1F8h]
  unsigned __int64 v48; // [rsp+40h] [rbp-1F8h]
  unsigned __int8 v49; // [rsp+57h] [rbp-1E1h] BYREF
  __int64 v50; // [rsp+58h] [rbp-1E0h] BYREF
  _QWORD v51[2]; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned __int64 v52; // [rsp+70h] [rbp-1C8h] BYREF
  __int64 v53; // [rsp+78h] [rbp-1C0h]
  int v54; // [rsp+80h] [rbp-1B8h]
  char v55; // [rsp+84h] [rbp-1B4h]
  unsigned __int64 v56; // [rsp+88h] [rbp-1B0h] BYREF
  __int128 v57; // [rsp+90h] [rbp-1A8h] BYREF
  __int128 v58; // [rsp+A0h] [rbp-198h]
  __int64 v59; // [rsp+B0h] [rbp-188h]
  __int128 v60; // [rsp+B8h] [rbp-180h]
  __int128 v61; // [rsp+C8h] [rbp-170h]
  __int128 v62; // [rsp+D8h] [rbp-160h]
  __m128i v63; // [rsp+E8h] [rbp-150h]
  int v64; // [rsp+F8h] [rbp-140h]
  unsigned __int8 v65[16]; // [rsp+100h] [rbp-138h] BYREF
  __int64 v66; // [rsp+110h] [rbp-128h]
  void *dest; // [rsp+120h] [rbp-118h] BYREF
  unsigned __int64 v68; // [rsp+128h] [rbp-110h]
  unsigned __int64 v69; // [rsp+130h] [rbp-108h]
  int v70; // [rsp+148h] [rbp-F0h]
  char v71[24]; // [rsp+150h] [rbp-E8h] BYREF
  char v72[24]; // [rsp+1A0h] [rbp-98h] BYREF
  char v73; // [rsp+1F0h] [rbp-48h] BYREF
  unsigned __int64 v74; // [rsp+1F8h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(int *)(v3 + 312) <= 5 )
    return 0;
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 1344) + 8LL) )
  {
    v13 = *(_QWORD *)(a2 + 24);
    LODWORD(v53) = 0;
    v52 = v13;
    if ( (sub_137670(v3, (__int64)&v52) & 7) != 0 )
      return 0;
  }
  v57 = 0;
  v58 = 0;
  v60 = 0;
  v62 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424810);
  v52 = 0xFFFFFFFF00000000LL;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0xFFFFFFFF00000000LL;
  v59 = 0;
  v64 = 16;
  v61 = -1;
  v63 = si128;
  v4 = sub_186840((__int64)&v52, a1, a2, 1, si128);
  if ( !(_BYTE)v4 )
    goto LABEL_9;
  if ( (_BYTE)v56 == 4 )
    goto LABEL_9;
  if ( !BYTE8(v62) )
    goto LABEL_9;
  v38 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL);
  if ( (get_tinfo_property() & 0xF) == 9 )
    goto LABEL_9;
  tinfo_property = get_tinfo_property();
  if ( (tinfo_property & 0x3E) != 0 && (tinfo_property & 0xFu) <= 8 )
    goto LABEL_9;
  v50 = -1;
  if ( !(unsigned __int8)sub_32F330(&v56, &v50) || v50 + SHIDWORD(v56) <= *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) )
  {
LABEL_27:
    v41 = 0;
    v15 = a2;
    v42 = get_tinfo_size() - v62;
    for ( i = sub_184590(*(_QWORD *)(v38 + 96), &v49, a1, a2);
          i && (a2 == v15 || v49 == v63.m128i_i32[3]);
          i = sub_184590(*(_QWORD *)(v38 + 96), &v49, a1, v15) )
    {
      v39 = v41 + i;
      if ( v50 != -1 && v41 + i + v50 > *(_QWORD *)(*(_QWORD *)(a1 + 64) + 144LL) )
        goto LABEL_9;
      v25 = (unsigned int)v39;
      if ( v42 < v39 )
        break;
      if ( (unsigned int)(*(_DWORD *)v15 - 56) <= 1 )
      {
        v24 = 32;
        if ( *(_BYTE *)(v15 + 32) == 11 )
          v24 = (*(_DWORD *)(*(_QWORD *)(v15 + 72) + 280LL) & 0x80) == 0 ? 64 : 32;
        v64 |= v24;
      }
      if ( a2 != v15 )
      {
        v17 = v58;
        v18 = *((_QWORD *)&v57 + 1);
        if ( *((_QWORD *)&v58 + 1) < (unsigned __int64)(v58 + 1) )
        {
          *((_QWORD *)&v57 + 1) = qvector_reserve((__int64)&v57 + 8, *((__int64 *)&v57 + 1), v58 + 1, 8);
          v18 = *((_QWORD *)&v57 + 1);
          v17 = v58;
        }
        *(_QWORD *)(v18 + 8 * v17) = v15;
        *(_QWORD *)&v58 = v58 + 1;
      }
      v63.m128i_i32[3] = v49;
      if ( !(unsigned __int8)sub_183A20((__int64 *)v38, (unsigned __int64)&v56, HIDWORD(v56), v25) )
        goto LABEL_9;
      *((_QWORD *)&v21 + 1) = a2;
      *(_QWORD *)&v21 = a1;
      v22 = sub_185BD0(v21, (__int64)&v56, 1, v19, v20);
      v15 = (__int64)v22;
      if ( !v22 || (*((_BYTE *)v22 + 4) & 0x10) != 0 )
        goto LABEL_50;
      v51[1] = 0;
      v51[0] = 0xFFFFFFFF00000000LL;
      if ( !(unsigned __int8)sub_184280((__int64)v51, a1, (__int64)v22, 0, 1, si128)
        || (v23 = sub_183400(v38, (__int64)&v56, (__int64)v51), v23 == -1) )
      {
        sub_11CDA0((__int64)v51);
LABEL_50:
        v41 = v39;
        break;
      }
      if ( v39 <= v23 )
      {
        if ( !under_debugger )
          sub_383060(52546);
        BUG();
      }
      v41 = v39 - v23;
      sub_125180((__int64)&v56, (unsigned __int8 *)v51);
      sub_11CDA0((__int64)v51);
    }
    if ( !(_QWORD)v58
      || (v64 & 0x60) == 0
      && *(_DWORD *)(v38 + 88) + 1 > v41
      && ((get_tinfo_property() & 0xF) != 0xB
       || v41 != get_tinfo_size()
       || (int)get_tinfo_property() <= 2
       || (__int64)v58 + 1 >= (unsigned __int64)(v41 / (int)get_tinfo_property())) )
    {
      goto LABEL_9;
    }
    v26 = v65;
    v27 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    do
    {
      *((_DWORD *)v26 + 1) = -1;
      v26 += 80;
      *((_WORD *)v26 - 40) = 0;
      *((_WORD *)v26 - 39) = 0;
      *((_QWORD *)v26 - 9) = 0;
      *((__m128i *)v26 - 4) = v27;
      *((_QWORD *)v26 - 6) = 0;
      *(_OWORD *)(v26 - 40) = 0;
      *((_DWORD *)v26 - 6) = 0;
      *((_QWORD *)v26 - 2) = 0;
      *((_DWORD *)v26 - 2) = 0;
    }
    while ( v26 != (unsigned __int8 *)&v73 );
    if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
    {
      v37 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 24LL);
      sub_125180((__int64)v65, (unsigned __int8 *)v37);
      v66 = *(_QWORD *)(v37 + 16);
      copy_tinfo_t();
      v34 = v37;
      if ( &dest != (void **)(v37 + 32) )
      {
        v35 = *(_QWORD *)(v37 + 40);
        if ( v35 && (n = v35 - 1, v35 != 1) )
        {
          src = *(void **)(v37 + 32);
          if ( v69 < v35 )
          {
            v48 = *(_QWORD *)(v37 + 40);
            dest = (void *)qvector_reserve((__int64)&dest, (__int64)dest, v35, 1);
            v34 = v37;
            v35 = v48;
          }
          v47 = v34;
          v68 = v35;
          v40 = v35;
          memmove(dest, src, n);
          v34 = v47;
          *((char *)dest + v40 - 1) = 0;
        }
        else
        {
          v68 = 0;
        }
      }
      nb = v34;
      copy_argloc();
      v70 = *(_DWORD *)(nb + 72);
    }
    else
    {
      if ( !(unsigned __int8)sub_185AA0(a1, a2) )
      {
        v4 = 0;
LABEL_62:
        v32 = (unsigned __int8 *)&v73;
        do
        {
          v32 -= 80;
          cleanup_argloc();
          v33 = *((_QWORD *)v32 + 4);
          if ( v33 )
          {
            *((_QWORD *)v32 + 5) = 0;
            qfree(v33);
          }
          clear_tinfo_t();
          sub_11CDA0((__int64)v32);
        }
        while ( v32 != v65 );
        goto LABEL_10;
      }
      sub_11CA10((char *)v65, (char *)(a2 + 64));
      if ( *(_DWORD *)a2 != 1 )
        sub_11C950(v65, v38, v28, v29);
      v66 = *(_QWORD *)(a2 + 24);
    }
    copy_tinfo_t();
    v51[0] = 7;
    copy_tinfo_t();
    clear_tinfo_t();
    na = *(_QWORD *)(a2 + 24);
    tinfo_size = get_tinfo_size();
    sub_120A10((__int64)v71, v38, v63.m128i_i32[3], tinfo_size, na, 1);
    v51[0] = 7;
    copy_tinfo_t();
    clear_tinfo_t();
    v36 = *(_QWORD *)(a2 + 24);
    v31 = get_tinfo_size();
    sub_120A10((__int64)v72, v38, v41, v31, v36, 2);
    sub_186120(a1, a2, (__int64)&v52, 3, v65, 2u);
    goto LABEL_62;
  }
  if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    v50 = -1;
    goto LABEL_27;
  }
LABEL_9:
  v4 = 0;
LABEL_10:
  clear_tinfo_t();
  v8 = v59;
  if ( v59 )
  {
    v9 = v60;
    if ( (_QWORD)v60 )
    {
      v10 = 0;
      do
      {
        v11 = (__int64 *)(v8 + 40 * v10);
        v12 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v12);
          v8 = v59;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v60 = 0;
    qfree(v8);
  }
  if ( *((_QWORD *)&v57 + 1) )
  {
    *(_QWORD *)&v58 = 0;
    qfree(*((__int64 *)&v57 + 1));
  }
  sub_11CDA0((__int64)&v56);
  sub_11CDA0((__int64)&v52);
  return v4;
}
