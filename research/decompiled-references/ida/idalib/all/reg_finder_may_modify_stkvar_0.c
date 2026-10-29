__int64 __fastcall reg_finder_may_modify_stkvar_0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // r14d
  __int64 v6; // rdx
  int v7; // eax
  int v8; // ecx
  const __m128i *v9; // rbp
  unsigned int v10; // ebx
  int v12; // ebx
  __int64 v13; // r12
  int v14; // ebp
  bool v15; // zf
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __m128i si128; // xmm0
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int128 v30; // [rsp+10h] [rbp-58h] BYREF
  __int64 v31; // [rsp+20h] [rbp-48h]
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( a3 >= 0 )
    return 0;
  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 || !(unsigned __int8)is_call_insn(a4) )
  {
    v5 = 0;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    v7 = *(unsigned __int16 *)(a4 + 24);
    v8 = *(_DWORD *)(v6 + 104);
    if ( v7 >= v8 && v7 < *(_DWORD *)(v6 + 108) )
      v5 = *(_DWORD *)(*(_QWORD *)(v6 + 112) + 16LL * (v7 - v8) + 8);
    if ( *(int *)(a1 + 16) > 0 )
    {
      v9 = (const __m128i *)(a4 + 40);
      v10 = 0;
      while ( v10 > 7 || (dword_23AD9C0[v10] & v5) == 0 || (unsigned int)sub_4FC8A0(a1, a3, v9, a4) == 2 )
      {
        ++v10;
        v9 = (const __m128i *)((char *)v9 + 40);
        if ( *(_DWORD *)(a1 + 16) <= (signed int)v10 )
          return 0;
      }
      v18 = *(_QWORD *)(a1 + 72);
      v16 = *(_QWORD *)a2;
      v17 = *(_QWORD *)(a2 + 16);
      if ( v18 != -1 )
      {
        *(_BYTE *)(a2 + 24) = 2;
        *(_QWORD *)(a2 + 8) = 0;
        v30 = __PAIR128__(v18, 0xFFFFFFFFLL);
        LODWORD(v31) = 0;
        if ( (unsigned __int64)&v30 < v16 || (unsigned __int64)&v30 >= v16 + 24 * v17 )
        {
          if ( !v17 )
          {
            v20 = qvector_reserve(a2, v16, 1, 24);
            v21 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)a2 = v20;
            v16 = v20 + 24 * v21;
          }
          si128 = _mm_load_si128((const __m128i *)&v30);
          *(_QWORD *)(v16 + 16) = v31;
          *(__m128i *)v16 = si128;
        }
        else
        {
          if ( !v17 )
          {
            v26 = qvector_reserve(a2, v16, 1, 24);
            v27 = *(_QWORD *)(a2 + 8);
            *(_QWORD *)a2 = v26;
            v16 = v26 + 24 * v27;
          }
          *(_QWORD *)(v16 + 8) = v18;
          *(_QWORD *)v16 = 0xFFFFFFFFLL;
          *(_DWORD *)(v16 + 16) = 0;
        }
        ++*(_QWORD *)(a2 + 8);
        *(_QWORD *)(a1 + 72) = -1;
        return 1;
      }
      *(_QWORD *)&v30 = -1;
      v12 = 0;
      *(_BYTE *)(a2 + 24) = 4;
      *(_QWORD *)(a2 + 8) = 0;
      v13 = *(_QWORD *)(a4 + 16);
      v14 = *(unsigned __int16 *)(a4 + 24);
      v15 = *(_BYTE *)(a4 + 81) == 5;
      *((_QWORD *)&v30 + 1) = v13;
      LOWORD(v31) = v14;
      if ( v15 )
        v12 = *(_BYTE *)(a4 + 121) == 0;
      WORD1(v31) = v12;
      if ( (unsigned __int64)&v30 < v16 )
        goto LABEL_36;
      goto LABEL_17;
    }
    return 0;
  }
  *(_QWORD *)&v30 = -1;
  v12 = 0;
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 8) = 0;
  v13 = *(_QWORD *)(a4 + 16);
  v14 = *(unsigned __int16 *)(a4 + 24);
  v15 = *(_BYTE *)(a4 + 81) == 5;
  *((_QWORD *)&v30 + 1) = v13;
  LOWORD(v31) = v14;
  if ( v15 )
    v12 = *(_BYTE *)(a4 + 121) == 0;
  WORD1(v31) = v12;
  v16 = *(_QWORD *)a2;
  v17 = *(_QWORD *)(a2 + 16);
  if ( (unsigned __int64)&v30 < *(_QWORD *)a2 )
    goto LABEL_36;
LABEL_17:
  if ( (unsigned __int64)&v30 >= v16 + 24 * v17 )
  {
LABEL_36:
    if ( !v17 )
    {
      v22 = qvector_reserve(a2, v16, 1, 24);
      v23 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)a2 = v22;
      v16 = v22 + 24 * v23;
    }
    *(__m128i *)v16 = _mm_load_si128((const __m128i *)&v30);
    *(_QWORD *)(v16 + 16) = v31;
    goto LABEL_21;
  }
  if ( !v17 )
  {
    v24 = qvector_reserve(a2, v16, 1, 24);
    v25 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = v24;
    v16 = v24 + 24 * v25;
  }
  *(_QWORD *)v16 = -1;
  *(_QWORD *)(v16 + 8) = v13;
  *(_DWORD *)(v16 + 16) = v14 | (v12 << 16);
LABEL_21:
  ++*(_QWORD *)(a2 + 8);
  return 1;
}
