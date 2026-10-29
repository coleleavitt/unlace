__int64 __fastcall sub_124EB10(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v4; // rax
  _BYTE *v5; // rdi
  void *v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rsi
  size_t v12; // rax
  _QWORD *v13; // r14
  size_t v14; // rdx
  __int64 v15; // rdx
  _BYTE *v16; // rax
  __int64 v17; // rdx
  size_t v18; // rsi
  size_t v19; // r8
  _BYTE *v20; // rax
  size_t v21; // r10
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __m128i *v24; // rax
  _BYTE *v25; // rdi
  void *v26; // rax
  signed __int64 v27; // rdx
  void *v28; // rax
  _BYTE *v29; // rsi
  __int64 v30; // rdx
  size_t v31; // [rsp+8h] [rbp-150h]
  size_t v32; // [rsp+8h] [rbp-150h]
  _QWORD v33[2]; // [rsp+10h] [rbp-148h] BYREF
  __int64 v34; // [rsp+20h] [rbp-138h] BYREF
  __int64 v35; // [rsp+28h] [rbp-130h] BYREF
  int v36; // [rsp+30h] [rbp-128h] BYREF
  __int64 v37; // [rsp+34h] [rbp-124h]
  int v38; // [rsp+3Ch] [rbp-11Ch]
  void *v39; // [rsp+40h] [rbp-118h] BYREF
  size_t v40; // [rsp+48h] [rbp-110h]
  _QWORD v41[2]; // [rsp+50h] [rbp-108h] BYREF
  void *src; // [rsp+60h] [rbp-F8h] BYREF
  size_t n; // [rsp+68h] [rbp-F0h]
  _QWORD v44[2]; // [rsp+70h] [rbp-E8h] BYREF
  void *v45; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+88h] [rbp-D0h]
  __m128i v47; // [rsp+90h] [rbp-C8h] BYREF
  void *v48; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-B0h]
  unsigned int v50; // [rsp+B0h] [rbp-A8h] BYREF
  int v51; // [rsp+B4h] [rbp-A4h]
  __int128 v52; // [rsp+C0h] [rbp-98h]
  __int64 v53; // [rsp+D0h] [rbp-88h]
  void *ptr; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v55; // [rsp+E8h] [rbp-70h]
  _BYTE v56[104]; // [rsp+F0h] [rbp-68h] BYREF

  v33[0] = a2;
  v33[1] = a3;
  ptr = v56;
  v55 = 0x300000000LL;
  v4 = j__strlen("_");
  sub_22471D0(v33, &ptr, "_", v4, 0xFFFFFFFFLL, 1);
  if ( (_DWORD)v55 != 3 )
    goto LABEL_2;
  v7 = *(void **)ptr;
  v8 = *((_QWORD *)ptr + 1);
  v51 = 0;
  LODWORD(v45) = 33;
  v48 = v7;
  v49 = v8;
  sub_124E850((__int64)&v48, (int *)&v45, "ps", 2);
  LODWORD(v45) = 34;
  sub_124E850((__int64)&v48, (int *)&v45, "vs", 2);
  LODWORD(v45) = 35;
  sub_124E850((__int64)&v48, (int *)&v45, "gs", 2);
  LODWORD(v45) = 36;
  sub_124E850((__int64)&v48, (int *)&v45, "hs", 2);
  LODWORD(v45) = 37;
  sub_124E850((__int64)&v48, (int *)&v45, "ds", 2);
  LODWORD(v45) = 38;
  sub_124E850((__int64)&v48, (int *)&v45, "cs", 2);
  LODWORD(v45) = 39;
  sub_124E850((__int64)&v48, (int *)&v45, "lib", 3);
  LODWORD(v45) = 46;
  sub_124E850((__int64)&v48, (int *)&v45, "ms", 2);
  LODWORD(v45) = 47;
  sub_124E850((__int64)&v48, (int *)&v45, "as", 2);
  if ( !(_BYTE)v51 )
  {
    v5 = ptr;
LABEL_8:
    *(_BYTE *)(a1 + 32) = 0;
    goto LABEL_3;
  }
  v9 = v50;
  v5 = ptr;
  if ( !v50 )
    goto LABEL_8;
  v10 = *((_QWORD *)ptr + 2);
  v11 = *((_QWORD *)ptr + 3);
  v34 = 0;
  if ( (unsigned __int8)sub_2247970(v10, v11, 0, &v34) )
    goto LABEL_2;
  v35 = 0;
  v12 = j__strlen("x");
  v13 = ptr;
  v14 = *((_QWORD *)ptr + 5);
  if ( v14 != v12 || v14 && memcmp(*((const void **)ptr + 4), "x", v14) || v9 != 39 )
  {
    if ( !(unsigned __int8)sub_2247970(v13[4], v13[5], 0, &v35) )
    {
      v49 = 0;
      v48 = &v50;
      LOBYTE(v50) = 0;
      v52 = 0;
      v53 = 0;
      switch ( v35 )
      {
        case 0LL:
          v15 = 49;
          goto LABEL_18;
        case 1LL:
          v15 = 50;
          goto LABEL_18;
        case 2LL:
          v15 = 51;
          goto LABEL_18;
        case 3LL:
          v15 = 52;
          goto LABEL_18;
        case 4LL:
          v15 = 53;
          goto LABEL_18;
        case 5LL:
          v15 = 54;
          goto LABEL_18;
        case 6LL:
          v15 = 55;
          goto LABEL_18;
        case 7LL:
          v15 = 56;
          goto LABEL_18;
        case 8LL:
        case 15LL:
          goto LABEL_48;
        default:
          *(_BYTE *)(a1 + 32) = 0;
          break;
      }
      goto LABEL_39;
    }
LABEL_2:
    *(_BYTE *)(a1 + 32) = 0;
    v5 = ptr;
    goto LABEL_3;
  }
  LOBYTE(v50) = 0;
  v35 = 15;
  v48 = &v50;
  v49 = 0;
  v53 = 0;
  v52 = 0;
LABEL_48:
  v15 = 57;
LABEL_18:
  sub_22BB2C0(&v48, 11, v15);
  v38 = 0;
  v36 = v34;
  v37 = v35 & 0x7FFFFFFF | (unsigned int)v37 & 0x80000000;
  *(_DWORD *)((char *)&v37 + 3) = BYTE3(v37) | 0x80;
  sub_2257830(&src, &v36);
  v16 = (_BYTE *)sub_22B6740(38);
  if ( v16 )
  {
    v39 = v41;
    sub_124E480(&v39, v16, (__int64)&v16[v17]);
    v18 = v40;
    v19 = n;
    v20 = v39;
    v21 = v40 + n;
    if ( v39 == v41 )
      v22 = 15;
    else
      v22 = v41[0];
  }
  else
  {
    v19 = n;
    v20 = v41;
    LOBYTE(v41[0]) = 0;
    v18 = 0;
    v39 = v41;
    v22 = 15;
    v40 = 0;
    v21 = n;
  }
  if ( v22 >= v21 )
  {
    if ( v19 )
    {
      v25 = &v20[v18];
      if ( v19 == 1 )
      {
        *v25 = *(_BYTE *)src;
        v20 = v39;
      }
      else
      {
        v32 = v21;
        memcpy(v25, src, v19);
        v20 = v39;
        v21 = v32;
      }
    }
  }
  else
  {
    if ( src == v44 )
      v23 = 15;
    else
      v23 = v44[0];
    if ( v23 >= v21 )
    {
      v24 = (__m128i *)sub_99BDC0(&src, 0, 0, v20, v18);
      goto LABEL_27;
    }
    v31 = v21;
    sub_998B30((__int64)&v39, v18, 0, src, v19);
    v20 = v39;
    v21 = v31;
  }
  v40 = v21;
  v20[v21] = 0;
  v24 = (__m128i *)&v39;
LABEL_27:
  v45 = &v47;
  if ( (__m128i *)v24->m128i_i64[0] == &v24[1] )
  {
    v47 = _mm_loadu_si128(v24 + 1);
  }
  else
  {
    v45 = (void *)v24->m128i_i64[0];
    v47.m128i_i64[0] = v24[1].m128i_i64[0];
  }
  v46 = v24->m128i_i64[1];
  v24->m128i_i64[0] = (__int64)v24[1].m128i_i64;
  v24->m128i_i64[1] = 0;
  v24[1].m128i_i8[0] = 0;
  sub_22BA720(&v48, v45, v46);
  if ( v45 != &v47 )
    operator delete(v45);
  if ( v39 != v41 )
    operator delete(v39);
  if ( src != v44 )
    operator delete(src);
  sub_22BA610(&v48, v9);
  if ( HIDWORD(v52) == 38 && (v26 = (void *)sub_22B7B00(&v48), n = v27, src = v26, v27 >= 0) && (n & 0x80000000) == 0 )
  {
    switch ( (int)v53 )
    {
      case '!':
      case '"':
      case '#':
      case '$':
      case '%':
      case '&':
        v28 = (void *)0x8000000000000004LL;
        goto LABEL_58;
      case '\'':
        if ( (_DWORD)src == 6
          && ((HIDWORD(src) ^ 0x8000000F) & 0x7FFFFFFF) == 0
          && (n & 0x7FFFFFFF) == 0
          && (n & 0x7FFFFFFF00000000LL) == 0 )
        {
          goto LABEL_59;
        }
        v28 = (void *)0x8000000300000006LL;
LABEL_58:
        v45 = v28;
        v46 = 0;
        if ( (unsigned __int8)sub_A09E20((unsigned int *)&src, (unsigned int *)&v45) == 1 )
          goto LABEL_36;
LABEL_59:
        v29 = v48;
        v30 = v49;
        *(_QWORD *)a1 = a1 + 16;
        sub_124E3C0((_QWORD *)a1, v29, (__int64)&v29[v30]);
        *(_BYTE *)(a1 + 32) = 1;
        break;
      case '.':
      case '/':
        v28 = (void *)0x8000000500000006LL;
        goto LABEL_58;
      default:
        goto LABEL_36;
    }
  }
  else
  {
LABEL_36:
    *(_BYTE *)(a1 + 32) = 0;
  }
  if ( v48 != &v50 )
    operator delete(v48);
LABEL_39:
  v5 = ptr;
LABEL_3:
  if ( v5 != v56 )
    free(v5);
  return a1;
}
