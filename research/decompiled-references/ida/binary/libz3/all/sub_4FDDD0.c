_QWORD *__fastcall sub_4FDDD0(__int64 a1, _QWORD *a2, unsigned int a3, unsigned int *a4)
{
  __int64 v6; // rax
  _QWORD *v7; // rbp
  __int64 v8; // r14
  unsigned int v9; // r15d
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  size_t v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  unsigned int v15; // r12d
  _QWORD *v16; // rax
  __int64 v17; // rdx
  size_t v18; // rdx
  unsigned int v20; // [rsp+Ch] [rbp-4Ch]
  unsigned int v21; // [rsp+Ch] [rbp-4Ch]
  _QWORD *v22; // [rsp+18h] [rbp-40h] BYREF

  if ( *(_DWORD *)(a2[1] + 32LL) != 1 )
    return nullptr;
  v6 = sub_4C5900(*(_QWORD *)(a1 + 24), a2[4], a3, a4);
  v7 = (_QWORD *)a2[2];
  v8 = v6;
  if ( v7 )
  {
    v9 = *((_DWORD *)v7 - 1);
    v20 = *((_DWORD *)v7 - 2);
    v10 = (_QWORD *)sub_186B270(8LL * v20 + 8);
    v11 = (_QWORD *)a2[2];
    v7 = v10 + 1;
    *v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), _mm_cvtsi32_si128(v9)).m128i_u64[0];
    if ( v11 )
    {
      v12 = 8LL * *((unsigned int *)v11 - 1);
      if ( v12 <= 8 )
      {
        if ( v12 == 8 )
          v10[1] = *v11;
      }
      else
      {
        memmove(v10 + 1, v11, v12);
      }
    }
  }
  if ( a3 )
  {
    v22 = v7;
    sub_4FCE20(&v22, a3, a4);
    v7 = v22;
  }
  v13 = (_QWORD *)sub_186B270(0x18u);
  v13[1] = 0;
  v14 = v13;
  *v13 = &off_1C500E0;
  v13[2] = v8;
  if ( v7 )
  {
    v15 = *((_DWORD *)v7 - 1);
    v21 = *((_DWORD *)v7 - 2);
    v16 = (_QWORD *)sub_186B270(8LL * v21 + 8);
    v17 = *((unsigned int *)v7 - 1);
    v14[1] = v16 + 1;
    v18 = 8 * v17;
    *v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(v15)).m128i_u64[0];
    if ( v18 <= 8 )
    {
      if ( v18 == 8 )
        v16[1] = *v7;
    }
    else
    {
      memcpy(v16 + 1, v7, v18);
    }
    sub_186B220(v7 - 1);
  }
  return v14;
}

