__int64 __fastcall sub_4ECB80(__int64 a1, unsigned int *a2, unsigned int *a3, char a4)
{
  __int64 v5; // rcx
  unsigned int v6; // r14d
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned int v10; // eax
  unsigned int v11; // r13d
  unsigned int v12; // ebp
  unsigned __int64 v13; // r12
  size_t v14; // r15
  __int64 v15; // r14
  size_t v16; // r8
  _BYTE *v17; // rsi
  __int64 v18; // r12
  unsigned __int64 v19; // r14
  _BYTE *v20; // rsi
  void *v21; // rax
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  size_t v24; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v26; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( !a3 || !*((_QWORD *)a2 + 3) )
    return -1;
  if ( a4 )
  {
    v5 = 338;
    v6 = 82;
  }
  else
  {
    v5 = 323;
    v6 = 67;
  }
  v7 = netnode_qsupstr(*a2, a1, *a3, v5);
  v8 = v7;
  if ( v7 <= 0 )
    return -1;
  if ( (unsigned __int64)v7 > 3 && **(_DWORD **)a1 == 16909060 )
  {
    v10 = ea2node(*a3);
    v11 = sub_4F0CC0(*a2, v10, v6);
    if ( v11 != -1 )
    {
      ptr = nullptr;
      v12 = 0;
      v26 = 0;
      while ( netnode_qsupstr(v11, a1, v12, 83) >= 0 )
      {
        if ( v12 )
        {
          v18 = v26.m128i_i64[0];
          v19 = 2;
          if ( v26.m128i_i64[0] )
          {
            v19 = v26.m128i_i64[0] + 1;
            v18 = v26.m128i_i64[0] - 1;
          }
          v20 = ptr;
          if ( v26.m128i_i64[1] < v19 )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
            v20 = ptr;
          }
          v26.m128i_i64[0] = v19;
          v20[v18] = 10;
          *((_BYTE *)ptr + v18 + 1) = 0;
        }
        v13 = *(_QWORD *)(a1 + 8);
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v13 != 1 )
          {
            v15 = v26.m128i_i64[0];
            v16 = v13 - 1;
            if ( v26.m128i_i64[0] )
            {
              v15 = v26.m128i_i64[0] - 1;
              v16 = v14 + v26.m128i_i64[0] - 1;
              v13 += v26.m128i_i64[0] - 1;
            }
            v17 = ptr;
            if ( v26.m128i_i64[1] < v13 )
            {
              v24 = v16;
              ptr = (void *)qvector_reserve(&ptr, ptr, v13, 1);
              v16 = v24;
              v17 = ptr;
            }
            v26.m128i_i64[0] = v13;
            v17[v16] = 0;
            memcpy((char *)ptr + v15, *(const void **)a1, v14);
          }
        }
        ++v12;
      }
      v21 = *(void **)a1;
      v22 = _mm_loadu_si128(&v26);
      v23 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      *(_QWORD *)a1 = ptr;
      *(__m128i *)(a1 + 8) = v22;
      ptr = v21;
      v26 = v23;
      v8 = sub_3DA470((__int64 *)a1);
      if ( ptr )
      {
        v26.m128i_i64[0] = 0;
        qfree(ptr);
      }
    }
  }
  return v8;
}

