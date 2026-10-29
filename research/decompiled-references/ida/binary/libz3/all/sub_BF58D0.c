__int64 __fastcall sub_BF58D0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned __int64 *v7; // rbp
  unsigned __int64 *v8; // r14
  unsigned int v9; // r13d
  __int32 v10; // edx
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  _DWORD *v13; // rax
  unsigned int *v14; // rsi
  __int64 result; // rax
  int v16; // edx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  bool v19; // zf
  int v20; // eax
  int v21; // esi
  int v22; // edi
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  unsigned int v26; // [rsp+0h] [rbp-7Ch]
  int v27; // [rsp+4h] [rbp-78h] BYREF
  int v28; // [rsp+8h] [rbp-74h] BYREF
  int v29; // [rsp+Ch] [rbp-70h] BYREF
  int v30; // [rsp+10h] [rbp-6Ch] BYREF
  __m128 v31; // [rsp+14h] [rbp-68h] BYREF
  __m128i v32; // [rsp+24h] [rbp-58h]
  int v33; // [rsp+34h] [rbp-48h]

  v7 = *(unsigned __int64 **)(a2 + 8);
  v33 = -2;
  v32 = _mm_shuffle_epi32(_mm_cvtsi32_si128(0xFFFFFFFE), 0);
  if ( !v7 || (v8 = &v7[*((unsigned int *)v7 - 1)], v8 == v7) )
  {
    v25 = -2;
    v24 = -2;
    v23 = -2;
    v22 = -2;
    v21 = -2;
    goto LABEL_25;
  }
  v9 = 0;
  do
  {
    v12 = *v7;
    v31 = _mm_loadh_ps((const double *)(a1 + 16));
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    if ( !*(_WORD *)(v12 + 4) )
    {
      v13 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
      if ( v13 )
      {
        if ( *v13 )
        {
          if ( *v13 == 5 )
          {
            sub_14B9B80(*(_QWORD *)(a1 + 8), &v31);
            v14 = (unsigned int *)v31.m128_u64[0];
            goto LABEL_15;
          }
        }
        else
        {
          v20 = v13[1];
          if ( v20 == 8 )
          {
            v14 = (unsigned int *)v12;
            if ( *(_DWORD *)(v12 + 24) == 1 )
            {
              result = (unsigned int)sub_BF5550(a1, *(_QWORD *)(v12 + 32), 0, a4, a5, a6) ^ 1;
              goto LABEL_16;
            }
            goto LABEL_15;
          }
          if ( v20 == 2 )
          {
            result = sub_966380(*(_QWORD *)a1, *(_DWORD **)(v12 + 32), *(_DWORD **)(v12 + 40));
            goto LABEL_16;
          }
        }
      }
    }
    v14 = (unsigned int *)v12;
LABEL_15:
    sub_966570(*(_QWORD *)a1, v14);
    result = sub_B645B0(*(_QWORD *)(*(_QWORD *)a1 + 16LL), (unsigned int *)v31.m128_u64[0]);
LABEL_16:
    v17 = v31.m128_u64[0];
    if ( v31.m128_u64[0]
      && (v18 = v31.m128_u64[1], v19 = *(_DWORD *)(v31.m128_u64[0] + 8) == 1, --*(_DWORD *)(v31.m128_u64[0] + 8), v19) )
    {
      v26 = result;
      sub_15D7BC0(v18, v17);
      result = v26;
      if ( v26 == dword_1C7EDAC )
        return result;
    }
    else if ( (_DWORD)result == dword_1C7EDAC )
    {
      return result;
    }
    if ( (_DWORD)result != dword_1C7EDA8 )
    {
      v10 = sub_BF5550(a1, v12, v16, a4, a5, a6);
      v11 = v9++;
      v32.m128i_i32[v11] = v10;
    }
    ++v7;
  }
  while ( v8 != v7 );
  v21 = v32.m128i_i32[1];
  v22 = v32.m128i_i32[0];
  v23 = v33;
  v24 = v32.m128i_i32[2];
  v25 = v32.m128i_i32[3];
LABEL_25:
  v19 = *(_QWORD *)(a1 + 1192) == 0;
  v27 = v22;
  v28 = v21;
  v29 = v24;
  v30 = v25;
  v31.m128_i32[0] = v23;
  if ( v19 )
    std::__throw_bad_function_call();
  return (*(__int64 (__fastcall **)(__int64, int *, int *, int *, int *, __m128 *))(a1 + 1200))(
           a1 + 1176,
           &v27,
           &v28,
           &v29,
           &v30,
           &v31);
}

