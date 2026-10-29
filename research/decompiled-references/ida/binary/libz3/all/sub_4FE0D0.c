_QWORD *__fastcall sub_4FE0D0(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v4; // rax
  _QWORD *v6; // rax
  _DWORD *v7; // rcx
  _QWORD *v8; // r12
  unsigned int v9; // ebp
  _QWORD *v10; // rax
  _QWORD *v11; // rsi
  size_t v12; // rdx
  _QWORD *v13; // rbp
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  unsigned int v16; // r13d
  _QWORD *v17; // rax
  __int64 v18; // rdx
  size_t v19; // rdx
  unsigned int v21; // [rsp+8h] [rbp-40h]
  unsigned int v22; // [rsp+8h] [rbp-40h]
  unsigned int v23; // [rsp+Ch] [rbp-3Ch] BYREF
  __int64 v24; // [rsp+10h] [rbp-38h] BYREF
  void *src; // [rsp+18h] [rbp-30h] BYREF

  v4 = a2[1];
  v23 = a4;
  if ( *(_DWORD *)(v4 + 32) != 1 )
    return nullptr;
  sub_4C4120(*(_QWORD *)(a1 + 24), a2[2] + 8LL * a4, a3, (__int64)&v24);
  v6 = sub_4C5A50(*(_QWORD *)(a1 + 24), a2[4], &v24, a4);
  v7 = (_DWORD *)a2[2];
  v8 = v6;
  if ( v7 )
  {
    v9 = *(v7 - 1);
    v21 = *(v7 - 2);
    v10 = (_QWORD *)sub_186B270(8LL * v21 + 8);
    v11 = (_QWORD *)a2[2];
    v7 = v10 + 1;
    *v10 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(v9)).m128i_u64[0];
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
        v7 = memmove(v10 + 1, v11, v12);
      }
    }
  }
  src = v7;
  sub_4FCE20(&src, 1u, &v23);
  v13 = src;
  v14 = (_QWORD *)sub_186B270(0x18u);
  v14[1] = 0;
  v15 = v14;
  *v14 = &off_1C500E0;
  v14[2] = v8;
  if ( v13 )
  {
    v16 = *((_DWORD *)v13 - 1);
    v22 = *((_DWORD *)v13 - 2);
    v17 = (_QWORD *)sub_186B270(8LL * v22 + 8);
    v18 = *((unsigned int *)v13 - 1);
    v15[1] = v17 + 1;
    v19 = 8 * v18;
    *v17 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v22), _mm_cvtsi32_si128(v16)).m128i_u64[0];
    if ( v19 <= 8 )
    {
      if ( v19 == 8 )
        v17[1] = *v13;
    }
    else
    {
      memcpy(v17 + 1, v13, v19);
    }
    sub_186B220(v13 - 1);
  }
  return v15;
}

