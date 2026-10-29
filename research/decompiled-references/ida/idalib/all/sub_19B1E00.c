void __fastcall sub_19B1E00(__int64 a1, unsigned int a2, __int64 a3, __m128i a4, double a5)
{
  unsigned int v8; // eax
  bool v9; // zf
  unsigned int v10; // r13d
  size_t v11; // rax
  _BYTE *v12; // rdi
  size_t v13; // rdx
  size_t *v14; // rdi
  size_t v15; // rdx
  size_t v16; // rcx
  void *v17; // rdi
  __int64 *v18; // r12
  unsigned __int64 p_src; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 *v23; // rbx
  unsigned __int64 *v24; // r13
  unsigned int v25; // eax
  unsigned int v26; // eax
  __int64 *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  void *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // r8
  __int64 v38; // r9
  void *v39; // rax
  _QWORD *v40; // rax
  size_t v41; // r13
  __int64 v42; // rax
  __int64 *v43; // rbx
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  unsigned __int64 *v46; // r8
  void *v47; // rdi
  int v48; // eax
  _BYTE *v49; // rbx
  __int64 *v50; // r9
  size_t v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // r8
  __int64 v56; // r9
  void *v57; // rax
  _QWORD *v58; // rax
  void *v59; // rax
  size_t v60; // rdx
  int v61; // eax
  int v62; // eax
  _QWORD *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 *v66; // rdx
  __int64 *v67; // rdi
  int v68; // eax
  __int64 *v69; // rdi
  __int64 *v70; // [rsp+8h] [rbp-140h] BYREF
  __int64 *v71; // [rsp+10h] [rbp-138h]
  _QWORD *v72; // [rsp+18h] [rbp-130h]
  void *src; // [rsp+20h] [rbp-128h] BYREF
  size_t n; // [rsp+28h] [rbp-120h]
  _QWORD v75[2]; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v76; // [rsp+40h] [rbp-108h] BYREF
  char v77; // [rsp+48h] [rbp-100h]
  __int64 v78; // [rsp+4Ch] [rbp-FCh]
  char v79; // [rsp+54h] [rbp-F4h]
  void *v80; // [rsp+58h] [rbp-F0h] BYREF
  __m128 v81; // [rsp+60h] [rbp-E8h] BYREF
  char v82; // [rsp+78h] [rbp-D0h]
  unsigned __int64 v83; // [rsp+80h] [rbp-C8h] BYREF
  char v84; // [rsp+88h] [rbp-C0h]
  _BYTE v85[12]; // [rsp+8Ch] [rbp-BCh]
  void *dest; // [rsp+98h] [rbp-B0h] BYREF
  size_t v87[2]; // [rsp+A0h] [rbp-A8h] BYREF
  char v88; // [rsp+B8h] [rbp-90h]
  char v89; // [rsp+F8h] [rbp-50h]
  unsigned int v90; // [rsp+100h] [rbp-48h]
  char v91; // [rsp+104h] [rbp-44h]

  v8 = sub_15F0EF0(a1, a2, 0, a4, a5);
  v9 = *(_BYTE *)(a3 + 56) == 0;
  v76 = 0;
  v10 = v8;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = &v81.m128_u16[4];
  v81.m128_u64[0] = 0;
  v81.m128_i8[8] = 0;
  v82 = 0;
  if ( v9 )
  {
    v11 = j__strlen("[]");
    LODWORD(v83) = v10;
    HIDWORD(v83) = v10;
    dest = &v87[1];
    v71 = (__int64 *)&v87[1];
    src = v75;
    v70 = v75;
    *(_QWORD *)v85 = 0;
    v85[8] = 0;
    v87[0] = 0;
    LOBYTE(v87[1]) = 0;
    v88 = 0;
    v84 = 0;
    sub_19A0BE0(&src, "[]", (__int64)&aUnbalanced_0[v11 + 11]);
    v12 = dest;
    if ( src == v75 )
    {
      v51 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = v75[0];
        else
          memcpy(dest, src, n);
        v51 = n;
        v12 = dest;
      }
      v87[0] = v51;
      v12[v51] = 0;
      v12 = src;
    }
    else
    {
      if ( dest == v71 )
      {
        v70 = (__int64 *)v75[0];
        dest = src;
        *(__m128 *)v87 = _mm_loadh_ps((const double *)&v70);
      }
      else
      {
        v70 = (__int64 *)v75[0];
        v13 = v87[1];
        dest = src;
        *(__m128 *)v87 = _mm_loadh_ps((const double *)&v70);
        if ( v12 )
        {
          src = v12;
          v75[0] = v13;
          goto LABEL_6;
        }
      }
      v12 = v75;
      src = v75;
    }
LABEL_6:
    n = 0;
    *v12 = 0;
    if ( src != v75 )
      operator delete(src);
    v88 = 0;
    v14 = (size_t *)v80;
    v15 = v87[0];
    v76 = v83;
    v77 = v84;
    v78 = *(_QWORD *)v85;
    v79 = v85[8];
    if ( dest == &v87[1] )
    {
      if ( v87[0] )
      {
        if ( v87[0] == 1 )
          *(_BYTE *)v80 = v87[1];
        else
          memcpy(v80, dest, v87[0]);
        v15 = v87[0];
        v14 = (size_t *)v80;
      }
      v81.m128_u64[0] = v15;
      *((_BYTE *)v14 + v15) = 0;
      v14 = (size_t *)dest;
    }
    else
    {
      if ( v80 == &v81.m128_u16[4] )
      {
        v70 = (__int64 *)v87[1];
        v80 = dest;
        v81 = _mm_loadh_ps((const double *)&v70);
      }
      else
      {
        v70 = (__int64 *)v87[1];
        v16 = v81.m128_u64[1];
        v80 = dest;
        v81 = _mm_loadh_ps((const double *)&v70);
        if ( v14 )
        {
          dest = v14;
          v87[1] = v16;
          goto LABEL_12;
        }
      }
      v14 = &v87[1];
      dest = &v87[1];
    }
LABEL_12:
    v87[0] = 0;
    *(_BYTE *)v14 = 0;
    v17 = dest;
    v82 = v88;
    if ( dest == &v87[1] )
      goto LABEL_14;
    goto LABEL_13;
  }
  v26 = sub_13DC8D0(a2, 20, *(__int64 **)(a1 + 272), *(_QWORD *)(a1 + 232), 1, a4, a5);
  if ( v26 )
  {
    v83 = __PAIR64__(v26, v10);
    dest = &v87[1];
    v70 = (__int64 *)&v87[1];
    *(_QWORD *)v85 = 0;
    v85[8] = 0;
    v87[0] = 0;
    LOBYTE(v87[1]) = 0;
    v88 = 0;
    v84 = 1;
    v76 = __PAIR64__(v26, v10);
    v77 = 1;
    v78 = 0;
    v79 = 0;
    sub_A0AAD0((__int64)&v80, &dest);
    v17 = dest;
    v82 = v88;
    if ( dest != &v87[1] )
LABEL_13:
      operator delete(v17);
  }
LABEL_14:
  v18 = (__int64 *)(a1 + 8);
  p_src = (unsigned __int64)v18;
  sub_168B9F0((__int64)&v83, v18, a2, 0x1BB7u, 0);
  if ( v89 )
  {
    p_src = *(unsigned __int8 *)(a3 + 56);
    sub_AE9DF0((unsigned __int8 **)v87, p_src, 2u);
  }
  else
  {
    if ( !v91 )
      goto LABEL_16;
    v36 = sub_168B9E0(&v83);
    v39 = *(void **)&v85[4];
    if ( *(_QWORD *)&v85[4] )
      v39 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v85[4] + 32LL))(*(_QWORD *)&v85[4]);
    src = v39;
    v40 = sub_1587BC0(v36, (__int64 *)&src, v34, v35, v37, v38);
    p_src = *(unsigned __int8 *)(a3 + 56);
    sub_AE9DF0((unsigned __int8 **)(*v40 + 32LL * v90 + 8), p_src, 2u);
  }
  if ( v89 )
  {
    if ( (_DWORD)v76 )
    {
      p_src = HIDWORD(v76);
      if ( HIDWORD(v76) )
      {
        v41 = v87[0];
        if ( v87[0] )
        {
          v42 = *(unsigned int *)(v87[0] + 536);
          v43 = *(__int64 **)(v87[0] + 528);
          p_src = *(unsigned int *)(v87[0] + 540);
          v44 = v42 + 1;
          v45 = (unsigned __int64)&v43[8 * v42];
        }
        else
        {
          v60 = v87[1];
          v61 = *(_DWORD *)(v87[1] + 14976);
          if ( v61 )
          {
            v64 = (unsigned int)(v61 - 1);
            *(_DWORD *)(v87[1] + 14976) = v64;
            v41 = *(_QWORD *)(v60 + 8 * v64 + 14848);
            v65 = *(unsigned int *)(v41 + 536);
            *(_BYTE *)v41 = 0;
            v66 = *(__int64 **)(v41 + 528);
            *(_DWORD *)(v41 + 424) = 0;
            v43 = &v66[8 * v65];
            if ( v66 != v43 )
            {
              do
              {
                while ( 1 )
                {
                  v43 -= 8;
                  v67 = (__int64 *)v43[3];
                  if ( v67 == v43 + 5 )
                    break;
                  v70 = v66;
                  operator delete(v67);
                  v66 = v70;
                  if ( v70 == v43 )
                    goto LABEL_84;
                }
              }
              while ( v66 != v43 );
LABEL_84:
              v43 = *(__int64 **)(v41 + 528);
            }
            *(_DWORD *)(v41 + 536) = 0;
            p_src = *(unsigned int *)(v41 + 540);
          }
          else
          {
            p_src = 6;
            v41 = operator new(0x3A0u);
            *(_BYTE *)v41 = 0;
            *(_QWORD *)(v41 + 96) = v41 + 112;
            v43 = (__int64 *)(v41 + 544);
            *(_QWORD *)(v41 + 128) = v41 + 144;
            *(_QWORD *)(v41 + 160) = v41 + 176;
            *(_QWORD *)(v41 + 192) = v41 + 208;
            *(_QWORD *)(v41 + 224) = v41 + 240;
            *(_QWORD *)(v41 + 256) = v41 + 272;
            *(_QWORD *)(v41 + 288) = v41 + 304;
            *(_QWORD *)(v41 + 320) = v41 + 336;
            *(_QWORD *)(v41 + 352) = v41 + 368;
            *(_QWORD *)(v41 + 384) = v41 + 400;
            *(_QWORD *)(v41 + 416) = v41 + 432;
            *(_QWORD *)(v41 + 104) = 0;
            *(_BYTE *)(v41 + 112) = 0;
            *(_QWORD *)(v41 + 136) = 0;
            *(_BYTE *)(v41 + 144) = 0;
            *(_QWORD *)(v41 + 168) = 0;
            *(_BYTE *)(v41 + 176) = 0;
            *(_QWORD *)(v41 + 200) = 0;
            *(_BYTE *)(v41 + 208) = 0;
            *(_QWORD *)(v41 + 232) = 0;
            *(_BYTE *)(v41 + 240) = 0;
            *(_QWORD *)(v41 + 264) = 0;
            *(_BYTE *)(v41 + 272) = 0;
            *(_QWORD *)(v41 + 296) = 0;
            *(_BYTE *)(v41 + 304) = 0;
            *(_QWORD *)(v41 + 328) = 0;
            *(_BYTE *)(v41 + 336) = 0;
            *(_QWORD *)(v41 + 360) = 0;
            *(_BYTE *)(v41 + 368) = 0;
            *(_QWORD *)(v41 + 392) = 0;
            *(_BYTE *)(v41 + 400) = 0;
            *(_QWORD *)(v41 + 424) = 0x800000000LL;
            *(_QWORD *)(v41 + 528) = v41 + 544;
            *(_QWORD *)(v41 + 536) = 0x600000000LL;
          }
          v87[0] = v41;
          v45 = (unsigned __int64)v43;
          v44 = 1;
        }
        v46 = &v76;
        if ( v44 > p_src )
        {
          if ( v43 > (__int64 *)&v76 || v45 <= (unsigned __int64)&v76 )
          {
            v71 = (__int64 *)(v41 + 544);
            v70 = (__int64 *)(v41 + 528);
            p_src = sub_2237400(v41 + 528, v41 + 544, v44, 64, &src);
            sub_9EF810(v70, p_src);
            v68 = (int)src;
            v69 = *(__int64 **)(v41 + 528);
            if ( v69 == v71 )
            {
              *(_QWORD *)(v41 + 528) = p_src;
            }
            else
            {
              v70 = (__int64 *)src;
              free(v69);
              *(_QWORD *)(v41 + 528) = p_src;
              v68 = (int)v70;
            }
            *(_DWORD *)(v41 + 540) = v68;
            v46 = &v76;
            v45 = p_src + ((unsigned __int64)*(unsigned int *)(v41 + 536) << 6);
          }
          else
          {
            v72 = (_QWORD *)(v41 + 544);
            v71 = (__int64 *)(v41 + 528);
            v70 = (__int64 *)((char *)&v76 - (char *)v43);
            p_src = sub_2237400(v41 + 528, v41 + 544, v44, 64, &src);
            sub_9EF810(v71, p_src);
            v62 = (int)src;
            v63 = *(_QWORD **)(v41 + 528);
            if ( v63 != v72 )
            {
              v71 = (__int64 *)src;
              free(v63);
              v62 = (int)v71;
            }
            *(_QWORD *)(v41 + 528) = p_src;
            *(_DWORD *)(v41 + 540) = v62;
            v46 = (unsigned __int64 *)((char *)v70 + p_src);
            v45 = p_src + ((unsigned __int64)*(unsigned int *)(v41 + 536) << 6);
          }
        }
        v47 = (void *)(v45 + 40);
        *(_QWORD *)v45 = *v46;
        *(_DWORD *)(v45 + 8) = *((_DWORD *)v46 + 2);
        *(_QWORD *)(v45 + 12) = *(unsigned __int64 *)((char *)v46 + 12);
        v48 = *((_DWORD *)v46 + 5);
        *(_QWORD *)(v45 + 24) = v45 + 40;
        *(_DWORD *)(v45 + 20) = v48;
        v49 = (_BYTE *)v46[3];
        v50 = (__int64 *)v46[4];
        if ( &v49[(_QWORD)v50] && !v49 )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        if ( (unsigned __int64)v50 > 0xF )
        {
          if ( (__int64)v50 < 0 )
            std::__throw_length_error("basic_string::_M_create");
          v72 = (_QWORD *)v45;
          v71 = (__int64 *)v46;
          v70 = v50;
          v59 = (void *)operator new((unsigned __int64)v50 + 1);
          v45 = (unsigned __int64)v72;
          v50 = v70;
          v47 = v59;
          v46 = (unsigned __int64 *)v71;
          v72[3] = v59;
          *(_QWORD *)(v45 + 40) = v50;
        }
        else
        {
          if ( v50 == (__int64 *)((char *)&dword_0 + 1) )
          {
            *(_BYTE *)(v45 + 40) = *v49;
LABEL_45:
            *(_QWORD *)(v45 + 32) = v50;
            *((_BYTE *)v50 + (_QWORD)v47) = 0;
            *(_BYTE *)(v45 + 56) = *((_BYTE *)v46 + 56);
            ++*(_DWORD *)(v41 + 536);
            goto LABEL_16;
          }
          if ( !v50 )
            goto LABEL_45;
        }
        p_src = (unsigned __int64)v49;
        v72 = (_QWORD *)v45;
        v71 = (__int64 *)v46;
        v70 = v50;
        memcpy(v47, v49, (size_t)v50);
        v45 = (unsigned __int64)v72;
        v46 = (unsigned __int64 *)v71;
        v50 = v70;
        v47 = (void *)v72[3];
        goto LABEL_45;
      }
    }
  }
  else if ( v91 )
  {
    v54 = sub_168B9E0(&v83);
    v57 = *(void **)&v85[4];
    if ( *(_QWORD *)&v85[4] )
      v57 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v85[4] + 32LL))(*(_QWORD *)&v85[4]);
    p_src = (unsigned __int64)&src;
    src = v57;
    v58 = sub_1587BC0(v54, (__int64 *)&src, v52, v53, v55, v56);
    if ( (_DWORD)v76 && HIDWORD(v76) )
    {
      p_src = (unsigned __int64)&v76;
      sub_19A6C40((__int64 *)(*v58 + 32LL * v90 + 8), (unsigned __int64)&v76);
    }
  }
LABEL_16:
  sub_15F7200(&v83);
  v23 = *(unsigned __int64 **)(a3 + 8);
  v24 = &v23[*(unsigned int *)(a3 + 16)];
  v70 = (__int64 *)&src;
  while ( v24 != v23 )
  {
    v25 = sub_C00A40(*v23, p_src, v20, v21, v22);
    p_src = (unsigned __int64)v18;
    sub_168B9F0((__int64)&v83, v18, v25, 0x1682u, 0);
    if ( v89 )
    {
      p_src = *(unsigned __int8 *)(a3 + 56);
      sub_AE9DF0((unsigned __int8 **)v87, p_src, 2u);
    }
    else if ( v91 )
    {
      v27 = (__int64 *)sub_168B9E0(&v83);
      v31 = *(void **)&v85[4];
      if ( *(_QWORD *)&v85[4] )
      {
        v32 = **(_QWORD **)&v85[4];
        v71 = v27;
        v31 = (void *)(*(__int64 (__fastcall **)(_QWORD))(v32 + 32))(*(_QWORD *)&v85[4]);
        v27 = v71;
      }
      src = v31;
      v33 = sub_1587BC0((__int64)v27, v70, (__int64)v27, v28, v29, v30);
      p_src = *(unsigned __int8 *)(a3 + 56);
      sub_AE9DF0((unsigned __int8 **)(*v33 + 32LL * v90 + 8), p_src, 2u);
    }
    ++v23;
    sub_15F7200(&v83);
  }
  if ( v80 != &v81.m128_u16[4] )
    operator delete(v80);
}
