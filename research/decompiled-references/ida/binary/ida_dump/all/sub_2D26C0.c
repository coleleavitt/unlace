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
  char v24; // si
  const char *v25; // rax
  size_t v26; // rax
  const void *v27; // r8
  size_t v28; // r9
  __int64 v29; // rax
  int v30; // eax
  void *v31; // rax
  void *v32; // rax
  unsigned __int64 v33; // rbx
  _BYTE *v34; // rax
  char v35; // r12
  void *v36; // rdi
  size_t v37; // rdx
  __int64 v38; // rax
  __m128i v39; // xmm1
  _QWORD *exception; // rdi
  size_t n; // [rsp+8h] [rbp-F0h]
  size_t nb; // [rsp+8h] [rbp-F0h]
  char na; // [rsp+8h] [rbp-F0h]
  size_t nd; // [rsp+8h] [rbp-F0h]
  size_t nc; // [rsp+8h] [rbp-F0h]
  char v47; // [rsp+10h] [rbp-E8h]
  const void *v48; // [rsp+10h] [rbp-E8h]
  int v49; // [rsp+18h] [rbp-E0h]
  size_t v50; // [rsp+18h] [rbp-E0h]
  int v51; // [rsp+20h] [rbp-D8h]
  unsigned __int8 v52; // [rsp+24h] [rbp-D4h]
  char v53; // [rsp+25h] [rbp-D3h]
  char v54; // [rsp+26h] [rbp-D2h]
  const __m128i *v56; // [rsp+38h] [rbp-C0h] BYREF
  __m128i v57; // [rsp+40h] [rbp-B8h] BYREF
  int v58; // [rsp+50h] [rbp-A8h] BYREF
  char v59; // [rsp+54h] [rbp-A4h]
  char v60; // [rsp+55h] [rbp-A3h]
  __int16 v61; // [rsp+56h] [rbp-A2h]
  void *src; // [rsp+58h] [rbp-A0h]
  __int128 v63; // [rsp+60h] [rbp-98h]
  __int64 v64; // [rsp+70h] [rbp-88h]
  __int64 v65; // [rsp+80h] [rbp-78h] BYREF
  int v66; // [rsp+88h] [rbp-70h]
  int v67; // [rsp+90h] [rbp-68h]
  char v68; // [rsp+94h] [rbp-64h]
  char v69; // [rsp+95h] [rbp-63h]
  char v70; // [rsp+96h] [rbp-62h]
  char v71; // [rsp+97h] [rbp-61h]
  void *v72; // [rsp+98h] [rbp-60h]
  __m128i v73; // [rsp+A0h] [rbp-58h]
  __int64 v74; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v75; // [rsp+B8h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  v4 = *a2;
  v57 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a2, (__m128i)a3);
  if ( (unsigned __int64)v4 >= a3 )
  {
    v52 = 0;
  }
  else
  {
    v5 = *v4;
    v57.m128i_i64[0] = (__int64)(v4 + 1);
    v52 = v5;
    if ( v5 > 2u )
      return nullptr;
  }
  v6 = (__m128i *)qalloc();
  v7 = v6;
  if ( !v6 )
    sub_4F618(16);
  v6->m128i_i64[0] = 0;
  v6->m128i_i64[1] = 0;
  v8 = 0;
  v51 = unpack_dd();
  if ( v51 > 0 )
  {
LABEL_18:
    v17 = sub_3323C0(&v57, *(_QWORD *)(a1 + 8));
    v18 = v57.m128i_i64[0];
    if ( v57.m128i_i64[0] >= (unsigned __int64)v57.m128i_i64[1] )
    {
      v21 = 0;
      v20 = 0;
      v19 = 0;
    }
    else
    {
      v19 = *(_BYTE *)v57.m128i_i64[0];
      v18 = v57.m128i_i64[0] + 1;
      v20 = *(_BYTE *)v57.m128i_i64[0] & 7;
      v21 = *(_BYTE *)v57.m128i_i64[0] & 7;
    }
    v57.m128i_i64[0] = v18;
    v58 = 0;
    v59 = v21;
    v60 = 0;
    v61 = 0;
    src = nullptr;
    v64 = 0;
    v63 = 0;
    if ( v52 == 1 )
    {
      v30 = unpack_dd();
      sub_329C80(&v58, v30 & 0xFF60000);
      v23 = v64;
      v24 = v59;
      if ( v59 <= 1 )
        goto LABEL_23;
    }
    else
    {
      v22 = unpack_dq();
      sub_329C80(&v58, v22 & 0xFFFFFF0FF60000LL);
      v23 = v64;
      v24 = v59;
      if ( v59 <= 1 || v52 == 2 )
      {
LABEL_23:
        if ( !(unsigned __int8)is_enum() && !(unsigned __int8)is_stroff() )
          goto LABEL_7;
        v25 = (const char *)sub_332380(&v57, v57.m128i_i64[1]);
        if ( v25 && (n = (size_t)v25, v26 = strlen(v25), v27 = (const void *)n, (v28 = v26) != 0) )
        {
          v36 = src;
          v37 = v26 + 1;
          if ( *((_QWORD *)&v63 + 1) < v26 + 1 )
          {
            v50 = v26;
            v48 = (const void *)n;
            nc = v26 + 1;
            src = (void *)qvector_reserve();
            v28 = v50;
            v36 = src;
            v27 = v48;
            v37 = nc;
          }
          *(_QWORD *)&v63 = v37;
          nd = v28;
          memmove(v36, v27, v28);
          *((_BYTE *)src + nd) = 0;
        }
        else
        {
          *(_QWORD *)&v63 = 0;
        }
        if ( (unsigned __int8)is_enum() )
        {
          v29 = v57.m128i_i64[0];
          v9 = 0;
          if ( v57.m128i_i64[0] < (unsigned __int64)v57.m128i_i64[1] )
          {
            v9 = *(_BYTE *)v57.m128i_i64[0];
            v29 = v57.m128i_i64[0] + 1;
          }
          v57.m128i_i64[0] = v29;
          LOBYTE(v61) = v9;
        }
        else
        {
LABEL_7:
          v9 = v61;
        }
        v10 = v63;
        v11 = v58;
        v12 = nullptr;
        v13 = v19 & 0xF8 | 1;
        v14 = v59;
        v15 = HIBYTE(v61);
        v60 = v13;
        if ( (_QWORD)v63 )
        {
          v54 = HIBYTE(v61);
          v53 = v59;
          v49 = v58;
          v47 = v9;
          nb = v63;
          v31 = (void *)qalloc_or_throw();
          v32 = memcpy(v31, src, nb);
          v15 = v54;
          v14 = v53;
          v11 = v49;
          v9 = v47;
          v12 = v32;
          v10 = nb;
        }
        v66 = v20;
        v65 = v17;
        v67 = v11;
        v68 = v14;
        v69 = v13;
        v70 = v9;
        v71 = v15;
        v72 = v12;
        v74 = v64;
        v73 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
        v16 = (unsigned __int64 *)v7->m128i_i64[0];
        v56 = (const __m128i *)&v65;
        if ( !v16 )
        {
          v38 = qalloc();
          v39 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, (__m128i)(unsigned __int64)v38);
          if ( !v38 )
          {
            exception = __cxa_allocate_exception(8u);
            *exception = (char *)&`vtable for'std::bad_alloc + 16;
            __cxa_throw(
              exception,
              (struct type_info *)&`typeinfo for'std::bad_alloc,
              (void (*)(void *))&std::bad_alloc::~bad_alloc);
          }
          *(_OWORD *)(v38 + 16) = 0;
          *(_OWORD *)(v38 + 32) = 0;
          *(_OWORD *)(v38 + 48) = 0;
          *(_QWORD *)v38 = v38 & 0xFFFFFFFFFFFFFFFCLL | 2;
          *(_OWORD *)(v38 + 64) = 0;
          *(__m128i *)(v38 + 8) = v39;
          v7->m128i_i64[0] = v38;
          *(_QWORD *)v38 = v38 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v38 & 3LL;
          *(__m128i *)(v7->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v7->m128i_u64[0], (__m128i)v7->m128i_u64[0]);
          *(_QWORD *)v7->m128i_i64[0] &= ~1uLL;
          *(_QWORD *)v7->m128i_i64[0] |= 2uLL;
          v16 = (unsigned __int64 *)v7->m128i_i64[0];
LABEL_12:
          sub_2D2540(v7, v16, 1, &v56);
          goto LABEL_13;
        }
        if ( !v7->m128i_i64[1] )
          goto LABEL_12;
        v33 = *v16 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (*(_BYTE *)v33 & 2) != 0 )
        {
          v35 = 1;
LABEL_44:
          sub_2D2540(v7, v16, v35, &v56);
          goto LABEL_13;
        }
        na = 1;
        while ( 1 )
        {
          if ( (int)sub_257C40((__int64)&v65, v33 + 24) >= 0 )
          {
            if ( (int)sub_257C40(v33 + 24, (__int64)&v65) >= 0 )
            {
              if ( !v33 )
              {
LABEL_39:
                v35 = na;
                v16 = (unsigned __int64 *)v33;
                goto LABEL_44;
              }
LABEL_13:
              if ( v72 )
              {
                v73.m128i_i64[0] = 0;
                qfree();
              }
              if ( src )
              {
                *(_QWORD *)&v63 = 0;
                qfree();
              }
              if ( v51 == ++v8 )
                goto LABEL_48;
              goto LABEL_18;
            }
            na = 0;
            v34 = *(_BYTE **)(v33 + 16);
          }
          else
          {
            na = 1;
            v34 = *(_BYTE **)(v33 + 8);
          }
          if ( (*v34 & 2) != 0 )
            goto LABEL_39;
          v33 = (unsigned __int64)v34;
        }
      }
    }
    v64 = sub_329C10(v23, 1, (unsigned int)v24);
    goto LABEL_23;
  }
LABEL_48:
  *a2 = (unsigned __int8 *)v57.m128i_i64[0];
  return v7;
}
