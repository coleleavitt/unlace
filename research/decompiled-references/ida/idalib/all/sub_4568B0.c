unsigned __int64 __fastcall sub_4568B0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  char v5; // al
  char *v6; // rbp
  _WORD *v7; // rax
  int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  __m128i v13; // xmm0
  __int64 v14; // rax
  void *v16; // rbp
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __int64 v19; // rax
  void *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v25; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  v4 = node2ea(a3);
  v5 = netnode_charval(*(_QWORD *)(a1 + 96), v4, 256);
  switch ( v5 )
  {
    case 2:
      v6 = "EPILOG";
      ptr = nullptr;
      v25 = 0;
      break;
    case 3:
      v6 = "SWITCH";
      ptr = nullptr;
      v25 = 0;
      break;
    case 1:
      ptr = nullptr;
      v6 = "PROLOG";
      v25 = 0;
      break;
    default:
      return v26 - __readfsqword(0x28u);
  }
  v7 = (_WORD *)qvector_reserve(&ptr, 0, 7, 1);
  v8 = *(_DWORD *)v6;
  ptr = v7;
  v25.m128i_i64[0] = 7;
  *(_DWORD *)v7 = v8;
  v7[2] = *((_WORD *)v6 + 2);
  *((_BYTE *)ptr + 6) = 0;
  v9 = a2[1];
  v10 = *a2;
  v11 = a2[2];
  v12 = v9 + 1;
  if ( (unsigned __int64)&ptr < *a2 || (unsigned __int64)&ptr >= v10 + 24 * v11 )
  {
    if ( v11 < v12 )
    {
      v21 = qvector_reserve(a2, v10, v9 + 1, 24);
      *a2 = v21;
      v10 = v21;
      v9 = a2[1];
    }
    v13 = _mm_loadu_si128(&v25);
    v14 = v10 + 24 * v9;
    *(_QWORD *)v14 = ptr;
    *(__m128i *)(v14 + 8) = v13;
    ++a2[1];
  }
  else
  {
    v16 = ptr;
    v17 = _mm_loadl_epi64(&v25);
    ptr = nullptr;
    v18 = _mm_loadl_epi64((const __m128i *)&v25.m128i_u64[1]);
    v25 = 0;
    if ( v11 < v12 )
    {
      v23.m128i_i64[1] = v18.m128i_i64[0];
      v23.m128i_i64[0] = v17.m128i_i64[0];
      v22 = qvector_reserve(a2, v10, v9 + 1, 24);
      *a2 = v22;
      v10 = v22;
      v9 = a2[1];
      v18 = _mm_loadl_epi64((const __m128i *)&v23.m128i_u64[1]);
      v17 = _mm_loadl_epi64(&v23);
    }
    v19 = v10 + 24 * v9;
    *(_QWORD *)v19 = v16;
    v20 = ptr;
    *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v17, v18);
    ++a2[1];
    if ( v20 )
    {
      v25.m128i_i64[0] = 0;
      qfree(v20);
    }
  }
  return v26 - __readfsqword(0x28u);
}
