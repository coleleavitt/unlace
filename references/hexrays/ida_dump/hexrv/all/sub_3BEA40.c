unsigned __int64 __fastcall sub_3BEA40(__int64 a1, __int64 a2, char *a3, __int64 *a4, unsigned __int8 a5)
{
  char *v10; // r8
  size_t v11; // r15
  void *v12; // rax
  void *v13; // rsi
  const char *v14; // rax
  __m128i v15; // xmm0
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm2
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 i; // r14
  __int64 v23; // rax
  __int64 v24; // rdi
  __m128i v25; // xmm3
  __int64 v26; // rdi
  __int64 v28; // rdi
  __m128i v29; // [rsp+0h] [rbp-98h] BYREF
  void *src; // [rsp+18h] [rbp-80h]
  char *v31; // [rsp+20h] [rbp-78h] BYREF
  __int128 v32; // [rsp+28h] [rbp-70h]
  __int64 v33; // [rsp+40h] [rbp-58h] BYREF
  __int128 v34; // [rsp+48h] [rbp-50h]
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v32 = 0;
  v31 = nullptr;
  v33 = 0;
  v34 = 0;
  get_ea_name(&v33, a3, 21, 0);
  sub_674F0((__int64 *)&v31, (__int64)"Xrefs to %a / %s", 0.0, a3);
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  v10 = (char *)s1;
  if ( (_QWORD)v32 )
    v10 = v31;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_4B9FA8;
  *(_OWORD *)(a1 + 16) = 0;
  if ( v10
    && (src = v10,
        v11 = strlen(v10),
        v29.m128i_i64[0] = v11 + 1,
        v12 = (void *)qvector_reserve(a1 + 8, 0, v11 + 1, 1),
        v13 = src,
        *(_QWORD *)(a1 + 8) = v12,
        *(_QWORD *)(a1 + 16) = v11 + 1,
        memmove(v12, v13, v11),
        *(_BYTE *)(*(_QWORD *)(a1 + 8) + v11) = 0,
        *(_QWORD *)(a1 + 16)) )
  {
    v14 = *(const char **)(a1 + 8);
  }
  else
  {
    v14 = s1;
  }
  *(_QWORD *)(a1 + 72) = v14;
  *(_OWORD *)(a1 + 48) = -1;
  v15 = _mm_loadl_epi64((const __m128i *)&off_4BB4C0);
  *(_QWORD *)(a1 + 32) = &unk_4BDC88;
  v16 = (_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 44) = (2 * a5) | 0x800;
  *(_DWORD *)(a1 + 40) = -16777212;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = 4;
  *(_DWORD *)(a1 + 104) = -1;
  *(__m128i *)(a1 + 88) = _mm_unpacklo_epi64(v15, (__m128i)(unsigned __int64)&off_4BB1F0);
  do
  {
    *v16 = 0;
    v16 += 3;
    *((_OWORD *)v16 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 208) != v16 );
  *(_DWORD *)(a1 + 208) = 0;
  v17 = *(unsigned int *)(a1 + 44);
  if ( ((*(_DWORD *)(a1 + 44) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 43) != 0xFF )
    {
      if ( !under_debugger )
      {
        interr(3449, &unk_4BDC88, v17, ((*(_DWORD *)(a1 + 44) >> 19) & 0x3Fu) - 1, v10);
        v28 = *(_QWORD *)(a1 + 8);
        if ( v28 )
        {
          *(_QWORD *)(a1 + 16) = 0;
          qfree(v28);
        }
        if ( v31 )
        {
          *(_QWORD *)&v32 = 0;
          qfree(v31);
        }
        _Unwind_Resume((struct _Unwind_Exception *)a3);
      }
      BUG();
    }
    *(_BYTE *)(a1 + 43) = ((*(_DWORD *)(a1 + 44) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 44) = v17 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)a1 = &unk_4BE4D8;
  *(_QWORD *)(a1 + 32) = &unk_4BE510;
  *(_QWORD *)(a1 + 216) = &off_4BE5D0;
  *(_OWORD *)(a1 + 232) = 0;
  v18 = _mm_loadu_si128((const __m128i *)(a4 + 1));
  v19 = *a4;
  *(_OWORD *)(a4 + 1) = 0;
  *a4 = 0;
  v20 = *(_QWORD *)(a1 + 224);
  v29 = v18;
  if ( v20 )
  {
    v21 = *(_QWORD *)(a1 + 232);
    if ( v21 )
    {
      for ( i = 0; i != v21; ++i )
      {
        v23 = v20 + 48 * i;
        v24 = *(_QWORD *)(v23 + 16);
        if ( v24 )
        {
          *(_QWORD *)(v23 + 24) = 0;
          qfree(v24);
          v20 = *(_QWORD *)(a1 + 224);
        }
      }
    }
    *(_QWORD *)(a1 + 232) = 0;
    qfree(v20);
  }
  v25 = _mm_load_si128(&v29);
  v26 = (__int64)v31;
  *(_QWORD *)(a1 + 224) = v19;
  *(__m128i *)(a1 + 232) = v25;
  if ( v26 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v26);
  }
  *(_QWORD *)(a1 + 248) = a2;
  *(_QWORD *)a1 = off_4BA0E8;
  *(_QWORD *)(a1 + 32) = off_4BA130;
  *(_QWORD *)(a1 + 216) = &off_4BA1F0;
  *(_QWORD *)(a1 + 256) = a3;
  return v35 - __readfsqword(0x28u);
}
