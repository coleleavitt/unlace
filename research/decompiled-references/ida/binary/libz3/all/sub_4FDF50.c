_QWORD *__fastcall sub_4FDF50(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rbp
  _QWORD *v9; // r14
  unsigned int v10; // r15d
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  size_t v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  unsigned int v16; // r12d
  _QWORD *v17; // rax
  __int64 v18; // rdx
  size_t v19; // rdx
  unsigned int v21; // [rsp+Ch] [rbp-4Ch]
  unsigned int v22; // [rsp+Ch] [rbp-4Ch]
  _QWORD *v23; // [rsp+18h] [rbp-40h] BYREF

  if ( *(_DWORD *)(a2[1] + 32LL) != 1 )
    return nullptr;
  v7 = sub_4C9780(*(_QWORD *)(a1 + 24), a2[4], a3, a4, a5);
  v8 = (_QWORD *)a2[2];
  v9 = v7;
  if ( v8 )
  {
    v10 = *((_DWORD *)v8 - 1);
    v21 = *((_DWORD *)v8 - 2);
    v11 = (_QWORD *)sub_186B270(8LL * v21 + 8);
    v12 = (_QWORD *)a2[2];
    v8 = v11 + 1;
    *v11 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(v10)).m128i_u64[0];
    if ( v12 )
    {
      v13 = 8LL * *((unsigned int *)v12 - 1);
      if ( v13 <= 8 )
      {
        if ( v13 == 8 )
          v11[1] = *v12;
      }
      else
      {
        memmove(v11 + 1, v12, v13);
      }
    }
  }
  if ( a4 )
  {
    v23 = v8;
    sub_4FCE20(&v23, a4, a5);
    v8 = v23;
  }
  v14 = (_QWORD *)sub_186B270(0x18u);
  v14[1] = 0;
  v15 = v14;
  *v14 = &off_1C500E0;
  v14[2] = v9;
  if ( v8 )
  {
    v16 = *((_DWORD *)v8 - 1);
    v22 = *((_DWORD *)v8 - 2);
    v17 = (_QWORD *)sub_186B270(8LL * v22 + 8);
    v18 = *((unsigned int *)v8 - 1);
    v15[1] = v17 + 1;
    v19 = 8 * v18;
    *v17 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v16)).m128i_u64[0];
    if ( v19 <= 8 )
    {
      if ( v19 == 8 )
        v17[1] = *v8;
    }
    else
    {
      memcpy(v17 + 1, v8, v19);
    }
    sub_186B220(v8 - 1);
  }
  return v15;
}

