__int64 __fastcall sub_97FC50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int8 v7; // cl
  unsigned __int8 **v8; // rbx
  unsigned __int8 *v9; // r14
  size_t v10; // r15
  _BYTE *v11; // r8
  double *v12; // rax
  unsigned __int8 *v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  unsigned __int8 *v17; // r15
  size_t v18; // rsi
  double *v19; // rdi
  __m128 v20; // xmm0
  __int64 v21; // rax
  double v22; // rcx
  __int64 v23; // r15
  unsigned __int8 *v24; // r12
  unsigned __int8 *v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // rdi
  __int64 (*v28)(void); // rax
  _QWORD *v29; // rdi
  __int64 (*v30)(void); // rdx
  _QWORD *v31; // rdi
  _QWORD **v32; // rdi
  double *v34; // rdi
  void *v35; // rax
  unsigned __int8 *v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  void *v42; // rdi
  unsigned __int8 *v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // r14
  __int64 v48; // r13
  void *v49; // rdi
  _BYTE *v50; // [rsp+8h] [rbp-C0h]
  __int64 v51; // [rsp+8h] [rbp-C0h]
  _BYTE *v52; // [rsp+8h] [rbp-C0h]
  _BYTE *v53; // [rsp+10h] [rbp-B8h]
  __int64 v54; // [rsp+18h] [rbp-B0h]
  size_t v55; // [rsp+28h] [rbp-A0h]
  void *v56; // [rsp+30h] [rbp-98h] BYREF
  size_t v57; // [rsp+38h] [rbp-90h]
  double src[2]; // [rsp+40h] [rbp-88h] BYREF
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-70h]
  _BYTE v61[96]; // [rsp+68h] [rbp-60h] BYREF

  v5 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  v6 = sub_A2E240(a1, v5, 2262, 0);
  if ( v6 )
  {
    v7 = *(_BYTE *)(a3 + 12);
    v8 = (unsigned __int8 **)v6;
    ptr = v61;
    *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    sub_2593F40(a3, (unsigned int)&ptr, 10, v7 ^ 1, 0, 1, 0);
    v9 = *v8;
    v10 = n[0];
    v11 = ptr;
    if ( !*v8 )
    {
      v36 = v8[1];
      v37 = *((_DWORD *)v36 + 3744);
      if ( v37 )
      {
        v38 = (unsigned int)(v37 - 1);
        *((_DWORD *)v36 + 3744) = v38;
        v9 = *(unsigned __int8 **)&v36[8 * v38 + 14848];
        v39 = *((unsigned int *)v9 + 134);
        *v9 = 0;
        v40 = *((_QWORD *)v9 + 66);
        *((_DWORD *)v9 + 106) = 0;
        v41 = v40 + (v39 << 6);
        v54 = v40;
        while ( v54 != v41 )
        {
          v41 -= 64;
          v42 = *(void **)(v41 + 24);
          if ( v42 != (void *)(v41 + 40) )
          {
            v53 = v11;
            v51 = v41;
            operator delete(v42, *(_QWORD *)(v41 + 40) + 1LL);
            v11 = v53;
            v41 = v51;
          }
        }
        *((_DWORD *)v9 + 134) = 0;
      }
      else
      {
        v52 = ptr;
        v9 = (unsigned __int8 *)operator new(0x3A0u);
        *v9 = 0;
        *((_QWORD *)v9 + 12) = v9 + 112;
        *((_QWORD *)v9 + 16) = v9 + 144;
        *((_QWORD *)v9 + 20) = v9 + 176;
        *((_QWORD *)v9 + 24) = v9 + 208;
        *((_QWORD *)v9 + 28) = v9 + 240;
        *((_QWORD *)v9 + 32) = v9 + 272;
        *((_QWORD *)v9 + 36) = v9 + 304;
        *((_QWORD *)v9 + 40) = v9 + 336;
        *((_QWORD *)v9 + 44) = v9 + 368;
        *((_QWORD *)v9 + 48) = v9 + 400;
        *((_QWORD *)v9 + 13) = 0;
        v9[112] = 0;
        *((_QWORD *)v9 + 17) = 0;
        v9[144] = 0;
        *((_QWORD *)v9 + 21) = 0;
        v9[176] = 0;
        *((_QWORD *)v9 + 25) = 0;
        v9[208] = 0;
        *((_QWORD *)v9 + 29) = 0;
        v9[240] = 0;
        *((_QWORD *)v9 + 33) = 0;
        v9[272] = 0;
        *((_QWORD *)v9 + 37) = 0;
        v9[304] = 0;
        *((_QWORD *)v9 + 41) = 0;
        v9[336] = 0;
        *((_QWORD *)v9 + 45) = 0;
        v9[368] = 0;
        *((_QWORD *)v9 + 49) = 0;
        v9[400] = 0;
        *((_QWORD *)v9 + 52) = v9 + 432;
        v11 = v52;
        *((_QWORD *)v9 + 53) = 0x800000000LL;
        *((_QWORD *)v9 + 66) = v9 + 544;
        *((_QWORD *)v9 + 67) = 0x600000000LL;
      }
      *v8 = v9;
    }
    v9[*v9 + 1] = 0;
    v56 = src;
    if ( v11 )
    {
      v55 = v10;
      if ( v10 > 0xF )
      {
        v50 = v11;
        v35 = (void *)std::string::_M_create();
        v11 = v50;
        v56 = v35;
        v34 = (double *)v35;
        *(_QWORD *)&src[0] = v10;
        goto LABEL_30;
      }
    }
    else
    {
      if ( v10 )
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v55 = 0;
    }
    if ( v10 == 1 )
    {
      LOBYTE(src[0]) = *v11;
LABEL_7:
      v12 = src;
      goto LABEL_8;
    }
    if ( !v10 )
      goto LABEL_7;
    v34 = src;
LABEL_30:
    memcpy(v34, v11, v10);
    v10 = v55;
    v12 = (double *)v56;
LABEL_8:
    v57 = v10;
    *((_BYTE *)v12 + v10) = 0;
    v13 = *v8;
    v14 = **v8;
    *v13 = v14 + 1;
    v15 = (unsigned __int8)v14;
    v16 = 32 * v14;
    v17 = &v13[v16];
    v18 = v57;
    v19 = *(double **)&v13[v16 + 96];
    if ( v19 == (double *)&v13[v16 + 112] )
    {
      if ( v56 != src )
      {
        *((_QWORD *)v17 + 12) = v56;
        *(__m128 *)&v13[32 * v15 + 104] = _mm_loadh_ps(src);
        goto LABEL_40;
      }
    }
    else if ( v56 != src )
    {
      v20 = _mm_loadh_ps(src);
      v21 = 32LL * v15;
      v22 = *(double *)&v13[v21 + 112];
      *((_QWORD *)v17 + 12) = v56;
      *(__m128 *)&v13[v21 + 104] = v20;
      if ( v19 )
      {
        v56 = v19;
        src[0] = v22;
LABEL_12:
        v57 = 0;
        *(_BYTE *)v19 = 0;
        if ( v56 != src )
          operator delete(v56, *(_QWORD *)&src[0] + 1LL);
        if ( ptr != v61 )
          free(ptr);
        v23 = *(_QWORD *)(v5 + 8);
        v24 = *v8;
        if ( !*v8 )
        {
          v43 = v8[1];
          v44 = *((_DWORD *)v43 + 3744);
          if ( v44 )
          {
            v45 = (unsigned int)(v44 - 1);
            *((_DWORD *)v43 + 3744) = v45;
            v24 = *(unsigned __int8 **)&v43[8 * v45 + 14848];
            v46 = *((unsigned int *)v24 + 134);
            v47 = *((_QWORD *)v24 + 66);
            *v24 = 0;
            *((_DWORD *)v24 + 106) = 0;
            v48 = v47 + (v46 << 6);
            while ( v47 != v48 )
            {
              while ( 1 )
              {
                v48 -= 64;
                v49 = *(void **)(v48 + 24);
                if ( v49 == (void *)(v48 + 40) )
                  break;
                operator delete(v49, *(_QWORD *)(v48 + 40) + 1LL);
                if ( v47 == v48 )
                  goto LABEL_52;
              }
            }
LABEL_52:
            *((_DWORD *)v24 + 134) = 0;
          }
          else
          {
            v24 = (unsigned __int8 *)operator new(0x3A0u);
            *v24 = 0;
            *((_QWORD *)v24 + 12) = v24 + 112;
            *((_QWORD *)v24 + 16) = v24 + 144;
            *((_QWORD *)v24 + 20) = v24 + 176;
            *((_QWORD *)v24 + 24) = v24 + 208;
            *((_QWORD *)v24 + 28) = v24 + 240;
            *((_QWORD *)v24 + 32) = v24 + 272;
            *((_QWORD *)v24 + 36) = v24 + 304;
            *((_QWORD *)v24 + 40) = v24 + 336;
            *((_QWORD *)v24 + 44) = v24 + 368;
            *((_QWORD *)v24 + 48) = v24 + 400;
            *((_QWORD *)v24 + 13) = 0;
            v24[112] = 0;
            *((_QWORD *)v24 + 17) = 0;
            v24[144] = 0;
            *((_QWORD *)v24 + 21) = 0;
            v24[176] = 0;
            *((_QWORD *)v24 + 25) = 0;
            v24[208] = 0;
            *((_QWORD *)v24 + 29) = 0;
            v24[240] = 0;
            *((_QWORD *)v24 + 33) = 0;
            v24[272] = 0;
            *((_QWORD *)v24 + 37) = 0;
            v24[304] = 0;
            *((_QWORD *)v24 + 41) = 0;
            v24[336] = 0;
            *((_QWORD *)v24 + 45) = 0;
            v24[368] = 0;
            *((_QWORD *)v24 + 49) = 0;
            v24[400] = 0;
            *((_QWORD *)v24 + 52) = v24 + 432;
            *((_QWORD *)v24 + 53) = 0x800000000LL;
            *((_QWORD *)v24 + 66) = v24 + 544;
            *((_QWORD *)v24 + 67) = 0x600000000LL;
          }
          *v8 = v24;
        }
        v24[*v24 + 1] = 8;
        v25 = *v8;
        v26 = **v8;
        *v25 = v26 + 1;
        *(_QWORD *)&v25[8 * v26 + 16] = v23;
        goto LABEL_18;
      }
LABEL_40:
      v56 = src;
      v19 = src;
      goto LABEL_12;
    }
    if ( &v56 == (void **)&v13[v16 + 96] )
    {
      v19 = (double *)v56;
    }
    else
    {
      if ( v57 )
      {
        if ( v57 == 1 )
          *(_BYTE *)v19 = LOBYTE(src[0]);
        else
          memcpy(v19, src, v57);
        v18 = v57;
        v19 = *((double **)v17 + 12);
      }
      *((_QWORD *)v17 + 13) = v18;
      *((_BYTE *)v19 + v18) = 0;
      v19 = (double *)v56;
    }
    goto LABEL_12;
  }
LABEL_18:
  v27 = *(_QWORD **)(a1 + 24);
  v28 = *(__int64 (**)(void))(*v27 + 32LL);
  if ( (char *)v28 != (char *)sub_8D7FC0 )
    return v28();
  v29 = (_QWORD *)v27[3];
  v30 = *(__int64 (**)(void))(*v29 + 32LL);
  if ( v30 != v28 )
    return v30();
  v31 = (_QWORD *)v29[3];
  v28 = *(__int64 (**)(void))(*v31 + 32LL);
  if ( v28 != v30 )
    return v28();
  v32 = (_QWORD **)v31[3];
  v30 = (__int64 (*)(void))(*v32)[4];
  if ( v30 == v28 )
  {
    v28 = *(__int64 (**)(void))(*v32[3] + 32LL);
    return v28();
  }
  return v30();
}

