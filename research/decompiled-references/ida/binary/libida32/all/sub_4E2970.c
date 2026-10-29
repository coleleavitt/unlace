__int64 __fastcall sub_4E2970(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r13
  void *v6; // rdi
  _QWORD *v7; // rbp
  void *v8; // rdi
  void *v9; // rdi
  unsigned int v11; // r15d
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  __m128i v15; // xmm0
  void *v16; // rdi
  __int64 *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __m128i v22; // [rsp+0h] [rbp-68h] BYREF
  __m128i v23; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL * *(_QWORD *)(a1 + 184) - 16);
  v2 = **(_QWORD **)(a1 + 160) + 48 * v1;
  v3 = *(_QWORD *)(v2 + 32);
  if ( !v3 )
  {
    if ( !under_debugger )
      interr(2881);
    goto LABEL_35;
  }
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 != -1 )
  {
    sub_4E26C0(
      a1,
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL * *(_QWORD *)(a1 + 184) - 16),
      *(_QWORD *)(v3 + 8),
      *(_DWORD *)(v3 + 16));
    sub_4E0690(*(__int64 **)(a1 + 160), v1);
    return v4;
  }
  if ( *(_BYTE *)(v2 + 24) )
  {
    if ( *(_QWORD *)v3 != *(_QWORD *)(a1 + 32) )
    {
LABEL_6:
      v6 = *(void **)(v3 + 24);
      if ( v6 )
      {
        *(_QWORD *)(v3 + 32) = 0;
        qfree(v6);
        *(_QWORD *)(v3 + 24) = 0;
        *(_QWORD *)(v3 + 40) = 0;
      }
      v7 = *(_QWORD **)(v2 + 32);
      *(_QWORD *)(v2 + 32) = 0;
      if ( !v7 )
        return v1;
      if ( !v7[4] )
      {
        v8 = (void *)v7[6];
        v7[9] = 0;
        if ( v8 )
        {
          v7[7] = 0;
          qfree(v8);
        }
        v9 = (void *)v7[3];
        if ( v9 )
        {
          v7[4] = 0;
          qfree(v9);
        }
        operator delete(v7, 0x58u);
        return v1;
      }
      if ( !under_debugger )
        interr(2871);
LABEL_35:
      BUG();
    }
  }
  else
  {
    v11 = *(_DWORD *)(v3 + 80);
    v12 = *(_QWORD *)v2;
    v23.m128i_i64[0] = 0xFFFFFFFFLL;
    v13 = *(_QWORD *)(v2 + 16);
    *(_BYTE *)(v2 + 24) = 1;
    *(_QWORD *)(v2 + 8) = 0;
    v23.m128i_i64[1] = v11;
    if ( (unsigned __int64)&v23 >= v12 && (unsigned __int64)&v23 < v12 + 16 * v13 )
    {
      if ( !v13 )
      {
        v20 = qvector_reserve(v2, v12, 1, 16);
        v21 = *(_QWORD *)(v2 + 8);
        *(_QWORD *)v2 = v20;
        v12 = v20 + 16 * v21;
      }
      *(_DWORD *)(v12 + 8) = v11;
      *(_QWORD *)v12 = 0xFFFFFFFFLL;
      *(_DWORD *)(v12 + 12) = 0;
    }
    else
    {
      if ( !v13 )
      {
        v18 = qvector_reserve(v2, v12, 1, 16);
        v19 = *(_QWORD *)(v2 + 8);
        *(_QWORD *)v2 = v18;
        v12 = v18 + 16 * v19;
      }
      *(__m128i *)v12 = _mm_load_si128(&v23);
    }
    ++*(_QWORD *)(v2 + 8);
    if ( *(_QWORD *)v3 != *(_QWORD *)(a1 + 32) )
      goto LABEL_6;
  }
  if ( *(_QWORD *)(v3 + 32) )
    goto LABEL_6;
  v14 = *(_QWORD *)v2;
  v15 = _mm_loadu_si128((const __m128i *)(v2 + 8));
  *(_QWORD *)v2 = 0;
  *(_OWORD *)(v2 + 8) = 0;
  v16 = *(void **)(a1 + 80);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 88) = 0;
    v22 = v15;
    qfree(v16);
    v15 = _mm_load_si128(&v22);
  }
  *(_QWORD *)(a1 + 80) = v14;
  v17 = *(__int64 **)(a1 + 160);
  *(__m128i *)(a1 + 88) = v15;
  *(_BYTE *)(a1 + 104) = *(_BYTE *)(v2 + 24);
  sub_4E0690(v17, v1);
  return v4;
}

