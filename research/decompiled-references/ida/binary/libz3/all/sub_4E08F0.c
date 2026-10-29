void __fastcall sub_4E08F0(__int64 a1, __int64 a2)
{
  __m128i *v3; // rax
  __int64 v4; // rdx
  int v5; // edi
  _BYTE *v6; // r14
  unsigned int v7; // esi
  char *v8; // rax
  __int64 v9; // r9
  char *v10; // r8
  char *v11; // rsi
  char *v12; // rbp
  int v13; // edx
  size_t v14; // rbx
  unsigned __int64 v15; // rbx
  size_t v16; // r15
  __int64 v17; // rax
  _QWORD *v18; // r15
  __int64 v19; // r13
  size_t v20; // rdx
  char *v21; // r9
  char *v22; // rdx
  int v23; // edx
  unsigned __int64 v24; // rdi
  __int64 v25; // r13
  char *v26; // rdx
  void *v27; // r13
  char *v28; // r15
  char *v29; // rdi
  unsigned __int64 v30; // rdi
  _BYTE *v31; // rax
  char *v32; // rdx
  _QWORD *v33; // rcx
  char *v34; // rdi
  _BYTE *v35; // rsi
  __int64 v36; // rax
  char *v37; // r9
  size_t v38; // rdx
  __int64 v39; // r15
  unsigned __int64 v40; // rdi
  __int64 v41; // rax
  unsigned int *v42; // [rsp+0h] [rbp-A8h]
  char *v44; // [rsp+10h] [rbp-98h]
  _QWORD *v45; // [rsp+10h] [rbp-98h]
  _QWORD *v46; // [rsp+10h] [rbp-98h]
  size_t v47; // [rsp+10h] [rbp-98h]
  char *v48; // [rsp+18h] [rbp-90h]
  char *v49; // [rsp+18h] [rbp-90h]
  char *v50; // [rsp+20h] [rbp-88h]
  char *v51; // [rsp+20h] [rbp-88h]
  size_t v52; // [rsp+20h] [rbp-88h]
  char *v53; // [rsp+20h] [rbp-88h]
  char *v54; // [rsp+28h] [rbp-80h]
  void *src; // [rsp+30h] [rbp-78h] BYREF
  size_t n; // [rsp+38h] [rbp-70h]
  _QWORD v57[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v58; // [rsp+50h] [rbp-58h] BYREF
  char *v59; // [rsp+58h] [rbp-50h]
  _QWORD v60[9]; // [rsp+60h] [rbp-48h] BYREF

  src = v57;
  v3 = (__m128i *)operator new(0x11u);
  v4 = *(unsigned int *)(a2 + 24);
  v57[0] = 16;
  v5 = *(_DWORD *)(a1 + 76);
  src = v3;
  v6 = v3;
  v7 = v4 - 1;
  *v3 = _mm_load_si128((const __m128i *)&xmmword_18B6620);
  v3[1].m128i_i8[0] = 0;
  v4 *= 48;
  v42 = (unsigned int *)(a2 + 16);
  v8 = *(char **)(a2 + 16);
  n = 16;
  v9 = 48LL * (v5 & v7);
  v10 = &v8[v9];
  v11 = &v8[v4];
  if ( v9 == v4 )
  {
LABEL_16:
    if ( v8 != v10 )
    {
      while ( 1 )
      {
        v23 = *((_DWORD *)v8 + 1);
        if ( v23 == 2 )
        {
          if ( v5 == *(_DWORD *)v8 && v5 == *((_DWORD *)v8 + 2) )
          {
            v12 = v8;
            goto LABEL_8;
          }
        }
        else if ( !v23 )
        {
          goto LABEL_24;
        }
        v8 += 48;
        if ( v10 == v8 )
          goto LABEL_24;
      }
    }
    goto LABEL_24;
  }
  v12 = &v8[v9];
  while ( 1 )
  {
    v13 = *((_DWORD *)v12 + 1);
    if ( v13 != 2 )
    {
      if ( !v13 )
        goto LABEL_24;
      goto LABEL_4;
    }
    if ( v5 == *(_DWORD *)v12 && v5 == *((_DWORD *)v12 + 2) )
      break;
LABEL_4:
    v12 += 48;
    if ( v11 == v12 )
      goto LABEL_16;
  }
LABEL_8:
  if ( &src == (void **)(v12 + 16) )
  {
LABEL_24:
    LOBYTE(v60[0]) = 0;
    v15 = 16;
    v16 = 35;
    v58 = v60;
    v24 = 36;
    v59 = nullptr;
    goto LABEL_25;
  }
  v14 = *((_QWORD *)v12 + 3);
  if ( v14 > 0x10 )
  {
    if ( (v14 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    if ( v14 <= 0x1F )
    {
      v39 = 32;
      v40 = 33;
    }
    else
    {
      v39 = *((_QWORD *)v12 + 3);
      v40 = v14 + 1;
      if ( (__int64)(v14 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    v6 = (_BYTE *)operator new(v40);
    sub_233E40((__int64)&src);
    src = v6;
    v57[0] = v39;
    v35 = *((_BYTE **)v12 + 2);
  }
  else
  {
    if ( !v14 )
      goto LABEL_11;
    v35 = *((_BYTE **)v12 + 2);
    if ( v14 == 1 )
    {
      *v6 = *v35;
      goto LABEL_11;
    }
  }
  memcpy(v6, v35, v14);
LABEL_11:
  n = v14;
  v6[v14] = 0;
  v15 = n;
  v58 = v60;
  v6 = src;
  v16 = n + 19;
  LOBYTE(v60[0]) = 0;
  v59 = nullptr;
  if ( n + 19 <= 0xF )
  {
    v17 = operator new(0x1Fu);
    v18 = v58;
    v19 = v17;
    v20 = 0;
    v21 = (_BYTE *)(&word_12 + 1);
    v48 = (_BYTE *)(&qword_18 + 6);
    goto LABEL_13;
  }
  if ( (v16 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_create");
  if ( v16 > 0x1D )
  {
    v24 = n + 20;
    if ( (__int64)(n + 20) < 0 )
      std::__throw_bad_alloc();
  }
  else
  {
    v16 = 30;
    v24 = 31;
  }
LABEL_25:
  v25 = operator new(v24);
  if ( v59 )
  {
    if ( v59 != (char *)-1LL )
      memcpy((void *)v25, v58, (size_t)(v59 + 1));
  }
  else
  {
    *(_BYTE *)v25 = *(_BYTE *)v58;
  }
  sub_233E40((__int64)&v58);
  v58 = (void *)v25;
  v60[0] = v16;
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - (_QWORD)v59) <= 0x12 )
    std::__throw_length_error("basic_string::append");
  v21 = v59 + 19;
  if ( v16 >= (unsigned __int64)(v59 + 19) )
  {
    v26 = &v59[v25];
    *(__m128i *)v26 = _mm_load_si128((const __m128i *)&xmmword_18B6630);
    v19 = (__int64)v58;
    *(_DWORD *)(v26 + 15) = 544108393;
    goto LABEL_31;
  }
  if ( (__int64)v21 < 0 )
    std::__throw_length_error("basic_string::_M_create");
  v48 = (char *)(2 * v16);
  if ( (unsigned __int64)v21 < 2 * v16 )
  {
    v54 = v59;
    v51 = v59 + 19;
    if ( (v16 & 0x4000000000000000LL) == 0 )
    {
      v36 = operator new(2 * v16 + 1);
      v18 = v58;
      v37 = v51;
      v19 = v36;
      v38 = (size_t)v54;
      goto LABEL_67;
    }
LABEL_80:
    std::__throw_bad_alloc();
  }
  v48 = v59 + 19;
  v53 = v59;
  if ( (__int64)(v59 + 20) < 0 )
    goto LABEL_80;
  v41 = operator new((unsigned __int64)(v59 + 20));
  v18 = v58;
  v37 = v48;
  v19 = v41;
  v38 = (size_t)v53;
LABEL_67:
  v52 = (size_t)v37;
  v47 = v38;
  memcpy((void *)v19, v18, v38);
  v21 = (char *)v52;
  v20 = v47;
LABEL_13:
  v22 = (char *)(v19 + v20);
  *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_18B6630);
  *(_DWORD *)(v22 + 15) = 544108393;
  if ( v18 != v60 )
  {
    v44 = v21;
    operator delete(v18, v60[0] + 1LL);
    v21 = v44;
  }
  v58 = (void *)v19;
  v60[0] = v48;
LABEL_31:
  v59 = v21;
  v21[v19] = 0;
  if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v59 < v15 )
    std::__throw_length_error("basic_string::append");
  v27 = v58;
  v28 = &v59[v15];
  if ( v58 != v60 )
  {
    if ( v60[0] >= (unsigned __int64)v28 )
    {
LABEL_34:
      if ( v15 )
      {
        v29 = &v59[(_QWORD)v58];
        if ( v15 == 1 )
          *v29 = *v6;
        else
          memcpy(v29, v6, v15);
        v27 = v58;
      }
      goto LABEL_38;
    }
    if ( (__int64)v28 >= 0 )
    {
      v49 = (char *)(2LL * v60[0]);
      if ( (unsigned __int64)v28 >= 2LL * v60[0] )
        goto LABEL_45;
      v30 = 2LL * v60[0] + 1;
      if ( (v60[0] & 0x4000000000000000LL) != 0 )
LABEL_75:
        std::__throw_bad_alloc();
      goto LABEL_46;
    }
LABEL_91:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( (unsigned __int64)v28 <= 0xF )
    goto LABEL_34;
  if ( (__int64)v28 < 0 )
    goto LABEL_91;
  if ( (unsigned __int64)v28 > 0x1D )
  {
LABEL_45:
    v49 = &v59[v15];
    v30 = (unsigned __int64)(v28 + 1);
    if ( (__int64)(v28 + 1) < 0 )
      goto LABEL_75;
  }
  else
  {
    v49 = (_BYTE *)(&qword_18 + 6);
    v30 = 31;
  }
LABEL_46:
  v50 = v59;
  v31 = (_BYTE *)operator new(v30);
  v32 = v50;
  v33 = v58;
  v27 = v31;
  if ( v50 )
  {
    if ( v50 == (_BYTE *)&dword_0 + 1 )
    {
      *v31 = *(_BYTE *)v58;
    }
    else
    {
      v45 = v58;
      memcpy(v31, v58, (size_t)v50);
      v32 = v50;
      v33 = v45;
    }
  }
  if ( v6 && v15 )
  {
    v34 = &v32[(_QWORD)v27];
    if ( v15 == 1 )
    {
      *v34 = *v6;
    }
    else
    {
      v46 = v33;
      memcpy(v34, v6, v15);
      v33 = v46;
    }
  }
  if ( v33 != v60 )
    operator delete(v33, v60[0] + 1LL);
  v58 = v27;
  v60[0] = v49;
LABEL_38:
  v59 = v28;
  v28[(_QWORD)v27] = 0;
  sub_4DC570(v42, *(_DWORD *)(a1 + 72), v58, v59);
  if ( v58 != v60 )
    operator delete(v58, v60[0] + 1LL);
  if ( src != v57 )
    operator delete(src, v57[0] + 1LL);
}

