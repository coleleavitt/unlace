__int64 __fastcall tiplace_t__generate(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  __int64 v8; // r12
  unsigned int v10; // r14d
  __m128i v11; // xmm0
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rdi
  unsigned int v20; // ebx
  void *v22; // r14
  __m128i v23; // xmm1
  __m128i v24; // xmm1
  __m128i v25; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v26; // [rsp+18h] [rbp-1D0h]
  void *v27; // [rsp+20h] [rbp-1C8h] BYREF
  __m128i v28; // [rsp+28h] [rbp-1C0h] BYREF
  int v29[2]; // [rsp+40h] [rbp-1A8h] BYREF
  int v30; // [rsp+ACh] [rbp-13Ch]
  __m128i v31; // [rsp+108h] [rbp-E0h]
  void *v32; // [rsp+118h] [rbp-D0h]
  __int128 v33; // [rsp+120h] [rbp-C8h]
  __int64 v34; // [rsp+130h] [rbp-B8h]
  __int64 v35; // [rsp+138h] [rbp-B0h]
  __int64 tinfo_tid; // [rsp+140h] [rbp-A8h]
  __int128 v37; // [rsp+148h] [rbp-A0h]
  void *ptr[2]; // [rsp+158h] [rbp-90h]
  __m128i v39; // [rsp+168h] [rbp-80h]
  void *v40; // [rsp+178h] [rbp-70h]
  __int128 v41; // [rsp+180h] [rbp-68h]
  unsigned int v42; // [rsp+190h] [rbp-58h]
  int v43; // [rsp+194h] [rbp-54h]
  char v44; // [rsp+198h] [rbp-50h]
  unsigned __int64 v45; // [rsp+1A8h] [rbp-40h]

  v8 = a2;
  v45 = __readfsqword(0x28u);
  *a4 = 6;
  *a3 = 0;
  v10 = *(_DWORD *)(a1 + 12);
  v26 = *(_QWORD *)(a1 + 16);
  v25 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&qword_2CCB598), (__m128i)a6);
  sub_573090(v29, -1, 0, 0);
  v11 = _mm_load_si128(&v25);
  *(_QWORD *)v29 = &off_2BFAF38;
  v31 = v11;
  v32 = nullptr;
  v12 = *(_QWORD *)(qword_2CCB598 + 1656);
  v34 = v26;
  v33 = 0;
  v13 = (_QWORD *)sub_559D40(v12, (__int64 *)a6);
  v14 = sub_55F9A0(v13, (__int64 *)a6, v10, 1);
  v35 = v14;
  tinfo_tid = -1;
  v40 = nullptr;
  v42 = v10;
  v43 = 0;
  v44 = 0;
  v37 = 0;
  *(_OWORD *)ptr = 0;
  v39 = 0;
  v41 = 0;
  if ( v14 )
  {
    tinfo_tid = get_tinfo_tid(v14 + 88, 0);
  }
  else
  {
    (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v31.m128i_i64[1] + 88LL))(&v27, v31.m128i_i64[1], v10);
    v22 = v27;
    v27 = nullptr;
    v23 = _mm_loadu_si128(&v28);
    v28 = 0;
    if ( ptr[1] )
    {
      v25 = v23;
      v39.m128i_i64[0] = 0;
      qfree(ptr[1]);
      v24 = _mm_load_si128(&v25);
      ptr[1] = v22;
      v39 = v24;
      if ( v27 )
      {
        v28.m128i_i64[0] = 0;
        qfree(v27);
      }
    }
    else
    {
      ptr[1] = v22;
      v39 = v23;
    }
  }
  sub_55D7D0((__int64)v29, a2, a7);
  if ( *(_BYTE *)(a6 + 56) )
  {
    a2 = *(unsigned __int8 *)(a6 + 59) << 18;
    sub_55E6A0((__int64)v29, a2);
  }
  else
  {
    sub_55F100((__int64)v29);
  }
  v19 = v40;
  *(_QWORD *)v29 = &off_2BFAF38;
  *a3 = v30;
  v20 = *(_DWORD *)(v8 + 8);
  if ( v19 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v19);
  }
  if ( ptr[1] )
  {
    v39.m128i_i64[0] = 0;
    qfree(ptr[1]);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  sub_571590(v29, a2, v15, v16, v17, v18);
  return v20;
}
