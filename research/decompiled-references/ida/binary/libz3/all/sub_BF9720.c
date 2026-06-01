__int64 __fastcall sub_BF9720(__int64 a1, char a2, __int64 a3, __m128i a4)
{
  char **exception; // rbp
  char **v5; // rbp
  __int64 v8; // rbx
  unsigned int **v9; // rax
  unsigned int *v10; // rcx
  unsigned __int64 v11; // rax
  unsigned int *v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  const __m128i *v15; // rax
  __m128i v16; // xmm1
  unsigned int *v17; // rdx
  __m128i v18; // xmm0
  _DWORD ***v19; // rbx
  _DWORD ***v20; // r13
  unsigned int *v21; // rax
  int v22; // eax
  unsigned int *v23; // rdx
  int v24; // r12d
  __int64 v25; // rax
  unsigned int v26; // r15d
  size_t v27; // rsi
  unsigned int *v28; // rax
  unsigned int *v29; // rdx
  __int64 v30; // rax
  unsigned int **v31; // r13
  unsigned int **v32; // rbx
  unsigned int *v33; // rax
  unsigned int v34; // eax
  unsigned int *v35; // rdx
  unsigned int v36; // r14d
  __int64 v37; // rax
  unsigned int v38; // r15d
  size_t v39; // rsi
  unsigned int *v40; // rax
  unsigned int *v41; // rdx
  __int64 v42; // rax
  __int64 result; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // eax
  _DWORD ***v47; // [rsp+20h] [rbp-68h] BYREF
  __m128i *v48; // [rsp+28h] [rbp-60h] BYREF
  __int64 v49[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = 0;
  if ( a2 )
    v8 = *(_QWORD *)(a1 + 4224);
  v9 = *(unsigned int ***)(a3 + 8);
  *(_BYTE *)(a1 + 4170) = 1;
  if ( v9 && *((_DWORD *)v9 - 1) == 1 )
  {
    v46 = sub_966440(a1, *v9);
    return sub_BC37F0(a1, v8, 0, nullptr, v46, *(double *)a4.m128i_i64);
  }
  v47 = nullptr;
  v48 = nullptr;
  sub_BB8720(a1, v8, (__int64 *)&v47, &v48);
  v10 = (unsigned int *)v48;
  if ( v48 )
  {
    v11 = 4LL * v48[-1].m128i_u32[3];
    v12 = &v48->m128i_u32[v11 / 4];
    if ( &v48->m128i_i8[v11] != (__int8 *)v48 )
    {
      v13 = v11 - 4;
      v14 = (v13 >> 2) + 1;
      if ( v13 > 8 )
      {
        v15 = v48;
        v16 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
        v17 = (unsigned int *)&v48[v14 >> 2];
        do
        {
          v18 = _mm_loadu_si128(v15++);
          a4 = _mm_xor_si128(v18, v16);
          v15[-1] = a4;
        }
        while ( v15 != (const __m128i *)v17 );
        if ( (v14 & 3) == 0 )
          goto LABEL_15;
        v10 += v14 & 0xFFFFFFFFFFFFFFFCLL;
      }
      *v10 ^= 1u;
      if ( v12 != v10 + 1 )
      {
        v10[1] ^= 1u;
        if ( v12 != v10 + 2 )
          v10[2] ^= 1u;
      }
    }
  }
LABEL_15:
  v19 = v47;
  if ( v47 )
  {
    v20 = &v47[2 * *((unsigned int *)v47 - 1)];
    if ( v20 != v47 )
    {
      while ( 1 )
      {
        v22 = sub_966380(a1, **v19, *v19[1]);
        v23 = (unsigned int *)v48;
        v24 = v22 ^ 1;
        if ( !v48 )
          break;
        v25 = v48[-1].m128i_u32[3];
        if ( (_DWORD)v25 == v48[-1].m128i_i32[2] )
        {
          v26 = (unsigned int)(3 * v25 + 1) >> 1;
          v27 = 4 * v26 + 8;
          if ( 4 * (int)v25 + 8 >= (unsigned int)v27 || (unsigned int)v25 >= v26 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v49, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v49);
            sub_233E40((__int64)v49);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v28 = (unsigned int *)sub_186B300(&v48[-1].m128i_u64[1], v27);
          v29 = v28 + 2;
          *v28 = v26;
          v30 = v28[1];
          v19 += 2;
          v48 = (__m128i *)v29;
          v29[v30] = v24;
          ++*(v29 - 1);
          if ( v20 == v19 )
            goto LABEL_25;
        }
        else
        {
          v21 = (unsigned int *)v48 + v25;
LABEL_19:
          v19 += 2;
          *v21 = v24;
          ++*(v23 - 1);
          if ( v20 == v19 )
            goto LABEL_25;
        }
      }
      v45 = sub_186B270(0x10u);
      v23 = (unsigned int *)(v45 + 8);
      *(_QWORD *)v45 = 2;
      v48 = (__m128i *)(v45 + 8);
      v21 = (unsigned int *)(v45 + 8);
      goto LABEL_19;
    }
  }
LABEL_25:
  v31 = *(unsigned int ***)(a3 + 8);
  if ( v31 )
  {
    v32 = &v31[*((unsigned int *)v31 - 1)];
    if ( v32 != v31 )
    {
      while ( 1 )
      {
        v34 = sub_966440(a1, *v31);
        v35 = (unsigned int *)v48;
        v36 = v34;
        if ( !v48 )
          break;
        v37 = v48[-1].m128i_u32[3];
        if ( (_DWORD)v37 == v48[-1].m128i_i32[2] )
        {
          v38 = (unsigned int)(3 * v37 + 1) >> 1;
          v39 = 4 * v38 + 8;
          if ( 4 * (int)v37 + 8 >= (unsigned int)v39 || (unsigned int)v37 >= v38 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v49, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v49);
            sub_233E40((__int64)v49);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v40 = (unsigned int *)sub_186B300(&v48[-1].m128i_u64[1], v39);
          v41 = v40 + 2;
          *v40 = v38;
          v42 = v40[1];
          ++v31;
          v48 = (__m128i *)v41;
          v41[v42] = v36;
          ++*(v41 - 1);
          if ( v32 == v31 )
            goto LABEL_35;
        }
        else
        {
          v33 = (unsigned int *)v48 + v37;
LABEL_29:
          ++v31;
          *v33 = v36;
          ++*(v35 - 1);
          if ( v32 == v31 )
            goto LABEL_35;
        }
      }
      v44 = sub_186B270(0x10u);
      v35 = (unsigned int *)(v44 + 8);
      *(_QWORD *)v44 = 2;
      v48 = (__m128i *)(v44 + 8);
      v33 = (unsigned int *)(v44 + 8);
      goto LABEL_29;
    }
  }
LABEL_35:
  result = sub_BBF120((_QWORD *)a1, (unsigned int **)&v48, *(double *)a4.m128i_i64);
  if ( v48 )
    result = sub_186B220(&v48[-1].m128i_u64[1]);
  if ( v47 )
    return sub_186B220(v47 - 1);
  return result;
}

