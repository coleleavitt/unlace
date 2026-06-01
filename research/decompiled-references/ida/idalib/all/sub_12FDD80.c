void __fastcall sub_12FDD80(_BYTE *a1, __int64 a2, __int64 **a3, __int64 a4, __m128i *a5)
{
  __int64 *v5; // rbp
  __int64 *v6; // r14
  __m128i *p_src; // r12
  __int128 v9; // rax
  __int64 *v10; // r13
  unsigned __int8 *v11; // r15
  _BYTE *v12; // rsi
  __int64 v13; // rdx
  void **v14; // rdi
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  char *v19; // r15
  _BYTE *v20; // rdi
  __int64 v21; // rax
  unsigned __int8 *v22; // r15
  __m128i *v23; // rsi
  void **v24; // rdx
  void **v25; // rdi
  _QWORD *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  char *v30; // r15
  _BYTE *v31; // rdi
  __int64 v32; // rax
  void **v33; // r13
  unsigned __int64 v34; // rax
  void **v35; // rdx
  void **v36; // r15
  void **v37; // rbx
  void **v38; // rdi
  void **v39; // rdi
  void **v40; // r15
  size_t v41; // rdx
  size_t v42; // rdx
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  int v45; // eax
  unsigned __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  void **v52; // r14
  __int64 *v53; // r12
  __int64 v54; // rbp
  __int64 v55; // rbx
  void *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 *v61; // r12
  __int64 v62; // rbp
  __int64 v63; // rbx
  void *v64; // rdi
  __m128i *v65; // [rsp+0h] [rbp-E8h] BYREF
  void **v66; // [rsp+8h] [rbp-E0h]
  _BYTE *v67; // [rsp+10h] [rbp-D8h]
  __int64 v68; // [rsp+18h] [rbp-D0h]
  __int64 v69; // [rsp+20h] [rbp-C8h]
  void **v70; // [rsp+28h] [rbp-C0h]
  __m128i *v71; // [rsp+30h] [rbp-B8h]
  __m128i *v72; // [rsp+38h] [rbp-B0h]
  void *v73; // [rsp+40h] [rbp-A8h] BYREF
  size_t n; // [rsp+48h] [rbp-A0h]
  __int64 src; // [rsp+50h] [rbp-98h] BYREF
  void *v76; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v77; // [rsp+68h] [rbp-80h]
  __int64 v78; // [rsp+70h] [rbp-78h]
  void *v79; // [rsp+80h] [rbp-68h]
  __int16 v80; // [rsp+A0h] [rbp-48h]

  v5 = a3[1];
  v6 = *a3;
  if ( v5 != *a3 )
  {
    v69 = a4;
    p_src = (__m128i *)&src;
    v68 = a2;
    v67 = a1;
    v66 = &v73;
    do
    {
      while ( 1 )
      {
        *(_QWORD *)&v9 = sub_1001430(*v6, v6[1], 0);
        if ( v9 == 0 )
          break;
        v65 = *((__m128i **)&v9 + 1);
        *a5 = _mm_or_si128((__m128i)_mm_loadh_ps((const double *)&v65), _mm_loadu_si128(a5));
LABEL_4:
        v6 += 4;
        if ( v5 == v6 )
          return;
      }
      v10 = (__int64 *)&v76;
      sub_FC70B0((__int64)&v76, v69, 0, 400);
      v11 = (unsigned __int8 *)v76;
      if ( !v76 )
      {
        v46 = v77;
        v47 = *(_DWORD *)(v77 + 14976);
        if ( v47 )
        {
          v57 = (unsigned int)(v47 - 1);
          *(_DWORD *)(v77 + 14976) = v57;
          v11 = *(unsigned __int8 **)(v46 + 8 * v57 + 14848);
          v58 = *((unsigned int *)v11 + 134);
          *v11 = 0;
          v59 = *((_QWORD *)v11 + 66);
          *((_DWORD *)v11 + 106) = 0;
          v60 = v59 + (v58 << 6);
          if ( v59 != v60 )
          {
            v65 = p_src;
            v61 = v5;
            v62 = v59;
            v70 = (void **)a5;
            v63 = v60;
            do
            {
              while ( 1 )
              {
                v63 -= 64;
                v64 = *(void **)(v63 + 24);
                if ( v64 == (void *)(v63 + 40) )
                  break;
                operator delete(v64);
                if ( v62 == v63 )
                  goto LABEL_79;
              }
            }
            while ( v62 != v63 );
LABEL_79:
            v5 = v61;
            a5 = (__m128i *)v70;
            p_src = v65;
          }
          *((_DWORD *)v11 + 134) = 0;
        }
        else
        {
          v11 = (unsigned __int8 *)operator new(0x3A0u);
          *v11 = 0;
          *((_QWORD *)v11 + 12) = v11 + 112;
          *((_QWORD *)v11 + 16) = v11 + 144;
          *((_QWORD *)v11 + 20) = v11 + 176;
          *((_QWORD *)v11 + 24) = v11 + 208;
          *((_QWORD *)v11 + 28) = v11 + 240;
          *((_QWORD *)v11 + 32) = v11 + 272;
          *((_QWORD *)v11 + 36) = v11 + 304;
          *((_QWORD *)v11 + 40) = v11 + 336;
          *((_QWORD *)v11 + 44) = v11 + 368;
          *((_QWORD *)v11 + 48) = v11 + 400;
          *((_QWORD *)v11 + 52) = v11 + 432;
          *((_QWORD *)v11 + 13) = 0;
          v11[112] = 0;
          *((_QWORD *)v11 + 17) = 0;
          v11[144] = 0;
          *((_QWORD *)v11 + 21) = 0;
          v11[176] = 0;
          *((_QWORD *)v11 + 25) = 0;
          v11[208] = 0;
          *((_QWORD *)v11 + 29) = 0;
          v11[240] = 0;
          *((_QWORD *)v11 + 33) = 0;
          v11[272] = 0;
          *((_QWORD *)v11 + 37) = 0;
          v11[304] = 0;
          *((_QWORD *)v11 + 41) = 0;
          v11[336] = 0;
          *((_QWORD *)v11 + 45) = 0;
          v11[368] = 0;
          *((_QWORD *)v11 + 49) = 0;
          v11[400] = 0;
          *((_QWORD *)v11 + 53) = 0x800000000LL;
          *((_QWORD *)v11 + 66) = v11 + 544;
          *((_QWORD *)v11 + 67) = 0x600000000LL;
        }
        v76 = v11;
      }
      v12 = v67;
      v13 = v68;
      v14 = v66;
      v11[*v11 + 1] = 0;
      v73 = p_src;
      sub_12FAAE0(v14, v12, (__int64)&v12[v13]);
      v15 = v76;
      v16 = *(unsigned __int8 *)v76;
      *(_BYTE *)v76 = v16 + 1;
      v17 = (unsigned __int8)v16;
      v18 = 4 * (v16 + 3);
      v19 = (char *)&v15[v18];
      v20 = (_BYTE *)v15[v18];
      if ( v73 == p_src )
      {
        v42 = n;
        if ( n )
        {
          if ( n == 1 )
            *v20 = src;
          else
            memcpy(v20, p_src, n);
          v42 = n;
          v20 = *(_BYTE **)v19;
        }
        *((_QWORD *)v19 + 1) = v42;
        v20[v42] = 0;
        v20 = v73;
      }
      else
      {
        if ( v20 == (_BYTE *)&v15[v18 + 2] )
        {
          *(_QWORD *)v19 = v73;
          *((_QWORD *)v19 + 1) = n;
          *((_QWORD *)v19 + 2) = src;
        }
        else
        {
          v21 = v15[4 * v17 + 14];
          *(_QWORD *)v19 = v73;
          *((_QWORD *)v19 + 1) = n;
          *((_QWORD *)v19 + 2) = src;
          if ( v20 )
          {
            v73 = v20;
            src = v21;
            goto LABEL_11;
          }
        }
        v73 = p_src;
        v20 = p_src;
      }
LABEL_11:
      n = 0;
      *v20 = 0;
      if ( v73 != p_src )
        operator delete(v73);
      v22 = (unsigned __int8 *)v76;
      v23 = (__m128i *)*v6;
      v24 = (void **)v6[1];
      if ( !v76 )
      {
        v44 = v77;
        v45 = *(_DWORD *)(v77 + 14976);
        if ( v45 )
        {
          v48 = (unsigned int)(v45 - 1);
          *(_DWORD *)(v77 + 14976) = v48;
          v22 = *(unsigned __int8 **)(v44 + 8 * v48 + 14848);
          v49 = *((unsigned int *)v22 + 134);
          *v22 = 0;
          v50 = *((_QWORD *)v22 + 66);
          *((_DWORD *)v22 + 106) = 0;
          v51 = v50 + (v49 << 6);
          if ( v50 != v51 )
          {
            v65 = (__m128i *)v6;
            v52 = v24;
            v70 = &v76;
            v71 = p_src;
            v53 = v5;
            v54 = v50;
            v72 = a5;
            v55 = v51;
            do
            {
              while ( 1 )
              {
                v55 -= 64;
                v56 = *(void **)(v55 + 24);
                if ( v56 == (void *)(v55 + 40) )
                  break;
                operator delete(v56);
                if ( v54 == v55 )
                  goto LABEL_71;
              }
            }
            while ( v54 != v55 );
LABEL_71:
            v5 = v53;
            v24 = v52;
            v10 = (__int64 *)v70;
            v6 = (__int64 *)v65;
            p_src = v71;
            a5 = v72;
          }
          *((_DWORD *)v22 + 134) = 0;
        }
        else
        {
          v70 = (void **)v6[1];
          v65 = v23;
          v22 = (unsigned __int8 *)operator new(0x3A0u);
          *v22 = 0;
          *((_QWORD *)v22 + 12) = v22 + 112;
          *((_QWORD *)v22 + 16) = v22 + 144;
          *((_QWORD *)v22 + 20) = v22 + 176;
          *((_QWORD *)v22 + 24) = v22 + 208;
          *((_QWORD *)v22 + 28) = v22 + 240;
          *((_QWORD *)v22 + 32) = v22 + 272;
          *((_QWORD *)v22 + 36) = v22 + 304;
          *((_QWORD *)v22 + 40) = v22 + 336;
          *((_QWORD *)v22 + 44) = v22 + 368;
          *((_QWORD *)v22 + 48) = v22 + 400;
          *((_QWORD *)v22 + 52) = v22 + 432;
          *((_QWORD *)v22 + 13) = 0;
          v22[112] = 0;
          *((_QWORD *)v22 + 17) = 0;
          v22[144] = 0;
          *((_QWORD *)v22 + 21) = 0;
          v22[176] = 0;
          *((_QWORD *)v22 + 25) = 0;
          v22[208] = 0;
          *((_QWORD *)v22 + 29) = 0;
          v22[240] = 0;
          *((_QWORD *)v22 + 33) = 0;
          v22[272] = 0;
          *((_QWORD *)v22 + 37) = 0;
          v22[304] = 0;
          *((_QWORD *)v22 + 41) = 0;
          v22[336] = 0;
          *((_QWORD *)v22 + 45) = 0;
          v22[368] = 0;
          *((_QWORD *)v22 + 49) = 0;
          v22[400] = 0;
          *((_QWORD *)v22 + 53) = 0x800000000LL;
          v23 = v65;
          *((_QWORD *)v22 + 66) = v22 + 544;
          v24 = v70;
          *((_QWORD *)v22 + 67) = 0x600000000LL;
        }
        v76 = v22;
      }
      v25 = v66;
      v22[*v22 + 1] = 0;
      v73 = p_src;
      sub_12FAAE0(v25, v23, (__int64)v24 + (_QWORD)v23);
      v26 = v76;
      v27 = *(unsigned __int8 *)v76;
      *(_BYTE *)v76 = v27 + 1;
      v28 = (unsigned __int8)v27;
      v29 = 4 * (v27 + 3);
      v30 = (char *)&v26[v29];
      v31 = (_BYTE *)v26[v29];
      if ( v73 == p_src )
      {
        v41 = n;
        if ( n )
        {
          if ( n == 1 )
            *v31 = src;
          else
            memcpy(v31, p_src, n);
          v41 = n;
          v31 = *(_BYTE **)v30;
        }
        *((_QWORD *)v30 + 1) = v41;
        v31[v41] = 0;
        v31 = v73;
      }
      else
      {
        if ( v31 == (_BYTE *)&v26[v29 + 2] )
        {
          *(_QWORD *)v30 = v73;
          *((_QWORD *)v30 + 1) = n;
          *((_QWORD *)v30 + 2) = src;
        }
        else
        {
          v32 = v26[4 * v28 + 14];
          *(_QWORD *)v30 = v73;
          *((_QWORD *)v30 + 1) = n;
          *((_QWORD *)v30 + 2) = src;
          if ( v31 )
          {
            v73 = v31;
            src = v32;
            goto LABEL_18;
          }
        }
        v73 = p_src;
        v31 = p_src;
      }
LABEL_18:
      n = 0;
      *v31 = 0;
      if ( v73 != p_src )
        operator delete(v73);
      if ( (_BYTE)v80 )
      {
        sub_FC7790(v78, v10, SHIBYTE(v80));
        v78 = 0;
        v80 = 0;
      }
      if ( v79 != v10 + 6 )
        operator delete(v79);
      v33 = (void **)v76;
      if ( !v76 )
        goto LABEL_4;
      v34 = v77;
      if ( !v77 )
        goto LABEL_4;
      if ( (unsigned __int64)v76 >= v77 && (unsigned __int64)v76 <= v77 + 14848 )
      {
        v43 = *(unsigned int *)(v77 + 14976);
        *(_DWORD *)(v77 + 14976) = v43 + 1;
        *(_QWORD *)(v34 + 8 * v43 + 14848) = v33;
        goto LABEL_4;
      }
      v35 = *((void ***)v76 + 66);
      v36 = &v35[8 * (unsigned __int64)*((unsigned int *)v76 + 134)];
      if ( v35 != v36 )
      {
        v65 = a5;
        v37 = v35;
        do
        {
          while ( 1 )
          {
            v36 -= 8;
            v38 = (void **)v36[3];
            if ( v38 == v36 + 5 )
              break;
            operator delete(v38);
            if ( v37 == v36 )
              goto LABEL_31;
          }
        }
        while ( v37 != v36 );
LABEL_31:
        a5 = v65;
        v36 = (void **)v33[66];
      }
      if ( v36 != v33 + 68 )
        free(v36);
      v39 = (void **)v33[52];
      v40 = v33 + 52;
      if ( v39 != v33 + 54 )
        free(v39);
      v65 = (__m128i *)(v33 + 12);
      do
      {
        while ( 1 )
        {
          v40 -= 4;
          if ( *v40 == v40 + 2 )
            break;
          operator delete(*v40);
          if ( v40 == (void **)v65 )
            goto LABEL_39;
        }
      }
      while ( v40 != (void **)v65 );
LABEL_39:
      v6 += 4;
      operator delete(v33, 0x3A0u);
    }
    while ( v5 != v6 );
  }
}
