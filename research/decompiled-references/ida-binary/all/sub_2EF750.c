__int64 __fastcall apply_md_chooser_t__::vfunc_4(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  _QWORD *v6; // rdi
  __int64 v7; // r12
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  char *v10; // rsi
  char *v11; // rbp
  char *v12; // rbx
  unsigned __int64 v13; // r15
  void *v14; // r15
  size_t v15; // rdx
  __m128i si128; // xmm0
  __int64 v17; // rdi
  int aflags; // eax
  char *v19; // rsi
  __int64 func; // rax
  _QWORD *v21; // rbp
  unsigned __int64 v23; // r15
  unsigned int v24; // eax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rcx
  size_t v28; // r9
  char *v29; // r10
  void *v30; // rax
  char *v31; // rdi
  void *v32; // rax
  __int64 v33; // rax
  char *v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // [rsp+0h] [rbp-E8h]
  __int64 v37; // [rsp+8h] [rbp-E0h]
  size_t n[2]; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v39; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD *v41; // [rsp+38h] [rbp-B0h] BYREF
  __m128 v42; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v43; // [rsp+50h] [rbp-98h]
  unsigned __int64 v44; // [rsp+58h] [rbp-90h]
  __int64 v45; // [rsp+60h] [rbp-88h]
  int v46; // [rsp+68h] [rbp-80h]
  char v47[8]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v48; // [rsp+78h] [rbp-70h]
  __int128 v49; // [rsp+80h] [rbp-68h]
  _QWORD *v50; // [rsp+90h] [rbp-58h]
  __int128 v51; // [rsp+98h] [rbp-50h]
  unsigned __int64 v52; // [rsp+A8h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v6 = (_QWORD *)a1[29];
  if ( !v6 )
  {
    if ( !under_debugger )
      interr(40648, a2, a3, a4, a5);
    BUG();
  }
  v7 = 0;
  v8 = 0;
  v36 = a1[27];
  if ( !v36 )
    goto LABEL_23;
  while ( v8 < v6[6] )
  {
    if ( *(_DWORD *)(v6[2] + 4 * v7) )
    {
      if ( v36 == ++v7 )
        break;
    }
    else
    {
      v9 = a1[24];
      v10 = (char *)a1[23];
      v11 = (char *)(v6[5] + (v8 << 6));
      v37 = *(_QWORD *)(a1[26] + 8 * v7);
      if ( a1[25] < (unsigned __int64)(v9 + 1) )
      {
        v33 = qvector_reserve(a1 + 23, v10, v9 + 1, 200);
        v9 = a1[24];
        a1[23] = v33;
        v10 = (char *)v33;
      }
      v12 = &v10[200 * v9];
      *((_OWORD *)v12 + 11) = -1;
      *((_DWORD *)v12 + 48) = -1;
      *(_QWORD *)v12 = 0;
      *((_QWORD *)v12 + 1) = 0;
      *((_QWORD *)v12 + 4) = 0;
      *((_QWORD *)v12 + 5) = 0;
      *((_QWORD *)v12 + 8) = 0;
      *((_QWORD *)v12 + 9) = 0;
      *((_QWORD *)v12 + 10) = 0;
      *((_QWORD *)v12 + 13) = 0;
      *((_QWORD *)v12 + 14) = 0;
      *((_QWORD *)v12 + 17) = 0;
      *((_QWORD *)v12 + 18) = 0;
      *((_QWORD *)v12 + 21) = 0;
      *((_OWORD *)v12 + 1) = 0;
      *((_OWORD *)v12 + 3) = 0;
      *(_OWORD *)(v12 + 88) = 0;
      *(_OWORD *)(v12 + 120) = 0;
      *(_OWORD *)(v12 + 152) = 0;
      ++a1[24];
      *((_QWORD *)v12 + 23) = v37;
      *((_DWORD *)v12 + 48) = *((_DWORD *)v11 + 14);
      *((_QWORD *)v12 + 22) = *((unsigned int *)v11 + 6);
      if ( v11 != v12 + 8 )
      {
        v13 = *((_QWORD *)v11 + 1);
        if ( !v13 || (v28 = v13 - 1, v13 == 1) )
        {
          *((_QWORD *)v12 + 2) = 0;
        }
        else
        {
          v29 = *(char **)v11;
          v30 = *((void **)v12 + 1);
          if ( *((_QWORD *)v12 + 3) < v13 )
          {
            v34 = *((char **)v11 + 1);
            v35 = *((_QWORD *)v12 + 1);
            v39.m128i_i64[0] = *(_QWORD *)v11;
            n[0] = v13 - 1;
            v30 = (void *)qvector_reserve(v12 + 8, v35, v34, 1);
            v29 = (char *)v39.m128i_i64[0];
            v28 = n[0];
            *((_QWORD *)v12 + 1) = v30;
          }
          *((_QWORD *)v12 + 2) = v13;
          v10 = v29;
          memmove(v30, v29, v28);
          *(_BYTE *)(*((_QWORD *)v12 + 1) + v13 - 1) = 0;
        }
      }
      v14 = nullptr;
      *((_DWORD *)v12 + 8) = *((_DWORD *)v11 + 6);
      v15 = *((_QWORD *)v11 + 5);
      si128 = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
      if ( v15 )
      {
        v31 = *((char **)v11 + 5);
        v39 = si128;
        n[0] = v15;
        v32 = (void *)qalloc_or_throw(v31);
        v10 = *((char **)v11 + 4);
        v14 = v32;
        memcpy(v32, v10, n[0]);
        si128 = _mm_load_si128(&v39);
      }
      v17 = *((_QWORD *)v12 + 5);
      if ( v17 )
      {
        *((_QWORD *)v12 + 6) = 0;
        *(__m128i *)n = si128;
        qfree(v17, v10);
        si128 = _mm_load_si128((const __m128i *)n);
      }
      *((_QWORD *)v12 + 5) = v14;
      *((__m128i *)v12 + 3) = si128;
      n[0] = (size_t)(v12 + 80);
      get_ea_name(v12 + 80, v37, 512, 0);
      get_tinfo(v12 + 72, v37);
      aflags = get_aflags(v37);
      v46 = 0;
      v44 = 0;
      v45 = 0;
      v12[136] = (aflags & 0x2000000) != 0;
      v19 = (char *)(*((_QWORD *)v11 + 5) + *((_QWORD *)v11 + 4));
      v43 = (unsigned __int64)v19;
      v42 = _mm_loadh_ps((const double *)v11 + 4);
      while ( 1 )
      {
        v46 = unpack_dd(&v42.m128_u16[4], v19);
        if ( !v46 )
          break;
        v23 = v43;
        v24 = unpack_dd(&v42.m128_u16[4], v43);
        v25 = v42.m128_u64[1];
        v26 = v24 + v42.m128_u64[1];
        if ( __CFADD__(v24, v42.m128_u64[1]) || v23 < v26 )
        {
          v44 = 0;
          break;
        }
        v42.m128_u64[1] += v24;
        v44 = v25;
        if ( !v25 )
          break;
        v45 = v24;
        if ( v46 == 1 )
        {
          v47[0] = 0;
          v48 = 0;
          v50 = nullptr;
          v49 = 0;
          v51 = 0;
          extract_type_from_metadata(v47, v25, v26);
          v27 = v50;
          v12[64] = v47[0];
          v41 = v27;
          v40 = v48;
          if ( v27 )
            v27 = &v41;
          deserialize_tinfo(v12, 0, &v40, v27, 0, 0, v36, v37, n[0]);
          if ( v50 )
          {
            *(_QWORD *)&v51 = 0;
            qfree(v50, nullptr);
          }
          if ( v48 )
          {
            *(_QWORD *)&v49 = 0;
            qfree(v48, nullptr);
          }
        }
        v19 = (char *)v43;
      }
      func = get_func(v37);
      v21 = (_QWORD *)func;
      if ( func && calc_func_metadata(0, n[0], func, 0) )
      {
        if ( (~((unsigned __int16)get_flags_ex(*v21, 4) >> 8) & 0xC0) == 0 )
          get_ea_name(v12 + 144, *v21, 0, 0);
        ++v8;
        v12[168] = *((_BYTE *)v21 + 18) & 1;
        v6 = (_QWORD *)a1[29];
      }
      else
      {
        v6 = (_QWORD *)a1[29];
        ++v8;
      }
      if ( v36 == ++v7 )
        break;
    }
  }
  if ( v6 )
LABEL_23:
    (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
  a1[29] = 0;
  a1[27] = 0;
  return 1;
}
