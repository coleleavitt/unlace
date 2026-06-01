__int64 __fastcall sub_68A900(__int64 a1, unsigned int *a2, unsigned int *a3, __int64 a4, __int64 a5)
{
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r13
  unsigned int v14; // ecx
  __int64 v15; // r8
  unsigned int v16; // r12d
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  std::_V2 *v21; // rdi
  _QWORD *v22; // rbx
  __m128i *v23; // rax
  __int64 v24; // rdx
  _BYTE *v25; // r14
  signed __int64 v26; // rbp
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  bool v29; // cf
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r13
  char *v32; // r12
  unsigned __int64 v33; // rsi
  __m128i v34; // [rsp+0h] [rbp-C8h]
  __m128i si128; // [rsp+18h] [rbp-B0h]
  __m128i v36; // [rsp+30h] [rbp-98h] BYREF
  __int64 v37; // [rsp+40h] [rbp-88h]
  __int64 v38; // [rsp+50h] [rbp-78h] BYREF
  __int128 v39; // [rsp+58h] [rbp-70h]
  __int64 v40; // [rsp+70h] [rbp-58h] BYREF
  __int128 v41; // [rsp+78h] [rbp-50h]

  v7 = *(_QWORD **)(a1 + 24);
  v8 = v7[5];
  v7[15] += 24LL;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v7[6] >= (unsigned __int64)(v9 + 24) && v8 )
    v7[5] = v9 + 24;
  else
    v9 = sub_689820((__int64)(v7 + 5), 24, 3);
  v10 = *(_QWORD **)(a1 + 24);
  v11 = v10[5];
  v10[15] += 24LL;
  v12 = ((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 24;
  if ( v10[6] >= v12 && v11 )
  {
    v10[5] = v12;
    v13 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v13 = sub_689820((__int64)(v10 + 5), 24, 3);
  }
  v14 = sub_689D90(a1, a2, v9, v12, a5);
  if ( !v14 )
  {
    v14 = sub_689D90(a1, a3, v13, 0, v15);
    if ( !v14 )
    {
      v21 = (std::_V2 *)&v36;
      v38 = v9 | 1;
      v39 = 0;
      v41 = 0;
      v40 = v13 | 1;
      si128 = _mm_load_si128((const __m128i *)&v40);
      v34 = _mm_load_si128((const __m128i *)&v38);
      clang_getRange(
        (int)&v36,
        (int)a3,
        v18,
        0,
        v19,
        v20,
        v34.m128i_i64[0],
        v34.m128i_i64[1],
        0,
        si128.m128i_i64[0],
        si128.m128i_i64[1],
        0);
      v22 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40) - 8);
      v23 = (__m128i *)v22[11];
      if ( v23 != (__m128i *)v22[12] )
      {
        v24 = v37;
        *v23 = _mm_load_si128(&v36);
        v23[1].m128i_i64[0] = v24;
        v22[11] += 24LL;
LABEL_13:
        v16 = 0;
        std::_V2::system_category(v21);
        return v16;
      }
      v25 = (_BYTE *)v22[10];
      v26 = (char *)v23 - v25;
      v27 = 0xAAAAAAAAAAAAAAABLL * (((char *)v23 - v25) >> 3);
      if ( v27 == 0x555555555555555LL )
        std::__throw_length_error("vector::_M_realloc_append");
      v28 = 1;
      if ( v27 )
        v28 = v27;
      v29 = __CFADD__(v28, v27);
      v30 = v28 + v27;
      if ( v29 )
      {
        v31 = 0x7FFFFFFFFFFFFFF8LL;
      }
      else
      {
        if ( v30 > 0x555555555555555LL )
          v30 = 0x555555555555555LL;
        v31 = 24 * v30;
      }
      v21 = (std::_V2 *)v31;
      v32 = (char *)operator new(v31);
      *(__m128i *)&v32[v26] = _mm_load_si128(&v36);
      *(_QWORD *)&v32[v26 + 16] = v37;
      if ( v26 > 0 )
      {
        memcpy(v32, v25, v26);
        v33 = v22[12] - (_QWORD)v25;
      }
      else
      {
        if ( !v25 )
        {
LABEL_25:
          v22[10] = v32;
          v22[11] = &v32[v26 + 24];
          v22[12] = &v32[v31];
          goto LABEL_13;
        }
        v33 = v22[12] - (_QWORD)v25;
      }
      v21 = (std::_V2 *)v25;
      operator delete(v25, v33);
      goto LABEL_25;
    }
  }
  return v14;
}

