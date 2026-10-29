__m128i *__fastcall sub_6226D0(int a1, __int64 a2, __int64 a3)
{
  size_t v3; // rax
  __int64 v4; // rcx
  const char *v5; // rbx
  size_t v6; // r12
  size_t v7; // rbp
  char *v8; // rax
  void *v9; // r13
  char *v10; // r15
  size_t v11; // rax
  _DWORD *v12; // r12
  __int64 v13; // rbx
  size_t v14; // rdx
  __int64 v15; // r12
  unsigned int v16; // r13d
  size_t v17; // rbp
  void *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // rbp
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  bool v25; // zf
  unsigned __int64 v27; // rbx
  unsigned int v28; // ebp
  unsigned int v29; // r13d
  unsigned int v30; // ecx
  int v31; // r12d
  unsigned int v32; // edx
  char *v33; // rcx
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rdi
  __int64 v36; // r15
  __m128i si128; // xmm0
  int v38; // r12d
  char *v39; // r13
  unsigned int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rdx
  char v44; // bp
  size_t v45; // rax
  size_t v46; // rbx
  size_t v47; // r15
  size_t v48; // rax
  size_t v49; // r12
  char *v50; // rax
  void *v51; // rbp
  char *v52; // rdi
  size_t v53; // rbx
  size_t v54; // r13
  _DWORD *v55; // rax
  void *v56; // rbp
  __int64 v57; // rbp
  char *v58; // r13
  __m128i *v60; // [rsp+0h] [rbp-1B8h]
  size_t v61; // [rsp+8h] [rbp-1B0h]
  int v63; // [rsp+18h] [rbp-1A0h]
  int v64[2]; // [rsp+18h] [rbp-1A0h]
  _QWORD *v65; // [rsp+20h] [rbp-198h]
  void *v66; // [rsp+28h] [rbp-190h]
  char *s; // [rsp+30h] [rbp-188h]
  int v68; // [rsp+38h] [rbp-180h]
  _QWORD v69[2]; // [rsp+40h] [rbp-178h] BYREF
  _DWORD v70[16]; // [rsp+50h] [rbp-168h] BYREF
  void *src; // [rsp+90h] [rbp-128h]
  __m128i n; // [rsp+98h] [rbp-120h]
  _OWORD v73[11]; // [rsp+B0h] [rbp-108h] BYREF
  __m128i v74[5]; // [rsp+160h] [rbp-58h]

  v3 = *(_QWORD *)(a3 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  src = v70;
  v5 = *(const char **)(v3 + 16);
  v61 = v3;
  v63 = v4;
  n = _mm_load_si128((const __m128i *)&xmmword_18B6650);
  if ( ((unsigned __int8)v5 & 7) != 0 )
  {
    v27 = (unsigned __int64)v5 >> 3;
    n.m128i_i64[0] = 2;
    LOWORD(v70[0]) = 8555;
    v28 = -(int)v27;
    if ( (int)v27 > 0 )
      v28 = v27;
    v29 = (unsigned int)v27 >> 31;
    if ( v28 <= 9 )
    {
      LOBYTE(v69[0]) = 45;
      v34 = v29 + 1;
      v65 = v69;
      v39 = (char *)v69 + (unsigned __int8)v29;
      s = (char *)v69;
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
      v33 = (char *)v69;
      LOBYTE(v69[0]) = 0;
      v34 = v31 + v29;
      v65 = v69;
      s = (char *)v69;
      if ( v34 > 0xF )
      {
        if ( v34 <= 0x1D )
        {
          v36 = 30;
          v35 = 31;
        }
        else
        {
          v35 = v34 + 1;
          v36 = v31 + v29;
        }
        v33 = (char *)operator new(v35);
        *v33 = v69[0];
        s = v33;
        v69[0] = v36;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_18B63D0);
      *v33 = 45;
      v38 = v31 - 1;
      v39 = &v33[(unsigned __int8)v29];
      v73[0] = si128;
      v73[1] = _mm_load_si128((const __m128i *)&xmmword_18B63E0);
      v73[2] = _mm_load_si128((const __m128i *)&xmmword_18B63F0);
      v73[3] = _mm_load_si128((const __m128i *)&xmmword_18B6400);
      v73[4] = _mm_load_si128((const __m128i *)&xmmword_18B6410);
      v73[5] = _mm_load_si128((const __m128i *)&xmmword_18B6420);
      v73[6] = _mm_load_si128((const __m128i *)&xmmword_18B6430);
      v73[7] = _mm_load_si128((const __m128i *)&xmmword_18B6440);
      v73[8] = _mm_load_si128((const __m128i *)&xmmword_18B6450);
      v73[9] = _mm_load_si128((const __m128i *)&xmmword_18B6460);
      v73[10] = _mm_load_si128((const __m128i *)&xmmword_18B6470);
      v74[0] = _mm_load_si128((const __m128i *)&xmmword_18B6480);
      *(__m128i *)((char *)v74 + 9) = _mm_load_si128((const __m128i *)&xmmword_18B6490);
      if ( v28 <= 0x63 )
        goto LABEL_56;
      do
      {
        v40 = v28 % 0x64;
        v41 = v28;
        v28 /= 0x64u;
        v42 = 2 * v40;
        v39[v38] = *((_BYTE *)v73 + (unsigned int)(v42 + 1));
        v43 = (unsigned int)(v38 - 1);
        v38 -= 2;
        v39[v43] = *((_BYTE *)v73 + v42);
      }
      while ( v41 > 0x270F );
      if ( v41 > 0x3E7 )
      {
LABEL_56:
        v57 = 2 * v28;
        v39[1] = *((_BYTE *)v73 + (unsigned int)(v57 + 1));
        v44 = *((_BYTE *)v73 + v57);
        goto LABEL_38;
      }
    }
    v44 = v28 + 48;
LABEL_38:
    *v39 = v44;
    v68 = v34;
    s[v34] = 0;
    LOBYTE(v66) = (_BYTE)s;
    v45 = strlen(s);
    v46 = n.m128i_u64[1];
    v47 = v45;
    v48 = n.m128i_i64[0];
    v49 = v47 + n.m128i_i64[0];
    if ( n.m128i_i64[1] < v47 + n.m128i_i64[0] )
    {
      do
      {
        v46 *= 2LL;
        v50 = (char *)sub_186B270(v46);
        v51 = src;
        v58 = v50;
        memcpy(v50, src, n.m128i_u64[0]);
        if ( n.m128i_i64[1] > 0x40uLL )
          sub_186B220(v51);
        n.m128i_i64[1] = v46;
        src = v58;
      }
      while ( v46 < v49 );
      v48 = n.m128i_i64[0];
    }
    else
    {
      v58 = (char *)src;
    }
    memcpy(&v58[v48], s, v47);
    v11 = v47 + n.m128i_i64[0];
    n.m128i_i64[0] += v47;
    if ( s != (char *)v69 )
    {
      operator delete(s, v69[0] + 1LL);
      v11 = n.m128i_i64[0];
    }
    goto LABEL_47;
  }
  if ( !v5 )
  {
    v70[0] = 1819047278;
    v11 = 4;
    v12 = v70;
    n.m128i_i64[0] = 4;
    goto LABEL_9;
  }
  v6 = strlen(v5);
  if ( v6 <= 0x40 )
  {
    v52 = (char *)v70;
  }
  else
  {
    v7 = 64;
    do
    {
      v7 *= 2LL;
      v8 = (char *)sub_186B270(v7);
      v9 = src;
      v10 = v8;
      memcpy(v8, src, n.m128i_u64[0]);
      if ( n.m128i_i64[1] > 0x40uLL )
        sub_186B220(v9);
      n.m128i_i64[1] = v7;
      src = v10;
    }
    while ( v7 < v6 );
    v52 = &v10[n.m128i_i64[0]];
  }
  memcpy(v52, v5, v6);
  v11 = v6 + n.m128i_i64[0];
  n.m128i_i64[0] += v6;
LABEL_47:
  v53 = n.m128i_u64[1];
  v54 = v11 + 4;
  if ( n.m128i_i64[1] < v11 + 4 )
  {
    do
    {
      v53 *= 2LL;
      v55 = (_DWORD *)sub_186B270(v53);
      v56 = src;
      v12 = v55;
      memcpy(v55, src, n.m128i_u64[0]);
      if ( n.m128i_i64[1] > 0x40uLL )
        sub_186B220(v56);
      n.m128i_i64[1] = v53;
      src = v12;
    }
    while ( v53 < v54 );
    v11 = n.m128i_i64[0];
  }
  else
  {
    v12 = src;
  }
LABEL_9:
  *(_DWORD *)((char *)v12 + v11) = 1936613665;
  v13 = *(_QWORD *)(a2 + 24);
  v14 = n.m128i_i64[0] + 4;
  n.m128i_i64[0] = v14;
  v15 = *(_QWORD *)(v61 + 40);
  v16 = *(_DWORD *)(v61 + 32);
  v17 = v61 + 48;
  if ( v14 >= n.m128i_i64[1] )
  {
    v61 = 2 * n.m128i_i64[1];
    v18 = (void *)sub_186B270(2 * n.m128i_i64[1]);
    v65 = (_QWORD *)n.m128i_i64[0];
    v66 = src;
    memcpy(v18, src, n.m128i_u64[0]);
    v14 = (size_t)v65;
    if ( n.m128i_i64[1] > 0x40uLL )
    {
      sub_186B220(v66);
      v14 = n.m128i_i64[0];
    }
    src = v18;
    n.m128i_i64[1] = v61;
  }
  else
  {
    v18 = src;
  }
  *((_BYTE *)v18 + v14) = 0;
  sub_180C5A0(v73, src);
  v19 = sub_15E3510(v13, v73, v16, v17, v15, 0);
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
          v61,
          a3,
          v63,
          (int)v65,
          (char)v66,
          (int)s,
          v68,
          v69[0],
          (void *)v69[1]);
  *v60 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)v21);
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  if ( v20 && (v25 = *(_DWORD *)(v20 + 8) == 1, --*(_DWORD *)(v20 + 8), v25) )
  {
    sub_15D7BC0(*(_QWORD *)v64, v20);
    if ( n.m128i_i64[1] <= 0x40uLL )
      return v60;
  }
  else if ( n.m128i_i64[1] <= 0x40uLL )
  {
    return v60;
  }
  if ( src )
    sub_186B220(src);
  return v60;
}

