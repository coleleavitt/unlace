char **__fastcall sub_1FF3410(char **a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64); // rax
  _BYTE *v6; // r12
  _BYTE *v7; // rbp
  char *v8; // r13
  char *v9; // r14
  char *v10; // rax
  char *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  char *v16; // rcx
  char *v17; // rcx
  char *v18; // rax
  __int64 v19; // rcx
  char *v20; // rax
  bool v21; // zf
  char *v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  char *v29; // rcx
  char *v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rcx
  char *v35; // rdi
  char *v36; // rdi
  char *v37; // rax
  char *v38; // r9
  __int64 v39; // rcx
  char *v40; // r8
  char *v41; // rdi
  char *v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rdx
  char *v47; // rdx
  char *v48; // rdx
  char *v49; // rdx
  char *v50; // rax
  char *v51; // rdx
  char *v52; // r12
  char *v53; // rdi
  char *v54; // rdi
  void **v55; // rax
  void **v56; // rbx
  void *v57; // rdi
  char *v58; // rdi
  _BYTE *v59; // rdi
  _BYTE *v60; // rdi
  void **v61; // r13
  void **v62; // rbx
  _BYTE *v63; // rdi
  void **v64; // rbx
  void **v65; // rbp
  void **v66; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+8h] [rbp-B8h]
  unsigned __int64 v68; // [rsp+10h] [rbp-B0h]
  unsigned __int64 v69; // [rsp+18h] [rbp-A8h]
  char *v70; // [rsp+20h] [rbp-A0h]
  _QWORD *v71; // [rsp+28h] [rbp-98h]
  void *v72; // [rsp+30h] [rbp-90h]
  _QWORD *v73; // [rsp+38h] [rbp-88h]
  void **v74; // [rsp+40h] [rbp-80h]
  _QWORD *v75; // [rsp+48h] [rbp-78h] BYREF
  _QWORD *v76; // [rsp+50h] [rbp-70h]
  _BYTE *v77; // [rsp+68h] [rbp-58h] BYREF
  void *v78; // [rsp+70h] [rbp-50h]

  v3 = *a2;
  *(_OWORD *)a1 = 0;
  v73 = a2;
  v4 = *(__int64 (__fastcall **)(__int64))(v3 + 24);
  a1[2] = nullptr;
  if ( v4 == sub_1FECA50 )
    return a1;
  v4((__int64)&v75);
  v72 = v76;
  if ( v75 == v76 )
    goto LABEL_86;
  v71 = v75;
  v74 = (void **)&v77;
  do
  {
LABEL_5:
    (*(void (__fastcall **)(void **, _QWORD *, _QWORD, _QWORD))(*v73 + 16LL))(v74, v73, *v71, v71[1]);
    v6 = v78;
    v7 = v77;
    v68 = 0x86BCA1AF286BCA1BLL * (((_BYTE *)v78 - v77) >> 3);
    if ( (_BYTE *)v78 - v77 <= 0 )
      goto LABEL_63;
    v8 = v77 + 16;
    v9 = a1[1];
    do
    {
      while ( a1[2] != v9 )
      {
        *(_QWORD *)v9 = v9 + 16;
        v10 = *((char **)v8 - 2);
        if ( v10 == v8 )
        {
          *((__m128i *)v9 + 1) = _mm_loadu_si128((const __m128i *)v8);
        }
        else
        {
          *(_QWORD *)v9 = v10;
          *((_QWORD *)v9 + 2) = *(_QWORD *)v8;
        }
        *((_QWORD *)v9 + 1) = *((_QWORD *)v8 - 1);
        *((_QWORD *)v8 - 2) = v8;
        *((_QWORD *)v8 - 1) = 0;
        *v8 = 0;
        *((_QWORD *)v9 + 4) = v9 + 48;
        v11 = *((char **)v8 + 2);
        if ( v11 == v8 + 32 )
        {
          *((__m128i *)v9 + 3) = _mm_loadu_si128((const __m128i *)v8 + 2);
        }
        else
        {
          *((_QWORD *)v9 + 4) = v11;
          *((_QWORD *)v9 + 6) = *((_QWORD *)v8 + 4);
        }
        *((_QWORD *)v9 + 5) = *((_QWORD *)v8 + 3);
        v8[32] = 0;
        *((_QWORD *)v8 + 2) = v8 + 32;
        *((_QWORD *)v8 + 3) = 0;
        *((_OWORD *)v9 + 4) = 0;
        *((_QWORD *)v9 + 10) = 0;
        *((_QWORD *)v9 + 8) = *((_QWORD *)v8 + 6);
        v12 = *((_QWORD *)v8 + 7);
        *((_QWORD *)v8 + 6) = 0;
        v13 = *((_QWORD *)v9 + 9);
        *((_QWORD *)v9 + 9) = v12;
        v14 = *((_QWORD *)v8 + 8);
        *((_QWORD *)v8 + 7) = v13;
        v15 = *((_QWORD *)v9 + 10);
        *((_QWORD *)v9 + 10) = v14;
        *((_QWORD *)v8 + 8) = v15;
        *((_QWORD *)v9 + 11) = v9 + 104;
        v16 = *((char **)v8 + 9);
        if ( v16 == v8 + 88 )
        {
          *(__m128i *)(v9 + 104) = _mm_loadu_si128((const __m128i *)(v8 + 88));
        }
        else
        {
          *((_QWORD *)v9 + 11) = v16;
          *((_QWORD *)v9 + 13) = *((_QWORD *)v8 + 11);
        }
        *((_QWORD *)v9 + 12) = *((_QWORD *)v8 + 10);
        *((_QWORD *)v8 + 9) = v8 + 88;
        *((_QWORD *)v8 + 10) = 0;
        v8[88] = 0;
        *((_QWORD *)v9 + 15) = v9 + 136;
        v17 = *((char **)v8 + 13);
        v18 = v8 + 120;
        if ( v17 == v8 + 120 )
        {
          *(__m128i *)(v9 + 136) = _mm_loadu_si128((const __m128i *)(v8 + 120));
        }
        else
        {
          *((_QWORD *)v9 + 15) = v17;
          *((_QWORD *)v9 + 17) = *((_QWORD *)v8 + 15);
        }
        v19 = *((_QWORD *)v8 + 14);
        v8 += 152;
        *((_QWORD *)v9 + 16) = v19;
        *((_QWORD *)v8 - 6) = v18;
        *(v8 - 32) = 0;
        v20 = a1[1];
        *((_QWORD *)v8 - 5) = 0;
        v21 = v68-- == 1;
        v9 = v20 + 152;
        a1[1] = v20 + 152;
        if ( v21 )
          goto LABEL_62;
      }
      v22 = *a1;
      v23 = v9 - *a1;
      v24 = v23 >> 3;
      if ( !(0x86BCA1AF286BCA1BLL * (v23 >> 3)) )
      {
        v26 = 152;
LABEL_19:
        v66 = (void **)(v9 - *a1);
        v27 = operator new(v26);
        v23 = (__int64)v66;
        v67 = v27;
        v70 = (char *)(v27 + v26);
        v69 = v27 + 152;
        goto LABEL_20;
      }
      v25 = 0xD79435E50D79436LL * v24;
      v26 = -112;
      if ( 0x86BCA1AF286BCA1BLL * v24 > 0xD79435E50D79436LL * v24 || v25 > 0x1AF286BCA1AF286LL )
        goto LABEL_19;
      if ( v25 )
      {
        v26 = 16 * v24;
        goto LABEL_19;
      }
      v69 = 152;
      v70 = nullptr;
      v67 = 0;
LABEL_20:
      v28 = v23 + v67;
      *(_QWORD *)(v23 + v67) = v23 + v67 + 16;
      v29 = *((char **)v8 - 2);
      if ( v29 == v8 )
      {
        *(__m128i *)(v28 + 16) = _mm_loadu_si128((const __m128i *)v8);
      }
      else
      {
        *(_QWORD *)v28 = v29;
        *(_QWORD *)(v28 + 16) = *(_QWORD *)v8;
      }
      *(_QWORD *)(v28 + 8) = *((_QWORD *)v8 - 1);
      *((_QWORD *)v8 - 2) = v8;
      *((_QWORD *)v8 - 1) = 0;
      *v8 = 0;
      *(_QWORD *)(v28 + 32) = v28 + 48;
      v30 = *((char **)v8 + 2);
      if ( v30 == v8 + 32 )
      {
        *(__m128i *)(v28 + 48) = _mm_loadu_si128((const __m128i *)v8 + 2);
      }
      else
      {
        *(_QWORD *)(v28 + 32) = v30;
        *(_QWORD *)(v28 + 48) = *((_QWORD *)v8 + 4);
      }
      *(_QWORD *)(v28 + 40) = *((_QWORD *)v8 + 3);
      v8[32] = 0;
      *((_QWORD *)v8 + 2) = v8 + 32;
      *((_QWORD *)v8 + 3) = 0;
      *(_OWORD *)(v28 + 64) = 0;
      *(_QWORD *)(v28 + 80) = 0;
      *(_QWORD *)(v28 + 64) = *((_QWORD *)v8 + 6);
      v31 = *((_QWORD *)v8 + 7);
      *((_QWORD *)v8 + 6) = 0;
      v32 = *(_QWORD *)(v28 + 72);
      *(_QWORD *)(v28 + 72) = v31;
      v33 = *((_QWORD *)v8 + 8);
      *((_QWORD *)v8 + 7) = v32;
      v34 = *(_QWORD *)(v28 + 80);
      *(_QWORD *)(v28 + 80) = v33;
      *((_QWORD *)v8 + 8) = v34;
      *(_QWORD *)(v28 + 88) = v28 + 104;
      v35 = *((char **)v8 + 9);
      if ( v35 == v8 + 88 )
      {
        *(__m128i *)(v28 + 104) = _mm_loadu_si128((const __m128i *)(v8 + 88));
      }
      else
      {
        *(_QWORD *)(v28 + 88) = v35;
        *(_QWORD *)(v28 + 104) = *((_QWORD *)v8 + 11);
      }
      *(_QWORD *)(v28 + 96) = *((_QWORD *)v8 + 10);
      *((_QWORD *)v8 + 9) = v8 + 88;
      *((_QWORD *)v8 + 10) = 0;
      v8[88] = 0;
      *(_QWORD *)(v28 + 120) = v28 + 136;
      v36 = *((char **)v8 + 13);
      if ( v36 == v8 + 120 )
      {
        *(__m128i *)(v28 + 136) = _mm_loadu_si128((const __m128i *)(v8 + 120));
      }
      else
      {
        *(_QWORD *)(v28 + 120) = v36;
        *(_QWORD *)(v28 + 136) = *((_QWORD *)v8 + 15);
      }
      *(_QWORD *)(v28 + 128) = *((_QWORD *)v8 + 14);
      *((_QWORD *)v8 + 13) = v8 + 120;
      *((_QWORD *)v8 + 14) = 0;
      v8[120] = 0;
      if ( v22 != v9 )
      {
        v37 = v22 + 16;
        v38 = v22 + 136;
        v39 = v67;
        v40 = v22 + 104;
        v41 = v22 + 48;
        while ( 1 )
        {
          *(_QWORD *)v39 = v39 + 16;
          v51 = *((char **)v37 - 2);
          if ( v51 == v37 )
          {
            *(__m128i *)(v39 + 16) = _mm_loadu_si128((const __m128i *)v37);
          }
          else
          {
            *(_QWORD *)v39 = v51;
            *(_QWORD *)(v39 + 16) = *(_QWORD *)v37;
          }
          *(_QWORD *)(v39 + 8) = *((_QWORD *)v37 - 1);
          *((_QWORD *)v37 - 2) = v37;
          *((_QWORD *)v37 - 1) = 0;
          *v37 = 0;
          *(_QWORD *)(v39 + 32) = v39 + 48;
          v42 = *((char **)v37 + 2);
          if ( v42 == v41 )
          {
            *(__m128i *)(v39 + 48) = _mm_loadu_si128((const __m128i *)v37 + 2);
          }
          else
          {
            *(_QWORD *)(v39 + 32) = v42;
            *(_QWORD *)(v39 + 48) = *((_QWORD *)v37 + 4);
          }
          *(_QWORD *)(v39 + 40) = *((_QWORD *)v37 + 3);
          v37[32] = 0;
          *((_QWORD *)v37 + 2) = v41;
          *((_QWORD *)v37 + 3) = 0;
          *(_OWORD *)(v39 + 64) = 0;
          *(_QWORD *)(v39 + 80) = 0;
          *(_QWORD *)(v39 + 64) = *((_QWORD *)v37 + 6);
          v43 = *((_QWORD *)v37 + 7);
          *((_QWORD *)v37 + 6) = 0;
          v44 = *(_QWORD *)(v39 + 72);
          *(_QWORD *)(v39 + 72) = v43;
          v45 = *((_QWORD *)v37 + 8);
          *((_QWORD *)v37 + 7) = v44;
          v46 = *(_QWORD *)(v39 + 80);
          *(_QWORD *)(v39 + 80) = v45;
          *((_QWORD *)v37 + 8) = v46;
          *(_QWORD *)(v39 + 88) = v39 + 104;
          v47 = *((char **)v37 + 9);
          if ( v47 == v40 )
          {
            *(__m128i *)(v39 + 104) = _mm_loadu_si128((const __m128i *)(v37 + 88));
          }
          else
          {
            *(_QWORD *)(v39 + 88) = v47;
            *(_QWORD *)(v39 + 104) = *((_QWORD *)v37 + 11);
          }
          *(_QWORD *)(v39 + 96) = *((_QWORD *)v37 + 10);
          *((_QWORD *)v37 + 9) = v40;
          *((_QWORD *)v37 + 10) = 0;
          v37[88] = 0;
          *(_QWORD *)(v39 + 120) = v39 + 136;
          v48 = *((char **)v37 + 13);
          if ( v48 == v38 )
          {
            *(__m128i *)(v39 + 136) = _mm_loadu_si128((const __m128i *)(v37 + 120));
          }
          else
          {
            *(_QWORD *)(v39 + 120) = v48;
            *(_QWORD *)(v39 + 136) = *((_QWORD *)v37 + 15);
          }
          v39 += 152;
          v40 += 152;
          v41 += 152;
          *(_QWORD *)(v39 - 24) = *((_QWORD *)v37 + 14);
          v49 = v37 + 152;
          v50 = v37 + 136;
          *((_QWORD *)v50 - 4) = v38;
          v38 += 152;
          *((_QWORD *)v50 - 3) = 0;
          *(v50 - 16) = 0;
          if ( v9 == v50 )
            break;
          v37 = v49;
        }
        v52 = v22;
        v69 = v67
            + 152 * ((0x6BCA1AF286BCA1BLL * ((unsigned __int64)(v9 - v22 - 152) >> 3)) & 0x1FFFFFFFFFFFFFFFLL)
            + 304;
        do
        {
          while ( 1 )
          {
            v53 = *((char **)v52 + 15);
            if ( v53 != v52 + 136 )
              operator delete(v53);
            v54 = *((char **)v52 + 11);
            if ( v54 != v52 + 104 )
              operator delete(v54);
            v55 = *((void ***)v52 + 9);
            v56 = *((void ***)v52 + 8);
            if ( v55 != v56 )
            {
              do
              {
                while ( 1 )
                {
                  v57 = *v56;
                  if ( *v56 == v56 + 2 )
                    break;
                  v66 = v55;
                  v56 += 4;
                  operator delete(v57);
                  v55 = v66;
                  if ( v66 == v56 )
                    goto LABEL_52;
                }
                v56 += 4;
              }
              while ( v55 != v56 );
LABEL_52:
              v56 = *((void ***)v52 + 8);
            }
            if ( v56 )
              operator delete(v56);
            v58 = *((char **)v52 + 4);
            if ( v58 != v52 + 48 )
              operator delete(v58);
            if ( *(char **)v52 == v52 + 16 )
              break;
            operator delete(*(void **)v52);
            v52 += 152;
            if ( v9 == v52 )
              goto LABEL_59;
          }
          v52 += 152;
        }
        while ( v52 != v9 );
      }
LABEL_59:
      if ( v22 )
        operator delete(v22);
      v9 = (char *)v69;
      v8 += 152;
      v21 = v68-- == 1;
      v66 = (void **)v69;
      a1[2] = v70;
      *(__m128 *)a1 = _mm_loadh_ps((const double *)&v66);
    }
    while ( !v21 );
LABEL_62:
    v6 = v78;
    v7 = v77;
LABEL_63:
    if ( v7 != v6 )
    {
      do
      {
        while ( 1 )
        {
          v59 = *((_BYTE **)v7 + 15);
          if ( v59 != v7 + 136 )
            operator delete(v59);
          v60 = *((_BYTE **)v7 + 11);
          if ( v60 != v7 + 104 )
            operator delete(v60);
          v61 = *((void ***)v7 + 9);
          v62 = *((void ***)v7 + 8);
          if ( v61 != v62 )
          {
            do
            {
              while ( *v62 != v62 + 2 )
              {
                operator delete(*v62);
                v62 += 4;
                if ( v62 == v61 )
                  goto LABEL_71;
              }
              v62 += 4;
            }
            while ( v61 != v62 );
LABEL_71:
            v62 = *((void ***)v7 + 8);
          }
          if ( v62 )
            operator delete(v62);
          v63 = *((_BYTE **)v7 + 4);
          if ( v63 != v7 + 48 )
            operator delete(v63);
          if ( *(_BYTE **)v7 == v7 + 16 )
            break;
          operator delete(*(void **)v7);
          v7 += 152;
          if ( v7 == v6 )
            goto LABEL_78;
        }
        v7 += 152;
      }
      while ( v7 != v6 );
LABEL_78:
      v6 = v77;
    }
    if ( !v6 )
    {
      v71 += 4;
      if ( v72 == v71 )
        break;
      goto LABEL_5;
    }
    operator delete(v6);
    v71 += 4;
  }
  while ( v72 != v71 );
  v64 = (void **)v76;
  v72 = v75;
  if ( v76 != v75 )
  {
    v65 = (void **)v75;
    do
    {
      while ( *v65 != v65 + 2 )
      {
        operator delete(*v65);
        v65 += 4;
        if ( v65 == v64 )
          goto LABEL_85;
      }
      v65 += 4;
    }
    while ( v64 != v65 );
LABEL_85:
    v72 = v75;
  }
LABEL_86:
  if ( v72 )
    operator delete(v72);
  return a1;
}
