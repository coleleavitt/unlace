unsigned __int64 __fastcall sub_147F60(
        _QWORD *a1,
        char a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __m128i si128; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  _QWORD *v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v25; // [rsp+0h] [rbp-A8h]
  __int64 v26; // [rsp+10h] [rbp-98h] BYREF
  __int128 v27; // [rsp+18h] [rbp-90h]
  __int64 v28; // [rsp+30h] [rbp-78h] BYREF
  __int128 v29; // [rsp+38h] [rbp-70h]
  __int64 v30; // [rsp+50h] [rbp-58h] BYREF
  __int128 v31; // [rsp+58h] [rbp-50h]
  unsigned __int64 v32; // [rsp+68h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v31 = 0;
  v10 = qvector_reserve();
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D37B0);
  v30 = v10;
  *(_QWORD *)&v31 = 25;
  *(_QWORD *)(v10 + 16) = 0x656C696620657275LL;
  *(__m128i *)v10 = si128;
  *(_BYTE *)(v30 + 24) = 0;
  v29 = 0;
  v12 = qvector_reserve();
  v28 = v12;
  *(_QWORD *)&v29 = 6;
  *(_DWORD *)v12 = 1769156138;
  *(_BYTE *)(v12 + 4) = 103;
  *(_BYTE *)(v28 + 5) = 0;
  v27 = 0;
  v13 = qvector_reserve();
  v26 = v13;
  v14 = _mm_load_si128((const __m128i *)&xmmword_1D37C0);
  *(_QWORD *)&v27 = 19;
  *(_WORD *)(v13 + 16) = 11822;
  *(__m128i *)v13 = v14;
  *(_BYTE *)(v26 + 18) = 0;
  v15 = qalloc_or_throw();
  *(_QWORD *)v15 = &stru_236898;
  *(_QWORD *)(v15 + 8) = 0x3FF000004LL;
  *(_QWORD *)(v15 + 40) = "List of available library modules";
  *(_OWORD *)(v15 + 16) = -1;
  v20 = (_QWORD *)(v15 + 80);
  v21 = _mm_loadl_epi64(&off_234860);
  *(_QWORD *)(v15 + 32) = 0;
  *(_DWORD *)(v15 + 48) = 3;
  *(_DWORD *)(v15 + 72) = -1;
  *(__m128i *)(v15 + 56) = _mm_unpacklo_epi64(v21, (__m128i)(unsigned __int64)&off_234840);
  do
  {
    *v20 = 0;
    v20 += 3;
    *((_OWORD *)v20 - 1) = 0;
  }
  while ( (_QWORD *)(v15 + 176) != v20 );
  *(_DWORD *)(v15 + 176) = 0;
  v22 = *(unsigned int *)(v15 + 12);
  v23 = ((*(_DWORD *)(v15 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(v15 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v15 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        interr();
        if ( v28 )
        {
          *(_QWORD *)&v29 = 0;
          qfree();
        }
        if ( v30 )
        {
          *(_QWORD *)&v31 = 0;
          qfree();
        }
        _Unwind_Resume((struct _Unwind_Exception *)v15);
      }
      BUG();
    }
    v22 = (unsigned int)v22 & 0xFE07FFFF;
    *(_BYTE *)(v15 + 11) = ((*(_DWORD *)(v15 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v15 + 12) = v22;
  }
  *(_QWORD *)(v15 + 184) = a1;
  *(_QWORD *)v15 = off_239D90;
  *(_QWORD *)(v15 + 192) = 0;
  *(_DWORD *)(v15 + 72) = 47;
  *(_OWORD *)(v15 + 200) = 0;
  sub_10E0D0(
    (__int64)"HIDECANCEL\nBuilding list of the signatures",
    0,
    v22,
    v23,
    v16,
    v17,
    (__m128)0LL,
    (__m128)(unsigned __int64)&off_234840,
    a5,
    a6,
    v18,
    v19,
    a9,
    a10,
    a2);
  sub_147980(v15);
  sub_10DB30();
  sub_157540(a1, v25, v15, &v26, &v28, &v30);
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree();
  }
  *a1 = &off_239E58;
  return v32 - __readfsqword(0x28u);
}

