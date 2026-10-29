__m128i *__fastcall sub_622ED0(int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  const char *v4; // rbx
  size_t v5; // r12
  size_t v6; // rbp
  char *v7; // rax
  void *v8; // r13
  char *v9; // r14
  size_t v10; // rax
  _DWORD *v11; // r12
  char *v12; // r12
  __int64 v13; // r12
  __int64 v14; // rbp
  unsigned int v15; // r13d
  size_t v16; // rdx
  __int64 v17; // rbx
  void *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rbp
  unsigned __int64 v21; // r12
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  bool v25; // zf
  unsigned __int64 v27; // rbx
  unsigned int v28; // ebp
  unsigned int v29; // ecx
  unsigned int v30; // esi
  int v31; // r12d
  unsigned int v32; // edx
  unsigned __int64 v33; // rbx
  _BYTE *v34; // r13
  unsigned __int64 v35; // rdi
  _BYTE *v36; // rax
  __m128i si128; // xmm0
  int v38; // r12d
  char *v39; // rcx
  unsigned int v40; // eax
  unsigned int v41; // esi
  __int64 v42; // rax
  __int64 v43; // rdx
  char v44; // bp
  size_t v45; // rax
  size_t v46; // rbx
  size_t v47; // rcx
  size_t v48; // rax
  size_t v49; // r12
  char *v50; // rax
  void *v51; // rbp
  char *v52; // rdi
  size_t v53; // rbx
  size_t v54; // r13
  _DWORD *v55; // rax
  void *v56; // rbp
  size_t v57; // r14
  __int64 v58; // rbp
  char *v59; // r13
  __m128i *v61; // [rsp+0h] [rbp-1B8h]
  void *v64; // [rsp+18h] [rbp-1A0h]
  __int64 v65; // [rsp+18h] [rbp-1A0h]
  size_t v66; // [rsp+20h] [rbp-198h]
  char v67; // [rsp+20h] [rbp-198h]
  char v68; // [rsp+28h] [rbp-190h]
  char *s; // [rsp+30h] [rbp-188h]
  int v70; // [rsp+38h] [rbp-180h]
  _QWORD v71[2]; // [rsp+40h] [rbp-178h] BYREF
  _DWORD v72[16]; // [rsp+50h] [rbp-168h] BYREF
  void *src; // [rsp+90h] [rbp-128h]
  __m128i n; // [rsp+98h] [rbp-120h]
  _OWORD v75[11]; // [rsp+B0h] [rbp-108h] BYREF
  __m128i v76[5]; // [rsp+160h] [rbp-58h]

  v3 = *(_QWORD *)(a3 + 16);
  src = v72;
  v4 = *(const char **)(v3 + 16);
  n = _mm_load_si128((const __m128i *)&xmmword_18B6650);
  if ( ((unsigned __int8)v4 & 7) != 0 )
  {
    v27 = (unsigned __int64)v4 >> 3;
    n.m128i_i64[0] = 2;
    LOWORD(v72[0]) = 8555;
    v28 = -(int)v27;
    if ( (int)v27 > 0 )
      v28 = v27;
    v29 = (unsigned int)v27 >> 31;
    if ( v28 <= 9 )
    {
      LOBYTE(v71[0]) = 45;
      v33 = v29 + 1;
      s = (char *)v71;
      v39 = (char *)v71 + (unsigned __int8)v29;
    }
    else
    {
      v30 = v28;
      v31 = 1;
      if ( v28 <= 0x63 )
      {
LABEL_29:
        ++v31;
      }
      else
      {
        while ( 1 )
        {
          if ( v30 <= 0x3E7 )
          {
            v31 += 2;
            goto LABEL_30;
          }
          if ( v30 <= 0x270F )
            break;
          v31 += 4;
          v32 = v30 / 0x2710;
          if ( v30 <= 0x1869F )
            goto LABEL_30;
          v30 /= 0x2710u;
          if ( v32 <= 0x63 )
            goto LABEL_29;
        }
        v31 += 3;
      }
LABEL_30:
      LOBYTE(v71[0]) = 0;
      v33 = v31 + v29;
      s = (char *)v71;
      v34 = v71;
      if ( v33 > 0xF )
      {
        if ( v33 <= 0x1D )
        {
          v65 = 30;
          v35 = 31;
        }
        else
        {
          v65 = v31 + v29;
          v35 = v33 + 1;
        }
        v67 = v29;
        v36 = (_BYTE *)operator new(v35);
        LOBYTE(v29) = v67;
        v34 = v36;
        *v36 = v71[0];
        s = v36;
        v71[0] = v65;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
      *v34 = 45;
      v38 = v31 - 1;
      v39 = &v34[(unsigned __int8)v29];
      v75[0] = si128;
      v75[1] = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
      v75[2] = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
      v75[3] = _mm_load_si128((const __m128i *)&xmmword_18B6400);
      v75[4] = _mm_load_si128((const __m128i *)&xmmword_18B6410);
      v75[5] = _mm_load_si128((const __m128i *)&xmmword_18B6420);
      v75[6] = _mm_load_si128((const __m128i *)&xmmword_18B6430);
      v75[7] = _mm_load_si128((const __m128i *)&xmmword_18B6440);
      v75[8] = _mm_load_si128((const __m128i *)&xmmword_18B6450);
      v75[9] = _mm_load_si128((const __m128i *)&xmmword_18B6460);
      v75[10] = _mm_load_si128((const __m128i *)&xmmword_18B6470);
      v76[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
      *(__m128i *)((char *)v76 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
      if ( v28 <= 0x63 )
        goto LABEL_56;
      do
      {
        v40 = v28 % 0x64;
        v41 = v28;
        v28 /= 0x64u;
        v42 = 2 * v40;
        v39[v38] = *((_BYTE *)v75 + (unsigned int)(v42 + 1));
        v43 = (unsigned int)(v38 - 1);
        v38 -= 2;
        v39[v43] = *((_BYTE *)v75 + v42);
      }
      while ( v41 > 0x270F );
      if ( v41 > 0x3E7 )
      {
LABEL_56:
        v58 = 2 * v28;
        v39[1] = *((_BYTE *)v75 + (unsigned int)(v58 + 1));
        v44 = *((_BYTE *)v75 + v58);
        goto LABEL_38;
      }
    }
    v44 = v28 + 48;
LABEL_38:
    *v39 = v44;
    v70 = v33;
    s[v33] = 0;
    LODWORD(v64) = (_DWORD)s;
    v45 = strlen(s);
    v46 = n.m128i_u64[1];
    v47 = v45;
    v66 = v45;
    v48 = n.m128i_i64[0];
    v49 = v47 + n.m128i_i64[0];
    if ( n.m128i_i64[1] < v47 + n.m128i_i64[0] )
    {
      do
      {
        v46 *= 2LL;
        v50 = (char *)sub_186B270(v46);
        v51 = src;
        v59 = v50;
        memcpy(v50, src, n.m128i_u64[0]);
        if ( n.m128i_i64[1] > 0x40uLL )
          sub_186B220(v51);
        n.m128i_i64[1] = v46;
        src = v59;
      }
      while ( v46 < v49 );
      v48 = n.m128i_i64[0];
    }
    else
    {
      v59 = (char *)src;
    }
    memcpy(&v59[v48], s, v66);
    v10 = v66 + n.m128i_i64[0];
    n.m128i_i64[0] += v66;
    if ( s != (char *)v71 )
    {
      operator delete(s, v71[0] + 1LL);
      v10 = n.m128i_i64[0];
    }
    goto LABEL_47;
  }
  if ( !v4 )
  {
    v72[0] = 1819047278;
    v10 = 4;
    v11 = v72;
    n.m128i_i64[0] = 4;
    goto LABEL_9;
  }
  v5 = strlen(v4);
  if ( v5 <= 0x40 )
  {
    v52 = (char *)v72;
  }
  else
  {
    v6 = 64;
    do
    {
      v6 *= 2LL;
      v7 = (char *)sub_186B270(v6);
      v8 = src;
      v9 = v7;
      memcpy(v7, src, n.m128i_u64[0]);
      if ( n.m128i_i64[1] > 0x40uLL )
        sub_186B220(v8);
      n.m128i_i64[1] = v6;
      src = v9;
    }
    while ( v6 < v5 );
    v52 = &v9[n.m128i_i64[0]];
  }
  memcpy(v52, v4, v5);
  v10 = v5 + n.m128i_i64[0];
  n.m128i_i64[0] += v5;
LABEL_47:
  v53 = n.m128i_u64[1];
  v54 = v10 + 6;
  if ( n.m128i_i64[1] < v10 + 6 )
  {
    do
    {
      v53 *= 2LL;
      v55 = (_DWORD *)sub_186B270(v53);
      v56 = src;
      v11 = v55;
      memcpy(v55, src, n.m128i_u64[0]);
      if ( n.m128i_i64[1] > 0x40uLL )
        sub_186B220(v56);
      n.m128i_i64[1] = v53;
      src = v11;
    }
    while ( v53 < v54 );
    v10 = n.m128i_i64[0];
  }
  else
  {
    v11 = src;
  }
LABEL_9:
  v12 = (char *)v11 + v10;
  *(_DWORD *)v12 = 1702195489;
  *((_WORD *)v12 + 2) = 31090;
  v13 = v3 + 48;
  v14 = *(_QWORD *)(v3 + 40);
  v15 = *(_DWORD *)(v3 + 32);
  v16 = n.m128i_i64[0] + 6;
  n.m128i_i64[0] = v16;
  v17 = *(_QWORD *)(a2 + 24);
  if ( v16 >= n.m128i_i64[1] )
  {
    v57 = 2 * n.m128i_i64[1];
    v18 = (void *)sub_186B270(2 * n.m128i_i64[1]);
    v64 = (void *)n.m128i_i64[0];
    v66 = (size_t)src;
    memcpy(v18, src, n.m128i_u64[0]);
    v16 = (size_t)v64;
    if ( n.m128i_i64[1] > 0x40uLL )
    {
      sub_186B220((void *)v66);
      v16 = n.m128i_i64[0];
    }
    n.m128i_i64[1] = v57;
    src = v18;
  }
  else
  {
    v18 = src;
  }
  *((_BYTE *)v18 + v16) = 0;
  sub_180C5A0(v75, src);
  v19 = sub_15E3510(v17, v75, v15, v13, v14, 0);
  v20 = v19;
  if ( v19 )
    ++*(_DWORD *)(v19 + 8);
  sub_6511B0(*(_QWORD *)(a2 + 32), v19, 0);
  v21 = *(_QWORD *)(a2 + 24);
  v24 = sub_15DC610(
          v21,
          v20,
          *(_DWORD *)(a3 + 24),
          (int)a3 + 32,
          v22,
          v23,
          a1,
          a2,
          a3,
          (int)v64,
          v66,
          v68,
          (int)s,
          v70,
          v71[0],
          (void *)v71[1]);
  *v61 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)v21);
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  if ( v20 && (v25 = *(_DWORD *)(v20 + 8) == 1, --*(_DWORD *)(v20 + 8), v25) )
  {
    sub_15D7BC0(v17, v20);
    if ( n.m128i_i64[1] <= 0x40uLL )
      return v61;
  }
  else if ( n.m128i_i64[1] <= 0x40uLL )
  {
    return v61;
  }
  if ( src )
    sub_186B220(src);
  return v61;
}

