__int64 __fastcall sub_2239C30(__int64 a1, __int64 a2, const void **a3, void **a4)
{
  int v4; // r15d
  void **p_ptr; // r14
  const void *v8; // r12
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  char v11; // cl
  char v12; // cl
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  const void *v18; // r9
  unsigned __int64 v19; // r14
  int v20; // eax
  char v21; // dl
  char *v23; // rdi
  _BYTE *v24; // rdi
  void **v25; // rcx
  void *v26; // rdx
  size_t v27; // rdx
  void **v28; // [rsp+8h] [rbp-1A0h] BYREF
  __int64 v29; // [rsp+10h] [rbp-198h]
  const void **v30; // [rsp+18h] [rbp-190h]
  __int64 v31; // [rsp+20h] [rbp-188h]
  char *v32; // [rsp+28h] [rbp-180h]
  const void ***v33; // [rsp+30h] [rbp-178h]
  const void *v34; // [rsp+38h] [rbp-170h]
  _WORD *v35; // [rsp+40h] [rbp-168h]
  void **v36; // [rsp+48h] [rbp-160h]
  const void **v37; // [rsp+50h] [rbp-158h] BYREF
  __int16 v38; // [rsp+70h] [rbp-138h]
  char v39; // [rsp+80h] [rbp-128h] BYREF
  __int16 v40; // [rsp+A0h] [rbp-108h]
  __int64 v41[2]; // [rsp+B0h] [rbp-F8h] BYREF
  char v42; // [rsp+C0h] [rbp-E8h]
  __int16 v43; // [rsp+D0h] [rbp-D8h]
  void *src; // [rsp+E0h] [rbp-C8h] BYREF
  size_t n; // [rsp+E8h] [rbp-C0h]
  _QWORD v46[2]; // [rsp+F0h] [rbp-B8h] BYREF
  __int16 v47; // [rsp+100h] [rbp-A8h]
  void *ptr; // [rsp+110h] [rbp-98h] BYREF
  __m128i si128; // [rsp+118h] [rbp-90h]
  _WORD v50[64]; // [rsp+128h] [rbp-80h] BYREF

  p_ptr = &ptr;
  v29 = a2;
  v30 = a3;
  v36 = a4;
  v50[4] = 260;
  ptr = a3;
  sub_2230FD0(a1, (const void ***)&ptr, 0, 1u, 0, 0);
  v8 = *a3;
  v9 = (unsigned __int64)a3[1];
  ptr = v50;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  if ( v9 > 0x40 )
  {
    sub_2236E10((__int64)&ptr, v50, v9, 1);
    v23 = (char *)ptr + si128.m128i_i64[0];
  }
  else
  {
    if ( !v9 )
      goto LABEL_3;
    v23 = (char *)v50;
  }
  memcpy(v23, v8, v9);
  v9 += si128.m128i_i64[0];
LABEL_3:
  si128.m128i_i64[0] = v9;
  v10 = *(_QWORD *)(v29 + 24);
  v11 = *(_BYTE *)(a1 + 16);
  v28 = *(void ***)(v29 + 32);
  v12 = v11 & 1;
  v13 = ((__int64)v28 - v10) >> 5;
  if ( (_DWORD)v13 )
  {
    if ( v12 )
    {
      v14 = 0;
      v28 = &ptr;
      v35 = v50;
      v32 = &v39;
      v31 = 32LL * (unsigned int)(v13 - 1);
      v33 = &v37;
      while ( 1 )
      {
        v16 = v14 + v10;
        v17 = 0;
        v18 = *(const void **)v16;
        v19 = *(_QWORD *)(v16 + 8);
        si128.m128i_i64[0] = 0;
        if ( v19 > si128.m128i_i64[1] )
        {
          v34 = v18;
          sub_2236E10((__int64)v28, v35, v19, 1);
          v17 = si128.m128i_i64[0];
          v18 = v34;
        }
        if ( v19 )
        {
          memcpy((char *)ptr + v17, v18, v19);
          v17 = si128.m128i_i64[0];
        }
        v38 = 260;
        v47 = 257;
        v43 = 257;
        si128.m128i_i64[0] = v19 + v17;
        v40 = 257;
        v37 = v30;
        sub_228A3B0(v28, v33, v32, v41, &src);
        v20 = v4;
        BYTE1(v20) = 0;
        v47 = 261;
        v4 = v20;
        src = ptr;
        n = si128.m128i_i64[0];
        sub_2230FD0((__int64)v41, (const void ***)&src, 0, 1u, 0, (unsigned __int8)v20);
        sub_FC2AF0((__int64 *)a1);
        v21 = v42 & 1;
        if ( (v42 & 1) != 0 )
        {
          *(_DWORD *)a1 = v41[0];
          *(_QWORD *)(a1 + 8) = v41[1];
        }
        else
        {
          v15 = v41[0];
          v41[0] = 0;
          *(_QWORD *)a1 = v15;
        }
        *(_BYTE *)(a1 + 16) = v21 | *(_BYTE *)(a1 + 16) & 0xFE;
        sub_FC2AF0(v41);
        if ( v31 == v14 )
        {
          p_ptr = v28;
          v12 = *(_BYTE *)(a1 + 16) & 1;
          goto LABEL_17;
        }
        v14 += 32;
        if ( (*(_BYTE *)(a1 + 16) & 1) == 0 )
          break;
        v10 = *(_QWORD *)(v29 + 24);
      }
      p_ptr = v28;
      v9 = si128.m128i_i64[0];
    }
  }
  else
  {
LABEL_17:
    if ( v12 )
      goto LABEL_18;
    v9 = si128.m128i_i64[0];
  }
  src = v46;
  sub_2237890(&src, ptr, (__int64)ptr + v9);
  v24 = *v36;
  if ( src == v46 )
  {
    v27 = n;
    if ( n )
    {
      if ( n == 1 )
        *v24 = v46[0];
      else
        memcpy(v24, src, n);
      v27 = n;
      v24 = *v36;
    }
    v36[1] = (void *)v27;
    v24[v27] = 0;
    v24 = src;
    goto LABEL_28;
  }
  v25 = v36;
  if ( v24 == (_BYTE *)(v36 + 2) )
  {
    v28 = (void **)v46[0];
    *v36 = src;
    *(__m128 *)(v25 + 1) = _mm_loadh_ps((const double *)&v28);
  }
  else
  {
    v28 = (void **)v46[0];
    v26 = v36[2];
    *v36 = src;
    *(__m128 *)(v25 + 1) = _mm_loadh_ps((const double *)&v28);
    if ( v24 )
    {
      src = v24;
      v46[0] = v26;
      goto LABEL_28;
    }
  }
  v24 = v46;
  src = v46;
LABEL_28:
  n = 0;
  *v24 = 0;
  if ( src != v46 )
    operator delete(src);
LABEL_18:
  if ( ptr != p_ptr + 3 )
    free(ptr);
  return a1;
}
