__int64 __fastcall sub_107E60(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // r12
  unsigned __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  void *v10; // r15
  size_t v11; // rdx
  __m128i si128; // xmm0
  int aflags; // eax
  __int64 func; // rbp
  unsigned __int64 v16; // r15
  unsigned int v17; // eax
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  size_t v20; // r9
  const void *v21; // r10
  void *v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-E8h]
  __int64 v25; // [rsp+8h] [rbp-E0h]
  size_t n[2]; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v27; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-B8h]
  __int64 v29; // [rsp+38h] [rbp-B0h]
  __m128 v30; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v31; // [rsp+50h] [rbp-98h]
  unsigned __int64 v32; // [rsp+58h] [rbp-90h]
  __int64 v33; // [rsp+60h] [rbp-88h]
  int v34; // [rsp+68h] [rbp-80h]
  char v35; // [rsp+70h] [rbp-78h]
  __int64 v36; // [rsp+78h] [rbp-70h]
  __int128 v37; // [rsp+80h] [rbp-68h]
  __int64 v38; // [rsp+90h] [rbp-58h]
  __int128 v39; // [rsp+98h] [rbp-50h]
  unsigned __int64 v40; // [rsp+A8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v2 = (_QWORD *)a1[29];
  if ( !v2 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v3 = 0;
  v4 = 0;
  v24 = a1[27];
  if ( !v24 )
    goto LABEL_23;
  while ( v4 < v2[6] )
  {
    if ( *(_DWORD *)(v2[2] + 4 * v3) )
    {
      if ( v24 == ++v3 )
        break;
    }
    else
    {
      v5 = a1[24];
      v6 = a1[23];
      v7 = v2[5] + (v4 << 6);
      v25 = *(_QWORD *)(a1[26] + 8 * v3);
      if ( a1[25] < (unsigned __int64)(v5 + 1) )
      {
        v23 = qvector_reserve();
        v5 = a1[24];
        a1[23] = v23;
        v6 = v23;
      }
      v8 = v6 + 200 * v5;
      *(_OWORD *)(v8 + 176) = -1;
      *(_DWORD *)(v8 + 192) = -1;
      *(_QWORD *)v8 = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 32) = 0;
      *(_QWORD *)(v8 + 40) = 0;
      *(_QWORD *)(v8 + 64) = 0;
      *(_QWORD *)(v8 + 72) = 0;
      *(_QWORD *)(v8 + 80) = 0;
      *(_QWORD *)(v8 + 104) = 0;
      *(_QWORD *)(v8 + 112) = 0;
      *(_QWORD *)(v8 + 136) = 0;
      *(_QWORD *)(v8 + 144) = 0;
      *(_QWORD *)(v8 + 168) = 0;
      *(_OWORD *)(v8 + 16) = 0;
      *(_OWORD *)(v8 + 48) = 0;
      *(_OWORD *)(v8 + 88) = 0;
      *(_OWORD *)(v8 + 120) = 0;
      *(_OWORD *)(v8 + 152) = 0;
      ++a1[24];
      *(_QWORD *)(v8 + 184) = v25;
      *(_DWORD *)(v8 + 192) = *(_DWORD *)(v7 + 56);
      *(_QWORD *)(v8 + 176) = *(unsigned int *)(v7 + 24);
      if ( v7 != v8 + 8 )
      {
        v9 = *(_QWORD *)(v7 + 8);
        if ( !v9 || (v20 = v9 - 1, v9 == 1) )
        {
          *(_QWORD *)(v8 + 16) = 0;
        }
        else
        {
          v21 = *(const void **)v7;
          v22 = *(void **)(v8 + 8);
          if ( *(_QWORD *)(v8 + 24) < v9 )
          {
            v27.m128i_i64[0] = *(_QWORD *)v7;
            n[0] = v9 - 1;
            v22 = (void *)qvector_reserve();
            v21 = (const void *)v27.m128i_i64[0];
            v20 = n[0];
            *(_QWORD *)(v8 + 8) = v22;
          }
          *(_QWORD *)(v8 + 16) = v9;
          memmove(v22, v21, v20);
          *(_BYTE *)(*(_QWORD *)(v8 + 8) + v9 - 1) = 0;
        }
      }
      v10 = nullptr;
      *(_DWORD *)(v8 + 32) = *(_DWORD *)(v7 + 24);
      v11 = *(_QWORD *)(v7 + 40);
      si128 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
      if ( v11 )
      {
        v27 = si128;
        n[0] = v11;
        v10 = (void *)qalloc_or_throw();
        memcpy(v10, *(const void **)(v7 + 32), n[0]);
        si128 = _mm_load_si128(&v27);
      }
      if ( *(_QWORD *)(v8 + 40) )
      {
        *(_QWORD *)(v8 + 48) = 0;
        *(__m128i *)n = si128;
        qfree();
        si128 = _mm_load_si128((const __m128i *)n);
      }
      *(_QWORD *)(v8 + 40) = v10;
      *(__m128i *)(v8 + 48) = si128;
      n[0] = v8 + 80;
      get_ea_name();
      get_tinfo();
      aflags = get_aflags();
      v34 = 0;
      v32 = 0;
      v33 = 0;
      *(_BYTE *)(v8 + 136) = (aflags & 0x2000000) != 0;
      v31 = *(_QWORD *)(v7 + 40) + *(_QWORD *)(v7 + 32);
      v30 = _mm_loadh_ps((const double *)(v7 + 32));
      while ( 1 )
      {
        v34 = unpack_dd();
        if ( !v34 )
          break;
        v16 = v31;
        v17 = unpack_dd();
        v18 = v30.m128_u64[1];
        if ( __CFADD__(v17, v30.m128_u64[1]) || v16 < v17 + v30.m128_u64[1] )
        {
          v32 = 0;
          break;
        }
        v30.m128_u64[1] += v17;
        v32 = v18;
        if ( !v18 )
          break;
        v33 = v17;
        if ( v34 == 1 )
        {
          v35 = 0;
          v36 = 0;
          v38 = 0;
          v37 = 0;
          v39 = 0;
          extract_type_from_metadata();
          v19 = v38;
          *(_BYTE *)(v8 + 64) = v35;
          v29 = v19;
          v28 = v36;
          deserialize_tinfo();
          if ( v38 )
          {
            *(_QWORD *)&v39 = 0;
            qfree();
          }
          if ( v36 )
          {
            *(_QWORD *)&v37 = 0;
            qfree();
          }
        }
      }
      func = get_func();
      if ( func && calc_func_metadata() )
      {
        if ( (~((unsigned __int16)get_flags_ex() >> 8) & 0xC0) == 0 )
          get_ea_name();
        ++v4;
        *(_BYTE *)(v8 + 168) = *(_BYTE *)(func + 18) & 1;
        v2 = (_QWORD *)a1[29];
      }
      else
      {
        v2 = (_QWORD *)a1[29];
        ++v4;
      }
      if ( v24 == ++v3 )
        break;
    }
  }
  if ( v2 )
LABEL_23:
    (*(void (__fastcall **)(_QWORD *))(*v2 + 8LL))(v2);
  a1[29] = 0;
  a1[27] = 0;
  return 1;
}

