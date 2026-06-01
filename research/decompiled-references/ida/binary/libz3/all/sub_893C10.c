__int64 __fastcall sub_893C10(__int64 a1, unsigned int a2, unsigned int a3, int a4, unsigned int a5)
{
  char **exception; // rbx
  __int64 v6; // rdx
  __int64 v8; // r12
  __int64 v9; // rbp
  _QWORD *v10; // rdx
  unsigned __int64 v11; // xmm0_8
  unsigned int v12; // r13d
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v17; // r15d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  unsigned __int64 v22; // [rsp+0h] [rbp-70h]
  unsigned int v23; // [rsp+14h] [rbp-5Ch] BYREF
  __int64 v24[11]; // [rsp+18h] [rbp-58h] BYREF

  v8 = a2;
  v9 = a3;
  v10 = *(_QWORD **)(a1 + 40);
  v11 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 128)), _mm_cvtsi32_si128(a5)).m128i_u64[0];
  if ( v10 )
  {
    v12 = *((_DWORD *)v10 - 1);
    v23 = v12;
    if ( v12 == *((_DWORD *)v10 - 2) )
    {
      v17 = (3 * v12 + 1) >> 1;
      v18 = 8 * (v17 + ((3 * v12 + 1) & 0xFFFFFFFE)) + 8;
      if ( 24 * v12 + 8 >= (unsigned int)v18 || v12 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v24, "Overflow encountered when expanding vector", v6);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v24);
        sub_233E40((__int64)v24);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v22 = v11;
      v19 = (unsigned int *)sub_186B300(v10 - 1, v18);
      v10 = v19 + 2;
      *v19 = v17;
      v20 = v19[1];
      *(_QWORD *)(a1 + 40) = v10;
      v13 = &v10[3 * v20];
    }
    else
    {
      v13 = &v10[3 * v12];
    }
  }
  else
  {
    v22 = v11;
    v12 = 0;
    v23 = 0;
    v21 = (_QWORD *)sub_186B270(0x38u);
    v10 = v21 + 1;
    *v21 = 2;
    *(_QWORD *)(a1 + 40) = v21 + 1;
    v13 = v21 + 1;
  }
  *(_DWORD *)v13 = v8;
  *((_DWORD *)v13 + 1) = v9;
  *((_DWORD *)v13 + 2) = a4;
  *((_BYTE *)v13 + 20) = 0;
  *(_QWORD *)((char *)v13 + 12) = v11;
  v14 = *(_QWORD *)(a1 + 184);
  ++*((_DWORD *)v10 - 1);
  if ( !v14 || (v15 = *(unsigned int *)(v14 - 4), (_DWORD)v15 == *(_DWORD *)(v14 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 184));
    v14 = *(_QWORD *)(a1 + 184);
    v15 = *(unsigned int *)(v14 - 4);
  }
  *(_DWORD *)(v14 + 4 * v15) = 0;
  ++*(_DWORD *)(v14 - 4);
  sub_893BD0((unsigned int **)(*(_QWORD *)(a1 + 48) + 8 * v8), &v23);
  sub_893BD0((unsigned int **)(*(_QWORD *)(a1 + 56) + 8 * v9), &v23);
  return v12;
}

