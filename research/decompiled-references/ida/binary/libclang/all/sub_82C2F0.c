__int64 __fastcall sub_82C2F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
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
  unsigned __int8 *v23; // r13
  unsigned __int8 *v24; // rdx
  __int64 v25; // rax
  __int64 result; // rax
  double *v27; // rdi
  void *v28; // rax
  unsigned __int8 *v29; // rdx
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  void *v35; // rdi
  unsigned __int8 *v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // r15
  __int64 v41; // r14
  void *v42; // rdi
  _BYTE *v43; // [rsp+8h] [rbp-C0h]
  __int64 v44; // [rsp+8h] [rbp-C0h]
  _BYTE *v45; // [rsp+8h] [rbp-C0h]
  _BYTE *v46; // [rsp+10h] [rbp-B8h]
  __int64 v47; // [rsp+18h] [rbp-B0h]
  size_t v48; // [rsp+28h] [rbp-A0h]
  void *v49; // [rsp+30h] [rbp-98h] BYREF
  size_t v50; // [rsp+38h] [rbp-90h]
  double src[2]; // [rsp+40h] [rbp-88h] BYREF
  void *ptr; // [rsp+50h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-70h]
  _BYTE v54[96]; // [rsp+68h] [rbp-60h] BYREF

  v7 = sub_A2E240(a1, a2, 2262, 0);
  if ( !v7 )
    goto LABEL_18;
  v8 = (unsigned __int8 **)v7;
  ptr = v54;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  sub_2572060(a3, &ptr);
  v9 = *v8;
  v10 = n[0];
  v11 = ptr;
  if ( !*v8 )
  {
    v29 = v8[1];
    v30 = *((_DWORD *)v29 + 3744);
    if ( v30 )
    {
      v31 = (unsigned int)(v30 - 1);
      *((_DWORD *)v29 + 3744) = v31;
      v9 = *(unsigned __int8 **)&v29[8 * v31 + 14848];
      v32 = *((unsigned int *)v9 + 134);
      *v9 = 0;
      v33 = *((_QWORD *)v9 + 66);
      *((_DWORD *)v9 + 106) = 0;
      v34 = v33 + (v32 << 6);
      v47 = v33;
      while ( v47 != v34 )
      {
        v34 -= 64;
        v35 = *(void **)(v34 + 24);
        if ( v35 != (void *)(v34 + 40) )
        {
          v46 = v11;
          v44 = v34;
          operator delete(v35, *(_QWORD *)(v34 + 40) + 1LL);
          v11 = v46;
          v34 = v44;
        }
      }
      *((_DWORD *)v9 + 134) = 0;
    }
    else
    {
      v45 = ptr;
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
      v11 = v45;
      *((_QWORD *)v9 + 53) = 0x800000000LL;
      *((_QWORD *)v9 + 66) = v9 + 544;
      *((_QWORD *)v9 + 67) = 0x600000000LL;
    }
    *v8 = v9;
  }
  v9[*v9 + 1] = 0;
  v49 = src;
  if ( v11 )
  {
    v48 = v10;
    if ( v10 > 0xF )
    {
      v43 = v11;
      v28 = (void *)std::string::_M_create();
      v11 = v43;
      v49 = v28;
      v27 = (double *)v28;
      *(_QWORD *)&src[0] = v10;
      goto LABEL_26;
    }
  }
  else
  {
    if ( v10 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    v48 = 0;
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
  v27 = src;
LABEL_26:
  memcpy(v27, v11, v10);
  v10 = v48;
  v12 = (double *)v49;
LABEL_8:
  v50 = v10;
  *((_BYTE *)v12 + v10) = 0;
  v13 = *v8;
  v14 = **v8;
  *v13 = v14 + 1;
  v15 = (unsigned __int8)v14;
  v16 = 32 * v14;
  v17 = &v13[v16];
  v18 = v50;
  v19 = *(double **)&v13[v16 + 96];
  if ( v19 == (double *)&v13[v16 + 112] )
  {
    if ( v49 != src )
    {
      *((_QWORD *)v17 + 12) = v49;
      *(__m128 *)&v13[32 * v15 + 104] = _mm_loadh_ps(src);
      goto LABEL_36;
    }
LABEL_37:
    if ( &v49 == (void **)&v13[v16 + 96] )
    {
      v19 = (double *)v49;
    }
    else
    {
      if ( v50 )
      {
        if ( v50 == 1 )
          *(_BYTE *)v19 = LOBYTE(src[0]);
        else
          memcpy(v19, src, v50);
        v18 = v50;
        v19 = *((double **)v17 + 12);
      }
      *((_QWORD *)v17 + 13) = v18;
      *((_BYTE *)v19 + v18) = 0;
      v19 = (double *)v49;
    }
    goto LABEL_12;
  }
  if ( v49 == src )
    goto LABEL_37;
  v20 = _mm_loadh_ps(src);
  v21 = 32LL * v15;
  v22 = *(double *)&v13[v21 + 112];
  *((_QWORD *)v17 + 12) = v49;
  *(__m128 *)&v13[v21 + 104] = v20;
  if ( !v19 )
  {
LABEL_36:
    v49 = src;
    v19 = src;
    goto LABEL_12;
  }
  v49 = v19;
  src[0] = v22;
LABEL_12:
  v50 = 0;
  *(_BYTE *)v19 = 0;
  if ( v49 != src )
    operator delete(v49, *(_QWORD *)&src[0] + 1LL);
  if ( ptr != v54 )
    free(ptr);
  v23 = *v8;
  if ( !*v8 )
  {
    v36 = v8[1];
    v37 = *((_DWORD *)v36 + 3744);
    if ( v37 )
    {
      v38 = (unsigned int)(v37 - 1);
      *((_DWORD *)v36 + 3744) = v38;
      v23 = *(unsigned __int8 **)&v36[8 * v38 + 14848];
      v39 = *((unsigned int *)v23 + 134);
      *v23 = 0;
      v40 = *((_QWORD *)v23 + 66);
      *((_DWORD *)v23 + 106) = 0;
      v41 = v40 + (v39 << 6);
      while ( v40 != v41 )
      {
        while ( 1 )
        {
          v41 -= 64;
          v42 = *(void **)(v41 + 24);
          if ( v42 == (void *)(v41 + 40) )
            break;
          operator delete(v42, *(_QWORD *)(v41 + 40) + 1LL);
          if ( v40 == v41 )
            goto LABEL_48;
        }
      }
LABEL_48:
      *((_DWORD *)v23 + 134) = 0;
    }
    else
    {
      v23 = (unsigned __int8 *)operator new(0x3A0u);
      *v23 = 0;
      *((_QWORD *)v23 + 12) = v23 + 112;
      *((_QWORD *)v23 + 16) = v23 + 144;
      *((_QWORD *)v23 + 20) = v23 + 176;
      *((_QWORD *)v23 + 24) = v23 + 208;
      *((_QWORD *)v23 + 28) = v23 + 240;
      *((_QWORD *)v23 + 32) = v23 + 272;
      *((_QWORD *)v23 + 36) = v23 + 304;
      *((_QWORD *)v23 + 40) = v23 + 336;
      *((_QWORD *)v23 + 44) = v23 + 368;
      *((_QWORD *)v23 + 48) = v23 + 400;
      *((_QWORD *)v23 + 13) = 0;
      v23[112] = 0;
      *((_QWORD *)v23 + 17) = 0;
      v23[144] = 0;
      *((_QWORD *)v23 + 21) = 0;
      v23[176] = 0;
      *((_QWORD *)v23 + 25) = 0;
      v23[208] = 0;
      *((_QWORD *)v23 + 29) = 0;
      v23[240] = 0;
      *((_QWORD *)v23 + 33) = 0;
      v23[272] = 0;
      *((_QWORD *)v23 + 37) = 0;
      v23[304] = 0;
      *((_QWORD *)v23 + 41) = 0;
      v23[336] = 0;
      *((_QWORD *)v23 + 45) = 0;
      v23[368] = 0;
      *((_QWORD *)v23 + 49) = 0;
      v23[400] = 0;
      *((_QWORD *)v23 + 52) = v23 + 432;
      *((_QWORD *)v23 + 53) = 0x800000000LL;
      *((_QWORD *)v23 + 66) = v23 + 544;
      *((_QWORD *)v23 + 67) = 0x600000000LL;
    }
    *v8 = v23;
  }
  v23[*v23 + 1] = 8;
  v24 = *v8;
  v25 = **v8;
  *v24 = v25 + 1;
  *(_QWORD *)&v24[8 * v25 + 16] = a4;
LABEL_18:
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
  result = 1;
  if ( *(_DWORD *)(a1 + 964) <= 1u )
    return *(unsigned __int8 *)(a1 + 963);
  return result;
}

