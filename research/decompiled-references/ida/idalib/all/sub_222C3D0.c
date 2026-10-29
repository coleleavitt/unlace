__int64 __fastcall sub_222C3D0(__int64 a1, unsigned __int16 *a2, unsigned __int64 a3)
{
  __int64 result; // rax
  unsigned __int16 *v6; // rbx
  unsigned __int16 *v7; // rax
  __int16 *v8; // r15
  __int16 *v9; // r13
  unsigned __int16 *v10; // r12
  __int16 *v11; // rdi
  __m128i v12; // xmm0
  unsigned __int16 *v13; // rsi
  unsigned __int16 *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // ecx
  unsigned __int16 *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __m128i v25; // [rsp+0h] [rbp-48h] BYREF

  result = 0x666666666666666LL;
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( a3 > 0x666666666666666LL )
    std::__throw_length_error("vector::reserve");
  if ( a3 )
  {
    v6 = a2;
    v25.m128i_i64[1] = 40 * a3;
    v7 = (unsigned __int16 *)operator new(40 * a3);
    v8 = *(__int16 **)(a1 + 8);
    v9 = *(__int16 **)a1;
    v10 = v7;
    if ( v8 != *(__int16 **)a1 )
    {
      do
      {
        v11 = v9;
        v9 += 20;
        sub_222B2A0(v11);
      }
      while ( v8 != v9 );
      v9 = *(__int16 **)a1;
    }
    if ( v9 )
      operator delete(v9);
    v25.m128i_i64[0] = (__int64)v10;
    v12 = _mm_loadl_epi64(&v25);
    v13 = (unsigned __int16 *)((char *)v10 + v25.m128i_i64[1]);
    v14 = (unsigned __int16 *)((char *)a2 + v25.m128i_i64[1]);
    *(_QWORD *)(a1 + 16) = (char *)v10 + v25.m128i_i64[1];
    *(__m128i *)a1 = _mm_unpacklo_epi64(v12, v12);
    if ( v13 == v10 )
      goto LABEL_15;
LABEL_10:
    *v10 = 0;
    result = *(_QWORD *)(a1 + 8) + 40LL;
    for ( *(_QWORD *)(a1 + 8) = result; ; result = *(_QWORD *)(a1 + 8) )
    {
      v15 = *v6;
      *(_WORD *)(result - 40) = v15;
      switch ( v15 )
      {
        case 0LL:
        case 1LL:
        case 2LL:
        case 3LL:
        case 4LL:
          *(__m128i *)(result - 32) = _mm_loadu_si128((const __m128i *)(v6 + 4));
          *(__m128i *)(result - 16) = _mm_loadu_si128((const __m128i *)(v6 + 12));
          break;
        case 5LL:
          v24 = *((_QWORD *)v6 + 2);
          *(_QWORD *)(result - 32) = *((_QWORD *)v6 + 1);
          *(_QWORD *)(result - 24) = v24;
          break;
        case 6LL:
          *(_QWORD *)(result - 32) = result - 16;
          v19 = *((unsigned __int16 **)v6 + 1);
          if ( v6 + 12 == v19 )
          {
            *(__m128i *)(result - 16) = _mm_loadu_si128((const __m128i *)(v6 + 12));
          }
          else
          {
            *(_QWORD *)(result - 32) = v19;
            *(_QWORD *)(result - 16) = *((_QWORD *)v6 + 3);
          }
          *(_QWORD *)(result - 24) = *((_QWORD *)v6 + 2);
          *((_QWORD *)v6 + 1) = v6 + 12;
          *((_QWORD *)v6 + 2) = 0;
          *((_BYTE *)v6 + 24) = 0;
          *v6 = 0;
          break;
        case 7LL:
          *(_QWORD *)(result - 32) = 0;
          v16 = *((_QWORD *)v6 + 1);
          *(_DWORD *)(result - 16) = 0;
          *(_DWORD *)(result - 20) = 0;
          *(_DWORD *)(result - 24) = 0;
          *(_QWORD *)(result - 32) = v16;
          LODWORD(v16) = *((_DWORD *)v6 + 4);
          *((_QWORD *)v6 + 1) = 0;
          *(_DWORD *)(result - 24) = v16;
          v17 = *((_DWORD *)v6 + 5);
          *((_DWORD *)v6 + 4) = 0;
          LODWORD(v16) = *(_DWORD *)(result - 20);
          *(_DWORD *)(result - 20) = v17;
          v18 = *((_DWORD *)v6 + 6);
          *((_DWORD *)v6 + 5) = v16;
          LODWORD(v16) = *(_DWORD *)(result - 16);
          *(_DWORD *)(result - 16) = v18;
          *((_DWORD *)v6 + 6) = v16;
          *v6 = 0;
          break;
        case 8LL:
          *(_QWORD *)(result - 16) = 0;
          *(_OWORD *)(result - 32) = 0;
          *(_QWORD *)(result - 32) = *((_QWORD *)v6 + 1);
          v20 = *((_QWORD *)v6 + 2);
          *((_QWORD *)v6 + 1) = 0;
          v21 = *(_QWORD *)(result - 24);
          *(_QWORD *)(result - 24) = v20;
          v22 = *((_QWORD *)v6 + 3);
          *((_QWORD *)v6 + 2) = v21;
          v23 = *(_QWORD *)(result - 16);
          *(_QWORD *)(result - 16) = v22;
          result = 0;
          *((_QWORD *)v6 + 3) = v23;
          *v6 = 0;
          break;
        default:
          break;
      }
      v6 += 20;
      if ( v14 == v6 )
        break;
      v10 = *(unsigned __int16 **)(a1 + 8);
      v13 = *(unsigned __int16 **)(a1 + 16);
      if ( v13 != v10 )
        goto LABEL_10;
LABEL_15:
      sub_222C110(a1, v13);
    }
  }
  return result;
}
