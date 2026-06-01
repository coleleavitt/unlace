void __fastcall sub_19B39E0(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r12d
  char *v3; // rbx
  size_t v4; // rax
  _BYTE *v5; // rdi
  unsigned __int64 v6; // rdx
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned int *v13; // r14
  _BYTE *v14; // rax
  __int64 *v15; // rsi
  signed __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rbx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rbx
  unsigned __int64 v29; // rax
  size_t v30; // rdx
  __int64 v31; // rdx
  int v32; // eax
  void *v33; // r14
  __int64 v34; // rbx
  void *v35; // rdi
  int v36; // r12d
  __int64 v37; // rdx
  __int64 *v38; // r14
  __int64 v39; // rax
  __int64 v40; // rbx
  unsigned __int64 v41; // r14
  unsigned __int64 v42; // rbx
  void *v43; // rdi
  __int64 v44; // rbx
  void *v45; // rdi
  int v46; // r12d
  __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rax
  void *v51; // r14
  __int64 v52; // rbx
  void *v53; // rdi
  int v54; // r12d
  __int64 v55; // rax
  __int64 *v56; // r14
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 *v59; // r14
  __int64 *v60; // rax
  __int64 *v61; // rdi
  __int64 v62; // rbx
  void *v63; // rdi
  int v64; // r12d
  __int64 v65; // rax
  __int64 *v66; // [rsp+0h] [rbp-148h] BYREF
  __int64 *v67; // [rsp+8h] [rbp-140h]
  __int64 v68; // [rsp+18h] [rbp-130h] BYREF
  void *src; // [rsp+20h] [rbp-128h] BYREF
  size_t n; // [rsp+28h] [rbp-120h]
  _QWORD v71[2]; // [rsp+30h] [rbp-118h] BYREF
  unsigned int v72; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v73; // [rsp+44h] [rbp-104h]
  char v74; // [rsp+48h] [rbp-100h]
  __int64 v75; // [rsp+4Ch] [rbp-FCh]
  char v76; // [rsp+54h] [rbp-F4h]
  void *dest; // [rsp+58h] [rbp-F0h]
  __m128 v78; // [rsp+60h] [rbp-E8h] BYREF
  char v79; // [rsp+78h] [rbp-D0h]
  _QWORD v80[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v81; // [rsp+90h] [rbp-B8h]
  __int64 v82; // [rsp+A0h] [rbp-A8h]
  __int64 v83; // [rsp+A8h] [rbp-A0h]
  char v84; // [rsp+F8h] [rbp-50h]
  unsigned int v85; // [rsp+100h] [rbp-48h]
  char v86; // [rsp+104h] [rbp-44h]

  v2 = a2[405];
  if ( a2[320] == 1 && *(char *)(*(_QWORD *)(a1 + 232) + 1LL) >= 0 )
    return;
  sub_168B9F0((__int64)v80, (__int64 *)(a1 + 8), v2, 0x17AEu, 0);
  v3 = ", this";
  if ( !a2[407] )
    v3 = "this";
  v4 = strlen(v3);
  v72 = v2;
  v73 = v2;
  v76 = 0;
  v75 = 0;
  dest = &v78.m128_u16[4];
  v78.m128_u64[0] = 0;
  v78.m128_i8[8] = 0;
  v79 = 0;
  v74 = 0;
  src = v71;
  sub_19A0BE0(&src, v3, (__int64)&v3[v4]);
  v5 = dest;
  if ( src == v71 )
  {
    v30 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v71[0];
      else
        memcpy(dest, src, n);
      v30 = n;
      v5 = dest;
    }
    v78.m128_u64[0] = v30;
    v5[v30] = 0;
    v5 = src;
  }
  else
  {
    if ( dest == &v78.m128_u16[4] )
    {
      v66 = (__int64 *)v71[0];
      dest = src;
      v78 = _mm_loadh_ps((const double *)&v66);
    }
    else
    {
      v66 = (__int64 *)v71[0];
      v6 = v78.m128_u64[1];
      dest = src;
      v78 = _mm_loadh_ps((const double *)&v66);
      if ( v5 )
      {
        src = v5;
        v71[0] = v6;
        goto LABEL_9;
      }
    }
    v5 = v71;
    src = v71;
  }
LABEL_9:
  n = 0;
  *v5 = 0;
  if ( src != v71 )
    operator delete(src);
  v79 = 0;
  if ( !v84 )
  {
    if ( !v86 )
      goto LABEL_24;
    v19 = sub_168B9E0(v80);
    v22 = v81;
    if ( v81 )
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 32LL))(v81);
    v68 = v22;
    v23 = sub_1587BC0(v19, &v68, v17, v18, v20, v21);
    if ( !v72 || !v73 )
      goto LABEL_24;
    v24 = *v23 + 32LL * v85;
    v7 = *(_QWORD *)(v24 + 8);
    if ( v7 )
    {
      v25 = *(unsigned int *)(v7 + 536);
      v26 = *(unsigned int *)(v7 + 540);
      v27 = v25 + 1;
      v28 = v25 << 6;
    }
    else
    {
      v48 = *(_QWORD *)(v24 + 16);
      v49 = *(_DWORD *)(v48 + 14976);
      if ( v49 )
      {
        v57 = (unsigned int)(v49 - 1);
        *(_DWORD *)(v48 + 14976) = v57;
        v7 = *(_QWORD *)(v48 + 8 * v57 + 14848);
        v58 = *(unsigned int *)(v7 + 536);
        *(_BYTE *)v7 = 0;
        v59 = *(__int64 **)(v7 + 528);
        *(_DWORD *)(v7 + 424) = 0;
        v60 = &v59[8 * v58];
        while ( v59 != v60 )
        {
          while ( 1 )
          {
            v60 -= 8;
            v61 = (__int64 *)v60[3];
            if ( v61 == v60 + 5 )
              break;
            v66 = v60;
            operator delete(v61);
            v60 = v66;
            if ( v59 == v66 )
              goto LABEL_83;
          }
        }
LABEL_83:
        *(_DWORD *)(v7 + 536) = 0;
        v26 = *(unsigned int *)(v7 + 540);
      }
      else
      {
        v50 = operator new(0x3A0u);
        v26 = 6;
        v7 = v50;
        *(_BYTE *)v50 = 0;
        *(_QWORD *)(v50 + 96) = v50 + 112;
        *(_QWORD *)(v50 + 128) = v50 + 144;
        *(_QWORD *)(v50 + 160) = v50 + 176;
        *(_QWORD *)(v50 + 192) = v50 + 208;
        *(_QWORD *)(v50 + 224) = v50 + 240;
        *(_QWORD *)(v50 + 256) = v50 + 272;
        *(_QWORD *)(v50 + 288) = v50 + 304;
        *(_QWORD *)(v50 + 320) = v50 + 336;
        *(_QWORD *)(v50 + 352) = v50 + 368;
        *(_QWORD *)(v50 + 384) = v50 + 400;
        *(_QWORD *)(v50 + 416) = v50 + 432;
        *(_QWORD *)(v50 + 104) = 0;
        *(_BYTE *)(v50 + 112) = 0;
        *(_QWORD *)(v50 + 136) = 0;
        *(_BYTE *)(v50 + 144) = 0;
        *(_QWORD *)(v50 + 168) = 0;
        *(_BYTE *)(v50 + 176) = 0;
        *(_QWORD *)(v50 + 200) = 0;
        *(_BYTE *)(v50 + 208) = 0;
        *(_QWORD *)(v50 + 232) = 0;
        *(_BYTE *)(v50 + 240) = 0;
        *(_QWORD *)(v50 + 264) = 0;
        *(_BYTE *)(v50 + 272) = 0;
        *(_QWORD *)(v50 + 296) = 0;
        *(_BYTE *)(v50 + 304) = 0;
        *(_QWORD *)(v50 + 328) = 0;
        *(_BYTE *)(v50 + 336) = 0;
        *(_QWORD *)(v50 + 360) = 0;
        *(_BYTE *)(v50 + 368) = 0;
        *(_QWORD *)(v50 + 392) = 0;
        *(_BYTE *)(v50 + 400) = 0;
        *(_QWORD *)(v50 + 424) = 0x800000000LL;
        *(_QWORD *)(v50 + 528) = v50 + 544;
        *(_QWORD *)(v50 + 536) = 0x600000000LL;
      }
      *(_QWORD *)(v24 + 8) = v7;
      v27 = 1;
      v28 = 0;
    }
    v29 = *(_QWORD *)(v7 + 528);
    v13 = &v72;
    v12 = v29 + v28;
    if ( v27 > v26 )
    {
      v51 = (void *)(v7 + 544);
      if ( v29 > (unsigned __int64)&v72 || v12 <= (unsigned __int64)&v72 )
      {
        v66 = (__int64 *)(v7 + 528);
        v62 = sub_2237400(v7 + 528, v7 + 544, v27, 64, &src);
        sub_9EF810(v66, v62);
        v63 = *(void **)(v7 + 528);
        v64 = (int)src;
        if ( v63 != v51 )
          free(v63);
        v65 = *(unsigned int *)(v7 + 536);
        *(_QWORD *)(v7 + 528) = v62;
        v13 = &v72;
        *(_DWORD *)(v7 + 540) = v64;
        v12 = (v65 << 6) + v62;
      }
      else
      {
        v67 = (__int64 *)(v7 + 528);
        v66 = (__int64 *)((char *)&v72 - v29);
        v52 = sub_2237400(v7 + 528, v7 + 544, v27, 64, &src);
        sub_9EF810(v67, v52);
        v53 = *(void **)(v7 + 528);
        v54 = (int)src;
        if ( v53 != v51 )
          free(v53);
        v55 = *(unsigned int *)(v7 + 536);
        v56 = v66;
        *(_QWORD *)(v7 + 528) = v52;
        *(_DWORD *)(v7 + 540) = v54;
        v13 = (unsigned int *)((char *)v56 + v52);
        v12 = (v55 << 6) + v52;
      }
    }
    *(_QWORD *)v12 = *(_QWORD *)v13;
    *(_DWORD *)(v12 + 8) = v13[2];
    *(_QWORD *)(v12 + 12) = *(_QWORD *)(v13 + 3);
    *(_DWORD *)(v12 + 20) = v13[5];
    v14 = (_BYTE *)(v12 + 40);
    *(_QWORD *)(v12 + 24) = v12 + 40;
    v15 = *((__int64 **)v13 + 3);
    v16 = *((_QWORD *)v13 + 4);
    if ( (__int64 *)((char *)v15 + v16) && !v15 )
LABEL_19:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v16 <= 0xF )
      goto LABEL_21;
    v66 = *((__int64 **)v13 + 3);
    if ( v16 >= 0 )
    {
LABEL_40:
      v14 = (_BYTE *)operator new(v16 + 1);
      *(_QWORD *)(v12 + 40) = v16;
      v15 = v66;
      *(_QWORD *)(v12 + 24) = v14;
      goto LABEL_49;
    }
LABEL_87:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v72 && v73 )
  {
    v7 = v82;
    if ( v82 )
    {
      v8 = *(unsigned int *)(v82 + 536);
      v9 = *(_QWORD *)(v82 + 528);
      v10 = *(unsigned int *)(v82 + 540);
      v11 = v8 + 1;
      v12 = v9 + (v8 << 6);
    }
    else
    {
      v31 = v83;
      v32 = *(_DWORD *)(v83 + 14976);
      if ( v32 )
      {
        v39 = (unsigned int)(v32 - 1);
        *(_DWORD *)(v83 + 14976) = v39;
        v7 = *(_QWORD *)(v31 + 8 * v39 + 14848);
        v40 = *(unsigned int *)(v7 + 536);
        *(_BYTE *)v7 = 0;
        v41 = *(_QWORD *)(v7 + 528);
        *(_DWORD *)(v7 + 424) = 0;
        v42 = v41 + (v40 << 6);
        if ( v41 != v42 )
        {
          do
          {
            while ( 1 )
            {
              v42 -= 64LL;
              v43 = *(void **)(v42 + 24);
              if ( v43 == (void *)(v42 + 40) )
                break;
              operator delete(v43);
              if ( v41 == v42 )
                goto LABEL_64;
            }
          }
          while ( v41 != v42 );
LABEL_64:
          v41 = *(_QWORD *)(v7 + 528);
        }
        *(_DWORD *)(v7 + 536) = 0;
        v10 = *(unsigned int *)(v7 + 540);
        v9 = v41;
      }
      else
      {
        v7 = operator new(0x3A0u);
        *(_BYTE *)v7 = 0;
        *(_QWORD *)(v7 + 96) = v7 + 112;
        *(_QWORD *)(v7 + 128) = v7 + 144;
        *(_QWORD *)(v7 + 160) = v7 + 176;
        *(_QWORD *)(v7 + 192) = v7 + 208;
        *(_QWORD *)(v7 + 224) = v7 + 240;
        *(_QWORD *)(v7 + 256) = v7 + 272;
        *(_QWORD *)(v7 + 288) = v7 + 304;
        *(_QWORD *)(v7 + 320) = v7 + 336;
        *(_QWORD *)(v7 + 352) = v7 + 368;
        *(_QWORD *)(v7 + 384) = v7 + 400;
        *(_QWORD *)(v7 + 416) = v7 + 432;
        *(_QWORD *)(v7 + 104) = 0;
        *(_BYTE *)(v7 + 112) = 0;
        *(_QWORD *)(v7 + 136) = 0;
        *(_BYTE *)(v7 + 144) = 0;
        *(_QWORD *)(v7 + 168) = 0;
        *(_BYTE *)(v7 + 176) = 0;
        *(_QWORD *)(v7 + 200) = 0;
        *(_BYTE *)(v7 + 208) = 0;
        *(_QWORD *)(v7 + 232) = 0;
        *(_BYTE *)(v7 + 240) = 0;
        *(_QWORD *)(v7 + 264) = 0;
        *(_BYTE *)(v7 + 272) = 0;
        *(_QWORD *)(v7 + 296) = 0;
        *(_BYTE *)(v7 + 304) = 0;
        *(_QWORD *)(v7 + 328) = 0;
        *(_BYTE *)(v7 + 336) = 0;
        *(_QWORD *)(v7 + 360) = 0;
        *(_BYTE *)(v7 + 368) = 0;
        *(_QWORD *)(v7 + 392) = 0;
        *(_BYTE *)(v7 + 400) = 0;
        *(_QWORD *)(v7 + 424) = 0x800000000LL;
        v9 = v7 + 544;
        *(_QWORD *)(v7 + 528) = v7 + 544;
        *(_QWORD *)(v7 + 536) = 0x600000000LL;
        v10 = 6;
      }
      v82 = v7;
      v12 = v9;
      v11 = 1;
    }
    v13 = &v72;
    if ( v11 > v10 )
    {
      v33 = (void *)(v7 + 544);
      if ( v9 > (unsigned __int64)&v72 || v12 <= (unsigned __int64)&v72 )
      {
        v66 = (__int64 *)(v7 + 528);
        v44 = sub_2237400(v7 + 528, v7 + 544, v11, 64, &src);
        sub_9EF810(v66, v44);
        v45 = *(void **)(v7 + 528);
        v46 = (int)src;
        if ( v45 != v33 )
          free(v45);
        v47 = *(unsigned int *)(v7 + 536);
        *(_QWORD *)(v7 + 528) = v44;
        v13 = &v72;
        *(_DWORD *)(v7 + 540) = v46;
        v12 = (v47 << 6) + v44;
      }
      else
      {
        v67 = (__int64 *)(v7 + 528);
        v66 = (__int64 *)((char *)&v72 - v9);
        v34 = sub_2237400(v7 + 528, v7 + 544, v11, 64, &src);
        sub_9EF810(v67, v34);
        v35 = *(void **)(v7 + 528);
        v36 = (int)src;
        if ( v35 != v33 )
          free(v35);
        v37 = *(unsigned int *)(v7 + 536);
        v38 = v66;
        *(_QWORD *)(v7 + 528) = v34;
        *(_DWORD *)(v7 + 540) = v36;
        v13 = (unsigned int *)((char *)v38 + v34);
        v12 = (v37 << 6) + v34;
      }
    }
    *(_QWORD *)v12 = *(_QWORD *)v13;
    *(_DWORD *)(v12 + 8) = v13[2];
    *(_QWORD *)(v12 + 12) = *(_QWORD *)(v13 + 3);
    *(_DWORD *)(v12 + 20) = v13[5];
    v14 = (_BYTE *)(v12 + 40);
    *(_QWORD *)(v12 + 24) = v12 + 40;
    v15 = *((__int64 **)v13 + 3);
    v16 = *((_QWORD *)v13 + 4);
    if ( (__int64 *)((char *)v15 + v16) && !v15 )
      goto LABEL_19;
    if ( (unsigned __int64)v16 <= 0xF )
    {
LABEL_21:
      if ( v16 == 1 )
      {
        *(_BYTE *)(v12 + 40) = *(_BYTE *)v15;
LABEL_23:
        *(_QWORD *)(v12 + 32) = v16;
        v14[v16] = 0;
        *(_BYTE *)(v12 + 56) = *((_BYTE *)v13 + 56);
        ++*(_DWORD *)(v7 + 536);
        goto LABEL_24;
      }
      if ( !v16 )
        goto LABEL_23;
LABEL_49:
      memcpy(v14, v15, v16);
      v14 = *(_BYTE **)(v12 + 24);
      goto LABEL_23;
    }
    if ( v16 >= 0 )
    {
      v66 = *((__int64 **)v13 + 3);
      goto LABEL_40;
    }
    goto LABEL_87;
  }
LABEL_24:
  if ( dest != &v78.m128_u16[4] )
    operator delete(dest);
  sub_15F7200(v80);
}
