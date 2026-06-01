__int64 __fastcall sub_67FDF0(
        __m128i *a1,
        __int64 a2,
        int a3,
        __m128i *a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        int a9,
        int a10)
{
  unsigned int v14; // r15d
  char v16; // al
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __m128i si128; // xmm0
  __int64 v21; // rdi
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __int64 v24; // rdx
  __m128i v25; // xmm0
  __int64 v27; // rbp
  __int64 v28; // r12
  __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rbp
  _QWORD *v33; // r13
  __m128i *v34; // [rsp+18h] [rbp-1B0h] BYREF
  _OWORD v35[2]; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-188h]
  __m128i *v37; // [rsp+48h] [rbp-180h]
  int v38; // [rsp+50h] [rbp-178h] BYREF
  _OWORD v39[2]; // [rsp+58h] [rbp-170h] BYREF
  __m128i *v40; // [rsp+78h] [rbp-150h]
  __int64 v41; // [rsp+80h] [rbp-148h]
  int v42; // [rsp+88h] [rbp-140h]
  __m128i *v43; // [rsp+90h] [rbp-138h]
  __m128i *v44; // [rsp+98h] [rbp-130h]
  _OWORD *v45; // [rsp+A0h] [rbp-128h]
  int v46; // [rsp+A8h] [rbp-120h]
  __m128i v47; // [rsp+B0h] [rbp-118h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-108h]
  __int64 v49; // [rsp+F0h] [rbp-D8h]
  int v50; // [rsp+F8h] [rbp-D0h]
  __m128i **v51; // [rsp+110h] [rbp-B8h]
  __m128i v52[4]; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+160h] [rbp-68h]
  int v54; // [rsp+168h] [rbp-60h]
  __m128i **v55; // [rsp+180h] [rbp-48h]

  if ( *(_QWORD *)(a1[1].m128i_i64[1] + 56)
    && a2
    && a5
    && a3
    && ((a1[2].m128i_i8[0] & 2) != 0
     || !sub_79AA10(a2, 0)
     || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 16 <= 0x3E && (unsigned __int8)(sub_78F370(a2) - 5) <= 1u)
    && (v14 = sub_67CE00((__int64)a1, *(unsigned int *)(a2 + 24)), !(_BYTE)v14)
    && ((*(_BYTE *)(a2 + 29) & 2) == 0
     || (v16 = *(_BYTE *)(a2 + 28) & 0x7F, v16 == 16)
     || (v17 = (v16 + 110) & 0x7F, (unsigned __int8)v17 <= 0x3Eu) && (v18 = 0x4000000040000009LL, _bittest64(&v18, v17)))
    && ((a1[2].m128i_i8[0] & 1) == 0 || !(unsigned __int8)sub_67E0B0((__int64)a1, a2, a3)) )
  {
    ++a1[15].m128i_i32[0];
    v34 = a1;
    v51 = nullptr;
    v49 = 0;
    v50 = 0;
    v55 = nullptr;
    v53 = 0;
    v54 = 0;
    v48 = 0;
    v52[1] = 0;
    sub_67F660((__int64)a1, a2, &v47, (__int64)&v34);
    if ( *((_QWORD *)&v48 + 1) )
    {
      sub_67F660((__int64)a1, (__int64)a4, v52, (__int64)&v34);
      v19 = sub_79A2E0(a5);
      sub_639160((__int64)&v38, v19, a1[2].m128i_i64[1], 0, 1u);
      si128 = _mm_load_si128((const __m128i *)&v38);
      if ( a4 )
        a4 = v52;
      v36 = a5;
      v37 = a1;
      v21 = a1[1].m128i_i64[0];
      v14 = 1;
      v35[0] = si128;
      v22 = _mm_load_si128((const __m128i *)((char *)v39 + 8));
      v38 = a9;
      v45 = v35;
      v35[1] = v22;
      v23 = _mm_loadu_si128((const __m128i *)&a7);
      v46 = a10;
      v24 = a1[1].m128i_i64[1];
      v39[0] = v23;
      v25 = _mm_loadu_si128((const __m128i *)&a8);
      v41 = 0;
      v40 = a1;
      v42 = a3;
      v43 = &v47;
      v44 = a4;
      v39[1] = v25;
      (*(void (__fastcall **)(__int64, int *))(v24 + 56))(v21, &v38);
    }
    sub_67AA40(v55);
    sub_67AA40(v51);
    if ( a1[15].m128i_i32[0]-- == 1 )
    {
      v27 = a1[13].m128i_i64[0];
      v28 = v27 + 16LL * a1[13].m128i_u32[2];
      while ( v28 != v27 )
      {
        v27 += 16;
        operator delete();
      }
      a1[13].m128i_i32[2] = 0;
      v29 = a1[10].m128i_u32[2];
      if ( (_DWORD)v29 )
      {
        v30 = (_QWORD *)a1[10].m128i_i64[0];
        v31 = v29;
        a1[14].m128i_i64[0] = 0;
        v32 = &v30[v31];
        v33 = v30 + 1;
        a1[9] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v30, (__m128i)(unsigned __int64)(*v30 + 4096LL));
        if ( v31 != 1 )
        {
          do
          {
            ++v33;
            operator delete();
          }
          while ( v32 != v33 );
        }
        a1[10].m128i_i32[2] = 1;
      }
    }
  }
  else
  {
    return 0;
  }
  return v14;
}

