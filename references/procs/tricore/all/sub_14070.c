__int64 __fastcall sub_14070(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebp
  int v12; // r13d
  __int64 v13; // r15
  int v14; // r14d
  bool v15; // zf
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+10h] [rbp-48h]
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v5 = *a3;
  v25 = __readfsqword(0x28u);
  if ( (int)v5 < 0 )
    return reg_finder_may_modify_stkvar(a1, a2, v5, a4);
  LOBYTE(v7) = sub_BA90(a4, (unsigned __int16)v5, 1 << ((unsigned int)v5 >> 29));
  v10 = v7;
  if ( (_BYTE)v7 )
  {
    *(_BYTE *)(a2 + 24) = 4;
    v12 = 0;
    *(_QWORD *)(a2 + 8) = 0;
    v13 = *(_QWORD *)(a4 + 16);
    v14 = *(unsigned __int16 *)(a4 + 24);
    v15 = *(_BYTE *)(a4 + 81) == 5;
    v23.m128i_i64[0] = -1;
    v23.m128i_i64[1] = v13;
    LOWORD(v24) = v14;
    if ( v15 )
      v12 = *(_BYTE *)(a4 + 121) == 0;
    v16 = *(_QWORD *)a2;
    v17 = *(_QWORD *)(a2 + 16);
    WORD1(v24) = v12;
    if ( (unsigned __int64)&v23 >= v16 && (unsigned __int64)&v23 < v16 + 24 * v17 )
    {
      if ( !v17 )
      {
        v21 = qvector_reserve(a2, v16, 1, 24, v8, v9);
        v22 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v21;
        v16 = v21 + 24 * v22;
      }
      *(_QWORD *)v16 = -1;
      *(_QWORD *)(v16 + 8) = v13;
      *(_DWORD *)(v16 + 16) = v14 | (v12 << 16);
    }
    else
    {
      if ( !v17 )
      {
        v19 = qvector_reserve(a2, v16, 1, 24, v8, v9);
        v20 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = v19;
        v16 = v19 + 24 * v20;
      }
      v18 = _mm_load_si128(&v23);
      *(_QWORD *)(v16 + 16) = v24;
      *(__m128i *)v16 = v18;
    }
    ++*(_QWORD *)(a2 + 8);
  }
  return v10;
}
