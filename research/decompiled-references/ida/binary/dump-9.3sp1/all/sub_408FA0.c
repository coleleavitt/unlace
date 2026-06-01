__int64 __fastcall sub_408FA0(__int64 a1, __int64 a2)
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
  char *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // r14
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdi
  signed int v24; // [rsp+1Ch] [rbp-364h]
  int v25; // [rsp+20h] [rbp-360h]
  _BYTE *v26; // [rsp+28h] [rbp-358h]
  unsigned __int8 tinfo_details; // [rsp+3Bh] [rbp-345h]
  unsigned int v28; // [rsp+3Ch] [rbp-344h]
  unsigned __int64 v29; // [rsp+40h] [rbp-340h] BYREF
  __int64 v30; // [rsp+48h] [rbp-338h]
  unsigned __int8 v31[16]; // [rsp+50h] [rbp-330h] BYREF
  __int64 v32; // [rsp+60h] [rbp-320h]
  __int128 v33; // [rsp+68h] [rbp-318h]
  __int64 v34; // [rsp+78h] [rbp-308h]
  __int64 v35; // [rsp+80h] [rbp-300h]
  __int64 v36; // [rsp+88h] [rbp-2F8h]
  __int128 v37; // [rsp+90h] [rbp-2F0h]
  __int64 v38; // [rsp+A0h] [rbp-2E0h]
  __int128 v39; // [rsp+A8h] [rbp-2D8h]
  char v40; // [rsp+B8h] [rbp-2C8h]
  _BYTE v41[24]; // [rsp+C0h] [rbp-2C0h] BYREF
  _BYTE v42[536]; // [rsp+D8h] [rbp-2A8h] BYREF
  char v43; // [rsp+2F0h] [rbp-90h] BYREF
  char v44; // [rsp+340h] [rbp-40h] BYREF
  unsigned __int64 v45; // [rsp+348h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  *(_DWORD *)(*(_QWORD *)(a1 + 800) + 1416LL) |= 1u;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v32 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v38 = 0;
    v40 = 16;
    v33 = 0;
    v37 = 0;
    v39 = 0;
    tinfo_details = get_tinfo_details();
    if ( !tinfo_details )
    {
      if ( !under_debugger )
        sub_383060(0xC556u, 0.0);
      BUG();
    }
    v2 = *(_DWORD **)(a1 + 832);
    v3 = *(_QWORD *)(a1 + 8);
    v4 = *(_QWORD *)(a1 + 40);
    v25 = v33;
    v28 = v2[112];
    v5 = *(_QWORD *)(v3 + 920);
    if ( (*(_BYTE *)(v5 + 176) & 0x20) != 0 )
      v6 = 9;
    else
      v6 = 8 - sub_3E9AE0((__int64 *)(v5 + 104), v4);
    v7 = (unsigned int)(v33 - 1);
    v24 = v7 * v28 + v2[123] + v28 * v6;
    if ( v24 > v2[130] )
    {
      tinfo_details = 0;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
      v9 = (__m128i *)v41;
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
      while ( v9 != (__m128i *)&v44 );
      if ( v25 > 0 )
      {
        v10 = v24;
        v11 = v42;
        v26 = &v42[80 * v7 + 80];
        do
        {
          *(v11 - 24) = 1;
          *(_QWORD *)v31 = 41;
          *(_QWORD *)(v11 - 20) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), _mm_cvtsi32_si128(v10)).m128i_u64[0];
          copy_tinfo_t();
          v11 += 80;
          clear_tinfo_t();
          v10 -= v28;
        }
        while ( v11 != v26 );
        v3 = *(_QWORD *)(a1 + 8);
        v4 = *(_QWORD *)(a1 + 40);
      }
      v30 = 0;
      v29 = 0xFFFFFFFF00000000LL;
      *(_QWORD *)v31 = 41;
      v12 = sub_335B10(v3, v4, *(_QWORD *)(a2 + 8), (__int64)v31, v25, (__int64)v41, 1);
      clear_tinfo_t();
      v13 = *(_QWORD *)(v12 + 72);
      v30 = v12;
      *(_DWORD *)(v13 + 280) |= 0x10u;
      *(_DWORD *)v31 = 1;
      LOBYTE(v29) = 4;
      HIDWORD(v29) = v28;
      *(_QWORD *)&v31[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), _mm_cvtsi32_si128(v24)).m128i_u64[0];
      sub_1D6450(a1, 67, (unsigned __int8 *)&v29, nullptr, v31);
      if ( ((*(_WORD *)(a1 + 48) - 86) & 0xFFFD) == 0 )
        sub_373590(*(_QWORD *)(a1 + 8));
      sub_11CDA0((__int64)v31);
      v14 = &v43;
      sub_11CDA0((__int64)&v29);
      while ( 1 )
      {
        cleanup_argloc();
        v15 = *((_QWORD *)v14 + 4);
        if ( v15 )
        {
          *((_QWORD *)v14 + 5) = 0;
          qfree(v15);
        }
        clear_tinfo_t();
        sub_11CDA0((__int64)v14);
        if ( v14 == v41 )
          break;
        v14 -= 80;
      }
    }
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree(v38);
    }
    cleanup_argloc();
    clear_tinfo_t();
    v16 = v32;
    if ( v32 )
    {
      v17 = v33;
      if ( (_QWORD)v33 )
      {
        v18 = 0;
        do
        {
          v19 = (_QWORD *)(v16 + 80 * v18);
          clear_tinfo_t();
          v20 = v19[5];
          if ( v20 )
          {
            v19[6] = 0;
            qfree(v20);
          }
          v21 = v19[2];
          if ( v21 )
          {
            v19[3] = 0;
            qfree(v21);
          }
          cleanup_argloc();
          v16 = v32;
          ++v18;
        }
        while ( v17 != v18 );
      }
      *(_QWORD *)&v33 = 0;
      qfree(v16);
    }
  }
  else
  {
    return 0;
  }
  return tinfo_details;
}
