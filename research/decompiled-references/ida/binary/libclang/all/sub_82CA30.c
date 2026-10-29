__int64 __fastcall sub_82CA30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned __int8 v8; // cl
  unsigned __int8 **v9; // rbx
  unsigned __int8 *v10; // r14
  size_t v11; // r15
  _BYTE *v12; // r8
  double *v13; // rax
  unsigned __int8 *v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rax
  unsigned __int8 *v18; // r15
  size_t v19; // rsi
  double *v20; // rdi
  __m128 v21; // xmm0
  __int64 v22; // rax
  double v23; // rcx
  unsigned __int8 *v24; // r13
  unsigned __int8 *v25; // rdx
  __int64 v26; // rax
  __int64 result; // rax
  double *v28; // rdi
  void *v29; // rax
  unsigned __int8 *v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rax
  void *v36; // rdi
  unsigned __int8 *v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // r15
  __int64 v42; // r14
  void *v43; // rdi
  _BYTE *v44; // [rsp+8h] [rbp-C0h]
  __int64 v45; // [rsp+8h] [rbp-C0h]
  _BYTE *v46; // [rsp+8h] [rbp-C0h]
  _BYTE *v47; // [rsp+10h] [rbp-B8h]
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
  v8 = *(_BYTE *)(a3 + 12);
  v9 = (unsigned __int8 **)v7;
  ptr = v54;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  sub_2593F40(a3, (unsigned int)&ptr, 10, v8 ^ 1, 0, 1, 0);
  v10 = *v9;
  v11 = n[0];
  v12 = ptr;
  if ( !*v9 )
  {
    v30 = v9[1];
    v31 = *((_DWORD *)v30 + 3744);
    if ( v31 )
    {
      v32 = (unsigned int)(v31 - 1);
      *((_DWORD *)v30 + 3744) = v32;
      v10 = *(unsigned __int8 **)&v30[8 * v32 + 14848];
      v33 = *((unsigned int *)v10 + 134);
      *v10 = 0;
      v34 = *((_QWORD *)v10 + 66);
      *((_DWORD *)v10 + 106) = 0;
      v35 = v34 + (v33 << 6);
      while ( v34 != v35 )
      {
        v35 -= 64;
        v36 = *(void **)(v35 + 24);
        if ( v36 != (void *)(v35 + 40) )
        {
          v47 = v12;
          v45 = v35;
          operator delete(v36, *(_QWORD *)(v35 + 40) + 1LL);
          v12 = v47;
          v35 = v45;
        }
      }
      *((_DWORD *)v10 + 134) = 0;
    }
    else
    {
      v46 = ptr;
      v10 = (unsigned __int8 *)operator new(0x3A0u);
      *v10 = 0;
      *((_QWORD *)v10 + 12) = v10 + 112;
      *((_QWORD *)v10 + 16) = v10 + 144;
      *((_QWORD *)v10 + 20) = v10 + 176;
      *((_QWORD *)v10 + 24) = v10 + 208;
      *((_QWORD *)v10 + 28) = v10 + 240;
      *((_QWORD *)v10 + 32) = v10 + 272;
      *((_QWORD *)v10 + 36) = v10 + 304;
      *((_QWORD *)v10 + 40) = v10 + 336;
      *((_QWORD *)v10 + 44) = v10 + 368;
      *((_QWORD *)v10 + 48) = v10 + 400;
      *((_QWORD *)v10 + 13) = 0;
      v10[112] = 0;
      *((_QWORD *)v10 + 17) = 0;
      v10[144] = 0;
      *((_QWORD *)v10 + 21) = 0;
      v10[176] = 0;
      *((_QWORD *)v10 + 25) = 0;
      v10[208] = 0;
      *((_QWORD *)v10 + 29) = 0;
      v10[240] = 0;
      *((_QWORD *)v10 + 33) = 0;
      v10[272] = 0;
      *((_QWORD *)v10 + 37) = 0;
      v10[304] = 0;
      *((_QWORD *)v10 + 41) = 0;
      v10[336] = 0;
      *((_QWORD *)v10 + 45) = 0;
      v10[368] = 0;
      *((_QWORD *)v10 + 49) = 0;
      v10[400] = 0;
      *((_QWORD *)v10 + 52) = v10 + 432;
      v12 = v46;
      *((_QWORD *)v10 + 53) = 0x800000000LL;
      *((_QWORD *)v10 + 66) = v10 + 544;
      *((_QWORD *)v10 + 67) = 0x600000000LL;
    }
    *v9 = v10;
  }
  v10[*v10 + 1] = 0;
  v49 = src;
  if ( v12 )
  {
    v48 = v11;
    if ( v11 > 0xF )
    {
      v44 = v12;
      v29 = (void *)std::string::_M_create();
      v12 = v44;
      v49 = v29;
      v28 = (double *)v29;
      *(_QWORD *)&src[0] = v11;
      goto LABEL_26;
    }
  }
  else
  {
    if ( v11 )
      std::__throw_logic_error("basic_string: construction from null is not valid");
    v48 = 0;
  }
  if ( v11 == 1 )
  {
    LOBYTE(src[0]) = *v12;
LABEL_7:
    v13 = src;
    goto LABEL_8;
  }
  if ( !v11 )
    goto LABEL_7;
  v28 = src;
LABEL_26:
  memcpy(v28, v12, v11);
  v11 = v48;
  v13 = (double *)v49;
LABEL_8:
  v50 = v11;
  *((_BYTE *)v13 + v11) = 0;
  v14 = *v9;
  v15 = **v9;
  *v14 = v15 + 1;
  v16 = (unsigned __int8)v15;
  v17 = 32 * v15;
  v18 = &v14[v17];
  v19 = v50;
  v20 = *(double **)&v14[v17 + 96];
  if ( v20 == (double *)&v14[v17 + 112] )
  {
    if ( v49 != src )
    {
      *((_QWORD *)v18 + 12) = v49;
      *(__m128 *)&v14[32 * v16 + 104] = _mm_loadh_ps(src);
      goto LABEL_36;
    }
LABEL_37:
    if ( &v49 == (void **)&v14[v17 + 96] )
    {
      v20 = (double *)v49;
    }
    else
    {
      if ( v50 )
      {
        if ( v50 == 1 )
          *(_BYTE *)v20 = LOBYTE(src[0]);
        else
          memcpy(v20, src, v50);
        v19 = v50;
        v20 = *((double **)v18 + 12);
      }
      *((_QWORD *)v18 + 13) = v19;
      *((_BYTE *)v20 + v19) = 0;
      v20 = (double *)v49;
    }
    goto LABEL_12;
  }
  if ( v49 == src )
    goto LABEL_37;
  v21 = _mm_loadh_ps(src);
  v22 = 32LL * v16;
  v23 = *(double *)&v14[v22 + 112];
  *((_QWORD *)v18 + 12) = v49;
  *(__m128 *)&v14[v22 + 104] = v21;
  if ( !v20 )
  {
LABEL_36:
    v49 = src;
    v20 = src;
    goto LABEL_12;
  }
  v49 = v20;
  src[0] = v23;
LABEL_12:
  v50 = 0;
  *(_BYTE *)v20 = 0;
  if ( v49 != src )
    operator delete(v49, *(_QWORD *)&src[0] + 1LL);
  if ( ptr != v54 )
    free(ptr);
  v24 = *v9;
  if ( !*v9 )
  {
    v37 = v9[1];
    v38 = *((_DWORD *)v37 + 3744);
    if ( v38 )
    {
      v39 = (unsigned int)(v38 - 1);
      *((_DWORD *)v37 + 3744) = v39;
      v24 = *(unsigned __int8 **)&v37[8 * v39 + 14848];
      v40 = *((unsigned int *)v24 + 134);
      *v24 = 0;
      v41 = *((_QWORD *)v24 + 66);
      *((_DWORD *)v24 + 106) = 0;
      v42 = v41 + (v40 << 6);
      while ( v41 != v42 )
      {
        while ( 1 )
        {
          v42 -= 64;
          v43 = *(void **)(v42 + 24);
          if ( v43 == (void *)(v42 + 40) )
            break;
          operator delete(v43, *(_QWORD *)(v42 + 40) + 1LL);
          if ( v41 == v42 )
            goto LABEL_48;
        }
      }
LABEL_48:
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
    *v9 = v24;
  }
  v24[*v24 + 1] = 8;
  v25 = *v9;
  v26 = **v9;
  *v25 = v26 + 1;
  *(_QWORD *)&v25[8 * v26 + 16] = a4;
LABEL_18:
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
  result = 1;
  if ( *(_DWORD *)(a1 + 964) <= 1u )
    return *(unsigned __int8 *)(a1 + 963);
  return result;
}

