__int64 __fastcall sub_408FA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // r9
  __int64 v5; // r10
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __m128i si128; // xmm1
  __m128i *v11; // rax
  unsigned int v12; // ebx
  _BYTE *v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rax
  char *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // r14
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  signed int v26; // [rsp+1Ch] [rbp-364h]
  int v27; // [rsp+20h] [rbp-360h]
  _BYTE *v28; // [rsp+28h] [rbp-358h]
  unsigned __int8 tinfo_details; // [rsp+3Bh] [rbp-345h]
  unsigned int v30; // [rsp+3Ch] [rbp-344h]
  unsigned __int64 v31; // [rsp+40h] [rbp-340h] BYREF
  __int64 v32; // [rsp+48h] [rbp-338h]
  unsigned __int8 v33[16]; // [rsp+50h] [rbp-330h] BYREF
  __int64 v34; // [rsp+60h] [rbp-320h] BYREF
  __int128 v35; // [rsp+68h] [rbp-318h]
  __int64 v36; // [rsp+78h] [rbp-308h]
  __int64 v37; // [rsp+80h] [rbp-300h] BYREF
  __int64 v38; // [rsp+88h] [rbp-2F8h] BYREF
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
  *(_DWORD *)(*(_QWORD *)(a1 + 800) + 1416LL) |= 1u;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v3 = *(_QWORD *)(a2 + 32);
    v34 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v40 = 0;
    v42 = 16;
    v35 = 0;
    v39 = 0;
    v41 = 0;
    tinfo_details = get_tinfo_details(v3, 12, &v34);
    if ( !tinfo_details )
    {
      if ( !under_debugger )
        sub_383060(0xC556u, 12, 0.0);
      BUG();
    }
    v4 = *(_DWORD **)(a1 + 832);
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_QWORD *)(a1 + 40);
    v27 = v35;
    v30 = v4[112];
    v7 = *(_QWORD *)(v5 + 920);
    if ( (*(_BYTE *)(v7 + 176) & 0x20) != 0 )
      v8 = 9;
    else
      v8 = 8 - sub_3E9AE0((__int64 *)(v7 + 104), v6);
    v9 = (unsigned int)(v27 - 1);
    v26 = v9 * v30 + v4[123] + v30 * v8;
    if ( v26 > v4[130] )
    {
      tinfo_details = 0;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
      v11 = (__m128i *)v43;
      do
      {
        v11[1] = si128;
        v11->m128i_i16[0] = 0;
        v11 += 5;
        v11[-5].m128i_i16[1] = 0;
        v11[-5].m128i_i32[1] = -1;
        v11[-5].m128i_i64[1] = 0;
        v11[-3].m128i_i64[0] = 0;
        *(__m128i *)((char *)&v11[-3] + 8) = 0;
        v11[-2].m128i_i32[2] = 0;
        v11[-1].m128i_i64[0] = 0;
        v11[-1].m128i_i32[2] = 0;
      }
      while ( v11 != (__m128i *)&v46 );
      if ( v27 > 0 )
      {
        v12 = v26;
        v13 = v44;
        v28 = &v44[80 * v9 + 80];
        do
        {
          *(v13 - 24) = 1;
          *(_QWORD *)v33 = 41;
          *(_QWORD *)(v13 - 20) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), _mm_cvtsi32_si128(v12)).m128i_u64[0];
          copy_tinfo_t(v13, v33);
          v13 += 80;
          clear_tinfo_t(v33);
          v12 -= v30;
        }
        while ( v13 != v28 );
        v5 = *(_QWORD *)(a1 + 8);
        v6 = *(_QWORD *)(a1 + 40);
      }
      v32 = 0;
      v31 = 0xFFFFFFFF00000000LL;
      *(_QWORD *)v33 = 41;
      v14 = sub_335B10(v5, v6, *(_QWORD *)(a2 + 8), v33, v27, (__int64)v43, 1);
      clear_tinfo_t(v33);
      v15 = *(_QWORD *)(v14 + 72);
      v32 = v14;
      *(_DWORD *)(v15 + 280) |= 0x10u;
      *(_DWORD *)v33 = 1;
      LOBYTE(v31) = 4;
      HIDWORD(v31) = v30;
      *(_QWORD *)&v33[4] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), _mm_cvtsi32_si128(v26)).m128i_u64[0];
      sub_1D6450(a1, 67, (unsigned __int8 *)&v31, nullptr, v33);
      if ( ((*(_WORD *)(a1 + 48) - 86) & 0xFFFD) == 0 )
        sub_373590(*(_QWORD *)(a1 + 8));
      sub_11CDA0((__int64)v33);
      v16 = &v45;
      sub_11CDA0((__int64)&v31);
      while ( 1 )
      {
        cleanup_argloc(v16 + 56);
        v17 = *((_QWORD *)v16 + 4);
        if ( v17 )
        {
          *((_QWORD *)v16 + 5) = 0;
          qfree(v17);
        }
        clear_tinfo_t(v16 + 24);
        sub_11CDA0((__int64)v16);
        if ( v16 == v43 )
          break;
        v16 -= 80;
      }
    }
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      qfree(v40);
    }
    cleanup_argloc(&v38);
    clear_tinfo_t(&v37);
    v18 = v34;
    if ( v34 )
    {
      v19 = v35;
      if ( (_QWORD)v35 )
      {
        v20 = 0;
        do
        {
          v21 = (_QWORD *)(v18 + 80 * v20);
          clear_tinfo_t(v21 + 8);
          v22 = v21[5];
          if ( v22 )
          {
            v21[6] = 0;
            qfree(v22);
          }
          v23 = v21[2];
          if ( v23 )
          {
            v21[3] = 0;
            qfree(v23);
          }
          cleanup_argloc(v21);
          v18 = v34;
          ++v20;
        }
        while ( v19 != v20 );
      }
      *(_QWORD *)&v35 = 0;
      qfree(v18);
    }
  }
  else
  {
    return 0;
  }
  return tinfo_details;
}
