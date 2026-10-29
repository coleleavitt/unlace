__int64 __fastcall reg_finder_may_modify_stkvar_0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // r14d
  __int64 v6; // rdx
  int v7; // eax
  int v8; // ecx
  const __m128i *v9; // rbp
  unsigned int v10; // ebx
  int v12; // ebx
  __int32 v13; // r12d
  int v14; // ebp
  bool v15; // zf
  __m128i *v16; // rsi
  __int64 v17; // rax
  unsigned __int32 v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v25; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( a3 >= 0 )
    return 0;
  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 || !(unsigned __int8)is_call_insn(a4) )
  {
    v5 = 0;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    v7 = *(unsigned __int16 *)(a4 + 12);
    v8 = *(_DWORD *)(v6 + 104);
    if ( v7 >= v8 && v7 < *(_DWORD *)(v6 + 108) )
      v5 = *(_DWORD *)(*(_QWORD *)(v6 + 112) + 16LL * (v7 - v8) + 8);
    if ( *(int *)(a1 + 16) > 0 )
    {
      v9 = (const __m128i *)(a4 + 24);
      v10 = 0;
      while ( v10 > 7 || (dword_2389980[v10] & v5) == 0 || (unsigned int)sub_4E7E40(a1, a3, v9, a4) == 2 )
      {
        ++v10;
        v9 = (const __m128i *)((char *)v9 + 24);
        if ( *(_DWORD *)(a1 + 16) <= (signed int)v10 )
          return 0;
      }
      v18 = *(_DWORD *)(a1 + 72);
      v16 = *(__m128i **)a2;
      v17 = *(_QWORD *)(a2 + 16);
      if ( v18 != -1 )
      {
        *(_BYTE *)(a2 + 24) = 2;
        *(_QWORD *)(a2 + 8) = 0;
        v25.m128i_i64[0] = 0xFFFFFFFFLL;
        v25.m128i_i64[1] = v18;
        if ( &v25 < v16 || &v25 >= &v16[v17] )
        {
          if ( !v17 )
          {
            v19 = qvector_reserve(a2, v16, 1, 16);
            *(_QWORD *)a2 = v19;
            v16 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v19);
          }
          *v16 = _mm_load_si128(&v25);
        }
        else
        {
          if ( !v17 )
          {
            v22 = qvector_reserve(a2, v16, 1, 16);
            *(_QWORD *)a2 = v22;
            v16 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v22);
          }
          v16->m128i_i32[2] = v18;
          v16->m128i_i64[0] = 0xFFFFFFFFLL;
          v16->m128i_i32[3] = 0;
        }
        ++*(_QWORD *)(a2 + 8);
        *(_DWORD *)(a1 + 72) = -1;
        return 1;
      }
      v12 = 0;
      *(_BYTE *)(a2 + 24) = 4;
      *(_QWORD *)(a2 + 8) = 0;
      v13 = *(_DWORD *)(a4 + 8);
      v14 = *(unsigned __int16 *)(a4 + 12);
      v15 = *(_BYTE *)(a4 + 49) == 5;
      v25.m128i_i64[0] = 0xFFFFFFFFLL;
      v25.m128i_i32[2] = v13;
      v25.m128i_i16[6] = v14;
      if ( v15 )
        v12 = *(_BYTE *)(a4 + 73) == 0;
      v25.m128i_i16[7] = v12;
      if ( &v25 < v16 )
        goto LABEL_36;
      goto LABEL_17;
    }
    return 0;
  }
  v12 = 0;
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 8) = 0;
  v13 = *(_DWORD *)(a4 + 8);
  v14 = *(unsigned __int16 *)(a4 + 12);
  v15 = *(_BYTE *)(a4 + 49) == 5;
  v25.m128i_i64[0] = 0xFFFFFFFFLL;
  v25.m128i_i32[2] = v13;
  v25.m128i_i16[6] = v14;
  if ( v15 )
    v12 = *(_BYTE *)(a4 + 73) == 0;
  v25.m128i_i16[7] = v12;
  v16 = *(__m128i **)a2;
  v17 = *(_QWORD *)(a2 + 16);
  if ( (unsigned __int64)&v25 < *(_QWORD *)a2 )
    goto LABEL_36;
LABEL_17:
  if ( &v25 >= &v16[v17] )
  {
LABEL_36:
    if ( !v17 )
    {
      v20 = qvector_reserve(a2, v16, 1, 16);
      *(_QWORD *)a2 = v20;
      v16 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v20);
    }
    *v16 = _mm_load_si128(&v25);
    goto LABEL_21;
  }
  if ( !v17 )
  {
    v21 = qvector_reserve(a2, v16, 1, 16);
    *(_QWORD *)a2 = v21;
    v16 = (__m128i *)(16LL * *(_QWORD *)(a2 + 8) + v21);
  }
  v16->m128i_i32[2] = v13;
  v16->m128i_i64[0] = 0xFFFFFFFFLL;
  v16->m128i_i32[3] = v14 | (v12 << 16);
LABEL_21:
  ++*(_QWORD *)(a2 + 8);
  return 1;
}

