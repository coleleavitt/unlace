__int64 __fastcall sub_41BDD0(__m128i *this, unsigned int a2)
{
  __int64 v4; // rdx
  unsigned int v5; // esi
  __m128i *v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // rbp
  void *v14; // rdi
  __m128i v15; // xmm0
  unsigned int v16; // r12d
  __int64 v17; // rax
  unsigned int v18; // r14d
  __int64 (*v19)(void); // rcx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rax
  char v24; // al
  unsigned int v25; // ebp
  char v27; // cl
  void (*v28)(void); // rdx
  char *v29; // r15
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r13
  __int64 v33; // rdx
  unsigned __int64 *v34; // r14
  bool v35; // si
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rsi
  bool v41; // cf
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // r14
  char *v44; // r13
  std::chrono::_V2::steady_clock *v45; // rax
  unsigned __int64 v46; // rsi
  char *v47; // rax
  size_t n; // [rsp+8h] [rbp-60h]
  __int64 na; // [rsp+8h] [rbp-60h]
  size_t nb; // [rsp+8h] [rbp-60h]
  std::chrono::_V2::steady_clock *v51; // [rsp+10h] [rbp-58h]
  unsigned int v52; // [rsp+1Ch] [rbp-4Ch]
  int v53[2]; // [rsp+20h] [rbp-48h] BYREF
  int v54[2]; // [rsp+28h] [rbp-40h]

  if ( !*((_BYTE *)this + 16) )
  {
    v37 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)this);
    *((_BYTE *)this + 16) = 1;
    this->m128i_i64[0] = v37;
  }
  v4 = *((_QWORD *)this + 36);
  v5 = *((_DWORD *)this + 68);
  v6 = *((__m128i **)this + 33);
  v7 = sub_3FCD00(v6, v5, v4);
  if ( !v7 )
  {
    v25 = -1;
LABEL_41:
    v38 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)v6);
    *((_BYTE *)this + 16) = 0;
    this->m128i_i64[1] += v38 - this->m128i_i64[0];
    return v25;
  }
  v8 = v7[1];
  v9 = *((_QWORD *)this + 19);
  v10 = 0;
  *(_QWORD *)v54 = 0;
  v11 = *(_QWORD *)(v8 + 136);
  *((_QWORD *)this + 38) = v8;
  v12 = *(_QWORD *)(v9 + 856);
  *(_QWORD *)v53 = *(_QWORD *)(v11 + 8);
  v13 = (_DWORD *)sub_405720(v8 + 136, 0, a2, 0, v12, (__int64)v53);
  sub_2B4F40((__int64 *)v53);
  v14 = *((void **)this + 39);
  ++*v13;
  if ( v14 )
    sub_41CD50(v14);
  *((_QWORD *)this + 39) = v13;
  v6 = (__m128i *)((char *)this + 312);
  v15.m128i_i64[0] = _mm_unpacklo_epi16(_mm_cvtsi32_si128(v13[18]), (__m128i)0LL).m128i_u64[0];
  *((_QWORD *)this + 40) = v15.m128i_i64[0];
  sub_3FE030((__int64 *)this + 39, *(double *)v15.m128i_i64);
  v16 = a2;
  v52 = *((_DWORD *)this + 170);
  if ( a2 < v52 )
  {
    while ( 1 )
    {
      sub_EE4F40(*((_QWORD *)this + 19));
      *((_DWORD *)this + 92) = -1;
      v6 = this;
      *((_DWORD *)this + 138) = a2;
      if ( (unsigned __int8)sub_419C70((__int64)this, v10, *(double *)v15.m128i_i64, (__m128)0LL) )
      {
        v24 = *((_BYTE *)this + 16);
        v25 = 1;
        goto LABEL_22;
      }
      if ( a2 )
      {
        if ( *((_BYTE *)this + 653) )
        {
          v6 = this;
          if ( (unsigned __int8)sub_41B960(
                                  (std::chrono::_V2::steady_clock *)this,
                                  *((unsigned int *)this + 92),
                                  a2,
                                  0xFFFFFFFF,
                                  *(double *)v15.m128i_i64) )
          {
            v24 = *((_BYTE *)this + 16);
            v25 = -1;
            goto LABEL_22;
          }
        }
      }
      v17 = *((_QWORD *)this + 87);
      v18 = 0;
      if ( v17 && *(_DWORD *)(v17 - 4) )
      {
        do
        {
          v19 = *(__int64 (**)(void))(**(_QWORD **)(v17 + 8LL * v18) + 48LL);
          if ( v19 != sub_41C640 )
          {
            v27 = v19();
            v17 = *((_QWORD *)this + 87);
            if ( v27 )
            {
              v28 = *(void (**)(void))(**(_QWORD **)(v17 + 8LL * v18) + 56LL);
              if ( (char *)v28 != (char *)nullsub_211 )
              {
                v28();
                v17 = *((_QWORD *)this + 87);
              }
            }
            if ( !v17 )
              break;
          }
          ++v18;
        }
        while ( v18 < *(_DWORD *)(v17 - 4) );
      }
      v20 = *((_QWORD *)this + 39);
      v15 = _mm_add_epi32(_mm_loadl_epi64(this + 20), _mm_loadl_epi64((const __m128i *)&qword_18B6000));
      *((_QWORD *)this + 40) = v15.m128i_i64[0];
      a2 = _mm_cvtsi128_si32(v15);
      if ( v20 )
      {
        v21 = *((_QWORD **)this + 42);
        if ( v21 == *((_QWORD **)this + 41) )
          break;
      }
LABEL_16:
      v22 = *((_DWORD *)this + 139);
      v10 = a2;
      v6 = this;
      if ( v22 < a2 )
        v22 = a2;
      *((_DWORD *)this + 139) = v22;
      sub_4003D0(this, a2);
      if ( v52 == ++v16 )
        goto LABEL_19;
    }
    *(_BYTE *)(v20 + 78) |= 4u;
    v29 = *((char **)this + 41);
    v51 = *((std::chrono::_V2::steady_clock **)this + 39);
    if ( v21 != *((_QWORD **)this + 43) )
    {
      v30 = (__int64)(v21 + 1);
      *v21 = *((_QWORD *)this + 39);
      *((_QWORD *)this + 42) = v21 + 1;
LABEL_33:
      v31 = v30 - (_QWORD)v29;
      v32 = (v31 >> 3) - 1;
      v33 = ((v31 >> 3) - 2) / 2;
      if ( v32 > 0 )
      {
        while ( 1 )
        {
          v34 = (unsigned __int64 *)&v29[8 * v33];
          n = v33;
          v35 = sub_3FDA00((unsigned __int64)v51, *v34, *(double *)v15.m128i_i64);
          v47 = &v29[8 * v32];
          if ( !v35 )
            break;
          *(_QWORD *)v47 = *v34;
          v32 = n;
          if ( !n )
          {
            v36 = v34;
            a2 = *((_DWORD *)this + 80);
            *v36 = v51;
            goto LABEL_16;
          }
          v33 = (__int64)(n - 1) / 2;
        }
      }
      else
      {
        v47 = &v29[v31 - 8];
      }
      a2 = *((_DWORD *)this + 80);
      *(_QWORD *)v47 = v51;
      goto LABEL_16;
    }
    v39 = (__int64)(*((_QWORD *)this + 42) - (_QWORD)v29) >> 3;
    if ( v39 == 0xFFFFFFFFFFFFFFFLL )
      std::__throw_length_error("vector::_M_realloc_append");
    v40 = 1;
    if ( v39 )
      v40 = (__int64)(*((_QWORD *)this + 42) - (_QWORD)v29) >> 3;
    v41 = __CFADD__(v40, v39);
    v42 = v40 + v39;
    if ( v41 )
    {
      v43 = 0x7FFFFFFFFFFFFFF8LL;
    }
    else
    {
      if ( v42 > 0xFFFFFFFFFFFFFFFLL )
        v42 = 0xFFFFFFFFFFFFFFFLL;
      v43 = 8 * v42;
    }
    na = *((_QWORD *)this + 42) - (_QWORD)v29;
    v44 = (char *)operator new(v43);
    v30 = (__int64)&v44[na + 8];
    *(_QWORD *)&v44[na] = v51;
    if ( na > 0 )
    {
      memcpy(v44, v29, na);
      v30 = (__int64)&v44[na + 8];
      v46 = *((_QWORD *)this + 43) - (_QWORD)v29;
    }
    else
    {
      if ( !v29 )
      {
LABEL_52:
        *((_QWORD *)this + 41) = v44;
        v29 = v44;
        *((_QWORD *)this + 43) = &v44[v43];
        v45 = *(std::chrono::_V2::steady_clock **)(v30 - 8);
        *((_QWORD *)this + 42) = v30;
        v51 = v45;
        goto LABEL_33;
      }
      v46 = *((_QWORD *)this + 43) - (_QWORD)v29;
    }
    nb = v30;
    operator delete(v29, v46);
    v30 = nb;
    goto LABEL_52;
  }
LABEL_19:
  v23 = *((_QWORD *)this + 20);
  if ( v23 )
    *(_DWORD *)(v23 + 2988) = 5;
  v24 = *((_BYTE *)this + 16);
  v25 = 0;
LABEL_22:
  if ( v24 )
    goto LABEL_41;
  return v25;
}

