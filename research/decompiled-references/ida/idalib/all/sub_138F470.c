void __fastcall sub_138F470(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // rdi
  char *v11; // rax
  __int64 v12; // rdx
  size_t *v13; // rdi
  size_t v14; // rdx
  _BYTE *v15; // rdi
  unsigned __int64 v16; // rdx
  int v17; // eax
  int v18; // edx
  __int64 v19; // r9
  __int64 *v20; // r8
  size_t v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  void **p_dest; // r12
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  _BYTE *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  size_t v35; // rdx
  size_t v36; // rdx
  unsigned int v37; // esi
  int v38; // eax
  __int64 v39; // rax
  unsigned __int64 v40; // rsi
  __int64 i; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  _BYTE *v44; // rdi
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  size_t *v47; // rdi
  size_t v48; // rdx
  void *v49; // r12
  __m128i *v50; // rbx
  void *v51; // rdi
  int v52; // r15d
  __int64 v53; // rax
  __int64 *v54; // r12
  __m128i *v55; // rbx
  void *v56; // rdi
  int v57; // r15d
  __int64 v58; // rdx
  char v59; // dl
  size_t v60; // rdx
  unsigned __int64 v61; // rbp
  __int64 v62; // rax
  _QWORD *v63; // r15
  size_t v64; // rdx
  unsigned __int64 v65; // rbx
  __int64 v66; // rax
  _QWORD *v67; // r12
  char v68; // dl
  __int64 *v69; // rdi
  __int64 v70; // rcx
  _DWORD *v71; // rax
  _DWORD *v72; // rdx
  __int64 *v73; // rdi
  __int64 v74; // rcx
  _DWORD *v75; // rax
  _DWORD *v76; // rdx
  char *v77; // [rsp+0h] [rbp-188h] BYREF
  __int64 v78; // [rsp+8h] [rbp-180h]
  char *s[4]; // [rsp+10h] [rbp-178h] BYREF
  void *src; // [rsp+30h] [rbp-158h] BYREF
  size_t n; // [rsp+38h] [rbp-150h]
  _QWORD v82[2]; // [rsp+40h] [rbp-148h] BYREF
  void *dest; // [rsp+50h] [rbp-138h] BYREF
  __m128 v84; // [rsp+58h] [rbp-130h] BYREF
  void *v85; // [rsp+70h] [rbp-118h] BYREF
  __m128 v86; // [rsp+78h] [rbp-110h] BYREF
  __int64 v87; // [rsp+90h] [rbp-F8h]
  unsigned int v88; // [rsp+98h] [rbp-F0h]
  void *v89; // [rsp+A0h] [rbp-E8h]
  __m128 v90; // [rsp+A8h] [rbp-E0h] BYREF
  int v91; // [rsp+C0h] [rbp-C8h]
  void *ptr; // [rsp+D0h] [rbp-B8h] BYREF
  size_t v93[2]; // [rsp+D8h] [rbp-B0h] BYREF
  _BYTE v94[160]; // [rsp+E8h] [rbp-A0h] BYREF

  sub_FC5CB0((_DWORD *)a1, a2);
  if ( *(_QWORD *)(a1 + 1048) )
  {
    v8 = *(_QWORD *)a3;
    goto LABEL_3;
  }
  v28 = *(_QWORD *)a3;
  v29 = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
  v8 = *(_QWORD *)a3;
  if ( v29 )
  {
    v30 = *(unsigned int *)(v29 + 520);
    if ( (_DWORD)v30 )
    {
      LOBYTE(ptr) = 0;
      if ( (unsigned int)(v30 + 1) <= 1 )
      {
LABEL_96:
        v8 = v28;
        goto LABEL_3;
      }
      if ( (int)v30 < 0 )
      {
        v61 = (unsigned int)(-2 - v30);
        v62 = *(_QWORD *)(*(_QWORD *)(v29 + 320) + 8LL * ((unsigned int)(-2 - v30) >> 6));
        if ( _bittest64(&v62, v61) )
        {
          v63 = (_QWORD *)(*(_QWORD *)(v29 + 272) + 8 * ((unsigned __int64)(int)v61 >> 5));
          if ( *v63 )
          {
            v31 = *v63 + 24LL * ((-2 - (_BYTE)v30) & 0x1F);
            goto LABEL_34;
          }
          v69 = (__int64 *)(*(_QWORD *)(v29 + 288) & 0xFFFFFFFFFFFFFFF8LL);
          v70 = *v69;
          v69[10] += 768;
          v71 = (_DWORD *)((v70 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v69[1] >= (unsigned __int64)(v71 + 192) && v70 )
            *v69 = (__int64)(v71 + 192);
          else
            v71 = (_DWORD *)sub_986170((__int64)v69, 768, 768, 3, v6, v7);
          *v63 = v71;
          v72 = v71 + 192;
          do
          {
            *v71 = 0;
            v71 += 6;
            *((_OWORD *)v71 - 1) = 0;
            *((_QWORD *)v71 - 1) = 0;
          }
          while ( v71 != v72 );
          v59 = (char)ptr;
          v31 = *v63 + 24 * (v61 & 0x1F);
        }
        else
        {
          v31 = sub_101F930(v29, v61, &ptr);
          v59 = (char)ptr;
        }
        if ( v59 )
        {
LABEL_95:
          v28 = *(_QWORD *)a3;
          goto LABEL_96;
        }
      }
      else
      {
        v31 = *(_QWORD *)(v29 + 184) + 24 * v30;
      }
LABEL_34:
      if ( v31 && *(char *)(v31 + 3) >= 0 )
      {
        v32 = *(_QWORD *)((*(_QWORD *)(v31 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
        if ( !v32 )
        {
LABEL_81:
          v8 = *(_QWORD *)a3;
          goto LABEL_3;
        }
        while ( 1 )
        {
          v33 = *(_QWORD *)(v32 + 8);
          if ( !v33 )
            break;
          if ( (v33 & 4) == 0 )
            break;
          v34 = v33 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v34 )
            break;
          v32 = v34;
        }
        v46 = *(_QWORD *)v32;
        ptr = &v93[1];
        sub_138D020(&ptr, (_BYTE *)(v32 + 32), v32 + 32 + v46);
        v47 = *(size_t **)(a1 + 1040);
        if ( ptr == &v93[1] )
        {
          v60 = v93[0];
          if ( v93[0] )
          {
            if ( v93[0] == 1 )
              *(_BYTE *)v47 = v93[1];
            else
              memcpy(v47, ptr, v93[0]);
            v60 = v93[0];
            v47 = *(size_t **)(a1 + 1040);
          }
          *(_QWORD *)(a1 + 1048) = v60;
          *((_BYTE *)v47 + v60) = 0;
          v47 = (size_t *)ptr;
          goto LABEL_79;
        }
        if ( v47 == (size_t *)(a1 + 1056) )
        {
          v77 = (char *)v93[1];
          *(_QWORD *)(a1 + 1040) = ptr;
          *(__m128 *)(a1 + 1048) = _mm_loadh_ps((const double *)&v77);
        }
        else
        {
          v77 = (char *)v93[1];
          v48 = *(_QWORD *)(a1 + 1056);
          *(_QWORD *)(a1 + 1040) = ptr;
          *(__m128 *)(a1 + 1048) = _mm_loadh_ps((const double *)&v77);
          if ( v47 )
          {
            ptr = v47;
            v93[1] = v48;
            goto LABEL_79;
          }
        }
        v47 = &v93[1];
        ptr = &v93[1];
LABEL_79:
        v93[0] = 0;
        *(_BYTE *)v47 = 0;
        if ( ptr != &v93[1] )
          operator delete(ptr);
        goto LABEL_81;
      }
      goto LABEL_95;
    }
  }
LABEL_3:
  v9 = a3[3];
  v86.m128_i8[8] = 0;
  v90.m128_i8[8] = 0;
  v10 = *(_QWORD *)(v8 + 32);
  dest = &v84.m128_u16[4];
  v88 = v9;
  v91 = a2;
  v84.m128_u64[0] = 0;
  v84.m128_i8[8] = 0;
  v85 = &v86.m128_u16[4];
  v86.m128_u64[0] = 0;
  v89 = &v90.m128_u16[4];
  v90.m128_u64[0] = 0;
  v11 = sub_FD4050(v10, v9);
  ptr = &v93[1];
  sub_138D020(&ptr, v11, (__int64)&v11[v12]);
  v13 = (size_t *)v89;
  if ( ptr == &v93[1] )
  {
    v36 = v93[0];
    if ( v93[0] )
    {
      if ( v93[0] == 1 )
        *(_BYTE *)v89 = v93[1];
      else
        memcpy(v89, ptr, v93[0]);
      v36 = v93[0];
      v13 = (size_t *)v89;
    }
    v90.m128_u64[0] = v36;
    *((_BYTE *)v13 + v36) = 0;
    v13 = (size_t *)ptr;
  }
  else
  {
    if ( v89 == &v90.m128_u16[4] )
    {
      v77 = (char *)v93[1];
      v89 = ptr;
      v90 = _mm_loadh_ps((const double *)&v77);
    }
    else
    {
      v77 = (char *)v93[1];
      v14 = v90.m128_u64[1];
      v89 = ptr;
      v90 = _mm_loadh_ps((const double *)&v77);
      if ( v13 )
      {
        ptr = v13;
        v93[1] = v14;
        goto LABEL_7;
      }
    }
    v13 = &v93[1];
    ptr = &v93[1];
  }
LABEL_7:
  v93[0] = 0;
  *(_BYTE *)v13 = 0;
  if ( ptr != &v93[1] )
    operator delete(ptr);
  ptr = v94;
  *(__m128i *)v93 = _mm_load_si128((const __m128i *)&xmmword_23A8090);
  sub_FCA320((__int64)a3, &ptr);
  src = v82;
  sub_138D020(&src, ptr, (__int64)ptr + v93[0]);
  v15 = dest;
  if ( src == v82 )
  {
    v35 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v82[0];
      else
        memcpy(dest, src, n);
      v35 = n;
      v15 = dest;
    }
    v84.m128_u64[0] = v35;
    v15[v35] = 0;
    v15 = src;
    goto LABEL_13;
  }
  if ( dest == &v84.m128_u16[4] )
  {
    v77 = (char *)v82[0];
    dest = src;
    v84 = _mm_loadh_ps((const double *)&v77);
    goto LABEL_54;
  }
  v77 = (char *)v82[0];
  v16 = v84.m128_u64[1];
  dest = src;
  v84 = _mm_loadh_ps((const double *)&v77);
  if ( !v15 )
  {
LABEL_54:
    v15 = v82;
    src = v82;
    goto LABEL_13;
  }
  src = v15;
  v82[0] = v16;
LABEL_13:
  n = 0;
  *v15 = 0;
  if ( src != v82 )
    operator delete(src);
  sub_99BDC0(&v85, 0, v86.m128_u64[0], &byte_22F0C30, 0);
  v17 = a3[2];
  v87 = 0;
  if ( v17 && *(_QWORD *)(*(_QWORD *)a3 + 64LL) )
  {
    v18 = a3[2];
    v77 = *(char **)(*(_QWORD *)a3 + 64LL);
    sub_1022900((__int64)s, (__int64 *)v77, v18, 1);
    v20 = (__int64 *)v77;
    if ( s[0] )
    {
      v77 = s[0];
      v21 = strlen(s[0]);
      sub_99BDC0(&v85, 0, v86.m128_u64[0], v77, v21);
      v87 = *(__int64 *)((char *)&s[1] + 4);
      goto LABEL_19;
    }
    v37 = a3[2] & 0x7FFFFFFF;
    if ( v37 >= *((_DWORD *)v77 + 119) && v37 < *((_DWORD *)v77 + 120) )
    {
      v38 = *((_DWORD *)v77 + 118);
    }
    else
    {
      v38 = sub_101D590((__int64)v77, v37);
      v20 = (__int64 *)v77;
    }
    if ( v38 )
    {
      LOBYTE(src) = 0;
      if ( (unsigned int)(v38 + 1) > 1 )
      {
        if ( v38 < 0 )
        {
          v65 = (unsigned int)(-2 - v38);
          v66 = *(_QWORD *)(v20[40] + 8LL * ((unsigned int)(-2 - v38) >> 6));
          if ( _bittest64(&v66, v65) )
          {
            v67 = (_QWORD *)(v20[34] + 8 * ((unsigned __int64)(int)v65 >> 5));
            if ( *v67 )
            {
              v39 = *v67 + 24 * (v65 & 0x1F);
              goto LABEL_62;
            }
            v73 = (__int64 *)(v20[36] & 0xFFFFFFFFFFFFFFF8LL);
            v74 = *v73;
            v73[10] += 768;
            v75 = (_DWORD *)((v74 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( v73[1] >= (unsigned __int64)(v75 + 192) && v74 )
              *v73 = (__int64)(v75 + 192);
            else
              v75 = (_DWORD *)sub_986170((__int64)v73, 768, 768, 3, (__int64)v20, v19);
            *v67 = v75;
            v76 = v75 + 192;
            do
            {
              *v75 = 0;
              v75 += 6;
              *((_OWORD *)v75 - 1) = 0;
              *((_QWORD *)v75 - 1) = 0;
            }
            while ( v75 != v76 );
            v68 = (char)src;
            v39 = *v67 + 24 * (v65 & 0x1F);
          }
          else
          {
            v39 = sub_101F930((__int64)v20, v65, &src);
            v68 = (char)src;
          }
          if ( v68 )
            goto LABEL_19;
        }
        else
        {
          v39 = v20[23] + 24LL * (unsigned int)v38;
        }
LABEL_62:
        if ( !v39 )
          goto LABEL_19;
        if ( *(char *)(v39 + 3) < 0 )
          goto LABEL_19;
        v40 = *(_QWORD *)((*(_QWORD *)(v39 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
        if ( !v40 )
          goto LABEL_19;
        for ( i = *(_QWORD *)(v40 + 8); i; i = *(_QWORD *)(v42 + 8) )
        {
          if ( (i & 4) == 0 )
            break;
          v42 = i & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v42 )
            break;
          v40 = v42;
        }
        v43 = *(_QWORD *)v40;
        src = v82;
        sub_138D020(&src, (_BYTE *)(v40 + 32), v40 + 32 + v43);
        v44 = v85;
        if ( src == v82 )
        {
          v64 = n;
          if ( n )
          {
            if ( n == 1 )
              *(_BYTE *)v85 = v82[0];
            else
              memcpy(v85, src, n);
            v64 = n;
            v44 = v85;
          }
          v86.m128_u64[0] = v64;
          v44[v64] = 0;
          v44 = src;
          goto LABEL_73;
        }
        if ( v85 == &v86.m128_u16[4] )
        {
          v77 = (char *)v82[0];
          v85 = src;
          v86 = _mm_loadh_ps((const double *)&v77);
        }
        else
        {
          v77 = (char *)v82[0];
          v45 = v86.m128_u64[1];
          v85 = src;
          v86 = _mm_loadh_ps((const double *)&v77);
          if ( v44 )
          {
            src = v44;
            v82[0] = v45;
            goto LABEL_73;
          }
        }
        v44 = v82;
        src = v82;
LABEL_73:
        n = 0;
        *v44 = 0;
        if ( src != v82 )
          operator delete(src);
      }
    }
  }
LABEL_19:
  v22 = *(unsigned int *)(a1 + 72);
  v23 = *(_QWORD *)(a1 + 64);
  p_dest = &dest;
  v25 = v22 + 1;
  v26 = v23 + 120 * v22;
  if ( v22 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 76) )
  {
    v49 = (void *)(a1 + 80);
    if ( v23 > (unsigned __int64)&dest || v26 <= (unsigned __int64)&dest )
    {
      v77 = (char *)(a1 + 64);
      v55 = (__m128i *)sub_2237400(a1 + 64, a1 + 80, v25, 120, &src);
      sub_138F280((__int64)v77, v55);
      v56 = *(void **)(a1 + 64);
      v57 = (int)src;
      if ( v56 != v49 )
        free(v56);
      v58 = *(unsigned int *)(a1 + 72);
      *(_QWORD *)(a1 + 64) = v55;
      p_dest = &dest;
      *(_DWORD *)(a1 + 76) = v57;
      v26 = (unsigned __int64)v55 + 120 * v58;
    }
    else
    {
      v78 = a1 + 64;
      v77 = (char *)&dest - v23;
      v50 = (__m128i *)sub_2237400(a1 + 64, a1 + 80, v25, 120, &src);
      sub_138F280(v78, v50);
      v51 = *(void **)(a1 + 64);
      v52 = (int)src;
      if ( v51 != v49 )
        free(v51);
      v53 = *(unsigned int *)(a1 + 72);
      v54 = (__int64 *)v77;
      *(_QWORD *)(a1 + 64) = v50;
      *(_DWORD *)(a1 + 76) = v52;
      p_dest = (void **)((char *)v54 + (_QWORD)v50);
      v26 = (unsigned __int64)v50 + 120 * v53;
    }
  }
  *(_QWORD *)v26 = v26 + 16;
  sub_138D0E0((_QWORD *)v26, *p_dest, (__int64)p_dest[1] + (_QWORD)*p_dest);
  *(_QWORD *)(v26 + 32) = v26 + 48;
  sub_138D0E0((_QWORD *)(v26 + 32), p_dest[4], (__int64)p_dest[5] + (_QWORD)p_dest[4]);
  *(_DWORD *)(v26 + 64) = *((_DWORD *)p_dest + 16);
  *(_DWORD *)(v26 + 68) = *((_DWORD *)p_dest + 17);
  *(_DWORD *)(v26 + 72) = *((_DWORD *)p_dest + 18);
  *(_QWORD *)(v26 + 80) = v26 + 96;
  sub_138D0E0((_QWORD *)(v26 + 80), p_dest[10], (__int64)p_dest[11] + (_QWORD)p_dest[10]);
  v27 = ptr;
  *(_DWORD *)(v26 + 112) = *((_DWORD *)p_dest + 28);
  ++*(_DWORD *)(a1 + 72);
  if ( v27 != v94 )
    free(v27);
  if ( v89 != &v90.m128_u16[4] )
    operator delete(v89);
  if ( v85 != &v86.m128_u16[4] )
    operator delete(v85);
  if ( dest != &v84.m128_u16[4] )
    operator delete(dest);
}
