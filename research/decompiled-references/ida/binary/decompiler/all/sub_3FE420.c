__int64 __fastcall sub_3FE420(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __m128i si128; // xmm1
  __m128i *v9; // rax
  unsigned int v10; // ebx
  _BYTE *v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // r9d
  char *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // r14
  _QWORD *v19; // rbx
  __int64 v21; // [rsp-8h] [rbp-388h]
  int v22; // [rsp+0h] [rbp-380h]
  int v24; // [rsp+18h] [rbp-368h]
  signed int v25; // [rsp+1Ch] [rbp-364h]
  unsigned int v26; // [rsp+1Ch] [rbp-364h]
  int v27; // [rsp+20h] [rbp-360h]
  _BYTE *v28; // [rsp+28h] [rbp-358h]
  unsigned __int8 tinfo_details; // [rsp+3Bh] [rbp-345h]
  unsigned int v30; // [rsp+3Ch] [rbp-344h]
  unsigned __int64 v31; // [rsp+40h] [rbp-340h] BYREF
  __int64 v32; // [rsp+48h] [rbp-338h]
  _BYTE v33[12]; // [rsp+50h] [rbp-330h] BYREF
  __int64 v34; // [rsp+60h] [rbp-320h] BYREF
  __int128 v35; // [rsp+68h] [rbp-318h]
  __int64 v36; // [rsp+78h] [rbp-308h]
  __int64 v37; // [rsp+80h] [rbp-300h]
  __int64 v38; // [rsp+88h] [rbp-2F8h]
  __int128 v39; // [rsp+90h] [rbp-2F0h]
  __int64 v40; // [rsp+A0h] [rbp-2E0h]
  __int128 v41; // [rsp+A8h] [rbp-2D8h]
  char v42; // [rsp+B8h] [rbp-2C8h]
  _BYTE v43[24]; // [rsp+C0h] [rbp-2C0h] BYREF
  _BYTE v44[536]; // [rsp+D8h] [rbp-2A8h] BYREF
  char v45; // [rsp+2F0h] [rbp-90h] BYREF
  char v46; // [rsp+340h] [rbp-40h] BYREF
  unsigned __int64 v47; // [rsp+348h] [rbp-38h]

  v47 = __readfsqword(0x28u);
  *(_DWORD *)(*(_QWORD *)(a1 + 800) + 1400LL) |= 1u;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v34 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v40 = 0;
    v42 = 16;
    v35 = 0;
    v39 = 0;
    v41 = 0;
    tinfo_details = get_tinfo_details();
    if ( !tinfo_details )
    {
      if ( !under_debugger )
        sub_37EA20(50518);
      BUG();
    }
    v2 = *(_DWORD **)(a1 + 832);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD *)(a1 + 40);
    v27 = v35;
    v30 = v2[112];
    v5 = *(_QWORD *)(v3 + 920);
    if ( (*(_BYTE *)(v5 + 176) & 0x20) != 0 )
      v6 = 9;
    else
      v6 = 8 - sub_3DEE70((__int64 *)(v5 + 104), v4);
    v7 = (unsigned int)(v35 - 1);
    v25 = v7 * v30 + v2[123] + v30 * v6;
    if ( v25 > v2[130] )
    {
      tinfo_details = 0;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_425B90);
      v9 = (__m128i *)v43;
      do
      {
        v9[1] = si128;
        v9->m128i_i16[0] = 0;
        v9 += 5;
        v9[-5].m128i_i16[1] = 0;
        v9[-5].m128i_i32[1] = -1;
        v9[-5].m128i_i64[1] = 0;
        v9[-3].m128i_i64[0] = 0;
        *(__m128i *)((char *)&v9[-3] + 8) = 0;
        v9[-2].m128i_i32[2] = 0;
        v9[-1].m128i_i64[0] = 0;
        v9[-1].m128i_i32[2] = 0;
      }
      while ( v9 != (__m128i *)&v46 );
      if ( v27 > 0 )
      {
        v10 = v25;
        v11 = v44;
        v28 = &v44[80 * v7 + 80];
        do
        {
          *(v11 - 24) = 1;
          *(_QWORD *)v33 = 41;
          *(_QWORD *)(v11 - 20) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), _mm_cvtsi32_si128(v10)).m128i_u64[0];
          copy_tinfo_t();
          v11 += 80;
          clear_tinfo_t();
          v10 -= v30;
        }
        while ( v11 != v28 );
        v3 = *(_QWORD *)(a1 + 8);
        v4 = *(_QWORD *)(a1 + 40);
      }
      v32 = 0;
      v31 = 0xFFFFFFFF00000000LL;
      *(_QWORD *)v33 = 41;
      v12 = sub_332690(
              v3,
              v4,
              *(_QWORD *)(a2 + 8),
              (unsigned int)v33,
              v27,
              (unsigned int)v43,
              1,
              v21,
              v22,
              (unsigned int)&v34,
              a2,
              v24);
      clear_tinfo_t();
      v13 = *(_QWORD *)(v12 + 72);
      v32 = v12;
      *(_DWORD *)(v13 + 280) |= 0x10u;
      *(_DWORD *)v33 = 1;
      LOBYTE(v31) = 4;
      HIDWORD(v31) = v30;
      *(_QWORD *)&v33[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), _mm_cvtsi32_si128(v26)).m128i_u64[0];
      sub_1D38D0(a1, 67, (unsigned int)&v31, 0, (unsigned int)v33, v14);
      if ( ((*(_WORD *)(a1 + 48) - 86) & 0xFFFD) == 0 )
        sub_36FC50(*(_QWORD *)(a1 + 8));
      sub_11A960((__int64)v33);
      v15 = &v45;
      sub_11A960((__int64)&v31);
      while ( 1 )
      {
        cleanup_argloc();
        if ( *((_QWORD *)v15 + 4) )
        {
          *((_QWORD *)v15 + 5) = 0;
          qfree();
        }
        clear_tinfo_t();
        sub_11A960((__int64)v15);
        if ( v15 == v43 )
          break;
        v15 -= 80;
      }
    }
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      qfree();
    }
    cleanup_argloc();
    clear_tinfo_t();
    v16 = v34;
    if ( v34 )
    {
      v17 = v35;
      if ( (_QWORD)v35 )
      {
        v18 = 0;
        do
        {
          v19 = (_QWORD *)(v16 + 80 * v18);
          clear_tinfo_t();
          if ( v19[5] )
          {
            v19[6] = 0;
            qfree();
          }
          if ( v19[2] )
          {
            v19[3] = 0;
            qfree();
          }
          cleanup_argloc();
          v16 = v34;
          ++v18;
        }
        while ( v17 != v18 );
      }
      *(_QWORD *)&v35 = 0;
      qfree();
    }
  }
  else
  {
    return 0;
  }
  return tinfo_details;
}
