__int64 __fastcall sub_553820(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 *v4; // rax
  _QWORD *v5; // r15
  __int64 *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  __int64 v10; // r12
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rcx
  int tinfo_udt_member; // eax
  int v16; // r8d
  size_t v17; // r9
  const void *v18; // r8
  void *v19; // rdi
  size_t v20; // r15
  const void *v21; // r9
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // r9
  size_t v26; // r12
  char *v27; // r9
  __m128i v28; // xmm0
  __int64 v29; // rax
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __int64 v32; // rax
  __int64 v33; // rbx
  void *v34; // r12
  __int64 v35; // [rsp+10h] [rbp-180h]
  const void *v36; // [rsp+10h] [rbp-180h]
  int v37; // [rsp+10h] [rbp-180h]
  size_t v38; // [rsp+10h] [rbp-180h]
  int v39; // [rsp+10h] [rbp-180h]
  int srca; // [rsp+18h] [rbp-178h]
  void *srcb; // [rsp+18h] [rbp-178h]
  const void *src; // [rsp+18h] [rbp-178h]
  int srcd; // [rsp+18h] [rbp-178h]
  char *srcc; // [rsp+18h] [rbp-178h]
  __int64 v45; // [rsp+20h] [rbp-170h]
  __int64 v46; // [rsp+28h] [rbp-168h]
  unsigned __int64 v47; // [rsp+28h] [rbp-168h]
  unsigned __int64 v48; // [rsp+28h] [rbp-168h]
  int v49; // [rsp+28h] [rbp-168h]
  char *v50; // [rsp+28h] [rbp-168h]
  size_t n; // [rsp+30h] [rbp-160h]
  size_t na; // [rsp+30h] [rbp-160h]
  size_t nb; // [rsp+30h] [rbp-160h]
  _QWORD *v54; // [rsp+38h] [rbp-158h]
  int v55; // [rsp+40h] [rbp-150h]
  int v56; // [rsp+44h] [rbp-14Ch] BYREF
  unsigned __int64 v57; // [rsp+48h] [rbp-148h]
  int v58[2]; // [rsp+58h] [rbp-138h] BYREF
  __int64 v59; // [rsp+60h] [rbp-130h] BYREF
  __int64 v60; // [rsp+68h] [rbp-128h] BYREF
  __int128 v61; // [rsp+70h] [rbp-120h] BYREF
  __int64 v62; // [rsp+80h] [rbp-110h] BYREF
  int v63; // [rsp+88h] [rbp-108h]
  __int16 v64; // [rsp+8Ch] [rbp-104h]
  _QWORD v65[2]; // [rsp+90h] [rbp-100h] BYREF
  _QWORD v66[2]; // [rsp+A0h] [rbp-F0h] BYREF
  _QWORD v67[2]; // [rsp+B0h] [rbp-E0h] BYREF
  __int64 v68; // [rsp+C0h] [rbp-D0h] BYREF
  __int64 v69; // [rsp+C8h] [rbp-C8h] BYREF
  void *v70; // [rsp+D0h] [rbp-C0h]
  __int128 v71; // [rsp+D8h] [rbp-B8h]
  void *ptr; // [rsp+E8h] [rbp-A8h]
  __int128 v73; // [rsp+F0h] [rbp-A0h]
  __int128 v74; // [rsp+100h] [rbp-90h] BYREF
  __m128i v75; // [rsp+118h] [rbp-78h] BYREF
  __m128i v76; // [rsp+128h] [rbp-68h] BYREF
  int v77; // [rsp+138h] [rbp-58h]
  __int64 v78; // [rsp+140h] [rbp-50h]
  char v79; // [rsp+148h] [rbp-48h]
  unsigned __int64 v80; // [rsp+158h] [rbp-38h]

  v57 = a3;
  v56 = a4;
  v80 = __readfsqword(0x28u);
  v4 = (__int64 *)sub_53CF90(*(__int64 **)(*(_QWORD *)a1 + 1824LL), a3);
  if ( v4
    && (v5 = (_QWORD *)*v4,
        v6 = v4,
        v54 = (_QWORD *)*v4,
        v7 = sub_552F80(a1, (unsigned __int64 *)a2, (unsigned __int64 *)v58, &v56, *v4),
        v8 = v7,
        v7 != -1) )
  {
    v45 = 144LL * (int)v7;
    v10 = *v5 + v45;
    *(_QWORD *)a2 = *(_QWORD *)v10;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(v10 + 8);
    n = a2 + 16;
    if ( a2 + 16 != v10 + 16 )
    {
      v11 = *(_QWORD *)(v10 + 24);
      if ( !v11 || (v20 = v11 - 1, v11 == 1) )
      {
        *(_QWORD *)(a2 + 24) = 0;
      }
      else
      {
        v21 = *(const void **)(v10 + 16);
        v22 = *(void **)(a2 + 16);
        if ( *(_QWORD *)(a2 + 32) < v11 )
        {
          srcb = *(void **)(v10 + 16);
          v48 = *(_QWORD *)(v10 + 24);
          v24 = qvector_reserve(n, *(_QWORD *)(a2 + 16), v48, 1);
          v21 = srcb;
          v11 = v48;
          *(_QWORD *)(a2 + 16) = v24;
          v22 = (void *)v24;
        }
        *(_QWORD *)(a2 + 24) = v11;
        v47 = v11;
        memmove(v22, v21, v20);
        *(_BYTE *)(*(_QWORD *)(a2 + 16) + v47 - 1) = 0;
      }
    }
    v46 = a2 + 40;
    if ( a2 + 40 != v10 + 40 )
    {
      v12 = *(_QWORD *)(v10 + 48);
      if ( !v12 || (v17 = v12 - 1, v12 == 1) )
      {
        *(_QWORD *)(a2 + 48) = 0;
      }
      else
      {
        v18 = *(const void **)(v10 + 40);
        v19 = *(void **)(a2 + 40);
        if ( *(_QWORD *)(a2 + 56) < v12 )
        {
          v36 = *(const void **)(v10 + 40);
          v23 = qvector_reserve(v46, *(_QWORD *)(a2 + 40), *(_QWORD *)(v10 + 48), 1);
          v18 = v36;
          v17 = v12 - 1;
          *(_QWORD *)(a2 + 40) = v23;
          v19 = (void *)v23;
        }
        *(_QWORD *)(a2 + 48) = v12;
        memmove(v19, v18, v17);
        *(_BYTE *)(*(_QWORD *)(a2 + 40) + v12 - 1) = 0;
      }
    }
    copy_tinfo_t(a2 + 64);
    *(__m128i *)(a2 + 72) = _mm_loadu_si128((const __m128i *)(v10 + 72));
    *(__m128i *)(a2 + 88) = _mm_loadu_si128((const __m128i *)(v10 + 88));
    *(__m128i *)(a2 + 104) = _mm_loadu_si128((const __m128i *)(v10 + 104));
    *(_DWORD *)(a2 + 120) = *(_DWORD *)(v10 + 120);
    *(_DWORD *)(a2 + 128) = *(_DWORD *)(v10 + 128);
    v13 = *(_DWORD *)(v10 + 132);
    *(_DWORD *)(a2 + 132) = v13;
    *(_BYTE *)(a2 + 136) = *(_BYTE *)(v10 + 136);
    if ( (v13 & 0x20) != 0 && (v56 & 0x1000000F) == 0x10000000 )
    {
      v79 = 0;
      v14 = *(_QWORD *)v58 - *(_QWORD *)a2;
      v69 = 0;
      v70 = nullptr;
      ptr = nullptr;
      v76.m128i_i64[1] = 1;
      v77 = -1;
      v78 = 0;
      *(_QWORD *)v58 = v14;
      v68 = v14;
      v35 = v14;
      srca = v56;
      v71 = 0;
      v73 = 0;
      v74 = 0;
      tinfo_udt_member = find_tinfo_udt_member((int)&v68);
      v16 = srca;
      if ( tinfo_udt_member != -1 && (v78 & 0x10000000000LL) != 0 && v35 == v68 )
      {
        v25 = v71;
        *(__m128 *)a2 = _mm_loadh_ps((const double *)&v69);
        if ( v25 && (v26 = v25 - 1, v25 != 1) )
        {
          src = v70;
          if ( *(_QWORD *)(a2 + 32) < v25 )
          {
            v55 = v16;
            v38 = v25;
            *(_QWORD *)(a2 + 16) = qvector_reserve(n, *(_QWORD *)(a2 + 16), v25, 1);
            v16 = v55;
            v25 = v38;
          }
          *(_QWORD *)(a2 + 24) = v25;
          v37 = v16;
          nb = v25;
          memmove(*(void **)(a2 + 16), src, v26);
          v16 = v37;
          *(_BYTE *)(*(_QWORD *)(a2 + 16) + nb - 1) = 0;
        }
        else
        {
          *(_QWORD *)(a2 + 24) = 0;
        }
        v27 = (char *)v73;
        if ( (_QWORD)v73 && (na = v73 - 1, (_QWORD)v73 != 1) )
        {
          v34 = ptr;
          if ( *(_QWORD *)(a2 + 56) < (unsigned __int64)v73 )
          {
            v39 = v16;
            srcc = (char *)v73;
            *(_QWORD *)(a2 + 40) = qvector_reserve(v46, *(_QWORD *)(a2 + 40), v73, 1);
            v16 = v39;
            v27 = srcc;
          }
          *(_QWORD *)(a2 + 48) = v27;
          srcd = v16;
          v50 = v27;
          memmove(*(void **)(a2 + 40), v34, na);
          v16 = srcd;
          v50[*(_QWORD *)(a2 + 40) - 1] = 0;
        }
        else
        {
          *(_QWORD *)(a2 + 48) = 0;
        }
        v49 = v16;
        copy_tinfo_t(a2 + 64);
        v28 = _mm_loadu_si128((const __m128i *)((char *)&v74 + 8));
        *(_DWORD *)(a2 + 120) = v77;
        v29 = v78;
        *(__m128i *)(a2 + 72) = v28;
        v30 = _mm_loadu_si128(&v75);
        *(_QWORD *)(a2 + 128) = v29;
        LOBYTE(v29) = v79;
        *(__m128i *)(a2 + 88) = v30;
        v31 = _mm_loadu_si128(&v76);
        *(_BYTE *)(a2 + 136) = v29;
        *(__m128i *)(a2 + 104) = v31;
        v32 = *(_QWORD *)(*v54 + v45) + *(_QWORD *)a2;
        *(_QWORD *)a2 = v32;
        if ( v49 >= 0 )
        {
          v33 = *(_QWORD *)v6[4];
          v65[1] = v32;
          v65[0] = off_2B2E130;
          v66[0] = 0;
          v66[1] = 0;
          v67[0] = 0;
          copy_tinfo_t(v67);
          if ( (unsigned __int8)sub_554950((int)a2 + 64, 0, v33, (unsigned int)v65, *(_QWORD *)a2, (int)a2 + 64, 1) )
          {
            v59 = 0;
            v60 = 0;
            v61 = 0;
            copy_tinfo_t((char *)&v61 + 8);
            v62 = 0;
            copy_tinfo_t(&v62);
            v64 = 0;
            v63 = 0;
            clear_tinfo_t(&v60);
            clear_tinfo_t(&v59);
            copy_tinfo_t(&v61);
            create_tinfo(a2 + 64, 10, 10, &v61);
            clear_tinfo_t(&v62);
            clear_tinfo_t((char *)&v61 + 8);
            clear_tinfo_t(&v61);
          }
          v65[0] = off_2B2E130;
          clear_tinfo_t(v67);
          clear_tinfo_t(v66);
        }
      }
      clear_tinfo_t(&v74);
      if ( ptr )
      {
        *(_QWORD *)&v73 = 0;
        qfree(ptr);
      }
      if ( v70 )
      {
        *(_QWORD *)&v71 = 0;
        qfree(v70);
      }
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v8;
}
