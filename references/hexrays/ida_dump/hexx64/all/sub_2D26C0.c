__m128i *__fastcall sub_2D26C0(__int64 a1, unsigned __int8 **a2, unsigned __int64 a3)
{
  unsigned __int8 *v4; // rax
  unsigned __int8 v5; // cl
  __m128i *v6; // rax
  __m128i *v7; // rbp
  int v8; // r13d
  char v9; // cl
  size_t v10; // rdx
  int v11; // r10d
  void *v12; // rdi
  char v13; // bl
  char v14; // r9
  char v15; // r8
  unsigned __int64 *v16; // rsi
  __int64 v17; // r12
  __int64 v18; // rax
  char v19; // bl
  int v20; // r14d
  char v21; // dl
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdi
  const char *v26; // rax
  size_t v27; // rax
  const void *v28; // r8
  size_t v29; // r9
  __int64 v30; // rax
  int v31; // eax
  void *v32; // rax
  void *v33; // rax
  unsigned __int64 v34; // rbx
  _BYTE *v35; // rax
  char v36; // r12
  void *v37; // rdi
  size_t v38; // rdx
  __int64 v39; // rax
  __m128i v40; // xmm1
  _QWORD *exception; // rdi
  size_t n; // [rsp+8h] [rbp-F0h]
  size_t nb; // [rsp+8h] [rbp-F0h]
  char na; // [rsp+8h] [rbp-F0h]
  size_t nd; // [rsp+8h] [rbp-F0h]
  size_t nc; // [rsp+8h] [rbp-F0h]
  char v48; // [rsp+10h] [rbp-E8h]
  const void *v49; // [rsp+10h] [rbp-E8h]
  int v50; // [rsp+18h] [rbp-E0h]
  size_t v51; // [rsp+18h] [rbp-E0h]
  int v52; // [rsp+20h] [rbp-D8h]
  unsigned __int8 v53; // [rsp+24h] [rbp-D4h]
  char v54; // [rsp+25h] [rbp-D3h]
  char v55; // [rsp+26h] [rbp-D2h]
  const __m128i *v57; // [rsp+38h] [rbp-C0h] BYREF
  __m128i v58; // [rsp+40h] [rbp-B8h] BYREF
  int v59; // [rsp+50h] [rbp-A8h] BYREF
  char v60; // [rsp+54h] [rbp-A4h]
  char v61; // [rsp+55h] [rbp-A3h]
  __int16 v62; // [rsp+56h] [rbp-A2h]
  void *src; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v64; // [rsp+60h] [rbp-98h]
  __int64 v65; // [rsp+70h] [rbp-88h]
  __int64 v66; // [rsp+80h] [rbp-78h] BYREF
  int v67; // [rsp+88h] [rbp-70h]
  int v68; // [rsp+90h] [rbp-68h]
  char v69; // [rsp+94h] [rbp-64h]
  char v70; // [rsp+95h] [rbp-63h]
  char v71; // [rsp+96h] [rbp-62h]
  char v72; // [rsp+97h] [rbp-61h]
  void *v73; // [rsp+98h] [rbp-60h]
  __m128i v74; // [rsp+A0h] [rbp-58h]
  __int64 v75; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v76; // [rsp+B8h] [rbp-40h]

  v76 = __readfsqword(0x28u);
  v4 = *a2;
  v58 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a2, (__m128i)a3);
  if ( (unsigned __int64)v4 >= a3 )
  {
    v53 = 0;
  }
  else
  {
    v5 = *v4;
    v58.m128i_i64[0] = (__int64)(v4 + 1);
    v53 = v5;
    if ( v5 > 2u )
      return nullptr;
  }
  v6 = (__m128i *)qalloc(16);
  v7 = v6;
  if ( !v6 )
    sub_4F618();
  v6->m128i_i64[0] = 0;
  v6->m128i_i64[1] = 0;
  v8 = 0;
  v52 = unpack_dd(&v58);
  if ( v52 > 0 )
  {
LABEL_18:
    v17 = sub_3323C0(&v58, *(_QWORD *)(a1 + 8));
    v18 = v58.m128i_i64[0];
    if ( v58.m128i_i64[0] >= (unsigned __int64)v58.m128i_i64[1] )
    {
      v21 = 0;
      v20 = 0;
      v19 = 0;
    }
    else
    {
      v19 = *(_BYTE *)v58.m128i_i64[0];
      v18 = v58.m128i_i64[0] + 1;
      v20 = *(_BYTE *)v58.m128i_i64[0] & 7;
      v21 = *(_BYTE *)v58.m128i_i64[0] & 7;
    }
    v58.m128i_i64[0] = v18;
    v59 = 0;
    v60 = v21;
    v61 = 0;
    v62 = 0;
    src = nullptr;
    v65 = 0;
    v64 = 0;
    if ( v53 == 1 )
    {
      v31 = unpack_dd(&v58);
      sub_329C80(&v59, v31 & 0xFF60000);
      v23 = v65;
      v24 = (unsigned int)v60;
      v25 = v65;
      if ( v60 <= 1 )
        goto LABEL_23;
    }
    else
    {
      v22 = unpack_dq(&v58, v58.m128i_i64[1]);
      sub_329C80(&v59, v22 & 0xFFFFFF0FF60000LL);
      v23 = v65;
      v24 = (unsigned int)v60;
      v25 = v65;
      if ( v60 <= 1 || v53 == 2 )
      {
LABEL_23:
        if ( !(unsigned __int8)is_enum(v25, v24) && !(unsigned __int8)is_stroff(v65, (unsigned int)v60) )
          goto LABEL_7;
        v26 = (const char *)sub_332380(&v58, v58.m128i_i64[1]);
        if ( v26 && (n = (size_t)v26, v27 = strlen(v26), v28 = (const void *)n, (v29 = v27) != 0) )
        {
          v37 = src;
          v38 = v27 + 1;
          if ( *((_QWORD *)&v64 + 1) < v27 + 1 )
          {
            v51 = v27;
            v49 = (const void *)n;
            nc = v27 + 1;
            src = (void *)qvector_reserve(&src, src, v38, 1);
            v29 = v51;
            v37 = src;
            v28 = v49;
            v38 = nc;
          }
          *(_QWORD *)&v64 = v38;
          nd = v29;
          memmove(v37, v28, v29);
          *((_BYTE *)src + nd) = 0;
        }
        else
        {
          *(_QWORD *)&v64 = 0;
        }
        if ( (unsigned __int8)is_enum(v65, (unsigned int)v60) )
        {
          v30 = v58.m128i_i64[0];
          v9 = 0;
          if ( v58.m128i_i64[0] < (unsigned __int64)v58.m128i_i64[1] )
          {
            v9 = *(_BYTE *)v58.m128i_i64[0];
            v30 = v58.m128i_i64[0] + 1;
          }
          v58.m128i_i64[0] = v30;
          LOBYTE(v62) = v9;
        }
        else
        {
LABEL_7:
          v9 = v62;
        }
        v10 = v64;
        v11 = v59;
        v12 = nullptr;
        v13 = v19 & 0xF8 | 1;
        v14 = v60;
        v15 = HIBYTE(v62);
        v61 = v13;
        if ( (_QWORD)v64 )
        {
          v55 = HIBYTE(v62);
          v54 = v60;
          v50 = v59;
          v48 = v9;
          nb = v64;
          v32 = (void *)qalloc_or_throw(v64);
          v33 = memcpy(v32, src, nb);
          v15 = v55;
          v14 = v54;
          v11 = v50;
          v9 = v48;
          v12 = v33;
          v10 = nb;
        }
        v67 = v20;
        v66 = v17;
        v68 = v11;
        v69 = v14;
        v70 = v13;
        v71 = v9;
        v72 = v15;
        v73 = v12;
        v75 = v65;
        v74 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
        v16 = (unsigned __int64 *)v7->m128i_i64[0];
        v57 = (const __m128i *)&v66;
        if ( !v16 )
        {
          v39 = qalloc(80);
          v40 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v39);
          if ( !v39 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_OWORD *)(v39 + 16) = 0;
          *(_OWORD *)(v39 + 32) = 0;
          *(_OWORD *)(v39 + 48) = 0;
          *(_QWORD *)v39 = v39 & 0xFFFFFFFFFFFFFFFCLL | 2;
          *(_OWORD *)(v39 + 64) = 0;
          *(__m128i *)(v39 + 8) = v40;
          v7->m128i_i64[0] = v39;
          *(_QWORD *)v39 = v39 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v39 & 3LL;
          *(__m128i *)(v7->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v7->m128i_u64[0], (__m128i)v7->m128i_u64[0]);
          *(_QWORD *)v7->m128i_i64[0] &= ~1uLL;
          *(_QWORD *)v7->m128i_i64[0] |= 2uLL;
          v16 = (unsigned __int64 *)v7->m128i_i64[0];
LABEL_12:
          sub_2D2540(v7, v16, 1, &v57);
          goto LABEL_13;
        }
        if ( !v7->m128i_i64[1] )
          goto LABEL_12;
        v34 = *v16 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v34 & 2) != 0 )
        {
          v36 = 1;
LABEL_44:
          sub_2D2540(v7, v16, v36, &v57);
          goto LABEL_13;
        }
        na = 1;
        while ( 1 )
        {
          if ( (int)sub_257C40((__int64)&v66, v34 + 24) >= 0 )
          {
            if ( (int)sub_257C40(v34 + 24, (__int64)&v66) >= 0 )
            {
              if ( !v34 )
              {
LABEL_39:
                v36 = na;
                v16 = (unsigned __int64 *)v34;
                goto LABEL_44;
              }
LABEL_13:
              if ( v73 )
              {
                v74.m128i_i64[0] = 0;
                qfree(v73);
              }
              if ( src )
              {
                *(_QWORD *)&v64 = 0;
                qfree(src);
              }
              if ( v52 == ++v8 )
                goto LABEL_48;
              goto LABEL_18;
            }
            na = 0;
            v35 = *(_BYTE **)(v34 + 16);
          }
          else
          {
            na = 1;
            v35 = *(_BYTE **)(v34 + 8);
          }
          if ( (*v35 & 2) != 0 )
            goto LABEL_39;
          v34 = (unsigned __int64)v35;
        }
      }
    }
    v65 = sub_329C10(v23, 1, (unsigned int)(char)v24);
    v24 = (unsigned int)v60;
    v25 = v65;
    goto LABEL_23;
  }
LABEL_48:
  *a2 = (unsigned __int8 *)v58.m128i_i64[0];
  return v7;
}
