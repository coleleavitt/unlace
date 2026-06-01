__int64 __fastcall sub_82C220(__int64 a1, unsigned int a2, int a3)
{
  char **exception; // rbx
  __int64 v5; // rbx
  __int64 v6; // r14
  _QWORD *v7; // rax
  unsigned __int64 v8; // xmm0_8
  _QWORD *v9; // rdx
  _QWORD *v10; // r13
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 result; // rax
  _QWORD *v14; // rcx
  _DWORD *v15; // rbx
  unsigned int v16; // r15d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned __int64 v21; // [rsp+0h] [rbp-70h]
  __int64 v22[11]; // [rsp+18h] [rbp-58h] BYREF

  v5 = 4LL * a2;
  v6 = *(_QWORD *)(a1 + 80);
  v21 = _mm_unpacklo_epi32((__m128i)a2, _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(a1 + 328) + v5))).m128i_u64[0];
  v7 = (_QWORD *)sub_180C100(v6 + 2144, 24);
  v8 = v21;
  v9 = *(_QWORD **)(v6 + 2128);
  v10 = v7;
  *v7 = off_1C55270;
  v7[1] = a1 + 328;
  v7[2] = v8;
  if ( v9 )
  {
    v11 = *((_DWORD *)v9 - 1);
    if ( v11 == *((_DWORD *)v9 - 2) )
    {
      v16 = (3 * v11 + 1) >> 1;
      v17 = 8 * v16 + 8;
      if ( 8 * v11 + 8 >= (unsigned int)v17 || v11 >= v16 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v22, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v22);
        sub_233E40((__int64)v22);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v18 = (unsigned int *)sub_186B300(v9 - 1, v17);
      v19 = v18[1];
      v9 = v18 + 2;
      *(_QWORD *)(v6 + 2128) = v18 + 2;
      *v18 = v16;
      LODWORD(v18) = v19;
      v14 = &v9[v19];
      result = (unsigned int)((_DWORD)v18 + 1);
    }
    else
    {
      v12 = v11;
      result = v11 + 1;
      v14 = &v9[v12];
    }
  }
  else
  {
    v20 = (_QWORD *)sub_186B270(0x18u);
    v9 = v20 + 1;
    *v20 = 2;
    result = 1;
    *(_QWORD *)(v6 + 2128) = v9;
    v14 = v9;
  }
  v15 = (_DWORD *)(*(_QWORD *)(a1 + 328) + v5);
  *v14 = v10;
  *((_DWORD *)v9 - 1) = result;
  *v15 += a3;
  return result;
}

