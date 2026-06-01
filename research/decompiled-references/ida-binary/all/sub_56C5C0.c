__int64 __fastcall sub_56C5C0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v7; // r8
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  int v10; // ebx
  __int64 v12; // rdx
  __m128i v13; // xmm4
  unsigned int v14; // ebp
  unsigned int v15; // r13d
  __m128i *v16; // r13
  __int64 result; // rax
  __int64 v18; // rcx
  int v19; // r15d
  __int64 v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // ebx
  __m128i si128; // xmm3
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __m128i *v29; // rax
  int v30; // eax
  __int64 v31; // r14
  __int64 v32; // rbp
  __int64 v33; // rax
  _BYTE v34[24]; // [rsp+0h] [rbp-68h] BYREF
  __int128 v35; // [rsp+18h] [rbp-50h] BYREF
  __int64 v36; // [rsp+28h] [rbp-40h]

  v7 = *(unsigned int *)(a1 + 24);
  v8 = *(_QWORD *)a1;
  if ( (_DWORD)v7 )
  {
    v9 = *(_DWORD **)(a1 + 16);
    v10 = v7 - 1;
    while ( 1 )
    {
      v12 = (unsigned int)v9[6 * v10 + 4];
      if ( *(_QWORD *)(v8 + 48 * v12) == a3 )
        break;
      if ( v10-- == 0 )
        goto LABEL_13;
    }
    v13 = _mm_loadu_si128(a4);
    v14 = v10 + 1;
    *(_DWORD *)&v34[16] = v9[6 * v10 + 4];
    v15 = v7 + 1;
    *(__m128i *)v34 = v13;
    if ( (unsigned int)v7 < v10 + 1 )
      sub_55D2B0(v9, a2, v12, v8, v7);
    if ( *(_DWORD *)(a1 + 28) < v15 )
    {
      if ( v9 )
        v9 = off_8C52A8(v9, 24LL * v15);
      else
        v9 = off_8C52B8(24LL * v15);
      *(_QWORD *)(a1 + 16) = v9;
      LODWORD(v7) = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 28) = v15;
    }
    v16 = (__m128i *)&v9[6 * v14];
    if ( v14 < (unsigned int)v7 )
      memmove(&v9[6 * (v10 + 2)], &v9[6 * v14], 24LL * ((unsigned int)v7 - v14));
    result = *(_QWORD *)&v34[16];
    *v16 = _mm_load_si128((const __m128i *)v34);
    v16[1].m128i_i64[0] = result;
    ++*(_DWORD *)(a1 + 24);
  }
  else
  {
LABEL_13:
    v36 = 0;
    *(_OWORD *)&v34[8] = 0;
    v35 = 0;
    v18 = 48LL * (unsigned int)a2 + v8;
    v19 = *(_DWORD *)(v18 + 16);
    v20 = *(_QWORD *)(v18 + 24);
    sub_55ECB0(a1, 48);
    v25 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)v34 = a3;
    si128 = _mm_load_si128((const __m128i *)((char *)&v35 + 8));
    v27 = _mm_load_si128((const __m128i *)v34);
    *(_DWORD *)&v34[16] = v19;
    *(_QWORD *)&v35 = v20;
    v28 = _mm_load_si128((const __m128i *)&v34[16]);
    *(_DWORD *)(a1 + 8) = v25 + 1;
    v29 = (__m128i *)(*(_QWORD *)a1 + 48LL * v25);
    *v29 = v27;
    v29[1] = v28;
    v29[2] = si128;
    if ( a3 )
    {
      v30 = *(_DWORD *)(a3 + 212);
      if ( !v30 )
        __assert_fail("self->ref_count > 0", "lib/src/./stack.c", 0x55u, "stack_node_retain");
      *(_DWORD *)(a3 + 212) = v30 + 1;
      if ( v30 == -1 )
        sub_55D220(a1, 48, v21, v22, v23, v24);
    }
    if ( v20 )
    {
      sub_56C560((volatile signed __int32 *)v35);
      v25 = *(_DWORD *)(a1 + 8) - 1;
    }
    v31 = a4->m128i_i64[0];
    v32 = a4->m128i_i64[1];
    sub_55ECB0(a1 + 16, 24);
    v33 = *(unsigned int *)(a1 + 24);
    *(_DWORD *)(a1 + 24) = v33 + 1;
    result = *(_QWORD *)(a1 + 16) + 24 * v33;
    *(_QWORD *)result = v31;
    *(_QWORD *)(result + 8) = v32;
    *(_DWORD *)(result + 16) = v25;
  }
  return result;
}
